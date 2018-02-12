<?php

namespace Appv5\Controller;
use Think\Storage;

/**
 * App API - Coupon Controller
 */
class CouponController extends BaseController {


    protected function _initialize() {
        $this->checkRegion = true;
        $this->errorCode = 16000;
        parent::_initialize();
    }
    
    

    /**
     * Get coupon detail by coupon_sn number
     */
    public static function get_coupon_detail_by_sn ($couponSN, $userID, $restaurantIDList) {
        
        // Check for coupon sn table
		$couponSNDetail = M('coupon_sn')
			->where("`sn` = '$couponSN' and " . 
					"`status` = 0 and " .
					"`used_times` < `usable_times` and " .
					"(`user_id` = $userID or `reusable` = 1)")
            ->find();
        if (!$couponSNDetail) {
            return null;
        }

        // Check for coupon table
        $couponDetail = M('coupon')
			->where("`id` = " . $couponSNDetail['coupon_id'] . ' and endtime > now()')
			->find();
        if (!$couponDetail) {
            return null;
        }
        
		// Check if restaurant id match
		if ($couponDetail['restaurant_id'] != 0 && strpos($restaurantIDList, $couponDetail['restaurant_id']) == false) {
            return null;
		}

        $couponStatus = CouponController::ValidateCouponStatus($couponSNDetail);
        
        if ($couponStatus['c'] != 0) {
            return null;
        }
        
        return $couponDetail;
    }

    /**
     * Revert all discounts
     */
    public static function RevertAllCouponDiscounts($orderID) {
        //echo ' rever all discounts';
        $orderData = M('order')
            ->where("`id` = $orderID")
            ->find();
        $subOrderList = M('order_sub')
            ->where("`order_id` = $orderID")
            ->select();
            
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
                'discont_goods_price'       => $subOrderData['goods_total_price'],
                'deliver_price'             => $deliverFee,
                ];
            $updatedSubOrderData['sales_price'] = 
                $updatedSubOrderData['discont_goods_price'] * 0.07;
            $updatedSubOrderData['total_price'] = 
                $updatedSubOrderData['discont_goods_price'] + 
                $subOrderData['extra_price'] +
                $deliverFee +
                $updatedSubOrderData['sales_price'] +
                $subOrderData['tip_price'];
            $updatedSubOrderData['discont_total_price'] = 
                $updatedSubOrderData['total_price'];
                
