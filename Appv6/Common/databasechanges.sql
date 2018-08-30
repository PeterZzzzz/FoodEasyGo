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

//数据库添加06/18/2018
ALTER TABLE `food_coupon_sn` ADD `invitee_id` INT(11) UNSIGNED NOT NULL DEFAULT '0' COMMENT '被邀请者ID' AFTER `user_id`;

//数据库添加 06/08/2018
ALTER TABLE `food_user` ADD `earned_point` INT(10) NOT NULL DEFAULT '0' COMMENT '所有订单earned_point的总和' AFTER `old_salt`;
ALTER TABLE `food_user` ADD `pending_point` INT(10) NOT NULL DEFAULT '0' COMMENT '所有订单pending_point的总和' AFTER `earned_point`;
ALTER TABLE `food_user` ADD `redeemed_point` INT(10) NOT NULL DEFAULT '0' COMMENT '已兑换掉的point，用于记录' AFTER `pending_point`;
ALTER TABLE `food_user` ADD `received_point` INT(10) NOT NULL DEFAULT '0' COMMENT '用于记录赠送用户积分' AFTER `redeemed_point`;
ALTER TABLE `food_user` ADD `membership_status` TINYINT(4) NOT NULL COMMENT '用户的会员状态' AFTER `received_point`;

ALTER TABLE `food_order` ADD `redeemed_point` INT(10) NOT NULL DEFAULT '0' COMMENT '该订单使用的积分' AFTER `tip_price`;

ALTER TABLE `food_order_sub` ADD `pending_point` INT(10) NOT NULL DEFAULT '0' COMMENT '该订单正在处理的积分' AFTER `prepare_time`;
ALTER TABLE `food_order_sub` ADD `modified_point` INT(10) NOT NULL COMMENT '该订单调整的积分' AFTER `pending_point`;
ALTER TABLE `food_order_sub` ADD `earned_point` INT(10) NOT NULL COMMENT '该订单获得的积分' AFTER `adjusted_point`;
ALTER TABLE `food_order_sub` ADD `redeemed_point` INT(10) NOT NULL COMMENT '该订单使用的积分' AFTER `earned_point`;
