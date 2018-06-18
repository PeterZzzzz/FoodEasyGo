<?php

namespace Appv6\Controller;

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

		$restaurant2 = [];
		if ($restaurant != null) {
			for ($i = 0; $i < count($restaurant); $i++) {
				$res = $restaurant[$i];
				$startTimeArray = explode(',', $res['from_time']);
				$endTimeArray = explode(',', $res['to_time']);

				$secondStartTimeArray = explode(',', $res['second_from_time']);
				$secondEndTimeArray = explode(',', $res['second_to_time']);
				
				$dw = date("w", time());

				$startTime = $startTimeArray[$dw];
				$endTime = $endTimeArray[$dw];
				$secondStartTime = $secondStartTimeArray[$dw];
				$secondEndTime = $secondEndTimeArray[$dw];
				
				if (startTime == "") {
					$startTime = $startTimeArray[0];
				}
				if (endTime == "") {
					$endTime = $endTimeArray[0];
				}

				if ($this->is_within_time_frame($startTime, $endTime, $secondStartTime, $secondEndTime)) {
					array_push($restaurant2, $res);
				}
			}
		}

		$dish2 = [];
		if ($dishList != null) {
			for ($i = 0; $i < count($dishList); $i++) {
				$res = M('restaurant')
					->where("`id` = " . $dishList[$i]['restaurant_id'])
					->find();

				$startTimeArray = explode(',', $res['from_time']);
				$endTimeArray = explode(',', $res['to_time']);
	
				$secondStartTimeArray = explode(',', $res['second_from_time']);
				$secondEndTimeArray = explode(',', $res['second_to_time']);
				
				$dw = date("w", time());
	
				$startTime = $startTimeArray[$dw];
				$endTime = $endTimeArray[$dw];
				$secondStartTime = $secondStartTimeArray[$dw];
				$secondEndTime = $secondEndTimeArray[$dw];
				
				if (startTime == "") {
					$startTime = $startTimeArray[0];
				}
				if (endTime == "") {
					$endTime = $endTimeArray[0];
				}
	
				if ($this->is_within_time_frame($startTime, $endTime, $secondStartTime, $secondEndTime)) {
					array_push($dish2, $dishList[$i]);
				}	
			}
		}

		if (count($restaurant2) == 0) {
			$restaurant2 = null;
		}

		if (count($dish2) == 0) {
			$dish2 = null;
		}
		
		$this->return_data(['restaurant' => $restaurant2, 'dish' => $dish2, 'grocery' => $groceryList]);
	}
	
	
	
	
	
	
	
	
}