<?php

namespace Appv5\Controller;
use Think\Controller;

/**
 * Base API class
 */
class BaseController extends Controller {
	
	// Region
	protected $zipCode = 0;
	protected $regionID = 0;		// used to get target region id only
	
	protected $targetRegionID = 0;	// the target region id that is used everywhere
	protected $targetRegionInfo;
	
	protected $supportedRegionInfo;
	protected $supportedRegionList;
	
	
	// UserData
	protected $userID = 0;
	protected $accessToken = '';
	
	// flags
	protected $forceToken = true;
	protected $checkRegion = false;
	
	// Others
	protected $language = 'en';
	protected $errorCode = 10000;
	protected $humanReadable = 0;
	
	/**
	 * Initialization
	 */
	protected function _initialize () {
		// All API calls are required to use post
		$this->check_is_post ();
		
		// Get common parameters
		$this->language = $this->get_param ('post.lan');
		$this->zipCode = $this->get_param ('post.zip_code');
		$this->regionID = $this->get_param ('post.region_id');
		$this->userID = $this->get_param ('post.user_id');
		$this->accessToken = $this->get_param ('post.access_token');
		$this->humanReadable = $this->get_param ('post.human_readable');
		$this->targetRegionID = $this->get_param ('post.target_region_id');
		
		// check if site is open
		$basics = M('basics')
			->field(["`background_img`, `webopen`, `close_title_en`, `close_words_en`, `close_title_zh`, `close_words_zh`"])
			->find();
		if (!$basics['webopen']) {
			$this->return_error_code ($this->errorCode, json_encode($basics, JSON_UNESCAPED_UNICODE));
		}
		
		// check if access token is valid
		if ($this->forceToken) {
			$this->verify_access_token ();
		}
		
		// check if need to get region details
		if ($this->checkRegion) {
			$this->get_target_region_info ();
		}
	}
	
	/**
	 * Verify if access token provided is still valid
	 */
	protected function verify_access_token () {
		$accessToken = $this->accessToken;
		$res = M('access_token')
			->where("`user_id` = $this->userID and `token` = '$accessToken' and `create_time` > " . (time() - C('ACCESS_TOKEN_VALID_TIME_IN_SEC') * 24))
			->field(['`id`'])->find();
		
		if (!$res) {
			$this->return_error_code ('10000', 'Invalid Access Token: ' . $accessToken);
		}
	}
	
	/**
	 * Get target region info
	 */
	protected function get_target_region_info () {
		
		/*
		if ($this->regionID == "") {
			$this->return_error_code($this->errorCode, 'Missing user region id');
		}
		*/
		
		if ($this->targetRegionID == "") {
			$this->return_error_code($this->errorCode, 'Missing target region id');
		}
		
		$res = M('restaurant_deliver_fee')
			->where("`region_id` = $this->targetRegionID")
			->select();
		/*
		$res = M('region')
			->where("`id` = $this->targetRegionID and status = 1")
			->find();
		*/
		$this->targetRegionInfo = $res;
		/*
		if (!is_array($res)) {
			$this->return_error_code($this->errorCode, 'This region is not open yet');
		} else {
			$res['fee'] = M('region_link')
				->where("`o_id` = $this->targetRegionID and `region_id` = $this->regionID")
				->find ();
			$res['fee'] = $res['fee']['fee'];
			
			$this->targetRegionInfo = $res;
		}
		*/
	}
	
	protected function get_restaurant_deliver_fee ($restaurantID, $addressRegionID) {
		if ($addressRegionID < -1) {
			return -1;
		}
		
		$data = M('restaurant_deliver_fee')
			->where("`restaurant_id` = $restaurantID and `region_id` = $addressRegionID")
			->find();
		if (!$data) {
			return -2;
		} else {
			return $data['deliver_fee'];
		}
	}
    
    protected function get_restaurant_driver_deliver_fee ($restaurantID, $addressRegionID) {
		if ($addressRegionID < -1) {
			return 0;
		}
		
		$data = M('restaurant_deliver_fee')
			->where("`restaurant_id` = $restaurantID and `region_id` = $addressRegionID")
			->find();
		if (!$data) {
			return 0;
		} else {
			return $data['driver_deliver_fee'];
		}
	}
	
