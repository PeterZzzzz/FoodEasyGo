<?php

namespace Appv6\Controller;

/**
 * App API - Cart Controller
 * 		user cart
 */
class CartController extends BaseController {

	protected $cartID = 0;
	protected $cartDetails = [];

	/**
	 * Initialization
	 */
	protected function _initialize () {
		$this->errorCode = 3000;
		
		parent::_initialize ();
		
		//$cartID = $this->get_param('post.cart_id');
		$cartID = M('cart')
			->where("`user_id`= $this->userID")
			->order('operate_time desc')
			->find();
		
		if (!$cartID) {
			$this->cartID = 0;
			return;
		}
		
		$this->cartID = $cartID['id'];
		
		// Get cartDetails
		$this->cartDetails = M('cart_detail')
			->where("`cart_id` = $this->cartID")
			->select();
		$this->cartDetails = $this->null_to_empty_array($this->cartDetails);
		
		// Foreach cartDetail
		foreach ($this->cartDetails as &$cartDetail) {
			
            // RestaurantType
            $restaurantType = M('restaurant')
                ->where("`id` = " . $cartDetail['restaurant_id'])
                ->find();
            $restaurantType = $restaurantType['goods_type'];
            
			// DishDetail
			$cartDetail['dish'] = M('restaurant_dish')
				->where("`id` = " . $cartDetail['goods_id'])
				->find();
			if ($cartDetail) {
				$cartDetail['dish']['img'] = unserialize($cartDetail['dish']['img'])[0];
			}
			$cartDetail['dish'] = $this->null_to_empty_array($cartDetail['dish']);
			
			// GrouponDetail
			$cartDetail['groupon'] = M('groupon')
				->where("`id` = " . $cartDetail['groupon_id'])
				->find();
			$cartDetail['groupon'] = $this->null_to_empty_array($cartDetail['groupon']);
			
			// DishType
            
            if ($restaurantType == '1') {
                // This is an grocery
                $cartDetail['dish_type'] = M('restaurant_dish_type')
                    ->where("`id` = " . $cartDetail['dish']['type'])
                    ->find();
                $cartDetail['type_seperate'] = $cartDetail['type'];
                $cartDetail['dish_type'] = $this->null_to_empty_array($cartDetail['dish_type']);
            } 
            else if ($restaurantType == '2') {
                // This is an restaurant
                $cartDetail['dish_type'] = M('restaurant_dish_type_seperate')
                    ->where("`id` = " . $cartDetail['dish']['type_seperate'])
                    ->find();
                $cartDetail['type'] = $cartDetail['type_seperate'];
                $cartDetail['dish_type'] = $this->null_to_empty_array($cartDetail['dish_type']);
            }
			
			// RestaurantDetail
			$cartDetail['restaurant'] = M('restaurant')
				->where("`id` = " . $cartDetail['restaurant_id'])
				->field("name, name_en, min_consume, status, region_id, extra_fee")
				->find();
			$cartDetail['restaurant'] = $this->null_to_empty_array($cartDetail['restaurant']);
			
			
			
			if ($cartDetail['attribute'] != '') {
				$attrList = explode(',', $cartDetail['attribute']);
				if ($cartDetail['amount'] == '') {
					$attrAmountList = [];
				} else {
					$attrAmountList = explode(',', $cartDetail['amount']);
				}
				
				$attrLength = count($attrList);
				$attrAmountLength = count($attrAmountList);
				
				if ($attrAmountLength < $attrLength) {
					$difference = $attrLength - $attrAmountLength;
					while ($difference > 0) {
						array_push($attrAmountList, "1");
						$difference -= 1;
					}
				}
				
				$cartDetail['attribute_data'] = [];
				for($counter = 0; $counter < $attrLength; $counter++) {
					
					$attributeData = M('restaurant_dish_attr_detail')
						->where("`id` = " . $attrList[$counter])
						->find();
                    
                    if ($attributeData) {
					   $attributeData['quantity'] = $attrAmountList[$counter];
					
					   array_push($cartDetail['attribute_data'], $attributeData);
                    }
				}
				
			} else {
				$cartDetail['attribute_data'] = [];
			}
		}
	}
	
	/**
	 * Get user cart details
	 */
	public function get_cart_details () {
		$this->return_data(['id' => $this->cartID, 'details' => $this->cartDetails]);
	}
	
