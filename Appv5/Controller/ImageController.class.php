<?php

namespace Appv5\Controller;

use Think\Controller;
use Think\Image;
/**
 * App API - Image Controller
 */
class ImageController extends BaseController {
	
	/**
	 * Initialization
	 */
	protected function _initialize () {
		//parent::_initialize ();
	}
	
	/**
	 * Resize image to a small dimension
	 */
	public function get_image_with_custom_size_small () {
		$imgPath = $this->get_param('post.path');
		
		$this->get_image_with_custom ($imgPath, 200, 200);
	}
	
	/**
	 * Resize image to a mid dimension
	 */
	public function get_image_with_custom_size_mid () {
		$imgPath = $this->get_param('post.path');
		
		$this->get_image_with_custom ($imgPath, 400, 400);
	}
	
	/**
	 * Resize image to a big dimension
	 */
	public function get_image_with_custom_size_big () {
		$imgPath = $this->get_param('post.path');
	
		$this->get_image_with_custom ($imgPath, 800, 800);
	}
	
	/**
	 * Resize image to a huge dimension
	 */
	public function get_image_with_custom_size_huge () {
		$imgPath = $this->get_param('post.path');
	
		$this->get_image_with_custom ($imgPath, 1600, 1600);
	}
	
	/**
	 * Get image with custom size
	 */
	private function get_image_with_custom ($imgPath, $sizeW, $sizeH) {
		
		$pathParts = pathinfo($imgPath);
		
		$img = new Image();
		if (substr($imgPath, 0, 1) == "/") {
			$img->open(".$imgPath");
		} else {
			$img->open("./$imgPath");
		}
		
		if ($sizeH > $img->height()) {
			$sizeH = $img->height();
		}
		if ($sizeW > $img->width()) {
			$sizeW = $img->width();
		}
		
		header("Content-Type: image/jpeg");
		$img->thumb($sizeW, $sizeH);
		
		$img->save(NULL);
		die();
	}
	
	/**
	 * Get normal image
	 */
	public function get_image () {
		$imgPath = $this->get_param('post.path');
	
		$img = new Image();
			$img = new Image();
		if (substr($imgPath, 0, 1) == "/") {
			$img->open(".$imgPath");
		} else {
			$img->open("./$imgPath");
		}
	
		header("Content-Type: image/png");
	
		$img->save(NULL);
		die();
	}
	
	public function get_image_with_custom_size2 () {
	
		$img = new Image();
			$img = new Image();
		if (substr($imgPath, 0, 1) == "/") {
			$img->open(".$imgPath");
		} else {
			$img->open("./$imgPath");
		}
	
		$img->thumb('300', '300');
		header("Content-Type: image/jpg");
		//print_r ($img->thumb('100', '100'));
	
		$img->save(NULL);
		die();
	}
	
}