	/**
	 * Get deliverable regions
	 */
	protected function get_delivery_region_list () {
		if ($this->zipCode == 0) {
			$this->return_error_code($this->errorCode, 'Invalid zip code');
		}
		
		$res = M('region')
			//->where("`zipcode` = $this->zipCode and `status` = 1")
			->where("`zipcode` = $this->zipCode")
			->field("id")
			->find();
		
		if (!is_array($res)) {
			$this->return_error_code($this->errorCode, 'This region is not open yet');
		} else {
			$this->regionID = $res['id'];
		}
		
		// get deliver regions
		$res = M('region_link')
			->where("`region_id` = $this->regionID")
			->field('o_id, fee')
			->select();
		
		if (!$res) {
			$this->return_error_code(10103, 'No supported zip code');
		} else {
			$this->supportedRegionInfo = [];
			$this->supportedRegionList = '';
			for ($i=0; $res[$i] != null; $i++) {
				$this->supportedRegionInfo[$res[$i]['o_id']] = $res[$i]['fee'];
				if ($this->supportedRegionList == '') {
					$this->supportedRegionList = $res[$i]['o_id'];
				} else {
					$this->supportedRegionList = $this->supportedRegionList . ',' . $res[$i]['o_id'];
				}
			}
		}
	}
	
	/**
	 * Get post param
	 */
	protected function get_param ($param) {
		return I($param, '', 'strip_tags,trim,htmlspecialchars');
	}
	
	/**
	 * Check if using post
	 */
	protected function check_is_post () {
		if (!IS_POST) {
			$this->return_error_code ($this->errorCode, 'Invalid Access');
		}
	}
	
	/**
	 * Return point for general server side errors
	 */
	protected function server_unavailable_error () {
		$this->return_error_code (101, 'Server error');
	}
	
	/**
	 * Return point for data errors
	 */
	protected function return_error ($errorMessage) {
		$this->return_error_code ($this->errorCode, $errorMessage);
	}
	
	/**
	 * Return point for data errors
	 */
	protected function return_error_code ($errorCode, $errorMessage) {
		$result = json_encode(['c' => $errorCode, 'm' => $errorMessage], JSON_UNESCAPED_UNICODE);
		if ($this->humanReadable) {
			$this->print_humanreadable_json($result);
		} else {
			echo $result;
		}
		exit ();
	}
	
	/**
	 * Return point for data
	 */
	protected function return_data ($returnDataArray, $message = '') {
		$result = json_encode(['c' => 0, 'd' => $returnDataArray, 'm' => $message], JSON_UNESCAPED_UNICODE);
		if ($this->humanReadable) {
			$this->print_humanreadable_json($result);
		} else {
			echo $result;
		}
		exit ();
	}
	
	/**
	 * Human readable format of return data
	 */
	protected function print_humanreadable_json ($txt) {
		$indent = 0;
		echo '<p>';
		for ($i=0; $i<strlen($txt); $i++) {
			if (substr($txt, $i, 1) == "{") {
				echo '<br>';
				for ($ii=0; $ii < $indent * 4; $ii++) {
					echo '&nbsp';
				}
				echo '{';
				$indent++;
			} else if (substr($txt, $i, 1) == "}") {
				echo substr($txt, $i, 1);
				echo '<br>';
				$indent--;
				for ($ii=0; $ii < $indent * 4; $ii++) {
					echo '&nbsp';
				}
			} else {
				echo substr($txt, $i, 1);
			}
		}
		echo '</p>';
	}
	
	/**
	 * Check if current time is within a time frame
	 */
	protected function is_within_time_frame($startTime, $endTime, $secondStartTime, $secondEndTime) {
		
		/*patch 1.3.4 starts delivery time ends 30 mins before restaurants close time*/
		if (strtotime('23:30') < strtotime(date ('H:i:s'))) {
			return false;
		} else if (strtotime($startTime) < strtotime(date ('H:i:s')) && 
				strtotime($endTime) > strtotime(date ('H:i:s', strtotime("+30 minutes")))) {
			return true;
		} else {
			if ($secondStartTime == "" || $secondEndTime == "") {
				return false;
			} else if (strtotime($secondStartTime) < strtotime(date ('H:i:s')) && 
					strtotime($secondEndTime) > strtotime(date ('H:i:s', strtotime("+30 minutes")))) {
				return true;
			} else {
				return false;
			}
		}
	}
	
