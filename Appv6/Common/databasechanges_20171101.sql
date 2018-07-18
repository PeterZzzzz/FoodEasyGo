alter table food_app_images add external_link varchar(255) default '' after img_link;

setting strip api key to common config file


alter table food_restaurant add deliver_type tinyint(1) not null default 1 comment '1:foodeasygo 2:restaurant' after destine_time;
alter table food_restaurant add reciver_language tinyint(1) not null default 1 comment '1:zh 2:2en' after reciver_type;

//app version check update 三个app通用
CREATE TABLE `food_app_version` (
  `id` int(10) unsigned NOT NULL COMMENT '主键',
  `user_app_version` varchar(32) NOT NULL COMMENT '用户端app版本',
  `driver_app_version` varchar(32) NOT NULL COMMENT '司机端app版本',
  `merchant_app_version` varchar(32) NOT NULL COMMENT '商家app版本',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

//数据库更改如下03/21/2018
ALTER TABLE `food_order_sub` ADD `phone_reminded` TINYINT(1) NOT NULL DEFAULT '1' COMMENT '0是未提醒，1是已提醒，不需要提醒的都为1' AFTER `fax_status`;