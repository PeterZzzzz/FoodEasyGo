<?php

namespace Appv8\Controller;
use Think\Controller;

/**
 * App API - Common Controller
 * 		Common functions
 */
class CommonController extends Controller {
	
	public function verify_image () {
		$verify = new \Think\Verify();
		$verify->entry(1);
	}
	
	public function confirm_verify_code () {		
		$verify = new \Think\Verify();
		if ($verify->check(I('get.verify', '', 'trim'), 1)) {
			echo 'true';
		} else {
			echo 'false';
		}
	}
}