	/**
	 * Delete entire cart
	 */
	public function delete_cart () {
		if ($this->cartID != 0) {
			$res = M('cart_detail')
				->where("`cart_id` = $this->cartID")
				->delete();
			$res = M('cart')
				->where("`id` = $this->cartID")
				->delete();
			
			if ($res) {
				$this->return_data([], 'cart emptied successfully');
			} else {
				$this->return_error('Cannot delete cart');
			}
		} else {
			$this->return_error('Cannot delete cart');
		}
	}
	
	/**
	 * Delete a specific restaurant
	 */
	public function delete_cart_restaurant () {
		$restaurantID = $this->get_param('post.restaurant_id');
		$res = M('cart_detail')
			->where("`cart_id` = $this->cartID and `restaurant_id` = $restaurantID")
			->delete();
		if ($res) {
			$this->return_data([]);
		} else {
			$this->return_error("Cannot delete restaurant goods: $restaurantID");
		}
	}
	
	/**
	 * Delete cart detail
	 */
	public function delete_cart_detail () {
		$cartDetailID = $this->get_param('post.cart_detail_id');
		$res = M('cart_detail')
			->where("`id` = $cartDetailID")
			->delete();
		
		if ($res) {
			$this->return_data([], 'Cart detail deleted successfully');
		} else {
			$this->return_error("Cannot delete cart detail: $cartDetailID");
		}
	}
	
	/**
	 * Add a good to cart
	 */
	public function add_to_cart () {
		if ($this->cartID == 0) {
			M('cart')->data(['user_id' => $this->userID, 'operate_time' => time()])->add();
			$this->_initialize();
		}
		
		$data = ['cart_id' => $this->cartID];
		$data['category'] = $this->get_param('post.category');
		$data['deliver_time'] = $this->get_param('post.deliver_time');
		$data['restaurant_id'] = $this->get_param('post.restaurant_id');
		$data['groupon_id'] = $this->get_param('post.groupon_id');
		$data['groupon_goods_id'] = $this->get_param('post.groupon_goods_id');
		$data['goods_id'] = $this->get_param('post.goods_id');
		$data['attribute'] = $this->get_param('post.attribute');
		$data['amount'] = $this->get_param('post.attribute_number');
		$data['note'] = $this->get_param('post.note');
		$data['number'] = $this->get_param('post.number');
		
		// check for goods_id and restaurant_id match
		$res = M('restaurant_dish')
			->where('`id` = ' . $data['goods_id'] . ' and `restaurant_id` = ' . $data['restaurant_id'])
			->find ();
		if (!$res) {
			$this->return_error('Restaurant id, goods id mismatch: ' . $data['restaurant_id'] . ", " . $data['goods_id']);
		}
		
		// check for attributes
		if ($data['attribute'] != "") {
			$attrList = explode(',', $data['attribute']);
			foreach ($attrList as $attr) {
				
				$res = M('restaurant_dish')
					->where('`id` = ' . $data['goods_id'] . ' and id = (select dish_id from food_restaurant_dish_attr where id in (select attr_id from food_restaurant_dish_attr_detail where id = ' . $attr . '))')
					->find();
				if (!$res) {
					$this->return_error('Attr id mismatch: ' . $attr);
				}
			}
		}
		
		$res = M('cart_detail')->data($data)->add();
		
		if ($res) {
			$this->_initialize();
			$this->return_data($this->cartDetails);
		} else {
			$this->return_error('Cannot add to cart');
		}
	}
	
	/**
	 * Add a good to cart
	 */
	public function update_cart_detail () {
		
		$cartDetailID = $this->get_param('post.id');
		
		
		$data['deliver_time'] = $this->get_param('post.deliver_time');
		$data['groupon_id'] = $this->get_param('post.groupon_id');
		$data['groupon_goods_id'] = $this->get_param('post.groupon_goods_id');
		$data['attribute'] = $this->get_param('post.attribute');
		$data['amount'] = $this->get_param('post.attribute_number');
		$data['note'] = $this->get_param('post.note');
		$data['number'] = $this->get_param('post.number');
		

		
		$res = M('cart_detail')
			->where("`id` = $cartDetailID and `cart_id` = " . $this->cartID)
			->data($data)
			->save();
	
		$this->return_data([], 'dish has been updated successfully');
	}

	/**
	 * Update good's number
	 */
	public function update_goods_number () {
		$cartDetailID = $this->get_param('post.cart_detail_id');
		$goodsID = $this->get_param('post.goods_id');
		$data['number'] = $this->get_param('post.number');
		
		$res = M('cart_detail')
			->where("`id` = $cartDetailID and `goods_id` = $goodsID")
			->save($data);
		
		if ($res) {
			$this->_initialize();
			$this->return_data($this->cartDetails);
		} else {
			$this->return_error('Cannot add more');
		}
	}
}