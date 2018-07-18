<?php

/**
 * api配置文件
 * 所有除开系统级别的api配置
 */
return array(
    //分页参数名称
    'VAR_PAGE'      =>  'page',
    
    /* 数据缓存设置 */
    'DATA_CACHE_PREFIX' => 'foodeasygo_', // 缓存前缀
    'DATA_CACHE_TYPE'   => 'File', // 数据缓存类型

    /* SESSION 和 COOKIE 配置 */
    'SESSION_PREFIX' => 'foodeasygo_s_', //session前缀
    
    'LANG_SWITCH_ON' => true, // 开启语言包功能
    'LANG_AUTO_DETECT' => true, // 自动侦测语言 开启多语言功能后有效
    'LANG_LIST'        => 'zh-cn,en-us', // 允许切换的语言列表 用逗号分隔
    'VAR_LANGUAGE'     => 'l', // 默认语言切换变量
);
