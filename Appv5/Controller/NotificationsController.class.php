<?php

namespace Appv5\Controller;

require 'Addons/AWSSNS/aws-autoloader.php';
use Aws\Sns\SnsClient;

/**
 * App API - Notification Controller
 * 		notifications related
 */
class NotificationsController extends BaseController {
	
	/**
	 * Initialization
	 */
	protected function _initialize () {
		$this->checkRegion = false;
		$this->errorCode = 18000;
	
		//parent::_initialize ();
	}
	
	/**
	 * Get notifications for user
	 */
	public function get_notification_list () {
		$notifications = M('notifications')
			->where("`user_id` = $this->userID and `status`=0")
			->field("`message_title_zh`,`message_title_en`,`message_body_zh`,`message_body_en`,`create_time`")
			->order("`create_time` asc")
			->limit(30)
			->select();
		
		if (!$notifications) {
			$this->return_data([]);
		} else {
			$this->return_data($notifications);
		}
	}
	
	/**
	 * Delete notifications
	 */
	public function delete_notification () {
		$notificationID = $this->get_param('post.notification_id');
		$res = M('notifications')
			->where("`user_id` = $this->userID and `id` = $notificationID")
			->save(['status' => 99]);
		
		$this->return_data([], 'notification deleted successfully');
	}
	
	/**
	 * Delete all notifications
	 */
	public function delete_all_notifications () {
		
		$res = M('notifications')
			->where("`user_id` = $this->userID")
			->save(['status' => 99]);
	
		$this->return_data([], 'notifications deleted successfully');
	}
	
	
	/**
	 * Create an SNS instance
	 */
	private static function get_amazon_sns_instance() {
		return SnsClient::factory([
				
				'credentials' => [
						
						'key'    => C('Amazon_Access_Key_ID'),
						'secret' => C('Amazon_Secret_Access_Key'),
				],
				'region'		=> C('Amazon_Region_Code'),
				'version'		=> 'latest',
				'http'			=> [
				        'verify' => C('Cacert_Location'),
				],
		]);
	}
	
	/**
	 * Send notification to all endpoints
	 * @param unknown $message
	 */
	public static function send_notification_to_all_users ($message) {
		$client = NotificationsController::get_amazon_sns_instance();
	
		$iOS_model = $client->listEndpointsByPlatformApplication(
				array('PlatformApplicationArn' => C('Amazon_PushNotification_iOSARN')));
	
		// iOS: Send a message to each endpoint
		foreach ($iOS_model['Endpoints'] as $endpoint)
		{
			$endpointArn = $endpoint['EndpointArn'];
			try
			{
				$client->publish([
						'Message' => $message,
						'TargetArn' => $endpointArn
				]);
	
			}
			catch (Exception $e)
			{
				return 1;
			}
		}
		
		return 0;
	}
	
	/**
	 * Delete an ios endpoint
	 * @param unknown $iosDeviceToken
	 * @return number
	 */
	public static function delete_ios_endpoint ($ios_endpoint_arn) {
		$client = NotificationsController::get_amazon_sns_instance();
	
		try {
				
			$client->deleteEndpoint([
					'EndpointArn'	=> $ios_endpoint_arn,
			]);
			return 0;
				
		} catch (Exception $e) {
			return $e->getMessage();
		}
	}
	
	/**
	 * Create an ios endpoint
	 * @param unknown $userID
	 * @param unknown $iosDeviceToken
	 */
	public static function create_ios_endpoint ($userID, $iosDeviceToken) {
		$client = NotificationsController::get_amazon_sns_instance();
		
		try {
			
			$result = $client->createPlatformEndpoint([
					'PlatformApplicationArn'	=> C('Amazon_PushNotification_iOSARN'),
					'Token' 					=> $iosDeviceToken,
					'CustomUserData'			=> 'User_' . $userID,
			]);
			return 0;
			
		} catch (Exception $e) {
			return $e->getMessage();
		}
	}
	
	/**
	 * Delete all disabled ios_endpoints
	 */
	public static function delete_all_disabled_ios_endpoints() {
		$client = NotificationsController::get_amazon_sns_instance();
		
		$iOS_model = $client->listEndpointsByPlatformApplication(
				array('PlatformApplicationArn' => C('Amazon_PushNotification_iOSARN')));
		
		// iOS: Send a message to each endpoint
		foreach ($iOS_model['Endpoints'] as $endpoint)
		{
			$endpointArn = $endpoint['EndpointArn'];
			//print_r($endpoint);
			//echo $endpoint['EndpointArn']['Attributes']['Enabled'];
			
			if ($endpoint['Attributes']['Enabled'] != 'true') {
				try
				{
					$client->deleteEndpoint ([
							'EndpointArn' => $endpointArn,
					]);
			
				}
				catch (Exception $e)
				{
					// do nothing
				}
			}
		}
		
		return 0;
	}
}