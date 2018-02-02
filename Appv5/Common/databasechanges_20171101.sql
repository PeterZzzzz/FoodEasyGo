alter table food_app_images add external_link varchar(255) default '' after img_link;

setting strip api key to common config file


alter table food_restaurant add deliver_type tinyint(1) not null default 1 comment '1:foodeasygo 2:restaurant' after destine_time;
alter table food_restaurant add reciver_language tinyint(1) not null default 1 comment '1:zh 2:2en' after reciver_type;