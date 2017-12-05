<?php

namespace Appv5\Controller;
use Think\Storage;

/**
 * App API - Order Controller
 * 		user orders related
 */
class StripePaymentController extends BaseController {

	/**
	 * Initialization
	 */
	protected function _initialize () {
	}

	public function get_order_status () {
		
		$orderID = $this->get_param('post.order_id');
		$order = M('order')->where("`id` = $orderID")->find();
		$subOrderList = M('order_sub')->where("`order_id` = $orderID")->field("`order_number`")->select();
        
		if (!$order) {
			$this->return_error('Invalid order id');
		//} else if ($order['status'] == 2) {
		} else {
			$this->return_data(['status' => $order['status'], 'sub_order_number' => $subOrderList]);
		}
	}

	public function order_pay_page () {
		$orderID = $this->get_param('get.order_id');
		$order = M('order')->where("`id` = $orderID")->find();
		
		if (!$order) {
			echo 'Invalid order id';
			exit ();
		} else if (time() - $order['create_time'] > 300) {
			echo 'Order timed out';
			exit ();
		} else if ($order['status'] == 2) {
			echo 'Order is already complete';
			exit ();
		}
		
		$this->assign('data', $order);
		$this->display('./Application/Appv5/View/Order/orderpay.html');
	}
	
	/**
	 * Pay order
	 */
	public function order_pay () {
	
		//$stripeToken = $this->get_param('post.stripe_token');
		$orderID = $this->get_param('post.order_id');
		$token = $this->get_param('post.token');
		$credit_card_number = $this->get_param('post.credit_card_number');
		$security_code = $this->get_param('post.security_code');
		$expiration_time = $this->get_param('post.expiration_time');
		
	
        OrderController::CheckCouponStatus($orderID);
		$order = M('order')
            ->where("`id` = $orderID")
            ->find();
        
        
	
		if(IS_POST) {
			$re_data = array();
				
			if(!$orderID) {
				$this->return_error('Missing order id');
			}
			
			M('order')
                ->where("`id` = $orderID")
                ->save([
                    'credit_card_number'=>$credit_card_number, 
                    'security_code'=>$security_code, 
                    'expiration_time'=>$expiration_time]);
            
            
			if($token) {
	
				require_once(VENDOR_PATH . 'stripe/init.php');
				\Stripe\Stripe::setApiKey(C('STRIPE_API_KEY'));
	
				try {
					$charge = \Stripe\Charge::create(array(
							"amount" => round($order['discont_total_price'] * 100), // amount in cents, again
							"currency" => "usd",
							"source" => $token,
							"description" => "FoodEasyGo Order"
					));
						
					if('succeeded' == $charge->status) {
						
						$this->targetRegionID = $order['dregion_id'];
						
                        // Update order data
						M('order')
                            ->where("`id` = $orderID")
                            ->save([
                                'is_payment'=>1, 'status'=>2, 
                                'credit_card_number'=>$order['id']]);
                        
                        // Update order sub data
						M('order_sub')
                            ->where("`order_id` = $orderID")
                            ->save(['status'=>2]);
                        
                        // Update coupon data
                        $couponSN = $order['coupon_sn'];
                        if ($couponSN == 'First Order') {
                            M('user')
                                ->where("`id` = " . $order['user_id'])
                                ->save(['has_made_first_order' => 1]);
                        } else {
                            $couponSNDetail = M('coupon_sn')
                                ->where("`sn` = '$couponSN'")
                                ->find();
                            if ($couponSNDetail['reusable'] == 0) {
                                M('coupon_sn')
                                    ->where("`sn` = '$couponSN'")
                                    ->save(['status' => 1]);
                            }
                        }
                        
                        // Send emails
						$subOrderList = M('order_sub')
                            ->where("`order_id` = $orderID")
                            ->select();
                        $sub_order_numbers = "";
						if(array_filter($subOrderList)) {
							foreach ($subOrderList as $sub_order) {
								M('order_goods')
                                    ->where('`sub_order_id`='.$sub_order['id'])
                                    ->save(['status'=>2]);
                                if ($sub_order_numbers == "") {
                                    $sub_order_numbers = $sub_order['order_number'];
                                } else {
                                    $sub_order_numbers = $sub_order_numbers . ", " . $sub_order['order_number'];
                                }
							}
						}
                        
                        
                        
						$this->user_email_set($order, $subOrderList);
						$this->platform_email_set($order);
						$this->merchant_email_set($order);
						
						$re_data['code'] = 1;
					} else {
						$re_data['message'] = 'Payment Error';
					}
				} catch (\Stripe\Error\Card $e) {
					$re_data['message'] = $e->getMessage();
				}
			} else {
				$re_data['message'] = 'Operation failed';
			}
	
			//$re_data['message'] = 'haha';
			echo json_encode($re_data);
			exit();
		}
	}
    
    
    /**
	 * Pay order Test
	 */
	/*
    public function order_pay_test () {
	
		//$stripeToken = $this->get_param('post.stripe_token');
		$orderID = $this->get_param('get.order_id');
		$token = $this->get_param('post.token');
		$credit_card_number = $this->get_param('post.credit_card_number');
		$security_code = $this->get_param('post.security_code');
		$expiration_time = $this->get_param('post.expiration_time');
		
	
        OrderController::CheckCouponStatus($orderID);
		$order = M('order')
            ->where("`id` = $orderID")
            ->find();
        
        
	
		$re_data = array();
			
		if(!$orderID) {
			$this->return_error('Missing order id');
		}
		
		M('order')
            ->where("`id` = $orderID")
            ->save([
                'credit_card_number'=>$credit_card_number, 
                'security_code'=>$security_code, 
                'expiration_time'=>$expiration_time]);
        
        

				
			
		$this->targetRegionID = $order['dregion_id'];
		
        // Update order data
		M('order')
            ->where("`id` = $orderID")
            ->save([
                'is_payment'=>1, 'status'=>2, 
                'credit_card_number'=>$order['id']]);
        
        // Update order sub data
		M('order_sub')
            ->where("`order_id` = $orderID")
            ->save(['status'=>2]);
        
        // Update coupon data
        $couponSN = $order['coupon_sn'];
        if ($couponSN == 'First Order') {
            M('user')
                ->where("`id` = " . $order['user_id'])
                ->save(['has_made_first_order' => 1]);
        } else {
            $couponSNDetail = M('coupon_sn')
                ->where("`sn` = '$couponSN'")
                ->find();
            if ($couponSNDetail['reusable'] == 0) {
                M('coupon_sn')
                    ->where("`sn` = '$couponSN'")
                    ->save(['status' => 1]);
            }
        }
        
        // Send emails
		$sub_orders = M('order_sub')
            ->where("`order_id` = $orderID")
            ->field('`id`, `dregion_id`')
            ->select();
        $sub_order_numbers = "";
		if(array_filter($sub_orders)) {
			foreach ($sub_orders as $sub_order) {
				M('order_goods')
                    ->where('`sub_order_id`='.$sub_order['id'])
                    ->save(['status'=>2]);
                if ($sub_order_numbers == "") {
                    $sub_order_numbers = $sub_order['order_number'];
                } else {
                    $sub_order_numbers = $sub_order_numbers . ", " . $sub_order['order_number'];
                }
			}
		}
        
        
        
		$this->user_email_set($order, $sub_orders[0]['dregion_id'], $sub_order_numbers);
		$this->platform_email_set($order);
		$this->merchant_email_set($order);
		
		$re_data['code'] = 1;

        
	
		//$re_data['message'] = 'haha';
		echo json_encode($re_data);
		exit();
		
	}
    */
}