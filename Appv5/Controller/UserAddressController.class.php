<?php

namespace Appv5\Controller;

/**
 * App API - User address controller
 * 		user address
 */
class UserAddressController extends BaseController {
	
	/**
	 * Initialization
	 */
	protected function _initialize () {
		$this->errorCode = 21000;
		
		parent::_initialize ();
	}
	
	/**
	 * Get region ID based on zip code
	 */
	protected function get_regionID_based_on_zipcode ($zipCode) {
		$regionID = M('region')
			->where("`zipcode` = $zipCode")
			->find();
		//echo "hahahahahahaha";
		//print_r($regionID);
		if (!$regionID) {
			return "0";
		} else {
			return $regionID['id'];
		}
	}
	
	/**
	 * Get user address list
	 */
	public function get_user_address_list () {
		
		$addressList = M('user_address')
			->where("`user_id` = $this->userID ")
			->select();
		
		
		$this->return_data($addressList);
	}
	
	/**
	 * Set default user address
	 */
	public function set_default_user_address () {
		$defaultAddressID = $this->get_param('post.address_id');

		M('user_address')
			->where("`user_id` = $this->userID")
			->save(['is_default' => 0]);
				
		$res = M('user_address')
			->where("`user_id` = $this->userID and `id` = $defaultAddressID")
			->save(['is_default' => 1]);

		$this->return_data([], 'Default address set successfully');
	}
	
	/**
	 * Add user address
	 */
	public function add_user_address () {
		$name = $this->get_param('post.name');
		$phone = $this->get_param('post.phone');
		$address = $this->get_param('post.address');
		$street = $this->get_param('post.street');
		$city = $this->get_param('post.city');
		$state = $this->get_param('post.state');
		$zipCode = $this->get_param('post.address_zip_code');
		$regionID = $this->get_regionID_based_on_zipcode ($zipCode);
		
		$addressData = [
				'name' => $name,
				'phone' => $phone,
				'user_id' => $this->userID,
				'address' => $address,
				'street' => $street,
				'region_id' => $regionID,
				'city' => $city,
				'state' => $state,
				'zip_code' => $zipCode,
		];
		
		$res = M('user_address')
				->add($addressData);
		
		if (!$res) {
			$this->return_error('Cannot add user address');
		} else {
			$this->return_data([], 'Address added successfully');
		}
	}
	
	/**
	 * Delete user address
	 */
	public function delete_user_address () {
		$addressID = $this->get_param('post.address_id');
		
		$res = M('user_address')
			->where("`user_id`=$this->userID and `id`=$addressID")
			->delete();
		
		if (!$res) {
			$this->return_error('Cannot delete user address');
		} else {
			$this->return_data([], 'Address deleted successfully');
		}
	}
	
	/**
	 * Modify user address
	 */
	public function modify_user_address () {
		$addressID = $this->get_param('post.address_id');
		$name = $this->get_param('post.name');
		$phone = $this->get_param('post.phone');
		$address = $this->get_param('post.address');
		$street = $this->get_param('post.street');
		$city = $this->get_param('post.city');
		$state = $this->get_param('post.state');
		$zipCode = $this->get_param('post.address_zip_code');
		$regionID = $this->get_regionID_based_on_zipcode ($zipCode);
		
		$addressData = [
				'name' => $name,
				'phone' => $phone,
				'address' => $address,
				'street' => $street,
				'region_id' => $regionID,
				'city' => $city,
				'state' => $state,
				'zip_code' => $zipCode,
		];
		
		$res = M('user_address')
			->where("`id` = $addressID and `user_id` = $this->userID")
			->save($addressData);
		
		if (!$res) {
			$this->return_error('Cannot modify user address');
		} else {
			$this->return_data([], 'Address modified successfully');
		}
	}
}