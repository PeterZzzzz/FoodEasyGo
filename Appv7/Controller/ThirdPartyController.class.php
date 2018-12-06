<?php

namespace Appv7\Controller;

/**
 * App API - Third Party Controller
 * 		thrid party authentication related
 */
class ThirdPartyController extends BaseController {

	protected $thirdPartyUserID = '';
	protected $platform = 0;
	
	protected $userData;
	
	/**
	 * Initialization
	 */
	protected function _initialize () {
		$this->errorCode = 21300;
	}
	
	public function set_binding_email () {
		$this->thirdPartyUserID  = $this->get_param('post.userid');
		$this->platform = $this->get_param('post.platform');
		$bindingEmail = $this->get_param('post.email');
		
		$userData = M('user')
			->where("`email` = $bindingEmail")
			->find();
		
		if (is_array($userData)) {
			$this->return_error('Email address is already registered, please use your password to log in');
		}
		
		$thirdPartyData = M('third_party_login')
			->where("`userid` = '$this->thirdPartyUserID' and `platform` = $this->platform")
			->find();
		
		if (!is_array($thirdPartyData)) {
			$this->return_error("userid not exist: $this->thirdPartyUserID, $this->platform");
		}
		
		$userData = [
				'email' => $bindingEmail,
				'password' => food_user_md5($bindingEmail, C('FOOD_AUTH_KEY')),
				'register_time' => time(),
		];
		
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
		
		if ($res) {
			$res2 = M('third_party_login')
				->where("`userid` = '$this->thirdPartyUserID' and `platform` = $this->platform")
				->data(['mapping_id' => $res])
				->save();
			$this->return_data([], 'Email binded successfully');
		} else {
			$this->return_error('Cannot bind email: ' . $bindingEmail);
		}
	}
	
	
	
}