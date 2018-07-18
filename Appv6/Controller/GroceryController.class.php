<?php

namespace Appv6\Controller;

/**
 * App API - Grocery Controller
 * 		Grocery related
 */
class GroceryController extends BaseController {
	
	/**
	 * Initialization
	 */
	protected function _initialize () {
		$this->checkRegion =  true;
		$this->errorCode = 7000;
		
		parent::_initialize ();
	}
	
	/**
	 * Get available grocery types
	 */
	public function get_grocery_type () {
		$res = M('restaurant_dish_type')
			->where('goods_type = 1')
			->field('`id`, `title`, `title_en`')
			->select();
	
		if (!is_array($res)) {
			$this->return_error('No types available');
		} else {
			$this->return_data($res);
		}
	}
	
	/**
	 * Get recommended list
	 */
	public function get_recommended_list () {
		$superMarketList = M('restaurant')
			->where("`id` in
					(select restaurant_id from food_restaurant_deliver_fee where region_id = $this->targetRegionID)
					and `status` = 1 and `goods_type` = 1")
			//->where("`status` = 1 and `goods_type` = 1 and `region_id` = $this->targetRegionID")
			->order('sort desc')
			->select();
		
		$restaurantIDList = '';
		foreach ($superMarketList as $supermarket) {
			if ($restaurantIDList == '') {
				$restaurantIDList = $supermarket['id'];
			} else {
				$restaurantIDList = $restaurantIDList . ',' . $supermarket['id'];
			}
		}
		/*app首页9件超市推荐商品按照id倒序排列*/
		$commodityList = M('restaurant_dish')
			->where("`status` = 1 and `goods_type` = 1 and `restaurant_id` in ($restaurantIDList)")
			->order('id desc')
			->limit(9)
			->select();
		
		foreach ($commodityList as &$commodity) {
			$commodity['img'] = unserialize($commodity['img'])[0];
		}
		
		if ($commodityList) {
			$this->return_data($commodityList);
		} else {
			$this->return_data([]);
		}
	}
	
	/**
	 * Get grocery list
	 */
	public function get_grocery_list () {
		$typeID = I('post.type_id', '', 'intval');
		
		$typeString = '';
		if ($typeID != 0) {
			$typeString = " and `type` = $typeID";
		}
		
		$superMarketList = M('restaurant')
			->where("`id` in
					(select restaurant_id from food_restaurant_deliver_fee where region_id = $this->targetRegionID)
					and `status` = 1 and `goods_type` = 1")
			//->where("`status` = 1 and `goods_type` = 1 and `region_id` = $this->targetRegionID")
			->select();
		
		$superMarketString = '';
		foreach ($superMarketList as $supermarket) {
			if ($superMarketString == '') {
				$superMarketString = $supermarket['id'];
			} else {
				$superMarketString = $superMarketString . ',' . $supermarket['id'];
			}
		}
		
		$commodityList = array();
		$commodityList = M('restaurant_dish')
			->where('`status` = 1 and `restaurant_id` in (' . $superMarketString . ')' . $typeString)
			->order('id desc')
			->select();
		
		foreach ($commodityList as &$commodity) {
			$commodity['img'] = unserialize($commodity['img'])[0];
		}
		
		$this->return_data($commodityList);
	}
	
	/**
	 * Get grocery details
	 */
	public function get_grocery_details () {
		$commodityID = I('post.grocery_id', '', 'intval');
		
		$commodityDetails = M('restaurant_dish')
			->where("id = $commodityID")
			->select();
	
		if (!$commodityDetails) {
			$this->return_error('Commodity not found');
		}
	
		$dishAttributeList = M('restaurant_dish_attr')
			->where("dish_id = $commodityID")
			->select();
	
	
		foreach ($dishAttributeList as &$attribute) {
			$dishAttributeDetails = M('restaurant_dish_attr_detail')
				->where("attr_id = " . $attribute['id'])
				->select();
				
			$attribute['detail_list'] = $dishAttributeDetails;
		}
	
	
		$dishDetails['attribute'] = $dishAttributeList;
	
		$this->return_data($dishDetails);
	}
}