            M('order_sub')
                ->where("`id` = " . $subOrderData['id'])
                ->save($updatedSubOrderData);
		}
        
        $updatedOrderData = [
            'discont_goods_price'           => $orderData['goods_total_price'],
            'discont_total_prices'          => $orderData['total_price'],
            'deliver_price'                 => $totalDeliverFee,
            'sales_price'                   => $orderData['goods_total_price'] * 0.07,
            'coupon_sn'                     => '',
            ];
        
        M('order')
            ->where("`id` = $orderID")
            ->save($updatedOrderData);
            
    }
	
    /**
     * Validate current coupon
     */
    public static function ValidateCouponStatus($orderID, $finalValidation = false) {
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
        
        if (CouponController::CheckForFirstOrder($orderData, $subOrderList, $userData, $finalValidation)) {
            return 1;
        }
        
        if (CouponController::CheckForCoupon($orderData, $subOrderList, $userData, $finalValidation)) {
            return 2;
        }
        
        CouponController::RevertAllCouponDiscounts($orderID);
        return 0;
    }
    
    /**
     * Check if order is valid for first order discont
     * ********************************************************
     * NOTE!!! WILL OVERRIDE ALL COUPON AND DISCOUNT PRICES!!!!
     * ********************************************************
     */
    private static function CheckForFirstOrder($orderData, $subOrderList, $userData, $finalValidation = false) {
        if (!$orderData || !$subOrderList || !$userData) {
            return false;
        }
        
        
        if ($userData['has_made_first_order'] == "0") {
            //echo 'first order';
            CouponController::RevertAllCouponDiscounts($orderData['id']);
            
			$highestDeliverySubOrder  = null;
			$highestDeliveryFee = 0;
            $totalDeliverPrice = 0;
            
			foreach ($subOrderList as &$subOrderData) {
				if ($subOrderData['deliver_price'] > $highestDeliveryFee) {
                    $highestDeliveryFee = $subOrderData['deliver_price'];
                    $highestDeliverySubOrder = $subOrderData;
				}
                $totalDeliverPrice += $subOrderData['deliver_price'];
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
            
            if ($finalValidation) {
                M('user')
                    ->where("`id` = " . $userData['id'])
                    ->save(['has_made_first_order' => 1]);
            }
            
            return true;
		} else {
            return false;
        }
    }
    
    /**
     * Check if order's coupon is still valid
     * ********************************************************
     * NOTE!!! WILL OVERRIDE ALL COUPON AND DISCOUNT PRICES!!!!
     * ********************************************************
     */
    private static function CheckForCoupon($orderData, $subOrderList, $userData, $finalValidation = false) {
        //echo 'CheckForCoupon</br>';
        $couponSN = $orderData['coupon_sn'];
        if ($couponSN == null || $couponSN == '' || $couponSN == 'First Order') {
            return false;
		}
		
        $restaurantIDList = CouponController::GetSubOrderRestaurantList($subOrderList);
        $couponDetail = CouponController::get_coupon_detail_by_sn($couponSN, $userData['id'], $restaurantIDList);

        if (!$couponDetail) {
            //echo 'no discount, revert all discounts';
            CouponController::RevertAllCouponDiscounts($orderData['id']);
            return false;
        }


		if ($couponDetail['type'] == 1) {
            // echo 'coupon type 1, discount coupon'

            // discount
            $couponRestaurantID = $couponDetail['restaurant_id'];
            $discount = $couponDetail['discont'] / 10;
            $totalDeliverFee = 0;
            $totalOrderDiscontGoodsPrice=0;
            
            // update sub order data
            foreach ($subOrderList as &$subOrderData) {
                $restaurantID = $subOrderData['restaurant_id'];
                $currentDiscount = $discount;
                if ($couponRestaurantID != 0 && $restaurantID != $couponRestaurantID) {
                    $currentDiscount = 1;
                }

                // var_dump($restaurantID) ;
                // var_dump($couponRestaurantID) ;
                // var_dump($currentDiscount) ;

                
                $currentDeliverPrice = M('restaurant_deliver_fee')
                    ->where("`restaurant_id` = $restaurantID " . 
                             " and `region_id` = " . $subOrderData['region_id'])
                    ->find();
                
                // Recalculate deliver fee
                $deliverFee = $currentDeliverPrice['deliver_fee'];
                $totalDeliverFee += $deliverFee;
                
                $updatedSubOrderData = [
                    'discont_goods_price'       => $subOrderData['goods_total_price'] * $currentDiscount,
                    'deliver_price'             => $deliverFee,
                    ];
                


                $updatedSubOrderData['sales_price'] = 
                    $subOrderData['goods_total_price'] * 0.07;
                $updatedSubOrderData['discont_total_price'] = 
                    $updatedSubOrderData['discont_goods_price'] + 
                    $subOrderData['extra_price'] +
                    $deliverFee +
                    $updatedSubOrderData['sales_price'] +
                    $subOrderData['tip_price'];
                $totalOrderDiscontGoodsPrice+=$updatedSubOrderData['discont_goods_price'];
    
                M('order_sub')
                    ->where("`id` = " . $subOrderData['id'])
                    ->save($updatedSubOrderData);
                //print_r($updatedSubOrderData);
			}
            
            $updatedOrderData = [
                'discont_goods_price'           => $totalOrderDiscontGoodsPrice,//$orderData['goods_total_price'] * $currentDiscount,
                'deliver_price'                 => $totalDeliverFee,
                ];
            $updatedOrderData['sales_price'] = 
                $orderData['goods_total_price'] * 0.07;
            $updatedOrderData['discont_total_price'] =
                $updatedOrderData['discont_goods_price'] +
                $orderData['extra_price'] + 
                $totalDeliverFee + 
                $updatedOrderData['sales_price'] +
                $orderData['tip_price'];

            M('order')
                ->where("`id` = " . $orderData['id'])
                ->save($updatedOrderData);
            
            if ($finalValidation) {
                M('coupon_sn')
                    ->where("`sn` = '$couponSN'")
                    ->save(['status' => 1]);
            }
            
            return true;

        } else if ($couponDetail['type'] == 2) {
            // echo 'coupon type 2, free delivery coupon';
            // free delivery
            $couponRestaurantID = $couponDetail['restaurant_id'];
            $totalDeliverFee = 0;
            foreach ($subOrderList as &$subOrderData) {
                $restaurantID = $subOrderData['restaurant_id'];
                $currentDeliverPrice = M('restaurant_deliver_fee')
                    ->where("`restaurant_id` = $restaurantID " . 
                             " and `region_id` = " . $subOrderData['region_id'])
                    ->find();
                
                // Recalculate deliver fee
                $deliverFee = $currentDeliverPrice['deliver_fee'];
                if ($restaurantID == $couponRestaurantID) {
                    $deliverFee = 0;
                }

                $totalDeliverFee += $deliverFee;

                $updatedSubOrderData = [
                    'discont_goods_price'      => $subOrderData['goods_total_price'],
                    'deliver_price'             => $deliverFee,
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
            
            if ($finalValidation) {
                M('coupon_sn')
                    ->where("`sn` = '$couponSN'")
                    ->save(['status' => 1]);
            }
            
            return true;
        } else {
            //echo 'no discount, revert all discounts';
            CouponController::RevertAllCouponDiscounts($orderData['id']);
            return false;
        }
    }
	
	public static function GetSubOrderRestaurantList($subOrderList) {
        $restaurantIDList = "(";
		foreach ($subOrderList as $subOrder) {
			if ($restaurantIDList == "(") {
				$restaurantIDList = $restaurantIDList . $subOrder['restaurant_id'];
			} else {
				$restaurantIDList = $restaurantIDList . "," . $subOrder['restaurant_id'];
			}
		}
        $restaurantIDList = $restaurantIDList . ")";
        
        return $restaurantIDList;
    }

    public static function IncrementCouponSNUsedTimes($couponSN) {
        $couponSNData = M('coupon_sn')
            ->where("`sn` = '$couponSN'")
            ->find();
        
        $saveData = ['used_times' => $couponSNData['used_times'] + 1];
        if ($couponSNData['used_times'] + 1 >= $couponSNData['usable_times']) {
            $saveData['status'] = 1;
        }
        
        $couponSNData = M('coupon_sn')
            ->where("`sn` = '$couponSN'")
            ->save($saveData);
    }
}