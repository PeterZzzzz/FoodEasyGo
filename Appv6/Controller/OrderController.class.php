<?php

namespace Appv6\Controller;
use Think\Storage;

/**
 * App API - Order Controller
 * 		user orders related
 */
class OrderController extends BaseController {
	
	private $deliveryAddressID = -1;
	private $deliveryAddressRegionID = -1;
	
	/**
	 * Initialization
	 */
	protected function _initialize () {
		$this->checkRegion = true;
		$this->errorCode = 15000;
		parent::_initialize ();
	}
	
	/**
	 * Get cart prices
	 */
	private function get_cart_prices ($cartID) {
		// Get cart
		$cart = M('cart')
			->where("`id` = $cartID and `user_id` = $this->userID")
			->find();
		if (!$cart) {
			return null;
		}
	
		// Get restaurant list	[0=>[restaurant_id], 1=>[restaurant_id], ...]
		$restaurantList = M('cart_detail')
			->where("`cart_id` = $cartID")
			->field("distinct `restaurant_id`")
			->select();
		
		$totalGoodsPrice = 0;
		$totalDeliveryPrice = 0;
		$totalExtraPrice = 0;
		
		for ($i=0; $restaurantList[$i] != null; $i++) {
			// Get delivery fee
			//$restaurantList[$i]['deliver_fee'] = $this->targetRegionInfo['fee'];
			$restaurantList[$i]['deliver_fee'] = 
                $this->get_restaurant_deliver_fee($restaurantList[$i]['restaurant_id'], 
                                                  $this->deliveryAddressRegionID);
            
            // Adding driver_deliver_fee
            $restaurantList[$i]['driver_deliver_fee'] = 
                $this->get_restaurant_driver_deliver_fee($restaurantList[$i]['restaurant_id'], 
                                                         $this->deliveryAddressRegionID);
            
			$totalDeliveryPrice += $restaurantList[$i]['deliver_fee'];
			// Get extra fee
			$restaurantDetail =  M('restaurant')
                ->where('`id`=' . $restaurantList[$i]['restaurant_id'])
                ->find();
			$restaurantList[$i]['extra_fee'] = $restaurantDetail['extra_fee'];
			$totalExtraPrice += $restaurantList[$i]['extra_fee'];
			
			$cartDetailList = M('cart_detail')
				->where("`cart_id` = $cartID and `restaurant_id` = " . $restaurantList[$i]['restaurant_id'])
				->select();
			
			$tempRestaurantTotalPrice = 0;
			foreach ($cartDetailList as &$cartDetail) {
				// Temp goods total price used to hold the total price of the current good in $cartDetail
				$tempGoodsTotalPrice = 0;
				
				// Get good price:
				$goodDetail = M('restaurant_dish')
					->where('`id` = ' . $cartDetail['goods_id'])
					->find();
				$tempGoodsTotalPrice += $goodDetail['price'];
				$cartDetail['good_price'] = $goodDetail['price'];
				
				// Get attribute price:
				$attributeList = M('restaurant_dish_attr_detail')
					->where('`id` in (' . $cartDetail['attribute'] . ')')
					->select();
				$cartDetail['attribute_list'] = $attributeList;
				
				$tempAttrTotalPrice = 0;
				foreach ($attributeList as &$attribute) {
					$tempAttrTotalPrice += $attribute['price'];
				}
				
				$cartDetail['attribute_total_price'] = $tempAttrTotalPrice;
				$tempGoodsTotalPrice += $tempAttrTotalPrice;
				$tempGoodsTotalPrice *= $cartDetail['number'];
				
				$cartDetail['total_price'] = $tempGoodsTotalPrice;
				$tempRestaurantTotalPrice += $tempGoodsTotalPrice;
			}
			
			$restaurantList[$i]['total_goods_price'] = $tempRestaurantTotalPrice;
			$restaurantList[$i]['cart_detail_list'] = $cartDetailList;
			
			$totalGoodsPrice += $tempRestaurantTotalPrice;
		}
		return ['total_goods_price' => $totalGoodsPrice, 'total_delivery_fee' => $totalDeliveryPrice, 'total_extra_fee' => $totalExtraPrice, 'restaurant_list' => $restaurantList];
	}
	
