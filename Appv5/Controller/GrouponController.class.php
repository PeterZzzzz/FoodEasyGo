<?php

namespace Appv5\Controller;

/**
 * App API - Access Controller
 * 		authentication related
 */
class GrouponController extends BaseController {

	/**
	 * Initialization
	 */
	protected function _initialize () {
		$this->checkRegion = true;
		$this->errorCode = 7100;
		parent::_initialize ();
	}
	
	/**
	 * Get groupon list
	 */
	public function get_groupon_list () {
		$data = M('groupon')
			->where("`region_link` like '%$this->zipCode%' and `status` = 0 and `begin_time` < now() and `end_time` > now()")
			->order('id desc') //按照id倒序排列
			->select();
		$data = $this->null_to_empty_array($data);
		
		$this->return_data($data);
	}
	
	/**
	 * Get groupon details
	 */
	public function get_groupon_details () {
		$grouponID = I('post.groupon_id');
		
		$data = M('groupon')
			->where("`id` = $grouponID")
			->find();
		
		$restaurantList = M('restaurant')
			->where("id in (select goods_belong_id from food_groupon_goods where groupon_id = $grouponID)")
			->order('id desc')
			->select();
		
		foreach ($restaurantList as &$restaurant) {
			$restaurant['groupon_list'] = M('groupon_goods')
				->where("`groupon_id` = $grouponID and `goods_belong_id` = " . $restaurant['id'] . " and status=0")
				->order('id desc') //按照id倒序排列
				->select();
			
			foreach ($restaurant['groupon_list'] as &$groupon) {
				$groupon['goods_details'] = M('restaurant_dish')->where('id = ' . $groupon['goods_id'])->find();
				$groupon['goods_details']['img'] = unserialize($groupon['goods_details']['img'])[0];
			}
		}
		$restaurantList = $this->null_to_empty_array($restaurantList);
		
		$this->return_data(['groupon' => $data, 'data' => $restaurantList]);
	}
	
	/**
	 * Get recommended list
	 */
	public function get_recommended_list () {
		$res = M('groupon')
			->where("`region_link` like '%" . $this->zipCode . "%' and `status` = 0 and `begin_time` < now() and `end_time` > now()")
			//->where("`region_link` like '%02111%'")
			->limit(6)
			->order('id desc') //按照id倒序排列
			->select();
		$res = $this->null_to_empty_array($res);
		
		$this->return_data($res);
	}
}