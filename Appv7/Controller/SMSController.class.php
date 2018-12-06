<?php

namespace Appv7\Controller;

/**
 * 用户控制器
 * 包括用户中心，用户登录及注册
 * @author cxl
 */
class SMSController extends BaseController {
/* SMS 短信验证码 */

	public function generateCode()
    {
        if(IS_POST)
        {
            $phone=I('request.phone', '', 'trim');
            $service=I('request.service', '', 'trim');
            $phone_us="+1".$phone;
            $code=mt_rand(1000, 9999);
            M('verification_code')->where(array("phone"=>$phone))->delete();
            $data['phone']=$phone;
            $data['verification_code']=$code;
            $data['expiration_time']=time()+300;
            $res1=M('verification_code')->add($data);
            if($res1)
            {
                $res2=R($service, array($phone_us, "[FoodEasyGo] Your verification code is $code"));
                $this->return_data([], 'Verification code send');
            }else{
                $this->return_error('Please try again later');
            }
        }
    }

    public function checkCode()
    {
        if(IS_POST)
        {
            $phone=I('request.phone', '', 'trim');
            $code=I('request.code', '', 'trim');
            $res=M('verification_code')->where(array("phone"=>$phone, "verification_code"=>$code))->find();
            if($res)
            {
                $this->return_data([], 'Your phone has been verified');
            }else
            {
                $this->return_error('Wrong code');
            }

        }
    }

 

}