	/**
	 * Get cart details
	 */
	private function get_cart_details ($cartID, $cartDetailIDString = "") {
		
		$cartDetailIDStringBackup = $cartDetailIDString;
		
		// Get Cart
		$cart = M('cart')
			->where("`id` = $cartID and `user_id` = $this->userID")
			->find();
		if (!$cart) {
			return null;
		}
		
		if ($cartDetailIDString != "") {
			$cartDetailIDString = " and `id` in ( " . $cartDetailIDString . ") ";
		}
		
		// Cartegory list
		$categoryList = ['1', '2', '3', '4'];
		foreach ($categoryList as &$category) {
		
			// Get distinct restaurant list
			$restaurantList = M('cart_detail')
				->where("`cart_id` = $cartID and `category` = $category and `number` > 0" . $cartDetailIDString )
				->field("distinct `restaurant_id`")
				->select();
			
			$cart['cat' . $category]['restaurant'] = $restaurantList;
            
			// If restaurantList is empty, then cart is empty, continue next iteration
			if (!$restaurantList) {
				$cart['cat' . $category]['restaurant'] = null;
				continue;
			}
			
			$cart['cat' . $category]['total_goods_price'] = 0;
			$cart['cat' . $category]['total_delivery_fee'] = 0;
            $cart['cat' . $category]['total_driver_delivery_fee'] = 0;
			$cart['cat' . $category]['total_extra_fee'] = 0;
			
			
			// Foreach restaurant and category combinations $resCatCombine, 
			// get the relevant cartDetails 
			foreach ($cart['cat' . $category]['restaurant'] as &$resCatCombine) {
				
				
				// Get extra fee of this restaurant
				$restaurantData = M('restaurant')
					->where("`id` = " . $resCatCombine['restaurant_id'])
					->find();
				$resCatCombine['region_id'] = $restaurantData['region_id'];
				$resCatCombine['deliver_type'] = $restaurantData['deliver_type'];
				$resCatCombine['reciver_type'] = $restaurantData['reciver_type'];
				$resCatCombine['phone_remind'] = $restaurantData['phone_remind'];

				$extraFee = $restaurantData['extra_fee'];
				$minOrder = $restaurantData['min_consume'];
	
				$cartDetailListIDString = "";
				if ($cartDetailIDStringBackup != null) {
					$cartDetailListIDString = " and `id` in ( $cartDetailIDStringBackup )";
				}
				
				// Get cart detail list 
				$cartDetailList = M('cart_detail')
					->where("`cart_id` = $cartID and `restaurant_id` = " . $resCatCombine['restaurant_id'] . 
						" and `category` = " . $category . $cartDetailListIDString)
					->select();
				
				// For each cart detail, do the appropriate calculations
				$tempRestaurantTotalPrice = 0;
				foreach ($cartDetailList as &$cartDetail) {
					
					// Get restaurant id
					$res = M('restaurant')
						->where('`id` = ' . $cartDetail['restaurant_id'])
						->find();
					$cartDetail['restaurant_type'] = $res['goods_type'];
					
					// Temp goods total price used to hold the total price of the current good in $cartDetail
					$tempGoodsTotalPrice = 0;
					
					// Get good price:
					$goodDetail = M('restaurant_dish')
						->where('`id` = ' . $cartDetail['goods_id'])
						->find();
					$tempGoodsTotalPrice += $goodDetail['price'];
					$cartDetail['good_price'] = $goodDetail['price'];
					$cartDetail['good_detail'] = $goodDetail;
					
					// Get attribute price:
					$attributeAmountList = [];
					$attributeIDList = [];
					$attributeIDAmountMapping = [];
					if ($cartDetail['attribute'] != '') {
						$attributeAmountList = explode(",", $cartDetail['amount']);
						$attributeIDList = explode(",", $cartDetail['attribute']);
						for ($i = 0; $i < count($attributeAmountList); $i++){
							$attributeIDAmountMapping[$attributeIDList[$i]] = $attributeAmountList[$i];
						}
						
						$attributeList = M('restaurant_dish_attr_detail')
							->where('`id` in (' . $cartDetail['attribute'] . ')')
							->select();
						for ($i = 0; is_array($attributeList[$i]); $i++){
							if ($attributeIDAmountMapping[$attributeList[$i]['id']] == null) {
								$attributeList[$i]['amount'] = 1;
							} else {
								$attributeList[$i]['amount'] = $attributeIDAmountMapping[$attributeList[$i]['id']];
							}
						}
						
						$cartDetail['attribute_list'] = $attributeList;
					} else {
						$attributeList = [];
						$cartDetail['attribute_list'] = [];
					}
					
					$tempAttrTotalPrice = 0;
					foreach ($attributeList as &$attribute) {
						$tempAttrTotalPrice += $attribute['price'] * $attribute['amount'];
					}
					$cartDetail['attribute_total_price'] = $tempAttrTotalPrice;
					
					// Sums up attribute price and goods price and multiply the sum by the number to get total price
					$tempGoodsTotalPrice += $tempAttrTotalPrice;
					$tempGoodsTotalPrice *= $cartDetail['number'];
					
					$cartDetail['total_price'] = $tempGoodsTotalPrice;
					$tempRestaurantTotalPrice += $tempGoodsTotalPrice;
					
					// Get delivery time data
					$resCatCombine['deliver_time_id'] = $cartDetail['deliver_time'];
					$reserveConfig = M('reserve_config')
						->where('`id` = ' . $cartDetail['deliver_time'])
						->find();
					$resCatCombine['deliver_time_value'] = $reserveConfig['destine_time'];
					
					// Get groupon data
					$resCatCombine['groupon_id'] = $cartDetail['groupon_id'];
				}
				
				$resCatCombine['total_goods_price'] = $tempRestaurantTotalPrice;
				$resCatCombine['delivery_price'] = $this->get_restaurant_deliver_fee($resCatCombine['restaurant_id'], $this->deliveryAddressRegionID);
                
                // Adding driver_delivery_price
                $resCatCombine['driver_delivery_price'] = $this->get_restaurant_driver_deliver_fee($resCatCombine['restaurant_id'], $this->deliveryAddressRegionID);
                
				$resCatCombine['extra_price'] = $extraFee;
				if ($tempRestaurantTotalPrice >= $minOrder) {
					$resCatCombine['extra_price'] = 0;
				}
				$resCatCombine['cart_detail_list'] = $cartDetailList;
				
				$cart['cat' . $category]['total_goods_price'] += $resCatCombine['total_goods_price'];
				$cart['cat' . $category]['total_delivery_fee'] += $resCatCombine['delivery_price'];
                
                // Add driver_deliver_fee
				$cart['cat' . $category]['total_driver_delivery_fee'] += $resCatCombine['driver_delivery_price'];
				$cart['cat' . $category]['total_extra_fee'] += $resCatCombine['extra_price'];
				
			}
		}
		
		return $cart;
	}
    
