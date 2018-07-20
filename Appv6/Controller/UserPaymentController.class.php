<?php

namespace Appv6\Controller;

/**
 * App API - User Controller
 * 		user data
 */
class UserPaymentController extends BaseController {
	
	/**
	 * Initialization
	 */
	protected function _initialize () {
		$this->errorCode = 21200;
		parent::_initialize ();
	}
	
	/**
	 * Get user payment list
	 */
	public function get_user_payment_list () {
		$result = M('user_payment')
			->where("`user_id` = $this->userID and char_length(`credit_card_number`) > 14")
			->field(['id', 'credit_card_number', 'expiration_time', 'is_default', 'billing_first_name', 'billing_last_name'])
			->select();
		
		foreach ($result as &$resultItem) {
			$resultItem['credit_card_number'] = substr($resultItem['credit_card_number'], -4);
		}
		
		$this->return_data($result);
	}
	
	/**
	 * Set default user payment
	 */
	public function set_default_user_payment () {
		$defaultPaymentID = $this->get_param('post.payment_id');

		M('user_payment')
			->where("`user_id` = $this->userID")
			->save(['is_default' => 0]);
				
		$res = M('user_payment')
			->where("`user_id` = $this->userID and `id` = $defaultPaymentID")
			->save(['is_default' => 1]);

		$this->return_data([], 'Default payment set successfully');
	}
	
	/**
	 * Add user payment
	 */
	public function add_user_payment () {
		$cardNumber = $this->get_param('post.card_number');
		$exp = $this->get_param('post.exp_time');
		$secCode = $this->get_param('post.security_code');
		$firstName = $this->get_param('post.first_name');
		$lastName = $this->get_param('post.last_name');
		
		$paymentData = [
				'user_id' => $this->userID,
				'credit_card_number' => $cardNumber,
				'expiration_time' => $exp,
				'security_code' => $secCode,
				'billing_first_name' => $firstName,
				'billing_last_name' => $lastName,
		];
		
		$res = M('user_payment')
			->add($paymentData);
		
		if ($res) {
			$this->return_data([], 'Payment added successfully');
		} else {
			$this->server_unavailable_error();
		}
	}
	
	/**
	 * Delete user payment
	 */
	public function delete_user_payment () {
		$addressID = $this->get_param('post.payment_id');
		
		$res = M('user_payment')
			->where("`user_id`=$this->userID and `id`=$addressID")
			->delete();
		
		if ($res) {
			$this->return_data([], 'Payment deleted successfully');
		} else {
			$this->server_unavailable_error();
		}
	}
	
	/**
	 * Modify user payment
	 */
	public function modify_user_payment () {
		$paymentID = $this->get_param('post.payment_id');
		$cardNumber = $this->get_param('post.card_number');
		$exp = $this->get_param('post.exp_time');
		$secCode = $this->get_param('post.security_code');
		$firstName = $this->get_param('post.first_name');
		$lastName = $this->get_param('post.last_name');
		
		$paymentData = [
				'credit_card_number' => $cardNumber,
				'expiration_time' => $exp,
				'security_code' => $secCode,
				'billing_first_name' => $firstName,
				'billing_last_name' => $lastName,
		];

		$res = M('user_payment')
			->where("`id` = $paymentID and `user_id` = $this->userID")
			->save($paymentData);
		
		if ($res) {
			$this->return_data([], 'Payment modified successfully');
		} else {
			$this->server_unavailable_error();
		}
	}
}