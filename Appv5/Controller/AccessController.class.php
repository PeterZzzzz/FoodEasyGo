<?php

namespace Appv5\Controller;

/**
 * @author Logan <ealton@qq.com>
 * App API - Access Controller
 * authentication related
 */
class AccessController extends BaseController {
	
	protected $userEmail = '';
	
	/**
	 * Initialization
	 */
	protected function _initialize () {
		$this->forceToken = false;
		$this->userEmail = $this->get_param ('post.email');
		$this->errorCode = 1000;
		
		parent::_initialize ();
	}
	
	/**
	 * Get user data based on email address provided
	 * @param array $user
	 * @return array
	 */
	private function get_user_based_on_email () {
		$user = M('user')
			->where("`email`= '" . $this->userEmail . "'")
			->field('`id`,`email`,`first_name`,`last_name`,`phone`,`language`,`register_time`,`region_id`')
			->find();
	
		if (!is_array($user)) {
			$this->return_error('User not found');
		}
		
		$this->userID = $user['id'];
		return $user;
	}
	
	/**
	 * Get user pasword
	 * @param array $user
	 * @return array
	 */
	private function get_user_password ($whereClause) {
		$user = M('user')
			->where($whereClause)
			->field('`id`,`email`,`password`')
			->find();
		
		if (!is_array($user)) {
			$this->return_error('User not found');
		}
		
		$this->userID = $user['id'];
		return $user;
	}
	
	/**
	 * Generate access token for user
	 * @param string $token
	 * @return string
	 */
	private function grant_access_token () {
		$token = bin2hex(openssl_random_pseudo_bytes(16));
		$accessToken = [
				'user_id' => $this->userID,
				'token' => $token,
				'create_time' => time(),
		];
		// removes all old tokens
		$res = M('access_token')->where('`user_id` = ' . $this->userID)->delete();
		// add a new token
		$res = M('access_token')->add($accessToken);
		if (!$res) {
			$this->return_error('Unable to grant token');
		}
		$this->accessToken = $token;
	}
	
	/**
	 * Verify verification code
	 */
	private function check_verify ($code) {
		$verify = new \Think\Verify();
		return $verify->check($code, 1);
	}
	
	/**
	 * Check generate user invitation code for old users
	 * @param array $user
	 * @return void
	 */
	private function check_for_user_invitation_code () {
		
		$user = M('user')
			->where("`id` = $this->userID")
			->find();
		
		if (!$user['invitation_code'] || $user['invitation_code'] == '') {
			while (true) {
				$inviteCode = mt_rand(10000000, 99999999);
				$res = M('user')
					->where("`invitation_code`='$inviteCode'")
					->find();
					
				if (!$res) {
					$userData['invitation_code'] = $inviteCode;
					M('user')
						->where("`id` = $this->userID")
						->save($userData);
					break;
				}
			}
		}
	}
	
	/**
	 * Check if zipcode is supported
	 * @param int $zip
	 * @return void
	 */
	public function validate_zipcode () {
		$zip = I('post.zip', '', 'intval');
		if ($zip != 0) {
			$res = M('region')->where("`zipcode` = $zip and `status` != 2")
				->field(['id', 'name', 'name_en', 'zipcode'])
				->find();
			if ($res) {
				$this->return_data($res, 'true');
			}
		}
		
		$this->return_error('Region not supported');
	}
	
	/**
	 * Get available regions
	 * @param array $regionList
	 * @return void
	 */
	public function get_available_regions () {
		
		$regionList = M('region_link')
			->join('food_region on food_region_link.o_id = food_region.id')
			->where('food_region.status = 1 and food_region_link.region_id = ' . $this->regionID)
			->select();
		
		if (is_array($regionList)) {
			$this->return_data($regionList);
		} else {
			$this->return_error('Region not supported');
		}
	}
	
	/**
	 * Get region service fees
	 * @param array $res
	 * @return array
	 */
	public function get_region_delivery_fees () {
		
		
		$res = M('region_link')
			->join('`food_region` on `food_region_link`.region_id = `food_region`.id')
			->where('`food_region_link`.o_id = ' . $this->targetRegionID)
			->field(['`food_region`.`id`, `food_region`.`zipcode`', '`food_region_link`.`fee`'])
			->select();
		
		$this->return_data($res);
	}
	