	/**
	 * Get order list
	 */
	public function get_order_list () {
		$orderList = M('order')
			->where("`user_id` = $this->userID and `status` = 2")
			->order('`create_time` desc')
			->limit(30)
			->select();
		
		
		foreach ($orderList as &$order) {
			unset($order['credit_card_number']);
			unset($order['expiration_time']);
			unset($order['security_code']);
			$order['create_time'] = date("F j, Y, g:i a", $order['create_time']);
			$subOrderList = M('order_sub')
				->where('order_id = ' . $order['id'])
				->select();
			
			$resultSubOrderList = [];
			
			foreach ($subOrderList as &$subOrder) {
				
				$restaurantList = M('order_goods')
					->where('`sub_order_id` = ' . $subOrder['id'])
					->field('distinct restaurant_id')
					->select();
				$subOrderCopy = $subOrder;
                $subOrderCopy['create_time'] = date("F j, Y, g:i a", $subOrderCopy['create_time']);
                
                $subOrderCopy['deliver_status'] = 
                    M('order_deliver')
                        ->where("`sub_order_id` = " . $subOrderCopy['id'])
                        ->find();
                /*
                if ($subOrderCopy['deliver_status']) {
                    $subOrderCopy['deliver_status']['driver_assigned_time'] = 
                        date("F j, Y, g:i a", $subOrderCopy['deliver_status']['driver_assigned_time']);
                    
                    $subOrderCopy['deliver_status']['driver_confirmed_time'] = 
                        date("F j, Y, g:i a", $subOrderCopy['deliver_status']['driver_confirmed_time']);
                    
                    $subOrderCopy['deliver_status']['deliver_start_time'] = 
                        date("F j, Y, g:i a", $subOrderCopy['deliver_status']['deliver_start_time']);
                    
                    $subOrderCopy['deliver_status']['deliver_complete_time'] = 
                        date("F j, Y, g:i a", $subOrderCopy['deliver_status']['deliver_complete_time']);
                }
                */

				foreach ($restaurantList as &$restaurant) {
					
					$orderGoodsList = M('order_goods')
						->where('`sub_order_id` = ' . $subOrderCopy['id'] . ' and `restaurant_id` = ' . $restaurant['restaurant_id'])
						->select();
					
					// Get restaurant
					foreach ($orderGoodsList as &$orderGoods) {
						$orderGoods['restaurant'] = M('restaurant')
							->where('id = ' . $orderGoods['restaurant_id'])
							->field(['id', 'name', 'name_en', 'img', 'deliver_type'])
							->find();
					}
					
					
					$subOrderCopy['goods'] = $orderGoodsList;
					
					$restaurantTotalGoodsPrice = 0;
					foreach ($orderGoodsList as &$orderGoods) {
						$status = M('restaurant_dish')
							->where('id = ' . $orderGoods['goods_id'])
							->find();
						if (!$status) {
							$orderGoods['goods_status'] = 0;
						} else {
							$orderGoods['goods_status'] = $status['status'];
						}
						$restaurantTotalGoodsPrice += $orderGoods['goods_price'] * $orderGoods['number'];
					}
					$restaurantTotalGoodsPricePercentage = $restaurantTotalGoodsPrice / $subOrder['goods_total_price'];
					$subOrderCopy['goods_total_price'] = '' . $subOrder['goods_total_price'] * $restaurantTotalGoodsPricePercentage;
					$subOrderCopy['total_price'] = '' . $subOrder['total_price'] * $restaurantTotalGoodsPricePercentage;
					$subOrderCopy['discont_goods_price'] = '' . $subOrder['discont_goods_price'] * $restaurantTotalGoodsPricePercentage;
					$subOrderCopy['discont_total_price'] = '' . $subOrder['discont_total_price'] * $restaurantTotalGoodsPricePercentage;
					$subOrderCopy['extra_price'] = '' . $subOrder['extra_price'] * $restaurantTotalGoodsPricePercentage;
					$subOrderCopy['sales_price'] = '' . $subOrder['sales_price'] * $restaurantTotalGoodsPricePercentage;
					$subOrderCopy['tip_price'] = '' . $subOrder['tip_price'] * $restaurantTotalGoodsPricePercentage;
					
					
					array_push($resultSubOrderList, $subOrderCopy);
				}
			}
			
			$order['sub_order_list'] = $resultSubOrderList;
		}
		
		$this->return_data($orderList);
	}
	
