<?php

namespace Appv5\Controller;

/**
 * App API - Info Controller
 * 		informations related
 */
class InfoController extends BaseController {
	
	/**
	 * Initialization
	 */
	protected function _initialize () {
	}
	
	public function get_current_time () {
		echo "Today is " . date("Y/m/d") . "<br>";
		echo "Time is " . date("h:i:sa");
	}
	
	/**
	 * Get business cooperation
	 */
	public function get_business_cooperation () {

		$data = M('business_cooperation')
			->order('sort asc')
			->select();
		
		$this->return_data($data);
	}
	
	/**
	 * Get recruit
	 */
	public function get_recruit () {
		$data = M('recruit')
			->order('sort asc')
			->select();
		
		$this->return_data($data);
	}
	
	/**
	 * Get contact info
	 */
	public function get_contact_info () {
		$data = M('contact')
			->select();
		
		$this->return_data($data);
	}
	
	/**
	 * Get FAQ
	 */
	public function get_faq () {
		$data = M('faq')
			->where('`type` != 0')
			->select();
		
		$this->return_data($data);
	}
	
	/**
	 * Get refund policy
	 */
	public function get_refund_policy () {
		$data = M('refund_description')
			->where('`type` != 0')
			->select();
		
		$this->return_data($data);
	}
	
	/**
	 * Get privacy policy
	 */
	public function get_privacy_policy () {
		$data = M('privacy_policy')
			->select();
		
		$this->return_data($data);
	}
	
	/**
	 * Get images
	 */
	public function get_images () {
		$bgImage = M('app_images')
			->where("`name`='app_init'")
			->find();
		$guideImages = M('app_images')
			->where("`name` like 'app_guide%'")
			->select();
		$slideImages = M('app_images')
			->where("`name` like 'app_slide%'")
			->select();
		
		$this->return_data([
				'bg' => $bgImage, 
				'guide' => $guideImages,
				'slide' => $slideImages,
		]);
	}
	
	/**
	 * Get product category
	 */
	public function get_product_category () {
		$category = M('app_product_category')
			->select();
		
		$this->return_data($category);
	}
	
	/**
	 * Get food reserve config
	 */
	public function get_food_reserve_config () {
		$res = M('reserve_config')
			->select();
		
		$this->return_data($res);
	}
	
	/**
	 * Get latest app version
	 */
	public function get_lastest_app_version () {
		$this->return_data(C('APP_LATEST_VERSION'));
	}
}
	