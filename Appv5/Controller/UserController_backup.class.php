<?php

namespace Appv5\Controller;

/**
 * App API - User Controller
 * 		user data
 */
class UserController extends BaseController {
	
	/**
	 * Initialization
	 */
	protected function _initialize () {
		$this->errorCode = 21100;
		
		parent::_initialize ();
	}
	
	/**
	 * Get user based on ID
	 */
	private function get_user_based_on_id () {
		$user = M('user')
			->where("`id`= $this->userID")
			->field('`id`,`email`,`first_name`,`last_name`,`sex`,`phone`,`language`,`register_time`,`region_id`,`invitation_code`,`ios_token`')
			->find();
	
		if (!is_array($user)) {
			$this->return_error_code($this->errorCode + 1, 'User not found');
		}
		
		$invitee = M('user')
			->where("`inviter_id` = $this->userID")
			->field('`id`,`email`,`first_name`,`last_name`,`sex`,`phone`,`language`,`register_time`,`region_id`,`invitation_code`')
			->select();
		
		foreach ($invitee as &$inviteeDetail) {
			$inviteeDetail['register_time'] = date("F j, Y, g:i a", $inviteeDetail['register_time']);
		}
		
		$user['invitee_list'] = $invitee;
		
		return $user;
	}
	
	/**
	 * Get user data;
	 */
	public function get_user_details () {
		$user = $this->get_user_based_on_id ();
		$user['google_map_key'] = C('GOOGLEMAP_API');
		
		
		return $this->return_data ($user);
	}
	
	/**
	 * Update user data
	 */
	public function update_user_details () {
		$saveData = [];
		
		$firstName = $this->get_param('post.first_name');
		$lastName = $this->get_param('post.last_name');
		$sex = $this->get_param('post.sex');
		$phone = $this->get_param('post.phone');
		$regionID = $this->get_param('post.region_id');
		
		if ($firstName != '')
			$saveData['first_name'] = $firstName;
		if ($lastName != '')
			$saveData['last_name'] = $lastName;
		if ($sex != '')
			$saveData['sex'] = $sex;
		if ($phone != '')
			$saveData['phone'] = $phone;
		if ($regionID != '')
			$saveData['region_d'] = $regionID;
		
		
		$res = M('user')
			->where("`id`=".$this->userID)
			->save($saveData);
		
		$this->return_data([], 'User data updated successfully');
	}
	
	/**
	 * Update user iOS token
	 */
	public function update_user_ios_token() {
		// Get new iosToken
		$iosToken = $this->get_param('post.ios_token');
		
		// Delete other ios token
		M('user')
			->where("`ios_token`=$iosToken")
			->save(["ios_token" => ""]);
		
		// Save the new iosToken
		$res = M('user')
			->where("`id`=".$this->userID)
			->save(['ios_token' => $iosToken]);
		
		// Create the new ios endpoint arn
		NotificationsController::create_ios_endpoint($this->userID, $iosToken);
		
		$this->return_data([], 'iOS token updated successfully');
	}
	
	/**
	 * Leave message
	 */
	public function leave_message () {
		$firstName = $this->get_param('post.first_name');
		$lastName = $this->get_param('post.last_name');
		$replyEmail = $this->get_param('post.reply_email');
		$replyPhone = $this->get_param('post.reply_phone');
		$message = $this->get_param('post.message');
		
		if (!$firstName || !$lastName || !$replyEmail || !$message) {
			$this->return_error('Please fill in all info');
		} else {
			$saveData = [
					'first_name' => $firstName,
					'last_name' => $lastName,
					'email' => $replyEmail,
					'phone' => $replyPhone,
					'message' => $message,
					'addtime' => time(),
					'status' => 1,
			];
			
			$res = M('user_message')->add($saveData);
			if (!$res) {
				$this->server_unavailable_error();
			} else {
				$this->return_data([], 'Message has been received');
			}
		}
	}
	
	/**
	 * Get coupon list
	 */
	public function get_coupon_list () {
	/*FoodEasyGo 3 years, one time only coupon, when user_id = 0, everyone can use it*/
		$couponIDList = M('coupon_sn')
			->join(" `food_coupon` on `food_coupon_sn`.`coupon_id` = `food_coupon`.`id`")
			->where("`food_coupon_sn`.`user_id`= $this->userID and `food_coupon`.`endtime` > now()
					and (`food_coupon_sn`.`status`=0 or `food_coupon_sn`.`status`=1 and `food_coupon_sn`.`reusable`=1)")
			//->field("food_coupon_sn.id, food_coupon.name, food_coupon.type, food_coupon.discont, 
				//	food_coupon_sn.sn, food_coupon.endtime, food_coupon_sn.reusable")
			->select();
		
		// Find common coupons
		$commonCouponIDList = M('coupon_sn')
			->where("`status` = 0 and `user_id` = 0")
			->select();
		$commonCouponIDList = M('coupon_sn')
			->join(" `food_coupon` on `food_coupon_sn`.`coupon_id` = `food_coupon`.`id`")
			->where("`food_coupon_sn`.`user_id`= 0 and `food_coupon`.`endtime` > now()
					and (`food_coupon_sn`.`status`=0)")
					//->field("food_coupon_sn.id, food_coupon.name, food_coupon.type, food_coupon.discont,
			//	food_coupon_sn.sn, food_coupon.endtime, food_coupon_sn.reusable")
			->select();
		
		
		$res = M('user')
			->where("`id`=$this->userID")
			->field("`invite_coupon_used`")
			->find();
		
		$invitationCouponUsed = $res['invite_coupon_use'];
		
		
		$res = M('user')
			->where("`inviter_id`=$this->userID")
			->field("`id`")
			->select();
		
		$totalInvitationCoupon = count($res);
		
		
		if (!$couponIDList) {
			$this->return_data([], 'No coupon found');
		} else {
			$this->return_data(['normal_coupon' => $couponIDList, 'invitation_coupon_count' => $totalInvitationCoupon, 'common_coupon' => $commonCouponIDList]);
		}
	}
	
	/**
	 * Get user invite list
	 */
	public function get_user_invite_list () {
		$inviteList = M('user')
			->where("`inviter_id`=$this->userID")
			->field("`email`,`first_name`,`last_name`,`register_time`")
			->select();
		
		foreach ($inviteList as &$invite) {
			$invite['register_time'] = date("F j, Y, g:i a", $inviteeDetail['register_time']);
			
		}
		
		if (!$inviteList) {
			$this->return_data([], 'No invitees');
		} else {
			foreach ($inviteList as &$invite) {
				if ($invite['register_time'] < strtotime('today midnight')) {
					$invite['today'] = "0";
				} else {
					$invite['today'] = "1";
				}
			}
			$this->return_data($inviteList);
		}
	}
	
	/**
	 * Uploads user image
	 */
	public function upload_user_image() {
		$lastTwoDigits = $this->userID % 100;
		$secondLastTwoDigits = $this->userID / 100 % 100;
		
		$config = [
				'maxSize'		=>  3000000,
				'rootPath'		=>  'Uploads',
				'savePath'		=>	'/UserImages/' . $lastTwoDigits . '/' . $secondLastTwoDigits . '/',
				'saveName'		=>	$this->userID,
				'exts'			=> 	['jpg', 'png', 'jpeg'],
				'autoSub'		=>	false,
				'replace'		=>	true,
		
		];
		$upload = new \Think\Upload($config);
		
		$info = $upload->upload();
		
		if (!$info) {
			echo $upload->getError();
		} else {
			echo 'Success' . $upload->savePath;
		}
	}
	
}