	/**
	 * Submit restaurant grade
	 */
	public function submit_restaurant_driver_grade () {
		$subOrderID = $this->get_param('post.sub_order_id');
		$driverStarCount = $this->get_param('post.driver_star_count');
		$driverComment = $this->get_param('post.driver_comment');
		
		$driverGrade = [
				'driver_grade' => $driverStarCount, 
				'driver_evaluate' => $driverComment,
		];
		
		$res = M('order_sub')
			->where("`id` = $subOrderID")
			->save($driverGrade);
		
		$this->return_data([]);
	}
	
	/**
	 * Get cart details
	 */
	public function get_cart_detail () {
		// get params
		$this->return_error('not implemented');
		$cartID = $this->get_param('post.cart_id');
		
		$this->return_data($this->get_cart_details ($cartID));
	}
	
	/**
	 * Submit order
	 */
	public function submit_order () {
		// get params
		$cartID = $this->get_param('post.cart_id');
		$cartDetailIDString = $this->get_param('post.cart_detail_id_string');
		$note = $this->get_param('post.note');
		$isInstantSend = $this->get_param('post.is_instant_send');
		$this->deliveryAddressID = $this->get_param('post.address_id');
		$tipPrice = 0;
		
		// Get addressData
		$addressData = M('user_address')
			->where("`id` = " . $this->deliveryAddressID)
			->find();
		$this->deliveryAddressRegionID = $addressData['region_id'];
		$categoryList = array(1=>'J', 2=>'Y', 3=>'C', 4=>'T');
		
		// Get userData
		$userData = M('user')
			->where("`id` = $this->userID")
			->find();
		
		// Get cartData
		$cartData = $this->get_cart_details ($cartID, $cartDetailIDString);
		
		//print_r($cartData);
		
		if ($cartData == null || ($cartData['cat1'] == null && $cartData['cat2'] == null 
				&& $cartData['cat3'] == null && $cartData['cat4'] == null)) {
			$this->return_error('Your cart is empty');
		}
		
		$totalGoodsPrice = 0;
		$totalDeliveryFee = 0;
        
        // Adding driver_delivery_fee
        $totalDriverDeliveryFee = 0;
		$totalExtraFee = 0;
		$totalPrice = 0;
		
		
		if ($isInstantSend == 1) {
			$cartData['cat2'] = null;
			$cartData['cat3'] = null;
			$cartData['cat4'] = null;
		} else {
			$cartData['cat1'] = null;
		}
		
        
		foreach (['1', '2', '3', '4'] as &$cat) {
			if ($cartData['cat' . $cat] != null) {
				$totalGoodsPrice += $cartData['cat' . $cat]['total_goods_price'];
				$totalExtraFee += $cartData['cat' . $cat]['total_extra_fee'];
				$totalDeliveryFee += $cartData['cat' . $cat]['total_delivery_fee'];
                
                // Adding driver_delivery_fee
                $totalDriverDeliveryFee += $cartData['cat' . $cat]['total_driver_delivery_fee'];
			} 
		}
        
		$totalSalesTax = $totalGoodsPrice * 0.07;
		$totalPrice = $totalGoodsPrice + $totalDeliveryFee + $totalExtraFee + $totalSalesTax + $tipPrice; 

		// Generate order number:
		$orderNumber = date('ymdHis').mt_rand(1000, 9999);
		
		// OrderData
		$orderData = [
				'order_number' => $orderNumber,
				'user_id' => $this->userID,
				'first_name' => $addressData['name'],
				'last_name' => '',
				'phone' => $addressData['phone'],
				'email' => $userData['email'],
				
				'address' => $addressData['address'],
				'street' => $addressData['street'],
				'city' => $addressData['city'],
				'state' => $addressData['state'],
				'zip_code' => $addressData['zip_code'],
				'region_id' => $this->deliveryAddressRegionID,
				'dregion_id' => $this->deliveryAddressRegionID,
				//'payment' => $paymentType,
				'payment' => 1,
				'is_payment' => 0,
            
				'credit_card_number' => '',
				'expiration_time' => '',
				'security_code' => '',
				'biling_address' => $addressData['address'],
				'biling_street' => $addressData['street'],
				'biling_city' => $addressData['city'],
				'biling_state' => $addressData['state'],
				'biling_zip_code' => $addressData['zip_code'],
				
				'goods_total_price' => $totalGoodsPrice,
				'total_price' => $totalPrice,
				'discont_goods_price' => $totalGoodsPrice,
				'discont_total_price' => $totalPrice,
				'deliver_price' => $totalDeliveryFee,
            
                // adding driver_delivery_fee
                'driver_deliver_price' => $totalDriverDeliveryFee,
				'extra_price' => $totalExtraFee,
				'sales_price' => $totalSalesTax,
				'tip_price' => $tipPrice,
				'create_time' => time(),
				'status' => 1,
		];
		
		
		$orderID = M('order')->add($orderData);
        
		if (!$orderID) {
            $this->return_error('Unable to add order');
		}
		
		// Generate suborder data for categories 1, 2, 3
		foreach (['1', '2', '3', '4'] as &$category) {
			
			if ($cartData['cat' . $category] == null) {
				continue;
			}
			if ($cartData['cat' . $category]['restaurant'] == null) {
				continue;
			}
			
			foreach ($cartData['cat' . $category]['restaurant'] as &$cartRestaurant) {
				
				// Get prices
				$subGoodsTotalPrice = $cartRestaurant['total_goods_price'];
				$subDeliveryFee = $cartRestaurant['delivery_price'];
                
                // Add driver_deliver_fee
                $subDriverDeliveryFee = $cartRestaurant['driver_delivery_price'];
				$subExtraFee = $cartRestaurant['extra_price'];
				$subTipPrice = $tipPrice * $subGoodsTotalPrice / $totalGoodsPrice;
				$subSalesPrice = $subGoodsTotalPrice * 0.07;
				
				$subTotalPrice = $subGoodsTotalPrice + $subDeliveryFee + $subExtraFee + $subSalesPrice + $subTipPrice;
				
				
				// Get discounted prices
				$discountedSubGoodsTotalPrice = $subGoodsTotalPrice;			
				$discountedSubTotalPrice = $subTotalPrice;
				
				//print_r($cartRestaurant);
				// SubOrder Data
				$subOrderData = [
						'order_id'                    => $orderID,
                        'restaurant_id'               => $cartRestaurant['restaurant_id'],
						'region_id'                   => $addressData['region_id'],
						'dregion_id'                  => $cartRestaurant['region_id'],
						'category'                    => $category,
						'order_number'                => $categoryList[$category].date('ymdHis').mt_rand(1000, 9999),
						'deliver_time'                => $cartRestaurant['deliver_time_id'],
						'deliver_time_value'          => $cartRestaurant['deliver_time_value'],

						//'groupon_id'                => $cartData['cat' . $category] $subCartData['groupon_id'],
						'goods_total_price'           => $subGoodsTotalPrice,
						'total_price'                 => $subTotalPrice,
						'discont_goods_price'         => $discountedSubGoodsTotalPrice,
						'discont_total_price'         => $discountedSubTotalPrice,
						'deliver_price'               => $subDeliveryFee,

                        // Add driver_deliver_fee
                        'driver_deliver_price'        => $subDriverDeliveryFee,
						'extra_price'                 => $subExtraFee,
						'sales_price'                 => $subSalesPrice,
						'tip_price'                   => $subTipPrice,
						'driver_id'                   => 0,
						'driver_grade'                => 0,
						'create_time'                 => time(),
						'create_date'                 => date('Y-m-d'),
						'is_web'                      => 2,
						'status'                      => 1,
                    
                        'fax_status'                  => 0,
                        'phone_reminded'			  => 1,
				];
                
                if ($cartRestaurant['reciver_type'] == 2) {
                    $subOrderData['fax_status'] = 1;
                }

                if ($cartRestaurant['phone_remind'] == 1) {
                    $subOrderData['phone_reminded'] = 0;
                }
                
                if ($cartRestaurant['deliver_type'] == 2) {
                    $subOrderData['driver_status'] = 20;
                }
				
				if ($category == 3) {
					$subOrderData['deliver_time'] = '0';
					$subOrderData['deliver_time_value'] = '19:00-21:00';
				} else if ($category == 4) {
					$subOrderData['groupon_id'] = $cartData['cat' . $category]['restaurant'][0]['groupon_id'];
				}
				
				//print_r($subOrderData);
				
				
				$subOrderID = M('order_sub')->add($subOrderData);
				if (!$subOrderID) {
                    $this->return_error('Cannot add sub order');
				} else {
					//echo 'success: ' . $subOrderID . ' ... ';
				}
				
				
				
				$cartDetailList = $cartRestaurant['cart_detail_list'];
				foreach ($cartDetailList as &$cartDetail) {
					//print_r($cartDetail);
					$orderGoodsData = [
						'sub_order_id' => $subOrderID,
						'restaurant_id' => $cartDetail['restaurant_id'],
						'restaurant_type' => $cartDetail['restaurant_type'],
						'goods_id' => $cartDetail['good_detail']['id'],
						'goods_name' => $cartDetail['good_detail']['name'],
						'goods_name_zh' => $cartDetail['good_detail']['name'],
						'goods_name_en' => $cartDetail['good_detail']['name_en'],
						'goods_img' => unserialize($cartDetail['good_detail']['img'])[0],
						'goods_price' => $cartDetail['total_price']/$cartDetail['number'],
						'amount' => $cartDetail['amount'],
						'groupon_goods_id' => $cartDetail['groupon_goods_id'],
						'note' => $cartDetail['note'],
						'number' => $cartDetail['number'],
						'create_time' => time(),
					];
					
					//1.3 data analysis patch
					$restaurant_info=M('restaurant')->where(array("id"=>$cartDetail['restaurant_id']))->find();
					$orderGoodsData['commission']=$restaurant_info['commission'];
					$orderGoodsData['price_mark_up']=$restaurant_info['price_mark_up'];
					$orderGoodsData['ccfee_percentage']=$restaurant_info['ccfee_percentage'];
					//
					
						
					$attributeList = '';
					$attributeZH = '';
					$attributeEN = '';
					
					
					//origin amounts order is reversed(don't know why), so reverse it here
					$amounts=explode(',', $orderGoodsData['amount']);
					
						
					$attributeData = $cartDetail['attribute_list'];
					foreach ($attributeData as $key=>&$attribute) {
						if ($attributeList == '') {
							$attributeList = $attribute['id'];
							if($attribute['amount']=='1')
							{
							    $attributeZH = $attribute['name'];
							    $attributeEN = $attribute['name_en'];
							}
							else
							{
							    $attributeZH = $attribute['name'].'×'.$attribute['amount'];
							    $attributeEN = $attribute['name_en'].'×'.$attribute['amount'];
							}
							
						} else {
							$attributeList = $attributeList . ", " . $attribute['id'];
						    if($attribute['amount']=='1')
							{
								$attributeZH = $attributeZH . ", " . $attribute['name'];
								$attributeEN = $attributeEN . ", " . $attribute['name_en'];
							}
						    else
							{
								$attributeZH = $attributeZH . ", " . $attribute['name'].'×'.$attribute['amount'];
								$attributeEN = $attributeEN . ", " . $attribute['name_en'].'×'.$attribute['amount'];
							}
						}
						
					}
						
					if ($attributeList == '') {
						$attributeList = 'NONE';
					}
					if ($attributeZH == '') {
						$attributeZH = 'NONE';
					}
					if ($attributeEN == '') {
						$attributeEN = 'NONE';
					}
					if ($orderGoodsData['note'] == '') {
						$orderGoodsData['note'] = 'N/A';
					}
					
					$orderGoodsData['attribute'] = $attributeList;
					$orderGoodsData['attributes'] = $attributeZH;
					$orderGoodsData['attributes_zh'] = $attributeZH;
					$orderGoodsData['attributes_en'] = $attributeEN;
					
					$orderGoodsDataID = M('order_goods')->add($orderGoodsData);
					
					
					if (!$orderGoodsDataID) {
						M('order_goods')->where("`sub_order_id` = $subOrderID")->delete();
						M('order_sub')->where("`id` = $subOrderID")->delete();
						M('order')->where("`id` = $orderID")->delete();
							
						$this->return_error('Cannot add order goods data');
					}
					
				}
			
			}
			
		}
		
		
		M('cart_detail')->where("`id` in ($cartDetailIDString)")->save(['cart_id' => 0]);
        $orderData = M('order')
            ->where("`id` = $orderID")
            ->find();
        $subOrderList = M('order_sub')
            ->where("`order_id` = $orderID")
            ->select();

		settype($orderID, "string");
		$this->return_data(array_merge(['order_id' => $orderID], $orderData));
	}