	/**
	 * Converts time to string
	 */
	protected function time_to_string($secs){
		$bit = array(
				'y' => $secs / 31556926 % 12,
				'w' => $secs / 604800 % 52,
				'd' => $secs / 86400 % 7,
				'h' => $secs / 3600 % 24,
				'm' => $secs / 60 % 60,
				's' => $secs % 60
		);
	
		foreach($bit as $k => $v)
			if($v > 0)$ret[] = $v . $k;
	
		return join(' ', $ret);
	}
	
	/**
	 * Convert null result to empty array
	 */
	protected function null_to_empty_array($res) {
		if (!$res) {
			return [];
		} else {
			return $res;
		}
	}
	
	/**
	 * 用户邮件 
	 */
	protected function user_email_set($order, $subOrderList) {
		//echo 'user_email';
		//print_r($order);
		
		$lan = 'zh';
		if ($this->language == 'en-us') {
			$lan = 'en';
		} else if ($this->language == 'zh-cn') {
			$lan = 'zh';
		}
        
        foreach ($subOrderList as $subOrderData) {
		
            $email_data = [];
            $email_data['category'] = 1;
            $email_data['send_to'] = $order['email'];
            $email_data['send_to_name'] = $order['first_name'] . ' ' . $order['last_name'];
            $email_data['subject'] = 'FoodEasyGo: order ' . $subOrderData['order_number'];
            $email_data['template_name'] = 'orderuser_' . $lan;
            $email_data['order_id'] = $order['id'];
            $email_data['sub_order_id'] = $subOrderData['id'];
            $merchant_region = M('region')
                ->where("`id`=" . $subOrderData['dregion_id'])
                ->field('`mail_password`,`mail_address`,`mail_sender`')
                ->find();

            $email_data['send_username'] = $merchant_region['mail_address'];
            $email_data['send_password'] = think_encrypt($merchant_region['mail_password'], C('FOOD_AUTH_KEY'));
            $email_data['send_from_name'] = $merchant_region['mail_sender'];
            $email_data['expect_send_time'] = date('Y-m-d H:i:s');
            $email_data['language'] = 'zh-cn';
            $email_data['addtime'] = date('Y-m-d H:i:s');
            $email_data['sort'] = 2;
            M('email')->add($email_data);
            
        }
	
		return;
	}
	
	/**
	 * 平台邮件 
	 */
	protected function platform_email_set($order) {
		$lan = 'en-us';
		if ($this->language != '') {
			$lan = $this->language;
		}
	
		//echo 'targetRegionID = ' . $this->targetRegionID;
		
	
		//$merchant_region = M('region')->where("`id`=$this->targetRegionID")->field('`mail_password`,`mail_address`,`mail_sender`')->find();
		
		//print_r($merchant_region);
		
		//echo '\nend\n';
		
		$sub_orders = M('order_sub')
            ->where('`order_id`='.$order['id'])
            ->field('`id`,`category`,`order_number`, `dregion_id`')
            ->select();
		int_to_string($sub_orders, array('category'=>array(1=>'【Right-now Delivery】', 2=>'【Pre-order】', 3=>'【Supermarket】', 4=>'【Group purchase】')));
		
        foreach ($sub_orders as $sub_order) {
			//echo 'order:';

			$email_info = M('region')->where("`id`=" . $sub_order['dregion_id'])->field('`mail_password`,`mail_address`,`mail_sender`')->find();
			//echo 'haha ' . $sub_order['dregion_id'];
			//print_r($sub_order);
			//print_r($email_info);
			//echo 'nono';
			
			$email_data['category'] = 4;
			$email_data['send_to'] = $email_info['mail_address'];
			$email_data['send_to_name'] = '';
			$email_data['subject'] = $sub_order['category_text'].' Order Conformation '.$sub_order['order_number'].' From FoodEasyGo';
			$email_data['template_name'] = 'orderplatform';
			$email_data['sub_order_id'] = $sub_order['id'];
			$email_data['send_username'] = $email_info['mail_address'];
			$email_data['send_password'] = think_encrypt($email_info['mail_password'], C('FOOD_AUTH_KEY'));
			$email_data['send_from_name'] = $email_info['mail_sender'];
			$email_data['expect_send_time'] = date('Y-m-d H:i:s');
			$email_data['language'] = $lan;
			$email_data['addtime'] = date('Y-m-d H:i:s');
			$email_data['sort'] = 2;
			M('email')->add($email_data);
		}
		return;
	}
	
