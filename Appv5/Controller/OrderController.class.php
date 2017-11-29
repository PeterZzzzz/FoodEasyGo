<?php

namespace Appv5\Controller;
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
			$restaurantList[$i]['deliver_fee'] = $this->get_restaurant_deliver_fee($restaurantList[$i]['restaurant_id'], $this->deliveryAddressRegionID);
            
            // Adding driver_deliver_fee
            $restaurantList[$i]['driver_deliver_fee'] = $this->get_restaurant_driver_deliver_fee($restaurantList[$i]['restaurant_id'], $this->deliveryAddressRegionID);
            
			$totalDeliveryPrice += $restaurantList[$i]['deliver_fee'];
			// Get extra fee
			$restaurantDetail =  M('restaurant')->where('`id`=' . $restaurantList[$i]['restaurant_id'])->find();
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
			->limit(1)
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
						'order_id' => $orderID,
						'region_id' => $addressData['region_id'],
						'dregion_id' => $cartRestaurant['region_id'],
						'category' => $category,
						'order_number' => $categoryList[$category].date('ymdHis').mt_rand(1000, 9999),
						'deliver_time' => $cartRestaurant['deliver_time_id'],
						'deliver_time_value' => $cartRestaurant['deliver_time_value'],

						//'groupon_id' => $cartData['cat' . $category] $subCartData['groupon_id'],
						'goods_total_price' => $subGoodsTotalPrice,
						'total_price' => $subTotalPrice,
						'discont_goods_price' => $discountedSubGoodsTotalPrice,
						'discont_total_price' => $discountedSubTotalPrice,
						'deliver_price' => $subDeliveryFee,

                        // Add driver_deliver_fee
                        'driver_deliver_price' => $subDriverDeliveryFee,
						'extra_price' => $subExtraFee,
						'sales_price' => $subSalesPrice,
						'tip_price' => $subTipPrice,
						'driver_id' => 0,
						'driver_grade' => 0,
						'create_time' => time(),
						'create_date' => date('Y-m-d'),
						'is_web'      => 2,
						'status'      => 1,
				];
				
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
					$amounts=array_reverse($amounts);
					$orderGoodsData['amount']=implode(',', $amounts);
						
					$attributeData = $cartDetail['attribute_list'];
					foreach ($attributeData as $key=>&$attribute) {
						if ($attributeList == '') {
							$attributeList = $attribute['id'];
							if($amounts[$key]=='1')
							{
							    $attributeZH = $attribute['name'];
							    $attributeEN = $attribute['name_en'];
							}
							else
							{
							    $attributeZH = $attribute['name'].'×'.$amounts[$key];
							    $attributeEN = $attribute['name_en'].'×'.$amounts[$key];
							}
							
						} else {
							$attributeList = $attributeList . ", " . $attribute['id'];
						    if($amounts[$key]=='1')
							{
								$attributeZH = $attributeZH . ", " . $attribute['name'];
								$attributeEN = $attributeEN . ", " . $attribute['name_en'];
							}
						    else
							{
								$attributeZH = $attributeZH . ", " . $attribute['name'].'×'.$amounts[$key];
								$attributeEN = $attributeEN . ", " . $attribute['name_en'].'×'.$amounts[$key];
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
        
        //if (OrderController::CheckForFirstOrder($orderData, $subOrderList, $userData)) {
        //    $orderData = M('order')
        //        ->where("`id` = $orderID")
        //        ->find();
        //}

		settype($orderID, "string");
		$this->return_data(array_merge(['order_id' => $orderID], $orderData));
	}
	
    public function get_coupon_data () {
        $couponSN = $this->get_param('post.coupon_sn');
        $couponSNDetail = M('coupon_sn')
            ->where("`sn` = '$couponSN'")
            ->find();
        
        if (!$couponSNDetail || $couponSNDetail['status'] == 1) {
            $this->return_error("Invalid coupon");
        }
        
        $couponDetail = M('coupon')
            ->where("`id` = " . $couponSNDetail['coupon_id'])
            ->find();
        
        $this->return_data($couponDetail);
            
    }
    
    
	/**
	 * Get coupon detail by coupon_sn id
	 */
	public static function get_coupon_detail_by_snid ($couponID, $userID) {
		
		$couponSNDetail = M('coupon_sn')
			->where("`coupon_id` = $couponID and `user_id` in ($userID, 999999, 0)")
			->find();
        
        $couponStatus = OrderController::check_for_coupon($couponSNDetail);
        
        if ($couponStatus['c'] != 0) {
            return null;
        }
        
        return $couponStatus['d'];
    }
    
    /**
     * Get coupon detail by coupon_sn number
     */
    public static function get_coupon_detail_by_sn ($couponSN, $userID) {
		
		$couponSNDetail = M('coupon_sn')
			->where("`sn` = '$couponSN' and `user_id` in ($userID, 999999, 0)")
			->find();
        
        $couponStatus = OrderController::check_for_coupon($couponSNDetail);
        
        if ($couponStatus['c'] != 0) {
            return null;
        }
        
        return $couponStatus['d'];
    }
    
    /**
     * Check if coupon is valid
     */
    public static function check_for_coupon ($couponSNDetail) {
		
        // Check if couponSN exist
		if (!$couponSNDetail) {
            return ['c' => 1, 'm' => 'Invalid coupon 1'];
		}
        
        // Check if coupon exist
        $couponDetail = M('coupon')
			->where("`id` = " . $couponSNDetail['coupon_id'] . ' and endtime > now()')
			->find();
        
        if (!$couponDetail) {
            return ['c' => 1, 'm' => 'Invalid coupon 2'];
		}
		
        // Check if coupon reusable
		if ($couponSNDetail['status'] == 1) {
            return ['c' => 1, 'm' => 'Invalid coupon 3'];
		}
        
        $couponDetail['sn'] = $couponSNDetail;
        
		
        return ['c' => 0, 'd' => $couponDetail];
	}
    
	
    /**
     * 
     */
    public static function CheckCouponStatus($orderID) {
        // Get orderData
        $orderData = M('order')
            ->where("`id` = $orderID")
            ->find();
        
        // Get subOrderData
        $subOrderList = M('order_sub')
			->where("`order_id` = $orderID")
			->select();
        
        // Get userData
        $userData = M('user')
            ->where("`id` = " . $orderData['user_id'])
            ->find();
        
        if (OrderController::CheckForFirstOrder($orderData, $subOrderList, $userData)) {
            return 1;
        }
        
        if (OrderController::CheckForCoupon($orderData, $subOrderList, $userData)) {
            return 2;
        }
        
        return 0;
    }
    
    /**
     * Check if order is valid for first order discont
     * ********************************************************
     * NOTE!!! WILL OVERRIDE ALL COUPON AND DISCOUNT PRICES!!!!
     * ********************************************************
     */
    private static function CheckForFirstOrder($orderData, $subOrderList, $userData) {

        if (!$orderData || !$subOrderList || !$userData) {
            return false;
        }
        
        if ($userData['has_made_first_order'] == "0") {
            
			$highestDeliverySubOrder  = null;
			$highestDeliveryFee = 0;
            $totalDeliverPrice = 0;
            
			foreach ($subOrderList as &$subOrderData) {
				if ($subOrderData['deliver_price'] > $highestDeliveryFee) {
                    $highestDeliveryFee = $subOrderData['deliver_price'];
                    $highestDeliverySubOrder = $subOrderData;
				}
                $totalDeliverPrice += $subOrderData['deliver_price'];
                
                
                //$currentDeliverPrice = M('restaurant_deliver_fee')
                //    ->where("`restaurant_id` = " . $subOrderData['dregion_id'] .
                //             " and `region_id` = " . $subOrderData['region_id'])
                //    ->find();
                //
                //if (!$currentDeliverPrice) {
                //    echo "couldn't find deliver price";
                //}
                //else {   
                //    $totalDeliverPrice += $currentDeliverPrice['deliver_fee'];
                //    print_r($currentDeliverPrice);
                //}
			}
			
            //echo 'highest deliver = ' . $highestDeliveryFee;
            // Update order data
			$updatedOrderData = [
                'coupon_sn'                     => 'First Order',
                'discont_goods_price'           => $orderData['goods_total_price'],
                'discont_total_price'           => $orderData['total_price'] - $highestDeliveryFee,
                'deliver_price'                 => $totalDeliverPrice - $highestDeliveryFee,
                ];
            $updatedOrderData['sales_price'] = $updatedOrderData['discont_goods_price'] * 0.07;
            M('order')
                ->where("`id` = " . $orderData['id'])
                ->save($updatedOrderData);
            
            // Update sub order data
            $updatedSubOrderData = [
                'discont_goods_price'           => $highestDeliverySubOrder['goods_total_price'],
                'discont_total_price'           => $highestDeliverySubOrder['total_price'] - $highestDeliveryFee,
                'deliver_price'                 => 0,
                ];
            $updatedSubOrderData['sales_price'] = $updatedSubOrderData['discont_goods_price'] * 0.07;
            M('order_sub')
                ->where("`id` = " . $highestDeliverySubOrder['id'])
                ->save($updatedSubOrderData);
            
            return true;
		} else {
            
            M('order')
                ->where("`id` = " . $orderData['id'])
                ->save(['coupon_sn' => '']);
            return false;
        }
    }
    
    /**
     * Check if order's coupon is still valid
     * ********************************************************
     * NOTE!!! WILL OVERRIDE ALL COUPON AND DISCOUNT PRICES!!!!
     * ********************************************************
     */
    private static function CheckForCoupon($orderData, $subOrderList, $userData) {
        $couponSN = $orderData['coupon_sn'];
        if ($couponSN == null || $couponSN == '') {
            return false;
        }
        
        $couponDetail = OrderController::get_coupon_detail_by_sn($couponSN, $userData['id']);
        
        $discount = 1;
        $deliveryFee = $orderData['deliver_price'];
		if ($couponDetail['type'] == 1) {
            // discount
            $discount = $couponDetail['discont'] / 10;
            $totalDeliverFee = 0;
            
            // update sub order data
            foreach ($subOrderList as &$subOrderData) {
                $dishData = M('order_goods')
                    ->where("`sub_order_id` = " . $subOrderData['id'])
                    ->select();
                $restaurantID = $dishData[0]['restaurant_id'];
                $currentDeliverPrice = M('restaurant_deliver_fee')
                    ->where("`restaurant_id` = $restaurantID " . 
                             " and `region_id` = " . $subOrderData['region_id'])
                    ->find();
                
                // Recalculate deliver fee
                $deliverFee = $currentDeliverPrice['deliver_fee'];
                
                $totalDeliverFee += $deliverFee;
                
                $updatedSubOrderData = [
                    'discont_goods_price'       => $subOrderData['goods_total_price'] * $discount,
                    'deliver_price'             => $deliverFee,
                    ];
                $updatedSubOrderData['sales_price'] = 
                    $updatedSubOrderData['discont_goods_price'] * 0.07;
                $updatedSubOrderData['discont_total_price'] = 
                    $updatedSubOrderData['discont_goods_price'] + 
                    $subOrderData['extra_price'] +
                    $deliverFee +
                    $updatedSubOrderData['sales_price'] +
                    $subOrderData['tip_price'];
                    
                M('order_sub')
                    ->where("`id` = " . $subOrderData['id'])
                    ->save($updatedSubOrderData);
			}
            
            $updatedOrderData = [
                'discont_goods_price'           => $orderData['goods_total_price'] * $discount,
                'deliver_price'                 => $totalDeliverFee,
                ];
            $updatedOrderData['sales_price'] = 
                $updatedOrderData['discont_goods_price'] * 0.07;
            $updatedOrderData['discont_total_price'] =
                $updatedOrderData['discont_goods_price'] +
                $orderData['extra_price'] + 
                $totalDeliverFee + 
                $updatedOrderData['sales_price'] +
                $orderData['tip_price'];
            
            M('order')
                ->where("`id` = " . $orderData['id'])
                ->save($updatedOrderData);
            
            return true;
        } 
        else if ($couponDetail['type'] == 2) {
            // free delivery
            foreach ($subOrderList as &$subOrderData) {
                $updatedSubOrderData = [
                    'discont_goods_price'      => $subOrderData['goods_total_price'],
                    'deliver_price'             => 0,
                    ];
                $updatedSubOrderData['sales_price'] = 
                    $updatedSubOrderData['discont_goods_price'] * 0.07;
                $updatedSubOrderData['discont_total_price'] = 
                    $updatedSubOrderData['discont_goods_price'] + 
                    $subOrderData['extra_price'] +
                    $updatedSubOrderData['sales_price'] +
                    $subOrderData['tip_price'];
                
                M('order_sub')
                    ->where("`id` = " . $subOrderData['id'])
                    ->save($updatedSubOrderData);
            }
            
            $updatedOrderData = [
                'discont_goods_price'           => $orderData['goods_total_price'],
                'deliver_price'                 => 0,
                ];
            $updatedOrderData['sales_price'] = 
                $updatedOrderData['discont_goods_price'] * 0.07;
            $updatedOrderData['discont_total_price'] =
                $updatedOrderData['discont_goods_price'] +
                $orderData['extra_price'] + 
                $updatedOrderData['sales_price'] +
                $orderData['tip_price'];
            
            M('order')
                ->where("`id` = " . $orderData['id'])
                ->save($updatedOrderData);
            
            return true;
        } 
        else {
        
            M('order')
                ->where("`id` = " . $orderData['id'])
                ->save(['coupon_sn' => '']);
            return false;
        }
    }
    
	
	/**
	 * Confirm order
	 */
	public function confirm_order () {
		$orderID = $this->get_param('post.order_id');
		$paymentType = $this->get_param('post.pay_type');
		$paymentID = $this->get_param('post.payment_id');
		$tip = $this->get_param('post.tip');
        $couponSN = $this->get_param('post.coupon_sn');
        
        $creditCardFirstName = $this->get_param('post.credit_card_first_name');
		$creditCardLastName = $this->get_param('post.credit_card_last_name');
		$creditCardNumber = $this->get_param('post.credit_card_number');
		$creditCardMonth = $this->get_param('post.credit_card_month');
		$creditCardYear = $this->get_param('post.credit_card_year');
		$creditCardSecurityCode = $this->get_param('post.credit_card_security_code');
		
        
        
        $couponSNDetail = OrderController::get_coupon_detail_by_sn($couponSN, $this->userID);
        $couponSN = $couponSNDetail['sn']['sn'];
        
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
            
            'coupon_sn'                          => $couponSN,
            
            'tip_price'                          => $tip,
            'total_price'                        => $totalPrice,
            'discont_total_price'                => $discountTotalPrice,
            ];
        
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
        
        OrderController::CheckForCoupon($orderData, $subOrderList, $userData);
        
        
        

        
        
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
            
            
            
            /*
            $updatedSubOrderData['total_price'] = 
                $subOrderData['total_price'] + $updatedSubOrderData['tip_price'];
            $updatedSubOrderData['discont_total_price'] = 
                $subOrderData['discont_total_price'] + $updatedSubOrderData['tip_price'];
            */
            //print_r($updatedSubOrderData);
            $result = M('order_sub')
                ->where("`id` = " . $subOrderData['id'])
                ->save($updatedSubOrderData);
        }
        
        // Check for coupon status
        $couponStatus = OrderController::CheckCouponStatus($orderID);
        
        if ($paymentType == 1 ) {
            if ($couponStatus == 1) {
                // First Order
                M('user')
                    ->where("`id` = $this->userID")
                    ->save(['has_made_first_order' => 1]);
            } else if ($couponStatus == 2) {
                if ($couponSNDetail['reusable'] == 0) {
                    M('coupon_sn')
                        ->where("`sn` = '$couponSN'")
                        ->save(['status' => 1]);
                }
            }
            
            $order = M('order')
                ->where("`id` = $orderID")
                ->find();
            
			$this->user_email_set($order, $subOrderList);
			//$this->user_email_set($order, $order['region_id']);
			$this->platform_email_set($order);
			$this->merchant_email_set($order);
        }
        
		$this->return_data([], 'Success');
	}

}	