	/**
	 * Get order data
	 */
	public function get_order_data () {
		$orderID = $this->get_param('post.order_id');

		$orderData = M('order')
			->where("`id` = $orderID")
			->find();

		$this->return_data(array_merge(['order_id' => $orderID], $orderData));
	}

	/**
	 * Try to apply coupon
	 */
	public function apply_coupon_sn () {
		$orderID = $this->get_param('post.order_id');
		$couponSN = $this->get_param('post.coupon_sn');

		M('order')
			->where("`id` = " . $orderID)
			->save(['coupon_sn' => $couponSN]);


		if (CouponController::ValidateCouponStatus($orderID)) {
			$orderData = M('order')
				->where("`id` = " . $orderID)
				->find();
			$this->return_data(['d' => $orderData]);
		} else {
			$this->return_error('Invalid coupon');
		}
	}
    
    /**
     * Get coupon data based on coupon_sn
     */
    public function get_coupon_data () {
		$couponSN = $this->get_param('post.coupon_sn');
		$restaurantIDList = $this->get_param('post.restaurant_id_list');

		echo $restaurantIDList;
        
        $couponData = CouponController::get_coupon_detail_by_sn($couponSN, $this->userID, $restaurantIDList);
        
        if ($couponData) {
            $this->return_data($couponData);
        } else {
            $this->return_error("Invalid coupon");
        }
    }
	