	/**
	 * Check if user email is available for registration
	 * @param array $user
	 */
	public function check_user_email_available () {
		$user = M('user')
			->where("`email`= '" . $this->userEmail . "'")
			->field('id')
			->find();
	
		if (is_array($user)) {
			$this->return_error('Email is already registered');
		}
	}
	
	/**
	 * User login
	 * @param int    $isThirdPartyLogin
	 * @param array  $user
	 * @param int    $platform
	 * @param array  $thirdPartyData
	 * @param string $thirdPartyEmail
	 * @param string $password
	 * @return array
	 */
	public function login () {
		$isThirdPartyLogin = $this->get_param('post.user_third_party');
		$user = "";
		
		if ($isThirdPartyLogin == "1") {
			// Third party login
			$thirdPartyUserID = $this->get_param('post.userid');
			$platform = $this->get_param('post.platform');
			$thirdPartyEmail = $this->get_param('post.email');
			
			$thirdPartyData = M('third_party_login')
				->where("`userid` = '$thirdPartyUserID' and `platform` = $platform")
				->find();
			
			$thirdPartyEmailData = null;
			if ($thirdPartyEmail != null) {
				$thirdPartyEmailData = M('user')
					->where("`email` = '$thirdPartyEmail' and `status` = 1")
					->find();
			}
			
			if (!is_array($thirdPartyData)) {
				
				$addData = ['userid' => $thirdPartyUserID, 'platform' => $platform, 'mapping_id' => 0];
				if (is_array($thirdPartyEmailData)) {
					$addData['mapping_id'] = $thirdPartyEmailData['id'];
				}
				M('third_party_login')->add($addData);
				
				$thirdPartyData = M('third_party_login')
					->where("`userid` = '$thirdPartyUserID' and `platform` = $platform")
					->find();
			}
			
			$user = M('user')
				->where("`id` = " . $thirdPartyData['mapping_id'])
				->find();
			
		} else {
			// Normal Login
			$password = $this->get_param ('post.password');
			$user = M('user')
				->where("`email`= '" . $this->userEmail . "'")
				->find();
			
			if (!$user) {
				$this->return_error('User is not registered');
			}
			
			if (food_user_md5($password, C('FOOD_AUTH_KEY')) != $user['password']) {
				$this->return_error('Invalid password');
			}
			
			unset ($user['password']);
			unset ($password);
		}
		
		if (is_array($user)) {
			$this->userID = $user['id'];
		} else {
			$this->return_data ([]);
		}
		
		$this->grant_access_token();
		if (strlen($this->accessToken) != 32) {
			$this->server_unavailable_error ();
		}
		
		$this->check_for_user_invitation_code ();
		
		$shortcutList = M('app_product_category')
			->select();
		
		if (!$shortcutList) {
			$shortcutList = [];
		}
		
		$this->return_data (
				['user_data' => $user,
				 'token' => $this->accessToken, 
				 'category' => $shortcutList,
				 'google_map_key' => C('GOOGLEMAP_API')],
				"Login successful"
				);
	}
	
