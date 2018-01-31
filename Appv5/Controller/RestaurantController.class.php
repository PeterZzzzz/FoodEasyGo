<?php

namespace Appv5\Controller;

/**
 * App API - Restaurant Controller
 * 		restaurant related
 */
class RestaurantController extends BaseController {

	/**
	 * Initialization
	 */
	protected function _initialize () {
		$this->checkRegion = true;
		$this->errorCode = 18000;
		
		parent::_initialize ();
	}
	
	/**
	 * Get restaurant types
	 */
	public function get_restaurant_type () {
		$res = M('restaurant_type')
			->field('`id`, `title`, `title_en`')
			->select();
		
		if (!$res) {
			$this->return_error('Restaurant type unsupported');
		} else {
			$this->return_data($res);
		}
	}
	
	/**
	 * Get reserve status
	 */
	public function get_restaurant_reserve_status () {
		$res = M('reserve_config')
			->select();
		
		if (!$res) {
			$this->return_error('Unavailable reserve status');
		} else {
			$this->return_data($res);
		}
	}
	
	/**
	 * Get recommended list
	 */
	public function get_recommended_list () {
	    /*配合修改团购邮编的逻辑做了查询判断，在餐馆板块不显示团购餐馆 and region_id not in (172, 174)*/
		$res = M('restaurant')
			->where("`id` in 
					(select restaurant_id from food_restaurant_deliver_fee where region_id = $this->targetRegionID) and region_id not in (172, 174)
					and `status` = 1 and `goods_type` = 2")
			->order('sort asc')
			->limit(6)
			->select();
		
		if ($res) {
			$this->return_data($res);
		} else {
			$this->return_data([]);
		}
	}
	
	/**
	 * Get target restaurant list
	 */
	public function get_target_restaurant_list () {
		$list = $this->get_param('post.list');
		$this->get_restaurant_list($list);
	}
	
	/**
	 * Get restaurant list
	 */
	public function get_restaurant_list ($restaurantList = "") {
		if ($restaurantList == "") {
			// 1: supports instant send, 0: doesn't support instant send
			$instantSendValue = $this->get_param('post.instant_send');
			$instantSendSQL = '';
			if ($instantSendValue == "1") {
				$instantSendSQL = " and `support_send` = 1 ";
			}
			
			
			// restaurant type id
			$restaurantTypeID = $this->get_param('post.restaurant_type_id');
			$restaurantTypeSQL = " and `type` = $restaurantTypeID ";
			if ($restaurantTypeID == 0) {
				$restaurantTypeSQL = "";
			}
			
			// restaurant sort type:
			// 0: default, 2: sell count incre, 3: sell count decre
			// 4: min consumption incre, 5: min consumption decr
			$restaurantSortType = $this->get_param('post.sort_type_id');
			$restaurantSortString = '';
			
			switch ($restaurantSortType) {
				case 0:
					$restaurantSortString = 'sort asc';
					break;
				case 1:
					$restaurantSortString = 'sail_count desc';
					break;
				case 2:
					$restaurantSortString = 'sail_count asc';
					break;
				case 3:
					$restaurantSortString = 'min_consume desc';
					break;
				case 4:
					$restaurantSortString = 'min_consume asc';
					break;
			}
			
			$res = M('restaurant')
				->field('id, img, name, name_en, describe, describe_en, min_consume, destine_time, from_time, to_time, second_from_time, second_to_time, extra_fee')
				->where("`id` in
						(select restaurant_id from food_restaurant_deliver_fee where region_id = $this->targetRegionID) and region_id not in (172, 174)
						and `status` = 1 and `goods_type` = 2 " . $instantSendSQL . $restaurantTypeSQL)
						/*配合修改团购邮编的逻辑做了查询判断，在餐馆板块不显示团购餐馆 and region_id not in (172, 174)*/
						
				//->where("`region_id` = $this->targetRegionID and `status` = 1 and `goods_type` = 2 " . $instantSendSQL . $restaurantTypeSQL)
				->order($restaurantSortString)
				->select();
			
			
		} else {
			$res = M('restaurant')
				->field('id, img, name, name_en, describe, describe_en, min_consume, destine_time, from_time, to_time, second_from_time, second_to_time, extra_fee')
				->where("`id` in ($restaurantList)")
				->select();
		}
		
		$res = $this->null_to_empty_array($res);		
		$resultData = ['total' => count($res)];
		
		foreach ($res as &$restaurant) {
			$startTimeArray = explode(',', $restaurant['from_time']);
			$endTimeArray = explode(',', $restaurant['to_time']);

			$secondStartTimeArray = explode(',', $restaurant['second_from_time']);
			$secondEndTimeArray = explode(',', $restaurant['second_to_time']);
			
			$dw = date("w", time());

			$startTime = $startTimeArray[$dw];
			$endTime = $endTimeArray[$dw];
			$secondStartTime = $secondStartTimeArray[$dw];
			$secondEndTime = $secondEndTimeArray[$dw];
			
			//echo 'test: ' . $restaurant['id'] .':'. $secondStartTime . ', ' . $secondEndTime;
			
			if (startTime == "") {
				$startTime = $startTimeArray[0];
			}
			if (endTime == "") {
				$endTime = $endTimeArray[0];
			}
			
			if ($this->is_within_time_frame($startTime, $endTime, $secondStartTime, $secondEndTime)) {
				$restaurant['is_open'] = "1";
			} else {
				$restaurant['is_open'] = "0";
			}
		}
		
		$open = [];
		$openIndex = 0;
		$closed = [];
		$closedIndex = 0;
		foreach ($res as &$restaurant) {
			if ($restaurant['is_open'] == "1") {
				$open[$openIndex] = $restaurant;
				$openIndex++;
			} else {
				$closed[$closedIndex] = $restaurant;
				$closedIndex++;
			}
		}
		
		foreach ($closed as &$restaurant) {
			$open[$openIndex] = $restaurant;
			$openIndex++;
		}
		
		$resultData['data'] = $open;
		
		$this->return_data($resultData);
	}
	
	/**
	 * Get restaurant details
	 */
	public function get_restaurant_details () {
		$restaurantID = $this->get_param('post.restaurant_id');
		if ($restaurantID == 0) {
			$this->return_error('Invalid restaurant ID');
		}
		
		$restaurantDetails = M('restaurant')
			->where("`id` = $restaurantID")
			->find();
		
		$startTimeArray = explode(',', $restaurantDetails['from_time']);
		$endTimeArray = explode(',', $restaurantDetails['to_time']);
		$secondStartTimeArray = explode(',', $restaurantDetails['second_from_time']);
		$secondEndTimeArray = explode(',', $restaurantDetails['second_to_time']);
			
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
			$restaurantDetails['is_open'] = "1";
		} else {
			$restaurantDetails['is_open'] = "0";
		}
		//$restaurantDetails['is_open'] = "1";
		
		$restaurantDishList = M('restaurant_dish_type_seperate')
			->join(' left join food_restaurant_dish on food_restaurant_dish_type_seperate.id = food_restaurant_dish.type_seperate ')
			->where(' food_restaurant_dish.status = 1 and food_restaurant_dish.restaurant_id = ' . $restaurantID)
			->group(' food_restaurant_dish.type_seperate ')
			->order(' total_sale desc ')
			->field(' food_restaurant_dish_type_seperate.id as type_id, food_restaurant_dish_type_seperate.title, food_restaurant_dish_type_seperate.title_en, sum(food_restaurant_dish.sail_count) as total_sale ')
			->select();
		
		for ($i=0; $restaurantDishList[$i] != null; $i++) {
			$dishList = M('restaurant_dish')
				->where(" status = 1 and restaurant_id = $restaurantID and type_seperate = " . $restaurantDishList[$i]['type_id'])
				->select();
			foreach ($dishList as &$dish) {
				$dish['img'] = unserialize($dish['img'])[0];
			}
			$restaurantDishList[$i]['dish_details'] = $dishList;
		}
		
		if (is_array($restaurantDishList) || is_array($restaurantDetails)) {
			$this->return_data(['restaurant' => $restaurantDetails, 'dish' => $restaurantDishList]);
		} else {
			$this->return_error('No restaurant found');
		}
	}
	
	/**
	 * Get dish details
	 */
	public function get_dish_details () {
		$dishID = $this->get_param('post.dish_id');
		
		$result = M('restaurant_dish')
			->where("`id` = $dishID")
			->select();
		
		if (!$result) {
			$this->return_error('Dish not found');
		}
		
		$dishDetails = $result[0];
		$dishDetails['img'] = unserialize($dishDetails['img'])[0];
		
		$dishAttributeList = M('restaurant_dish_attr')
			->where("dish_id = $dishID")
			->select();
		
		foreach ($dishAttributeList as &$attribute) {
			$dishAttributeDetails = M('restaurant_dish_attr_detail')
				->where("attr_id = " . $attribute['id'])
				->select();
			if ($attribute['least'] == null) {
                $attribute['least'] = "-1";
            }
            if ($attribute['most'] == null) {
                $attribute['most'] = "-1";
            }
			$attribute['detail_list'] = $this->null_to_empty_array($dishAttributeDetails);
		}
		
		
		$dishDetails['attribute'] = $dishAttributeList;
		
		$this->return_data($dishDetails);
	}

	/**
	 * Get restaurant comments
	 */
	public function get_restaurant_comment () {
		$restaurantID = $this->get_param('post.restaurant_id');
		if ($restaurantID == 0) {
			$this->return_error('Invalid restaurant ID');
		}
		
		$res = M('restaurant_comment')
				->where("restaurant_id = $restaurantID " . 'and user_comment != "" ')
				->order(' create_time desc ')
				->field('user_comment, create_time')
				->limit(20)
				->select();
		$res = $this->null_to_empty_array($res); 
		
		foreach ($res as &$element) {
			$element['create_time'] = date("F j, Y, g:i a", $element['create_time']);
		}
		
		$this->return_data($res);
	}
	
	/**
	 * Post restaurant comments
	 */
	public function post_restaurant_comment () {
		$restaurantID = $this->get_param('post.restaurant_id');
		$subOrderID = $this->get_param('post.sub_order_id');
		$userScore = $this->get_param('post.restaurant_star_count');
		$userComment = $this->get_param('post.restaurant_comment');
		
		$data = [
				'user_id' => $this->userID, 
				'restaurant_id' => $restaurantID, 
				'sub_order_id' => $subOrderID,
				'user_score' => $userScore, 
				'user_comment' => $userComment, 
				'create_time' => time(),
		];
		$res = M('restaurant_comment')->add($data);
		
		if (!$res) {
			$this->server_unavailable_error();
		} else {
			$this->return_data($res);
		}
	}
	
	/**
	 * Get restaurant list total extra fee and delivery fee
	 */
	public function get_restaurant_list_fees () {
		
		$restaurantIDString = $this->get_param('post.restaurant_id_list');
		$deliveryRegionID = $this->get_param('post.delivery_region_id');
		
		$extraFee = M('restaurant')
			->where('`id` in (' . $restaurantIDString . ')')
			->field('sum(`extra_fee`) as extra_fee')
			->find();
		
		if (!$extraFee) {
			$extraFee = "0";
		} else {
			$extraFee = $extraFee['extra_fee'];
		}
		
		
		$deliveryFee = M('restaurant_deliver_fee')
			->where("`region_id` = $deliveryRegionID and `restaurant_id` in ( $restaurantIDString ) ")
			->select();
		
		$this->return_data(['extra_fee' => $extraFee, 'delivery_fee' => $deliveryFee]);
	}
	
	public function get_restaurant_list_delivery_fees() {
		$restaurantIDString = $this->get_param('post.restaurant_id_list');
		$deliveryRegionID = $this->get_param('post.delivery_region_id');
		
		$result = M('restaurant_deliver_fee')
			->where("`restaurant_id` in ($restaurantIDString) and `region_id` = $deliveryRegionID")
			->field(['restaurant_id', 'deliver_fee'])
			->select();
		
		$this->return_data($this->null_to_empty_array($result));
	}
}