	/**
	 * Confirm order
	 */
	public function confirm_order () {

		// Step1, Get params
		$orderID = $this->get_param('post.order_id');
		$paymentType = $this->get_param('post.pay_type');
		$paymentID = $this->get_param('post.payment_id');
		$tip = $this->get_param('post.tip');
		$instruction = $this->get_param('post.instruction');
        
        $creditCardFirstName = $this->get_param('post.credit_card_first_name');
		$creditCardLastName = $this->get_param('post.credit_card_last_name');
		$creditCardNumber = $this->get_param('post.credit_card_number');
		$creditCardMonth = $this->get_param('post.credit_card_month');
		$creditCardYear = $this->get_param('post.credit_card_year');
		$creditCardSecurityCode = $this->get_param('post.credit_card_security_code');
		
		
        
		// Step2-2, Get payment data
        $paymentData = [];
        if ($paymentType == 2) {
            if ($paymentID != '') {
                $paymentData = M('user_payment')
                    ->where("`id` =  $paymentID and `user_id` = $this->userID")
                    ->find();
            }
            
            if (!$paymentData) {
                $paymentData['billing_first_name'] = $creditCardFirstName;
				$paymentData['billing_last_name'] = $creditCardLastName;
				$paymentData['credit_card_number'] = $creditCardNumber;
				$paymentData['expiration_time'] = $creditCardMonth . '/' . $creditCardYear;
				$paymentData['security_code'] = $creditCardSecurityCode;
            }
        
        }
		
		// Step3, Save order data
        $orderData = M('order')
            ->where("`id` = $orderID")
            ->find();
        $totalPrice = $orderData['goods_total_price'] * 1.07 + $orderData['deliver_price']
			+ $orderData['extra_price'] + $tempDeliveryFee + $tip;
        $discountTotalPrice = $orderData['discont_goods_price'] * 1.07 + $orderData['deliver_price']
			+ $orderData['extra_price'] + $tempDeliveryFee + $tip;
        
        // Save order data
        $updatedOrderData = [
            
            'billing_first_name'                 => $paymentData['billing_first_name'],
			'billing_last_name'                  => $paymentData['billing_last_name'],
			'credit_card_number'                 => $paymentData['credit_card_number'],
			'expiration_time'                    => $paymentData['expiration_time'],
			'security_code'                      => $paymentData['security_code'],
            'payment'                            => $paymentType,
            'tip_price'                          => $tip,
            'total_price'                        => $totalPrice,
            'discont_total_price'                => $discountTotalPrice,
            'instruction'                        => $instruction,
            ];
        $updatedOrderData['create_time'] = time();

		
		$couponSN = $orderData['coupon_sn'];
        if ($paymentType == 1) {
            $updatedOrderData['is_payment'] = 1;
			$updatedOrderData['status'] = 2;
        } else {
            $updatedOrderData['is_payment'] = 0;
        }
        
        M('order')
            ->where("`id` = $orderID")
            ->save($updatedOrderData);
        $orderData = M('order')
            ->where("`id` = $orderID")
            ->find();
        $subOrderList = M('order_sub')
            ->where("`order_id` = $orderID")
            ->select();
        $userData = M('user')
            ->where("`id` = $this->userID")
            ->find();
        

        
        // Save sub order data
        if ($paymentType == 1) {
            M('order_sub')
                ->where("`order_id` = $orderID")
                ->save(['status' => 2]);
        }
        $subOrderList = M('order_sub')
            ->where("`order_id` = $orderID")
            ->select();
        $goodsTotalPrice = $orderData['goods_total_price'];
        foreach ($subOrderList as &$subOrderData) {
            $updatedSubOrderData = [
                'tip_price' => $subOrderData['goods_total_price'] / $goodsTotalPrice * $tip
                ];
            
            
            $updatedSubOrderData['total_price'] = 
                $subOrderData['goods_total_price']
                + $subOrderData['deliver_price']
                + $subOrderData['extra_price']
                + $subOrderData['sales_price']
                + $updatedSubOrderData['tip_price'];
            $updatedSubOrderData['discont_total_price'] = 
                $updatedSubOrderData['total_price'];
            $updatedSubOrderData['create_time'] = time();
            
            
            $restaurant_info = M('restaurant')->where(array("id"=>$subOrderData['restaurant_id']))->find();
            $this->createInitNotification($restaurant_info,$subOrderData);

            //print_r($updatedSubOrderData);
            $result = M('order_sub')
                ->where("`id` = " . $subOrderData['id'])
                ->save($updatedSubOrderData);
        }
        
        
        // Check for coupon status
		$couponStatus = CouponController::ValidateCouponStatus($orderID);

		
        
        if ($paymentType == 1 ) {
            if ($couponStatus == 1) {
                // First Order
                M('user')
                    ->where("`id` = $this->userID")
                    ->save(['has_made_first_order' => 1]);
            }
            
			CouponController::IncrementCouponSNUsedTimes($couponSN);
            $order = M('order')
                ->where("`id` = $orderID")
                ->find();
            
			$this->user_email_set($order, $subOrderList);
			//$this->user_email_set($order, $order['region_id']);
			$this->platform_email_set($order);
			$this->merchant_email_set($order);
        }

        //$this->return_error('test');
		$this->return_data([], 'Success');
	}

