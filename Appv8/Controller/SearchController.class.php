<?php

namespace Appv8\Controller;

/**
 * App API - Search Controller
 * 		searching
 */
class SearchController extends BaseController {
	
	/**
	 * Initialization
	 */
	protected function _initialize () {
		$this->checkRegion = true;
		$this->errorCode = 19000;
		
		parent::_initialize ();
	}
	
	/**
	 * Search for input string
	 */
	public function search () {
		$searchString = $this->get_param('post.search_string');
		//$sortType = $this->get_param('post.sort_type');
		$searchType = $this->get_param('post.search_option');
		
        
		/*
		$sortStringRes = "";
		$sortStringDish = "";
		
		if ($sortType == 1) {
			$sortStringRes = "name asc";
			$sortStringDish = "name asc";
		} else if ($sortType == 2) {
			$sortStringRes = "sail_count desc";
			$sortStringDish = "sail_count desc";
		} else if ($sortType == 3) {
			$sortStringRes = "min_consume asc";
			$sortStringDish = "price asc";
		} else if ($sortType == 4) {
			$sortStringRes = "sort asc";
			$sortStringDish = "sail_count asc";
		} else {
			$sortStringRes = "name asc";
			$sortStringDish = "name asc";
		}
		
		// search for restaurant
		$restaurant = M('restaurant')
			->where("`region_id` = $this->targetRegionID and (`name` like '%$searchString%' or `name_en` like '%$searchString%') and `status` = 1 and `goods_type` = 2")
			//->where("(`name` like '%$searchString%' or `name_en` like '%$searchString%') and `status` = 1 and `goods_type` = 2")
			->order($sortStringRes)
			->limit('0, 30')
			->select();
		
		// search for dish
		$dishList = M('restaurant_dish')
			->where("(`name` like '%$searchString%' or `name_en` like '%$searchString%') and `status` = 1 and `goods_type` = 2 " . 
					" and `restaurant_id` in (select `id` from food_restaurant where `region_id` = $this->targetRegionID)")
			->order($sortStringDish)
			->limit('0, 30')
			->select();
		
		foreach ($dishList as &$dish) {
			$dish['img'] = unserialize($dish['img'])[0];
		}
		
		// search for commodity
		$groceryList = M('restaurant_dish')
			->where("(`name` like '%$searchString%' or `name_en` like '%$searchString%') and `status` = 1 and `goods_type` = 1 " .
					" and `restaurant_id` in (select `id` from food_restaurant where `region_id` = $this->targetRegionID)")
			->order($sortStringDish)
			->limit('0, 30')
			->select();
		foreach ($groceryList as &$grocery) {
			$grocery['img'] = unserialize($grocery['img'])[0];
		}
		*/
        
		$restaurant = null;
		$dishList = null;
		$groceryList = null;
        
		
		if ($searchType == 0) {
			$dishList = M('restaurant_dish')
                 ->where("(`name` like '%$searchString%' or `name_en` like '%$searchString%') and `status` = 1 and `goods_type` = 2 " .
					" and `restaurant_id` in (select restaurant_id from food_restaurant_deliver_fee where region_id = $this->targetRegionID)")
					//->order($sortStringDish)
					->limit('0, 30')
					->select();
			
			foreach ($dishList as &$dish) {
				$dish['img'] = unserialize($dish['img'])[0];
			}
		} else if ($searchType == 1) {
			$groceryList = M('restaurant_dish')
			     ->where("(`name` like '%$searchString%' or `name_en` like '%$searchString%') and `status` = 1 and `goods_type` = 1 " .
					" and `restaurant_id` in (select restaurant_id from food_restaurant_deliver_fee where region_id = $this->targetRegionID)")
				//->order($sortStringDish)
				->limit('0, 30')
				->select();
			foreach ($groceryList as &$grocery) {
				$grocery['img'] = unserialize($grocery['img'])[0];
			}
		} else {
            
			$restaurant = M('restaurant')
                ->where("`id` in (select restaurant_id from food_restaurant_deliver_fee where region_id = $this->targetRegionID) " . 
                    " and (`name` like '%$searchString%' or `name_en` like '%$searchString%') and `status` = 1 and `goods_type` = 2")
                ->order($sortStringRes)
                ->limit('0, 30')
                ->select();
		}
		
		$this->return_data(['restaurant' => $restaurant, 'dish' => $dishList, 'grocery' => $groceryList]);
	}
	
	
	
	
	
	
	
	
}