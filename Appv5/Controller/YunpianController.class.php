<?php

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

namespace Appv5\Controller;

/**
 * Description of RecruitController
 *
 * @author zsw
 */
class YunpianController extends BaseController {

    public function send_sms($phone, $text)
    {
        $res=sendSmsYunpian($phone, $text);
        return $res;
    }

}