	/** 
	 * 商户邮件
	 */
	protected function merchant_email_set($order) {
		$lan = 'en-us';
		if ($this->language != '') {
			$lan = $this->language;
		}
	
		$sub_orders = M('order_sub')
            ->where('`order_id`='.$order['id'])
            ->field('`id`,`category`,`order_number`,`deliver_time_value`')
            ->select();
        
		foreach ($sub_orders as $sub_order) {
			$deliver_times = explode('-', $sub_order['deliver_time_value']);
			$reserve_set = Ext("CONFIG","","reserve");
			$restaurants = M('order_goods')
                ->where('`sub_order_id`='.$sub_order['id'])
                ->group('`restaurant_id`')
                ->field('`restaurant_id`')
                ->select();
				
			foreach ($restaurants as $restaurant) {
				$restaurant_info = M('restaurant')
                    ->where('`id`='.$restaurant['restaurant_id'])
                    ->field('`email`,`name_en`,`reciver_type`,
                    `deliver_type`,`reciver_language`, `region_id`')
                    ->find();
                
                $deliverType = $restaurant_info['deliver_type'];
                $receiverType = $restaurant_info['reciver_type'];
                $receiverLanguage = $restaurant_info['reciver_language'];
                
                $templateName = 'ordermerchant_';
                
                if ($receiverType == 1) {
                    $templateName = $templateName . 'email_';
                } else {
                    $templateName = $templateName . 'fax_';
                }
                
                if ($deliverType == 1) {
                    $templateName = $templateName . 'foodeasygo_deliver_';
                } else {
                    $templateName = $templateName . 'restaurant_deliver_';
                }
                
                if ($receiverLanguage == 1) {
                    $templateName = $templateName . 'ch';
                } else {
                    $templateName = $templateName . 'en';
                }
                
                
				$email_data = array();
				$email_data['category'] = 3;
				if(2 == $restaurant_info['reciver_type']) {
					$email_data['send_to'] = $restaurant_info['email'].'/cp=off@metrofax.com';
				} else {
					$email_data['send_to'] = $restaurant_info['email'];
				}
                
				$email_data['template_name'] = $templateName;
                
				$email_data['send_to_name'] = $restaurant_info['name_en'];
				$email_data['subject'] = 'FoodEasyGo: Order '.$sub_order['order_number'].' is waiting for deliver';
				$email_data['sub_order_id'] = $sub_order['id'];
				$email_data['restaurant_id'] = $restaurant['restaurant_id'];
				
				$merchant_region = M('region')
                    ->where("`id`=" . $restaurant_info['region_id'])
                    ->field('`mail_password`,`mail_address`,`mail_sender`')
                    ->find();
				
				$email_data['send_username'] = $merchant_region['mail_address'];
				$email_data['send_password'] = think_encrypt($merchant_region['mail_password'], C('FOOD_AUTH_KEY'));
				$email_data['send_from_name'] = $merchant_region['mail_sender'];
				if(2 == $sub_order['category']) {
					$email_data['expect_send_time'] = date('Y-m-d H:i:s',strtotime(date('Y-m-d').' '.$deliver_times[0]." -".$reserve_set['sendtime']." hours"));
				} else {
					$email_data['expect_send_time'] = date('Y-m-d H:i:s');
				}
				$email_data['language'] = $lan;
				$email_data['addtime'] = date('Y-m-d H:i:s');
				$email_data['sort'] = 2;
				//print_r($email_data);
				//echo 'haha';
				M('email')
                    ->add($email_data);
				unset($restaurant);
			}
			unset($sub_order);
		}
		return;
	}
}