	/**
	 * User registration
	 * @param string $password
	 * @param string $repassword
	 * @param string $inviteCode
	 */
	public function register () {
		$this->check_user_email_available ();
		
		$password = $this->get_param ('post.password');
		$repassword = $this->get_param ('post.repassword');
		$inviteCode = $this->get_param ('post.invite_code');
		
		if ($password != $repassword) {
			$this->return_error('Passwords do not match');
		}
		
		$userData = [
				'email' => $this->userEmail,
				'password' => food_user_md5($password, C('FOOD_AUTH_KEY')),
				/*patch starts, record when user register with app, parameter $app_register */
				'app_register' => 1,
				/*patch ends*/
				'register_time' => time(),
				/*patch starts 暂时不启用首次注册就免运费的功能*/
				//'has_made_first_order' => 1,
				/*patch ends*/
		];
		
		if ($inviteCode) {
			$inviter = M('user')
				->where("`invitation_code`='$inviteCode'")
				->find();
			
			if ($inviter) {
				$userData['inviter_id'] = $inviter['id'];
			}
		}
		
		while (true) {
			$inviteCode = mt_rand(10000000, 99999999);
			$res = M('user')
				->where("`invitation_code`='$inviteCode'")
				->find();
			
			if (!$res) {
				$userData['invitation_code'] = $inviteCode;
				break;
			}
		}
		
		$res = M('user')->add($userData);
		
		unset ($userData['password']);
		unset ($password);
		unset ($repassword);
		
		if ($res) {
		    
		    //添加加到mailchimp的列表
            require_once(VENDOR_PATH.'/MailChimp.php');
            $api=M('mailchimp_api')->where(array("id"=>1))->find();
            $api_key=$api['api_key'];
            $list_id=$api['list_id'];

            $MailChimp=new \DrewM\MailChimp\MailChimp($api_key);
            $found=M('subscribe_list')->where(array("email"=>$userData['email']))->find();
            if(!$found)
            {
                $result = $MailChimp->post("lists/".$list_id."/members", [
                    'email_address' => $userData['email'],
                    'status'        => 'subscribed',
                ]);
            }
            //end adding to mailchimp list
		    
			$this->return_data([], 'Registration successful');
		} else {
			$this->server_unavailable_error();
		}
	}
	
	/**
	 * Password reset
	 * @param array  $user
	 * @param string $lan
	 * @param array  $email_data
	 */
	public function password_reset () {
	
		$user = $this->get_user_based_on_email ();
		
		$lan = 'zh';
		if ($this->language == 'en' || $this->language == 'zh') {
			$lan = $this->language;
		}
	
		$encodeStr = think_encrypt($user['id'], C('FOOD_AUTH_KEY'), 24*3600); //数据加密，有效期24小时
		$url = U('Home/User/resetPassword', array('code'=>$encodeStr), true, true); //重置密码链接
		$email_data['category'] = 2;
		$email_data['send_to'] = $this->userEmail;
		$email_data['send_to_name'] = $user['first_name'].' '.$user['last_name'];
		$email_data['subject'] = 'FoodEasyGo Password Reset';
		$email_data['template_name'] = 'forgetpassword_' . $lan;
		$email_data['template_param'] = serialize(array('user'=>$user['first_name'], 'url'=>$url));
		$email_data['send_username'] = "info@foodeasygo.com";
		$email_data['send_password'] = think_encrypt("oranllcfood8", C('FOOD_AUTH_KEY'));
		$email_data['send_from_name'] = "FoodEasyGo";
		$email_data['expect_send_time'] = date('Y-m-d H:i:s');
		$email_data['addtime'] = date('Y-m-d H:i:s');
		$email_data['sort'] = 1;
		$res = M('email')->add($email_data);
	
		if($res) {
			M('user')->where('`id`='.$user['id'])->save(['reset_effective' => 1]);//发送邮件后开启重置链接有效性
			$this->return_data([], 'Verification email has been sent');
		} else {
			$this->return_error('Could not send reset email');
		}
	}
	
	/**
	 * Password reset
	 * @param string $oldPassword
	 * @param string $newPassword
	 * @param string $newRepassword
	 */
	public function password_reset_new_password () {
		$oldPassword = $this->get_param('post.old_password');
		$newPassword = $this->get_param('post.new_password');
		$newRepassword = $this->get_param('post.new_repassword');
		
		$user = $this->get_user_password ("`email`='" . $this->userEmail . "'");
		
		if (food_user_md5($oldPassword, C('FOOD_AUTH_KEY')) != $user['password']) {
			$this->return_error('Invalid password');
		}
		
		if ($newPassword != $newRepassword) {
			$this->return_error('Passwords do not match');
		}
		
		$result = M('user')->where('`id`='.$user['id'])->save(['password' => food_user_md5($newPassword, C('FOOD_AUTH_KEY'))]);
		
		unset($oldPassword);
		unset($newPassword);
		unset($newRepassword);
		unset($user['password']);
		
		$this->return_data([], 'Password changed successfully');
	}
	
}

