<?php

namespace Appv7\Controller;

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
		
		$this->return_data([], 'User info updated successfully');
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
     * Save User Help
     */
    public function save_help () {
        $subject = $this->get_param('post.customer_issue');
        $userName = $this->get_param('post.user_name');
        $userContact = $this->get_param('post.user_contact');
        $orderNumber = $this->get_param('post.order_number');
        $description = $this->get_param('post.description');
         
        if (!$subject || !$userName || !$userContact || !$orderNumber || !$description) {
             $this->return_error('Please fill in all info');
        } else {
            $saveData = [
            'subject' => $subject,
            'name' => $userName,
            'contact' => $userContact,
            'sub_order_number' => $orderNumber,
            'description' => $description,
            'create_time' => time(),
            ];
             
            $res = M('user_gethelp')->add($saveData);
            if (!$res) {
                $this->server_unavailable_error();
            }else {
                $this->return_data([], 'Message has been received');
            }
        }
    }
     
     
     
    /**
     * Send Help Email
     */
    public function send_help_email () {
        $subject = $this->get_param('post.customer_issue');
        $userName = $this->get_param('post.user_name');
        $userContact = $this->get_param('post.user_contact');
        $orderNumber = $this->get_param('post.order_number');
        $description = $this->get_param('post.description');
         
        if (!$subject || !$userName || !$userContact || !$orderNumber || !$description) {
            $this->return_error('Please fill in all info');
        } else {
            $content="<p>".$userName." 提交了关于 ".$subject." 的留言， 订单号： ".$orderNumber." ，联系方式： ".$userContact." ，详情如下:</p>"
            ."<p>".$description."</p>";
            $res=send_email(
                            "info@foodeasygo.com",
                            "获取帮助：".$subject,
                            $content,
                            array(
                                  "mail_address"=>"info@foodeasygo.com",
                                  "mail_password"=>"oranllcfood8",
                                  "mail_sender"=>"Foodeasygo Info"
                                  ),
                            "Info",
                            null,
                            null
                            );
             
            if (!$res) {
                $this->server_unavailable_error();
            } else {
                $this->return_data([], 'Email has been send');
            }
        }
    }
     
	/**
	 * Get coupon list
	 */
	public function get_coupon_list () {
		$couponList = M('coupon_sn')
			->join(" `food_coupon` on `food_coupon_sn`.`coupon_id` = `food_coupon`.`id`")
			->where(
				" `food_coupon_sn`.`user_id` = " . $this->userID .
				" and UNIX_TIMESTAMP(TIMESTAMP(`food_coupon`.`endtime`))+86400 > UNIX_TIMESTAMP(now())" .
				" and `food_coupon_sn`.`status` = 0 " .
				" and `food_coupon_sn`.`used_times` < `food_coupon_sn`.`usable_times` "
            )
			->select();

		foreach ($couponList as &$coupon) {
			$invitee = M('user')
			->where('`id`=' . $coupon['invitee_id'])
			->find();
			if ($invitee['has_made_first_order'] == "1") {
				// var_dump("生效了");
				$coupon['is_valid'] = "1";
			}else
			{
				// var_dump("没下单");
				$coupon['is_valid'] = "0";
			}
		}

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
		
		
		if (!$couponList) {
			$this->return_data([], 'No coupon found');
		} else {
			$this->return_data(['normal_coupon' => $couponList, 'invitation_coupon_count' => $totalInvitationCoupon]);
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
			$invite['register_time'] = date("F j, Y, g:i a", $invite['register_time']);
			
		}
		
		if (!$inviteList) {
			$this->return_data([], 'No invitees');
		} else {
			foreach ($inviteList as &$invite) {
				if (strtotime($invite['register_time']) < strtotime('today midnight')) {
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

	/**
	 * Uploads test log
	 */
	public function save_test_string() {
		$outputString = ['output' => $this->get_param('post.out_put')];
		
		$res = M('debug')->add($outputString);
            if (!$res) {
                $this->server_unavailable_error();
            }else {
                $this->return_data([], 'Message has been received');
            }
	}
	
}

