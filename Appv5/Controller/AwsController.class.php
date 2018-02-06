<?php
namespace Appv5\Controller;
require_once 'Addons/AWSSNS/aws-autoloader.php';
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of RecruitController
 *
 * @author zsw
 */
class AwsController extends BaseController {

    //phone is full phone number, like +1718xxx6868, text is full text 
    public function send_sms($phone, $text)
    {

        sendSmsAWS($phone, $text);
        
    }


}