	private function createInitNotification($restaurant_info, $sub_order_info)
    {
        //如果餐馆没有ios_token，那么不写入推送表，直接返回成功，不然可能会卡住推送表，使后续推送失败
        if(!$restaurant_info['ios_token'])
            return true;
        $res1=M('restaurant_notification')->add(array("restaurant_id"=>$restaurant_info['id'], "ios_token"=>$restaurant_info['ios_token'], "title"=>"有新单/New Order", "body"=>"你有新的订单，单号".$sub_order_info['order_number']." / You have a new order, order number ".$sub_order_info['order_number'], "status"=>0, "create_time"=>time(), "target_send_time"=>time()));
        $res3=M('restaurant_notification')->add(array("restaurant_id"=>$restaurant_info['id'], "ios_token"=>$restaurant_info['ios_token'], "title"=>"5分钟未确认/5 min order not confirmed", "body"=>"你的订单".$sub_order_info['order_number']."已经下单5分钟，尚未确认，请尽快确认，如有问题，请联系FoodEasyGo客服/Your order ".$sub_order_info['order_number']." has been unconfirmed for more than 5 minutes, please confirm order ASAP, or contact us if there's a prlblem", "status"=>0, "create_time"=>time(), "target_send_time"=>(time()+300)));
        $res10= M('restaurant_notification')->add(array("restaurant_id"=>$restaurant_info['id'], "ios_token"=>$restaurant_info['ios_token'], "title"=>"10分钟未确认/10 min order not confirmed", "body"=>"你的订单".$sub_order_info['order_number']."已经下单了10分钟，请尽快送达，如有问题，请联系FoodEasyGo客服/Your order ".$sub_order_info['order_number']." has been under unconfirmed for more than 10 minutes, please confirm ASAP, or contact us if there's a prlblem", "status"=>0, "create_time"=>time(), "target_send_time"=>(time()+600)));
        // $res20= M('restaurant_notification')->add(array("restaurant_id"=>$restaurant_info['id'], "ios_token"=>$restaurant_info['ios_token'], "title"=>"120分钟未送达/120 min order not delivered", "body"=>"你的订单".$sub_order_info['order_number']."已经配送了120分钟，请尽快送达，如有问题，请联系配单经理/Your order ".$sub_order_info['order_number']." has been under delivery for more than 120 minutes, please deliver ASAP, or contact us if there's a prlblem", "status"=>0, "create_time"=>time(), "target_send_time"=>(time()+6900)));
        return $res1&&$res3&&$res10;
    }

}	
