#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>


#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_ServerCallController539269853.h"
#include "AssemblyU2DCSharp_ServerCallController_U3CCommonWW2694245275.h"
#include "AssemblyU2DCSharp_ThirdPartyNetworkController48416843.h"
#include "AssemblyU2DCSharp_UserDataNetworkController124727989.h"
#include "AssemblyU2DCSharp_CartController4265484028.h"
#include "AssemblyU2DCSharp_CartController_U3CGetCartDetails1748039745.h"
#include "AssemblyU2DCSharp_CartData70693642.h"
#include "AssemblyU2DCSharp_CartData_U3CSyncWithServerCorout1891666639.h"
#include "AssemblyU2DCSharp_CartData_U3CDeleteCartDetailU3Ec3572045920.h"
#include "AssemblyU2DCSharp_CartDetailData2591270651.h"
#include "AssemblyU2DCSharp_DishData341145732.h"
#include "AssemblyU2DCSharp_AttributeData3644362822.h"
#include "AssemblyU2DCSharp_CartPanelController216331616.h"
#include "AssemblyU2DCSharp_CartPanelController_U3CReloadPan2780592141.h"
#include "AssemblyU2DCSharp_CartPanelController_U3CLoadAllPa4082767766.h"
#include "AssemblyU2DCSharp_CartPanelController_U3CCheckOutCo839368506.h"
#include "AssemblyU2DCSharp_CartPanelController_U3CGetDelive3782011684.h"
#include "AssemblyU2DCSharp_CartPanelDishBarController918763089.h"
#include "AssemblyU2DCSharp_CartPanelHeader2ToggleElementCont172686723.h"
#include "AssemblyU2DCSharp_CartPanelRestaurantBarController3060481166.h"
#include "AssemblyU2DCSharp_ChangeLocationPanelController365935195.h"
#include "AssemblyU2DCSharp_ChangeLocationPanelController_U33250070183.h"
#include "AssemblyU2DCSharp_ChangeLocationPanelController_U3CF94160124.h"
#include "AssemblyU2DCSharp_ChangeLocationPanelToggleElement4257550825.h"
#include "AssemblyU2DCSharp_ChangeLocationPanelToggleParent2105050141.h"
#include "AssemblyU2DCSharp_FooterPanelController37526917.h"
#include "AssemblyU2DCSharp_GroceryPanelCategoryBarElementCo4201940666.h"
#include "AssemblyU2DCSharp_GroceryPanelController2528252947.h"
#include "AssemblyU2DCSharp_GroceryPanelController_U3CLoadCat976007496.h"
#include "AssemblyU2DCSharp_GroceryPanelController_U3CTurnOn2492616074.h"
#include "AssemblyU2DCSharp_GroceryPanelDefaultDisplayCatego3648164443.h"
#include "AssemblyU2DCSharp_GroceryPanelDefaultEndlessScroll3329357911.h"
#include "AssemblyU2DCSharp_GroceryPanelDefaultScrollRectCon3012206871.h"
#include "AssemblyU2DCSharp_GroceryPanelGroceryBarElementCon1364623611.h"
#include "AssemblyU2DCSharp_GrouponDetailPanelController75209297.h"
#include "AssemblyU2DCSharp_GrouponDetailPanelController_U3C1710740799.h"
#include "AssemblyU2DCSharp_GrouponDetailPanelGrouponDishBar4087206284.h"
#include "AssemblyU2DCSharp_GrouponPanelController3685714018.h"
#include "AssemblyU2DCSharp_GrouponPanelController_U3CLoadGr2400405972.h"
#include "AssemblyU2DCSharp_GrouponPanelGrouponBarController1163306327.h"
#include "AssemblyU2DCSharp_HomeGroceryScrollviewController1749989468.h"
#include "AssemblyU2DCSharp_HomeGroceryScrollviewElementCont1733338872.h"
#include "AssemblyU2DCSharp_HomeGrouponScrollviewController845716845.h"
#include "AssemblyU2DCSharp_HomeGrouponScrollviewElementContr305077447.h"
#include "AssemblyU2DCSharp_HomePanelController106292673.h"
#include "AssemblyU2DCSharp_HomePanelController_U3CLoadPanel3777934668.h"
#include "AssemblyU2DCSharp_HomeRestaurantSectionController3614126629.h"
#include "AssemblyU2DCSharp_HomeRestaurantSectionElementCont4273359119.h"
#include "AssemblyU2DCSharp_HomeSlideController99493166.h"
#include "AssemblyU2DCSharp_HomeSlideController_U3CStartSlid3682074070.h"
#include "AssemblyU2DCSharp_HomeSlideController_U3CAddImageU4032839203.h"
#include "AssemblyU2DCSharp_LanguageButtonController308009990.h"
#include "AssemblyU2DCSharp_LoadingCanvasController1588194384.h"
#include "AssemblyU2DCSharp_LoadingCanvasController_U3CStartU377488107.h"
#include "AssemblyU2DCSharp_LoadingCanvasController_U3CDownL2427903504.h"
#include "AssemblyU2DCSharp_LoadingCanvasController_U3CDispl3864585969.h"
#include "AssemblyU2DCSharp_LoadingPanelController666040324.h"
#include "AssemblyU2DCSharp_LoginCanvasController2983426173.h"
#include "AssemblyU2DCSharp_LoginPanelController2789257783.h"
#include "AssemblyU2DCSharp_LoginPanelController_U3CStartU3E3555836783.h"
#include "AssemblyU2DCSharp_MessagePanelController1782843865.h"
#include "AssemblyU2DCSharp_NotificationPanelController976377909.h"
#include "AssemblyU2DCSharp_NotificationPanelEndlessScrollCo3950638948.h"
#include "AssemblyU2DCSharp_NotificationPanelNotificationBar3326927659.h"
#include "AssemblyU2DCSharp_NotificationPanelNotificationBar3430291603.h"
#include "AssemblyU2DCSharp_NotificationPanelScrollRectContr1404149286.h"
#include "AssemblyU2DCSharp_OrderCommentPanelController2182119727.h"
#include "AssemblyU2DCSharp_OrderDetailPanelController1354893729.h"
#include "AssemblyU2DCSharp_OrderPanelController3155145650.h"
#include "AssemblyU2DCSharp_OrderPanelController_U3CLoadDataU993998146.h"
#include "AssemblyU2DCSharp_OrderPanelOrderBarController3029815671.h"
#include "AssemblyU2DCSharp_PasswordResetPanelController2615324364.h"
#include "AssemblyU2DCSharp_PlaceOrderPanelController1990927129.h"
#include "AssemblyU2DCSharp_PlaceOrderPanelController_U3CRel3640130919.h"
#include "AssemblyU2DCSharp_PlaceOrderPanelController_U3CChe2072599816.h"
#include "AssemblyU2DCSharp_PlaceOrderPanelController_U3CChe2904026667.h"
#include "AssemblyU2DCSharp_PlaceOrderPanelController_U3CSub3755600287.h"
#include "AssemblyU2DCSharp_PlaceOrderPanelPaymentToggleElem2986330331.h"
#include "AssemblyU2DCSharp_PlaceOrderPanelTipCustomToggleEl1865536757.h"
#include "AssemblyU2DCSharp_PlaceOrderPanelTipToggleElementCo727427366.h"
#include "AssemblyU2DCSharp_PlaceOrderPanelUniwebview2415642758.h"
#include "AssemblyU2DCSharp_PopUpPanelController2747753076.h"
#include "AssemblyU2DCSharp_PopUpTogglePanelController2896082304.h"
#include "AssemblyU2DCSharp_PopUpTogglePanelToggleElementCont503958368.h"
#include "AssemblyU2DCSharp_RegistrationPanelController2680136359.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelCategoryBar1797646523.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelCategoryBar2955603973.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelCategoryScro545198753.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelCommentEndl1577071224.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelController2815147218.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelController_1278650907.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelController_2695086367.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelController_1634968252.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelDishBarCont4182018719.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelDishEndless4133165937.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelMainScrollR3410164444.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelTitleSectio3300369953.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelTransparent1706199699.h"
#include "AssemblyU2DCSharp_RestaurantDishDetailAttributeTog3598513776.h"
#include "AssemblyU2DCSharp_RestaurantDishDetailAttributeTogg913154606.h"



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (ServerCallController_t539269853), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1901[11] = 
{
	U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275::get_offset_of_www_0(),
	U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275::get_offset_of_U3CurlU3E__0_1(),
	U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275::get_offset_of_U3CresponseU3E__1_2(),
	U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275::get_offset_of_U3CeU3E__2_3(),
	U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275::get_offset_of_successCallBack_4(),
	U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275::get_offset_of_failureCallBack_5(),
	U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275::get_offset_of_U24PC_6(),
	U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275::get_offset_of_U24current_7(),
	U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275::get_offset_of_U3CU24U3Ewww_8(),
	U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275::get_offset_of_U3CU24U3EsuccessCallBack_9(),
	U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275::get_offset_of_U3CU24U3EfailureCallBack_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (ThirdPartyNetworkController_t48416843), -1, sizeof(ThirdPartyNetworkController_t48416843_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1902[3] = 
{
	ThirdPartyNetworkController_t48416843_StaticFields::get_offset_of_instance_4(),
	ThirdPartyNetworkController_t48416843::get_offset_of_thirdPartyLoginURL_5(),
	ThirdPartyNetworkController_t48416843::get_offset_of_setBindingEmailCall_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (UserDataNetworkController_t124727989), -1, sizeof(UserDataNetworkController_t124727989_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1903[14] = 
{
	UserDataNetworkController_t124727989_StaticFields::get_offset_of_instance_4(),
	UserDataNetworkController_t124727989::get_offset_of_userDataControllerURL_5(),
	UserDataNetworkController_t124727989::get_offset_of_userAddressControllerURL_6(),
	UserDataNetworkController_t124727989::get_offset_of_userPaymentControllerURL_7(),
	UserDataNetworkController_t124727989::get_offset_of_imageControllerURL_8(),
	UserDataNetworkController_t124727989::get_offset_of_updatePersonalDataCall_9(),
	UserDataNetworkController_t124727989::get_offset_of_userAddressCall_10(),
	UserDataNetworkController_t124727989::get_offset_of_userPaymentCall_11(),
	UserDataNetworkController_t124727989::get_offset_of_couponCall_12(),
	UserDataNetworkController_t124727989::get_offset_of_invitationCall_13(),
	UserDataNetworkController_t124727989::get_offset_of_leaveMessageCall_14(),
	UserDataNetworkController_t124727989::get_offset_of_updateUserIOSTokenCall_15(),
	UserDataNetworkController_t124727989::get_offset_of_uploadUserImageCall_16(),
	UserDataNetworkController_t124727989::get_offset_of_downloadUserImageCall_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (CartController_t4265484028), -1, sizeof(CartController_t4265484028_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1904[4] = 
{
	CartController_t4265484028_StaticFields::get_offset_of_instance_2(),
	CartController_t4265484028::get_offset_of_cart_3(),
	CartController_t4265484028::get_offset_of_cartID_4(),
	CartController_t4265484028::get_offset_of_getCartDetailAttemps_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (U3CGetCartDetailsU3Ec__AnonStorey36_t1748039745), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1905[2] = 
{
	U3CGetCartDetailsU3Ec__AnonStorey36_t1748039745::get_offset_of_successAction_0(),
	U3CGetCartDetailsU3Ec__AnonStorey36_t1748039745::get_offset_of_U3CU3Ef__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (CartData_t70693642), -1, sizeof(CartData_t70693642_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1906[6] = 
{
	CartData_t70693642::get_offset_of__id_0(),
	CartData_t70693642::get_offset_of__tipPrice_1(),
	CartData_t70693642::get_offset_of__cartDetailDic_2(),
	CartData_t70693642::get_offset_of__keys_3(),
	CartData_t70693642::get_offset_of__values_4(),
	CartData_t70693642_StaticFields::get_offset_of_U3CU3Ef__amU24cache5_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (U3CSyncWithServerCoroutineU3Ec__Iterator10_t1891666639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1907[5] = 
{
	U3CSyncWithServerCoroutineU3Ec__Iterator10_t1891666639::get_offset_of_U3CU24s_43U3E__0_0(),
	U3CSyncWithServerCoroutineU3Ec__Iterator10_t1891666639::get_offset_of_U3CpairU3E__1_1(),
	U3CSyncWithServerCoroutineU3Ec__Iterator10_t1891666639::get_offset_of_U24PC_2(),
	U3CSyncWithServerCoroutineU3Ec__Iterator10_t1891666639::get_offset_of_U24current_3(),
	U3CSyncWithServerCoroutineU3Ec__Iterator10_t1891666639::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (U3CDeleteCartDetailU3Ec__AnonStorey37_t3572045920), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1908[2] = 
{
	U3CDeleteCartDetailU3Ec__AnonStorey37_t3572045920::get_offset_of_cartDetailID_0(),
	U3CDeleteCartDetailU3Ec__AnonStorey37_t3572045920::get_offset_of_U3CU3Ef__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (CartDetailData_t2591270651), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1909[19] = 
{
	CartDetailData_t2591270651::get_offset_of__id_0(),
	CartDetailData_t2591270651::get_offset_of__categoryID_1(),
	CartDetailData_t2591270651::get_offset_of__deliverTimeID_2(),
	CartDetailData_t2591270651::get_offset_of__grouponID_3(),
	CartDetailData_t2591270651::get_offset_of__grouponGoodsID_4(),
	CartDetailData_t2591270651::get_offset_of__goodsID_5(),
	CartDetailData_t2591270651::get_offset_of__goodsTypeID_6(),
	CartDetailData_t2591270651::get_offset_of__restaurantID_7(),
	CartDetailData_t2591270651::get_offset_of__restaurantNameZH_8(),
	CartDetailData_t2591270651::get_offset_of__restaurantNameEN_9(),
	CartDetailData_t2591270651::get_offset_of__attributeIDList_10(),
	CartDetailData_t2591270651::get_offset_of__attributeNumberList_11(),
	CartDetailData_t2591270651::get_offset_of__notes_12(),
	CartDetailData_t2591270651::get_offset_of__number_13(),
	CartDetailData_t2591270651::get_offset_of_isSyncedWithServer_14(),
	CartDetailData_t2591270651::get_offset_of__dishData_15(),
	CartDetailData_t2591270651::get_offset_of__attributeDic_16(),
	CartDetailData_t2591270651::get_offset_of_keys_17(),
	CartDetailData_t2591270651::get_offset_of_values_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (DishData_t341145732), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1910[5] = 
{
	DishData_t341145732::get_offset_of__id_0(),
	DishData_t341145732::get_offset_of__price_1(),
	DishData_t341145732::get_offset_of__imgURL_2(),
	DishData_t341145732::get_offset_of__nameZH_3(),
	DishData_t341145732::get_offset_of__nameEN_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (AttributeData_t3644362822), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[5] = 
{
	AttributeData_t3644362822::get_offset_of__id_0(),
	AttributeData_t3644362822::get_offset_of__price_1(),
	AttributeData_t3644362822::get_offset_of__quantity_2(),
	AttributeData_t3644362822::get_offset_of__nameZH_3(),
	AttributeData_t3644362822::get_offset_of__nameEN_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1912 = { sizeof (CartPanelController_t216331616), -1, sizeof(CartPanelController_t216331616_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1912[20] = 
{
	CartPanelController_t216331616_StaticFields::get_offset_of_instance_5(),
	CartPanelController_t216331616::get_offset_of_addressSection_6(),
	CartPanelController_t216331616::get_offset_of_scrollRect_7(),
	CartPanelController_t216331616::get_offset_of_header2ToggleController_8(),
	CartPanelController_t216331616::get_offset_of_deliveryContent_9(),
	CartPanelController_t216331616::get_offset_of_reservationContent_10(),
	CartPanelController_t216331616::get_offset_of_totalPriceText_11(),
	CartPanelController_t216331616::get_offset_of_deliveryTitle_12(),
	CartPanelController_t216331616::get_offset_of_reservationTitle_13(),
	CartPanelController_t216331616::get_offset_of_payButton_14(),
	CartPanelController_t216331616::get_offset_of_selectedAddressID_15(),
	CartPanelController_t216331616::get_offset_of_selectedRegionID_16(),
	CartPanelController_t216331616::get_offset_of_restaurantBarPrefab_17(),
	CartPanelController_t216331616::get_offset_of_dishBarPrefab_18(),
	CartPanelController_t216331616::get_offset_of_restaurantDeliverFee_19(),
	CartPanelController_t216331616::get_offset_of_nowRestaurantBarList_20(),
	CartPanelController_t216331616::get_offset_of_deliveryRestaurantBarList_21(),
	CartPanelController_t216331616::get_offset_of_restaurantDic_22(),
	CartPanelController_t216331616::get_offset_of_isDisplayNowRestaurant_23(),
	CartPanelController_t216331616::get_offset_of_getDeliverFeeIEnumerator_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1913 = { sizeof (U3CReloadPanelCoroutineU3Ec__Iterator11_t2780592141), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1913[4] = 
{
	U3CReloadPanelCoroutineU3Ec__Iterator11_t2780592141::get_offset_of_U3CisGetCartDetailFinishedU3E__0_0(),
	U3CReloadPanelCoroutineU3Ec__Iterator11_t2780592141::get_offset_of_U24PC_1(),
	U3CReloadPanelCoroutineU3Ec__Iterator11_t2780592141::get_offset_of_U24current_2(),
	U3CReloadPanelCoroutineU3Ec__Iterator11_t2780592141::get_offset_of_U3CU3Ef__this_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1914 = { sizeof (U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1914[12] = 
{
	U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766::get_offset_of_U3CrestaurantBarDicU3E__0_0(),
	U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766::get_offset_of_U3CU24s_50U3E__1_1(),
	U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766::get_offset_of_U3CpairU3E__2_2(),
	U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766::get_offset_of_U3CdishBarU3E__3_3(),
	U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766::get_offset_of_U3CdishBarScriptU3E__4_4(),
	U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766::get_offset_of_U3CrestaurantIDU3E__5_5(),
	U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766::get_offset_of_U3CkeyU3E__6_6(),
	U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766::get_offset_of_U3CrestaurantBarU3E__7_7(),
	U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766::get_offset_of_U3CrestaurantBarScriptU3E__8_8(),
	U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766::get_offset_of_U24PC_9(),
	U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766::get_offset_of_U24current_10(),
	U3CLoadAllPanelCoroutineU3Ec__Iterator12_t4082767766::get_offset_of_U3CU3Ef__this_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1915 = { sizeof (U3CCheckOutCoroutineU3Ec__Iterator13_t839368506), -1, sizeof(U3CCheckOutCoroutineU3Ec__Iterator13_t839368506_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1915[4] = 
{
	U3CCheckOutCoroutineU3Ec__Iterator13_t839368506::get_offset_of_U24PC_0(),
	U3CCheckOutCoroutineU3Ec__Iterator13_t839368506::get_offset_of_U24current_1(),
	U3CCheckOutCoroutineU3Ec__Iterator13_t839368506::get_offset_of_U3CU3Ef__this_2(),
	U3CCheckOutCoroutineU3Ec__Iterator13_t839368506_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1916 = { sizeof (U3CGetDeliverFeeCoroutineU3Ec__Iterator14_t3782011684), -1, sizeof(U3CGetDeliverFeeCoroutineU3Ec__Iterator14_t3782011684_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1916[6] = 
{
	U3CGetDeliverFeeCoroutineU3Ec__Iterator14_t3782011684::get_offset_of_U3CisFinishedGettingDeliverFeeU3E__0_0(),
	U3CGetDeliverFeeCoroutineU3Ec__Iterator14_t3782011684::get_offset_of_U3CformU3E__1_1(),
	U3CGetDeliverFeeCoroutineU3Ec__Iterator14_t3782011684::get_offset_of_U24PC_2(),
	U3CGetDeliverFeeCoroutineU3Ec__Iterator14_t3782011684::get_offset_of_U24current_3(),
	U3CGetDeliverFeeCoroutineU3Ec__Iterator14_t3782011684::get_offset_of_U3CU3Ef__this_4(),
	U3CGetDeliverFeeCoroutineU3Ec__Iterator14_t3782011684_StaticFields::get_offset_of_U3CU3Ef__amU24cache5_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1917 = { sizeof (CartPanelDishBarController_t918763089), -1, sizeof(CartPanelDishBarController_t918763089_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1917[13] = 
{
	CartPanelDishBarController_t918763089::get_offset_of_generalParent_2(),
	CartPanelDishBarController_t918763089::get_offset_of_scrollRect_3(),
	CartPanelDishBarController_t918763089::get_offset_of_layoutElement_4(),
	CartPanelDishBarController_t918763089::get_offset_of_selectButton_5(),
	CartPanelDishBarController_t918763089::get_offset_of_deselectButton_6(),
	CartPanelDishBarController_t918763089::get_offset_of_cartDetailData_7(),
	CartPanelDishBarController_t918763089::get_offset_of_isSelectedForCheckOut_8(),
	CartPanelDishBarController_t918763089::get_offset_of_isShowingDeleteButton_9(),
	CartPanelDishBarController_t918763089::get_offset_of_isRestaurantOpen_10(),
	CartPanelDishBarController_t918763089::get_offset_of_isPointerDown_11(),
	CartPanelDishBarController_t918763089::get_offset_of_isTweenerPlaying_12(),
	CartPanelDishBarController_t918763089::get_offset_of_pointerDownPosition_13(),
	CartPanelDishBarController_t918763089_StaticFields::get_offset_of_U3CU3Ef__amU24cacheC_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1918 = { sizeof (CartPanelHeader2ToggleElementController_t172686723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1918[2] = 
{
	CartPanelHeader2ToggleElementController_t172686723::get_offset_of_line_7(),
	CartPanelHeader2ToggleElementController_t172686723::get_offset_of_text_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1919 = { sizeof (CartPanelRestaurantBarController_t3060481166), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1919[15] = 
{
	CartPanelRestaurantBarController_t3060481166::get_offset_of_restaurantID_2(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of_header_3(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of_title_4(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of_layoutElement_5(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of_noDeliveryMask_6(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of_data_7(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of_isOpen_8(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of_isMinOrderSatisfied_9(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of_isRestaurant_10(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of_canDeliver_11(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of_dishBarList_12(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of__minOrder_13(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of__nameZH_14(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of__nameEN_15(),
	CartPanelRestaurantBarController_t3060481166::get_offset_of_headerHeight_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1920 = { sizeof (ChangeLocationPanelController_t365935195), -1, sizeof(ChangeLocationPanelController_t365935195_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1920[5] = 
{
	ChangeLocationPanelController_t365935195_StaticFields::get_offset_of_instance_5(),
	ChangeLocationPanelController_t365935195::get_offset_of_manualZipCodeInputField_6(),
	ChangeLocationPanelController_t365935195::get_offset_of_manualZipCodeSubmitButton_7(),
	ChangeLocationPanelController_t365935195::get_offset_of_regionDic_8(),
	ChangeLocationPanelController_t365935195_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1921 = { sizeof (U3CDisplayAvailableRegionsU3Ec__Iterator15_t3250070183), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1921[2] = 
{
	U3CDisplayAvailableRegionsU3Ec__Iterator15_t3250070183::get_offset_of_U24PC_0(),
	U3CDisplayAvailableRegionsU3Ec__Iterator15_t3250070183::get_offset_of_U24current_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1922 = { sizeof (U3CFetchGeoLocationCoroutineU3Ec__Iterator16_t94160124), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1922[10] = 
{
	U3CFetchGeoLocationCoroutineU3Ec__Iterator16_t94160124::get_offset_of_U3CmaxWaitU3E__0_0(),
	U3CFetchGeoLocationCoroutineU3Ec__Iterator16_t94160124::get_offset_of_U3ClatU3E__1_1(),
	U3CFetchGeoLocationCoroutineU3Ec__Iterator16_t94160124::get_offset_of_U3ClngU3E__2_2(),
	U3CFetchGeoLocationCoroutineU3Ec__Iterator16_t94160124::get_offset_of_U3CwwwU3E__3_3(),
	U3CFetchGeoLocationCoroutineU3Ec__Iterator16_t94160124::get_offset_of_U3CdataU3E__4_4(),
	U3CFetchGeoLocationCoroutineU3Ec__Iterator16_t94160124::get_offset_of_U3CaddressComponentU3E__5_5(),
	U3CFetchGeoLocationCoroutineU3Ec__Iterator16_t94160124::get_offset_of_U3CiU3E__6_6(),
	U3CFetchGeoLocationCoroutineU3Ec__Iterator16_t94160124::get_offset_of_U3CzipCodeU3E__7_7(),
	U3CFetchGeoLocationCoroutineU3Ec__Iterator16_t94160124::get_offset_of_U24PC_8(),
	U3CFetchGeoLocationCoroutineU3Ec__Iterator16_t94160124::get_offset_of_U24current_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1923 = { sizeof (ChangeLocationPanelToggleElement_t4257550825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1923[8] = 
{
	ChangeLocationPanelToggleElement_t4257550825::get_offset_of_id_2(),
	ChangeLocationPanelToggleElement_t4257550825::get_offset_of_zip_3(),
	ChangeLocationPanelToggleElement_t4257550825::get_offset_of_nameZH_4(),
	ChangeLocationPanelToggleElement_t4257550825::get_offset_of_nameEN_5(),
	ChangeLocationPanelToggleElement_t4257550825::get_offset_of_background_6(),
	ChangeLocationPanelToggleElement_t4257550825::get_offset_of_text_7(),
	ChangeLocationPanelToggleElement_t4257550825::get_offset_of_selectedColor_8(),
	ChangeLocationPanelToggleElement_t4257550825::get_offset_of_deselectedColor_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1924 = { sizeof (ChangeLocationPanelToggleParent_t2105050141), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1924[4] = 
{
	ChangeLocationPanelToggleParent_t2105050141::get_offset_of_selectedID_2(),
	ChangeLocationPanelToggleParent_t2105050141::get_offset_of_regionZip_3(),
	ChangeLocationPanelToggleParent_t2105050141::get_offset_of_nameZH_4(),
	ChangeLocationPanelToggleParent_t2105050141::get_offset_of_nameEN_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1925 = { sizeof (FooterPanelController_t37526917), -1, sizeof(FooterPanelController_t37526917_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1925[22] = 
{
	FooterPanelController_t37526917_StaticFields::get_offset_of_instance_2(),
	FooterPanelController_t37526917::get_offset_of_homeButton_3(),
	FooterPanelController_t37526917::get_offset_of_homeIconNormal_4(),
	FooterPanelController_t37526917::get_offset_of_homeIconSelected_5(),
	FooterPanelController_t37526917::get_offset_of_homeIcon_6(),
	FooterPanelController_t37526917::get_offset_of_homeText_7(),
	FooterPanelController_t37526917::get_offset_of_cartButton_8(),
	FooterPanelController_t37526917::get_offset_of_cartIconNormal_9(),
	FooterPanelController_t37526917::get_offset_of_cartIconSelected_10(),
	FooterPanelController_t37526917::get_offset_of_cartIcon_11(),
	FooterPanelController_t37526917::get_offset_of_cartText_12(),
	FooterPanelController_t37526917::get_offset_of_orderButton_13(),
	FooterPanelController_t37526917::get_offset_of_orderIconNormal_14(),
	FooterPanelController_t37526917::get_offset_of_orderIconSelected_15(),
	FooterPanelController_t37526917::get_offset_of_orderIcon_16(),
	FooterPanelController_t37526917::get_offset_of_orderText_17(),
	FooterPanelController_t37526917::get_offset_of_mineButton_18(),
	FooterPanelController_t37526917::get_offset_of_mineIconNormal_19(),
	FooterPanelController_t37526917::get_offset_of_mineIconSelected_20(),
	FooterPanelController_t37526917::get_offset_of_mineIcon_21(),
	FooterPanelController_t37526917::get_offset_of_mineText_22(),
	FooterPanelController_t37526917::get_offset_of_turnOffColor_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1926 = { sizeof (GroceryPanelCategoryBarElementController_t4201940666), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1927 = { sizeof (GroceryPanelController_t2528252947), -1, sizeof(GroceryPanelController_t2528252947_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1927[16] = 
{
	GroceryPanelController_t2528252947_StaticFields::get_offset_of_instance_5(),
	GroceryPanelController_t2528252947::get_offset_of_tipBar_6(),
	GroceryPanelController_t2528252947::get_offset_of_categoryBar_7(),
	GroceryPanelController_t2528252947::get_offset_of_categoryBarContent_8(),
	GroceryPanelController_t2528252947::get_offset_of_defaultDisplay_9(),
	GroceryPanelController_t2528252947::get_offset_of_defaultDisplayContent_10(),
	GroceryPanelController_t2528252947::get_offset_of_categoryDisplay_11(),
	GroceryPanelController_t2528252947::get_offset_of_categoryDisplayContent_12(),
	GroceryPanelController_t2528252947::get_offset_of_endlessScrollController_13(),
	GroceryPanelController_t2528252947::get_offset_of_groceryContentCategoryBarElementPrefab_14(),
	GroceryPanelController_t2528252947::get_offset_of_groceryContentCategoryTitlePrefab_15(),
	GroceryPanelController_t2528252947::get_offset_of_groceryContentGroceryBarPrefab_16(),
	GroceryPanelController_t2528252947::get_offset_of_categoryContentCategoryBarPrefab_17(),
	GroceryPanelController_t2528252947::get_offset_of_categoryDisplayCategoryBarElementPrefab_18(),
	GroceryPanelController_t2528252947::get_offset_of_nextPageNumber_19(),
	GroceryPanelController_t2528252947_StaticFields::get_offset_of_U3CU3Ef__amU24cacheF_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1928 = { sizeof (U3CLoadCategoryBarU3Ec__Iterator17_t976007496), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1928[8] = 
{
	U3CLoadCategoryBarU3Ec__Iterator17_t976007496::get_offset_of_U3CnewCategoryElementU3E__0_0(),
	U3CLoadCategoryBarU3Ec__Iterator17_t976007496::get_offset_of_U3CcategoryElementScriptU3E__1_1(),
	U3CLoadCategoryBarU3Ec__Iterator17_t976007496::get_offset_of_U3CiU3E__2_2(),
	U3CLoadCategoryBarU3Ec__Iterator17_t976007496::get_offset_of_data_3(),
	U3CLoadCategoryBarU3Ec__Iterator17_t976007496::get_offset_of_U24PC_4(),
	U3CLoadCategoryBarU3Ec__Iterator17_t976007496::get_offset_of_U24current_5(),
	U3CLoadCategoryBarU3Ec__Iterator17_t976007496::get_offset_of_U3CU24U3Edata_6(),
	U3CLoadCategoryBarU3Ec__Iterator17_t976007496::get_offset_of_U3CU3Ef__this_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1929 = { sizeof (U3CTurnOnCategoryDisplayCoroutineU3Ec__Iterator18_t2492616074), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1929[8] = 
{
	U3CTurnOnCategoryDisplayCoroutineU3Ec__Iterator18_t2492616074::get_offset_of_U3CcurrentRowU3E__0_0(),
	U3CTurnOnCategoryDisplayCoroutineU3Ec__Iterator18_t2492616074::get_offset_of_U3CcurrentRowTotalWidthU3E__1_1(),
	U3CTurnOnCategoryDisplayCoroutineU3Ec__Iterator18_t2492616074::get_offset_of_U3CiU3E__2_2(),
	U3CTurnOnCategoryDisplayCoroutineU3Ec__Iterator18_t2492616074::get_offset_of_U3CtransU3E__3_3(),
	U3CTurnOnCategoryDisplayCoroutineU3Ec__Iterator18_t2492616074::get_offset_of_U3CcategoryDisplayScrollviewElementU3E__4_4(),
	U3CTurnOnCategoryDisplayCoroutineU3Ec__Iterator18_t2492616074::get_offset_of_U24PC_5(),
	U3CTurnOnCategoryDisplayCoroutineU3Ec__Iterator18_t2492616074::get_offset_of_U24current_6(),
	U3CTurnOnCategoryDisplayCoroutineU3Ec__Iterator18_t2492616074::get_offset_of_U3CU3Ef__this_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1930 = { sizeof (GroceryPanelDefaultDisplayCategoryBarElementController_t3648164443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1930[2] = 
{
	GroceryPanelDefaultDisplayCategoryBarElementController_t3648164443::get_offset_of_categoryID_7(),
	GroceryPanelDefaultDisplayCategoryBarElementController_t3648164443::get_offset_of_line_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1931 = { sizeof (GroceryPanelDefaultEndlessScrollRectController_t3329357911), -1, sizeof(GroceryPanelDefaultEndlessScrollRectController_t3329357911_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1931[3] = 
{
	GroceryPanelDefaultEndlessScrollRectController_t3329357911::get_offset_of__data_14(),
	GroceryPanelDefaultEndlessScrollRectController_t3329357911::get_offset_of__typeID_15(),
	GroceryPanelDefaultEndlessScrollRectController_t3329357911_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1932 = { sizeof (GroceryPanelDefaultScrollRectController_t3012206871), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1932[2] = 
{
	GroceryPanelDefaultScrollRectController_t3012206871::get_offset_of_currentPED_38(),
	GroceryPanelDefaultScrollRectController_t3012206871::get_offset_of_canDrag_39(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1933 = { sizeof (GroceryPanelGroceryBarElementController_t1364623611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1933[18] = 
{
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of__restaurant1ID_2(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of__restaurant2ID_3(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of__grocery1ID_4(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of__grocery2ID_5(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of__imageURL1_6(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of__imageURL2_7(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of__price1_8(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of__price2_9(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of__nameZH1_10(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of__nameZH2_11(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of__nameEN1_12(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of__nameEN2_13(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of_title1_14(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of_price1_15(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of_image1_16(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of_title2_17(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of_price2_18(),
	GroceryPanelGroceryBarElementController_t1364623611::get_offset_of_image2_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1934 = { sizeof (GrouponDetailPanelController_t75209297), -1, sizeof(GrouponDetailPanelController_t75209297_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1934[7] = 
{
	GrouponDetailPanelController_t75209297_StaticFields::get_offset_of_instance_5(),
	GrouponDetailPanelController_t75209297::get_offset_of_grouponID_6(),
	GrouponDetailPanelController_t75209297::get_offset_of_grouponData_7(),
	GrouponDetailPanelController_t75209297::get_offset_of_regionPanel_8(),
	GrouponDetailPanelController_t75209297::get_offset_of_dishScrollRect_9(),
	GrouponDetailPanelController_t75209297::get_offset_of_dishScrollRectContent_10(),
	GrouponDetailPanelController_t75209297::get_offset_of_grouponDishPrefab_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1935 = { sizeof (U3CLoadGrouponDataU3Ec__Iterator19_t1710740799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1935[2] = 
{
	U3CLoadGrouponDataU3Ec__Iterator19_t1710740799::get_offset_of_U24PC_0(),
	U3CLoadGrouponDataU3Ec__Iterator19_t1710740799::get_offset_of_U24current_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1936 = { sizeof (GrouponDetailPanelGrouponDishBarController_t4087206284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1936[5] = 
{
	GrouponDetailPanelGrouponDishBarController_t4087206284::get_offset_of_dishID_2(),
	GrouponDetailPanelGrouponDishBarController_t4087206284::get_offset_of_image_3(),
	GrouponDetailPanelGrouponDishBarController_t4087206284::get_offset_of_title_4(),
	GrouponDetailPanelGrouponDishBarController_t4087206284::get_offset_of_price_5(),
	GrouponDetailPanelGrouponDishBarController_t4087206284::get_offset_of_quantity_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1937 = { sizeof (GrouponPanelController_t3685714018), -1, sizeof(GrouponPanelController_t3685714018_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1937[6] = 
{
	GrouponPanelController_t3685714018_StaticFields::get_offset_of_instance_5(),
	GrouponPanelController_t3685714018::get_offset_of_scrollRect_6(),
	GrouponPanelController_t3685714018::get_offset_of_scrollRectContent_7(),
	GrouponPanelController_t3685714018::get_offset_of_grouponBarPrefab_8(),
	GrouponPanelController_t3685714018::get_offset_of_restaurantData_9(),
	GrouponPanelController_t3685714018_StaticFields::get_offset_of_U3CU3Ef__amU24cache5_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1938 = { sizeof (U3CLoadGrouponListDataU3Ec__Iterator1A_t2400405972), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1938[8] = 
{
	U3CLoadGrouponListDataU3Ec__Iterator1A_t2400405972::get_offset_of_U3CiU3E__0_0(),
	U3CLoadGrouponListDataU3Ec__Iterator1A_t2400405972::get_offset_of_data_1(),
	U3CLoadGrouponListDataU3Ec__Iterator1A_t2400405972::get_offset_of_U3CbarControllerU3E__1_2(),
	U3CLoadGrouponListDataU3Ec__Iterator1A_t2400405972::get_offset_of_U3ClayoutElementU3E__2_3(),
	U3CLoadGrouponListDataU3Ec__Iterator1A_t2400405972::get_offset_of_U24PC_4(),
	U3CLoadGrouponListDataU3Ec__Iterator1A_t2400405972::get_offset_of_U24current_5(),
	U3CLoadGrouponListDataU3Ec__Iterator1A_t2400405972::get_offset_of_U3CU24U3Edata_6(),
	U3CLoadGrouponListDataU3Ec__Iterator1A_t2400405972::get_offset_of_U3CU3Ef__this_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1939 = { sizeof (GrouponPanelGrouponBarController_t1163306327), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1939[6] = 
{
	GrouponPanelGrouponBarController_t1163306327::get_offset_of_grouponID_2(),
	GrouponPanelGrouponBarController_t1163306327::get_offset_of_image_3(),
	GrouponPanelGrouponBarController_t1163306327::get_offset_of_titleTextController_4(),
	GrouponPanelGrouponBarController_t1163306327::get_offset_of_dateTextController_5(),
	GrouponPanelGrouponBarController_t1163306327::get_offset_of_timeTextController_6(),
	GrouponPanelGrouponBarController_t1163306327::get_offset_of_grouponData_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1940 = { sizeof (HomeGroceryScrollviewController_t1749989468), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1940[3] = 
{
	HomeGroceryScrollviewController_t1749989468::get_offset_of_content_3(),
	HomeGroceryScrollviewController_t1749989468::get_offset_of_loadedRestaurantCount_4(),
	HomeGroceryScrollviewController_t1749989468::get_offset_of_recommendListLength_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1941 = { sizeof (HomeGroceryScrollviewElementController_t1733338872), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1941[1] = 
{
	HomeGroceryScrollviewElementController_t1733338872::get_offset_of_groceryID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1942 = { sizeof (HomeGrouponScrollviewController_t845716845), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1942[2] = 
{
	HomeGrouponScrollviewController_t845716845::get_offset_of_loadedRestaurantCount_3(),
	HomeGrouponScrollviewController_t845716845::get_offset_of_recommendListLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1943 = { sizeof (HomeGrouponScrollviewElementController_t305077447), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1943[2] = 
{
	HomeGrouponScrollviewElementController_t305077447::get_offset_of_grouponID_2(),
	HomeGrouponScrollviewElementController_t305077447::get_offset_of_grouponData_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1944 = { sizeof (HomePanelController_t106292673), -1, sizeof(HomePanelController_t106292673_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1944[15] = 
{
	HomePanelController_t106292673_StaticFields::get_offset_of_instance_5(),
	HomePanelController_t106292673::get_offset_of_gettingLocationBackground_6(),
	HomePanelController_t106292673::get_offset_of_zipcodeText_7(),
	HomePanelController_t106292673::get_offset_of_slideShow_8(),
	HomePanelController_t106292673::get_offset_of_slideImagePrefab_9(),
	HomePanelController_t106292673::get_offset_of_mainScrollRect_10(),
	HomePanelController_t106292673::get_offset_of_restaurantSectionController_11(),
	HomePanelController_t106292673::get_offset_of_groceryScrollviewController_12(),
	HomePanelController_t106292673::get_offset_of_grouponScrollviewController_13(),
	HomePanelController_t106292673::get_offset_of_shortCutSection_14(),
	HomePanelController_t106292673::get_offset_of_searchInput_15(),
	HomePanelController_t106292673::get_offset_of_slideShowLayoutElement_16(),
	HomePanelController_t106292673::get_offset_of_restaurantSectionGridLayoutGroup_17(),
	HomePanelController_t106292673::get_offset_of_groceryLayoutElement_18(),
	HomePanelController_t106292673::get_offset_of_groceryContentHorizontalLayoutGroup_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1945 = { sizeof (U3CLoadPanelCoroutineU3Ec__Iterator1B_t3777934668), -1, sizeof(U3CLoadPanelCoroutineU3Ec__Iterator1B_t3777934668_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1945[7] = 
{
	U3CLoadPanelCoroutineU3Ec__Iterator1B_t3777934668::get_offset_of_U3CmaxWaitU3E__0_0(),
	U3CLoadPanelCoroutineU3Ec__Iterator1B_t3777934668::get_offset_of_U24PC_1(),
	U3CLoadPanelCoroutineU3Ec__Iterator1B_t3777934668::get_offset_of_U24current_2(),
	U3CLoadPanelCoroutineU3Ec__Iterator1B_t3777934668::get_offset_of_U3CU3Ef__this_3(),
	U3CLoadPanelCoroutineU3Ec__Iterator1B_t3777934668_StaticFields::get_offset_of_U3CU3Ef__amU24cache4_4(),
	U3CLoadPanelCoroutineU3Ec__Iterator1B_t3777934668_StaticFields::get_offset_of_U3CU3Ef__amU24cache5_5(),
	U3CLoadPanelCoroutineU3Ec__Iterator1B_t3777934668_StaticFields::get_offset_of_U3CU3Ef__amU24cache6_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1946 = { sizeof (HomeRestaurantSectionController_t3614126629), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1946[2] = 
{
	HomeRestaurantSectionController_t3614126629::get_offset_of_loadedRestaurantCount_3(),
	HomeRestaurantSectionController_t3614126629::get_offset_of_recommendListLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1947 = { sizeof (HomeRestaurantSectionElementController_t4273359119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1947[1] = 
{
	HomeRestaurantSectionElementController_t4273359119::get_offset_of_restaurantID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1948 = { sizeof (HomeSlideController_t99493166), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1948[3] = 
{
	HomeSlideController_t99493166::get_offset_of_slideNumber_3(),
	HomeSlideController_t99493166::get_offset_of_imageParent_4(),
	HomeSlideController_t99493166::get_offset_of_startSlideShowIEnumerator_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1949 = { sizeof (U3CStartSlideShowCoroutineU3Ec__Iterator1C_t3682074070), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1949[11] = 
{
	U3CStartSlideShowCoroutineU3Ec__Iterator1C_t3682074070::get_offset_of_U3CtempU3E__0_0(),
	U3CStartSlideShowCoroutineU3Ec__Iterator1C_t3682074070::get_offset_of_U3CiU3E__1_1(),
	U3CStartSlideShowCoroutineU3Ec__Iterator1C_t3682074070::get_offset_of_data_2(),
	U3CStartSlideShowCoroutineU3Ec__Iterator1C_t3682074070::get_offset_of_U3CslideU3E__2_3(),
	U3CStartSlideShowCoroutineU3Ec__Iterator1C_t3682074070::get_offset_of_U3CiU3E__3_4(),
	U3CStartSlideShowCoroutineU3Ec__Iterator1C_t3682074070::get_offset_of_U3CiU3E__4_5(),
	U3CStartSlideShowCoroutineU3Ec__Iterator1C_t3682074070::get_offset_of_U3CtpU3E__5_6(),
	U3CStartSlideShowCoroutineU3Ec__Iterator1C_t3682074070::get_offset_of_U24PC_7(),
	U3CStartSlideShowCoroutineU3Ec__Iterator1C_t3682074070::get_offset_of_U24current_8(),
	U3CStartSlideShowCoroutineU3Ec__Iterator1C_t3682074070::get_offset_of_U3CU24U3Edata_9(),
	U3CStartSlideShowCoroutineU3Ec__Iterator1C_t3682074070::get_offset_of_U3CU3Ef__this_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1950 = { sizeof (U3CAddImageU3Ec__AnonStorey38_t4032839203), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1950[1] = 
{
	U3CAddImageU3Ec__AnonStorey38_t4032839203::get_offset_of_externalURL_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1951 = { sizeof (LanguageButtonController_t308009990), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1951[2] = 
{
	LanguageButtonController_t308009990::get_offset_of_EN_2(),
	LanguageButtonController_t308009990::get_offset_of_ZH_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1952 = { sizeof (LoadingCanvasController_t1588194384), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1952[7] = 
{
	LoadingCanvasController_t1588194384::get_offset_of_mainCanvas_2(),
	LoadingCanvasController_t1588194384::get_offset_of_guidePanel_3(),
	LoadingCanvasController_t1588194384::get_offset_of_countDownText_4(),
	LoadingCanvasController_t1588194384::get_offset_of_startTime_5(),
	LoadingCanvasController_t1588194384::get_offset_of_subDirPath_6(),
	LoadingCanvasController_t1588194384::get_offset_of_guideImageExtension_7(),
	LoadingCanvasController_t1588194384::get_offset_of_attempts_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1953 = { sizeof (U3CStartU3Ec__Iterator1D_t377488107), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1953[3] = 
{
	U3CStartU3Ec__Iterator1D_t377488107::get_offset_of_U24PC_0(),
	U3CStartU3Ec__Iterator1D_t377488107::get_offset_of_U24current_1(),
	U3CStartU3Ec__Iterator1D_t377488107::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1954 = { sizeof (U3CDownLoadGuideImagesCoroutineU3Ec__Iterator1E_t2427903504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1954[11] = 
{
	U3CDownLoadGuideImagesCoroutineU3Ec__Iterator1E_t2427903504::get_offset_of_U3CstartTimeU3E__0_0(),
	U3CDownLoadGuideImagesCoroutineU3Ec__Iterator1E_t2427903504::get_offset_of_image0URL_1(),
	U3CDownLoadGuideImagesCoroutineU3Ec__Iterator1E_t2427903504::get_offset_of_U3CwwwU3E__1_2(),
	U3CDownLoadGuideImagesCoroutineU3Ec__Iterator1E_t2427903504::get_offset_of_image1URL_3(),
	U3CDownLoadGuideImagesCoroutineU3Ec__Iterator1E_t2427903504::get_offset_of_image2URL_4(),
	U3CDownLoadGuideImagesCoroutineU3Ec__Iterator1E_t2427903504::get_offset_of_U24PC_5(),
	U3CDownLoadGuideImagesCoroutineU3Ec__Iterator1E_t2427903504::get_offset_of_U24current_6(),
	U3CDownLoadGuideImagesCoroutineU3Ec__Iterator1E_t2427903504::get_offset_of_U3CU24U3Eimage0URL_7(),
	U3CDownLoadGuideImagesCoroutineU3Ec__Iterator1E_t2427903504::get_offset_of_U3CU24U3Eimage1URL_8(),
	U3CDownLoadGuideImagesCoroutineU3Ec__Iterator1E_t2427903504::get_offset_of_U3CU24U3Eimage2URL_9(),
	U3CDownLoadGuideImagesCoroutineU3Ec__Iterator1E_t2427903504::get_offset_of_U3CU3Ef__this_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1955 = { sizeof (U3CDisplayGuideImagesFromCacheU3Ec__Iterator1F_t3864585969), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1955[4] = 
{
	U3CDisplayGuideImagesFromCacheU3Ec__Iterator1F_t3864585969::get_offset_of_U3CstartTimeU3E__0_0(),
	U3CDisplayGuideImagesFromCacheU3Ec__Iterator1F_t3864585969::get_offset_of_U24PC_1(),
	U3CDisplayGuideImagesFromCacheU3Ec__Iterator1F_t3864585969::get_offset_of_U24current_2(),
	U3CDisplayGuideImagesFromCacheU3Ec__Iterator1F_t3864585969::get_offset_of_U3CU3Ef__this_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1956 = { sizeof (LoadingPanelController_t666040324), -1, sizeof(LoadingPanelController_t666040324_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1956[6] = 
{
	LoadingPanelController_t666040324_StaticFields::get_offset_of_instance_5(),
	LoadingPanelController_t666040324::get_offset_of_gifList_6(),
	LoadingPanelController_t666040324::get_offset_of_gifImage_7(),
	LoadingPanelController_t666040324::get_offset_of_background_8(),
	LoadingPanelController_t666040324::get_offset_of_displayTime_9(),
	LoadingPanelController_t666040324::get_offset_of_currentGifIndex_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1957 = { sizeof (LoginCanvasController_t2983426173), -1, sizeof(LoginCanvasController_t2983426173_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1957[6] = 
{
	LoginCanvasController_t2983426173::get_offset_of_loginPanel_2(),
	LoginCanvasController_t2983426173::get_offset_of_registerPanel_3(),
	LoginCanvasController_t2983426173::get_offset_of_passwordResetPanel_4(),
	LoginCanvasController_t2983426173::get_offset_of_canvasScaler_5(),
	LoginCanvasController_t2983426173::get_offset_of_canvasSize_6(),
	LoginCanvasController_t2983426173_StaticFields::get_offset_of_instance_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1958 = { sizeof (LoginPanelController_t2789257783), -1, sizeof(LoginPanelController_t2789257783_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1958[12] = 
{
	LoginPanelController_t2789257783_StaticFields::get_offset_of_instance_5(),
	LoginPanelController_t2789257783::get_offset_of_homePanel_6(),
	LoginPanelController_t2789257783::get_offset_of_email_7(),
	LoginPanelController_t2789257783::get_offset_of_password_8(),
	LoginPanelController_t2789257783::get_offset_of_emailInputField_9(),
	LoginPanelController_t2789257783::get_offset_of_passwordInputField_10(),
	LoginPanelController_t2789257783::get_offset_of_loginButton_11(),
	LoginPanelController_t2789257783::get_offset_of_wechatButton_12(),
	LoginPanelController_t2789257783::get_offset_of_googlePlusButton_13(),
	LoginPanelController_t2789257783::get_offset_of_facebookButton_14(),
	LoginPanelController_t2789257783::get_offset_of_logoTransform_15(),
	LoginPanelController_t2789257783_StaticFields::get_offset_of_U3CU3Ef__amU24cacheB_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1959 = { sizeof (U3CStartU3Ec__Iterator20_t3555836783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1959[3] = 
{
	U3CStartU3Ec__Iterator20_t3555836783::get_offset_of_U24PC_0(),
	U3CStartU3Ec__Iterator20_t3555836783::get_offset_of_U24current_1(),
	U3CStartU3Ec__Iterator20_t3555836783::get_offset_of_U3CU3Ef__this_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1960 = { sizeof (MessagePanelController_t1782843865), -1, sizeof(MessagePanelController_t1782843865_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1960[2] = 
{
	MessagePanelController_t1782843865_StaticFields::get_offset_of_instance_5(),
	MessagePanelController_t1782843865::get_offset_of_messageText_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1961 = { sizeof (NotificationPanelController_t976377909), -1, sizeof(NotificationPanelController_t976377909_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1961[3] = 
{
	NotificationPanelController_t976377909_StaticFields::get_offset_of_instance_5(),
	NotificationPanelController_t976377909::get_offset_of_scrollRect_6(),
	NotificationPanelController_t976377909::get_offset_of_endlessScrollController_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1962 = { sizeof (NotificationPanelEndlessScrollController_t3950638948), -1, sizeof(NotificationPanelEndlessScrollController_t3950638948_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1962[6] = 
{
	NotificationPanelEndlessScrollController_t3950638948::get_offset_of__data_13(),
	NotificationPanelEndlessScrollController_t3950638948::get_offset_of__pageNumber_14(),
	NotificationPanelEndlessScrollController_t3950638948::get_offset_of__firstContentIndex_15(),
	NotificationPanelEndlessScrollController_t3950638948::get_offset_of__lastContentIndex_16(),
	NotificationPanelEndlessScrollController_t3950638948::get_offset_of__lastActiveIndex_17(),
	NotificationPanelEndlessScrollController_t3950638948_StaticFields::get_offset_of_U3CU3Ef__amU24cache5_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1963 = { sizeof (NotificationPanelNotificationBarController_t3326927659), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1963[2] = 
{
	NotificationPanelNotificationBarController_t3326927659::get_offset_of_dateText_2(),
	NotificationPanelNotificationBarController_t3326927659::get_offset_of_titleText_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1964 = { sizeof (U3CResetCoroutineU3Ec__Iterator21_t3430291603), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1964[5] = 
{
	U3CResetCoroutineU3Ec__Iterator21_t3430291603::get_offset_of_data_0(),
	U3CResetCoroutineU3Ec__Iterator21_t3430291603::get_offset_of_U24PC_1(),
	U3CResetCoroutineU3Ec__Iterator21_t3430291603::get_offset_of_U24current_2(),
	U3CResetCoroutineU3Ec__Iterator21_t3430291603::get_offset_of_U3CU24U3Edata_3(),
	U3CResetCoroutineU3Ec__Iterator21_t3430291603::get_offset_of_U3CU3Ef__this_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1965 = { sizeof (NotificationPanelScrollRectController_t1404149286), -1, sizeof(NotificationPanelScrollRectController_t1404149286_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1965[3] = 
{
	NotificationPanelScrollRectController_t1404149286_StaticFields::get_offset_of_instance_38(),
	NotificationPanelScrollRectController_t1404149286::get_offset_of_canDrag_39(),
	NotificationPanelScrollRectController_t1404149286::get_offset_of_currentPED_40(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1966 = { sizeof (OrderCommentPanelController_t2182119727), -1, sizeof(OrderCommentPanelController_t2182119727_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1966[11] = 
{
	OrderCommentPanelController_t2182119727_StaticFields::get_offset_of_instance_5(),
	OrderCommentPanelController_t2182119727::get_offset_of_commodityCommentSection_6(),
	OrderCommentPanelController_t2182119727::get_offset_of_driverCommentSection_7(),
	OrderCommentPanelController_t2182119727::get_offset_of_submitButton_8(),
	OrderCommentPanelController_t2182119727::get_offset_of_commodityInputField_9(),
	OrderCommentPanelController_t2182119727::get_offset_of_driverInputField_10(),
	OrderCommentPanelController_t2182119727::get_offset_of_targetSubOrderID_11(),
	OrderCommentPanelController_t2182119727::get_offset_of_targetRestaurantID_12(),
	OrderCommentPanelController_t2182119727::get_offset_of_targetOrderBar_13(),
	OrderCommentPanelController_t2182119727::get_offset_of_commodityStarCount_14(),
	OrderCommentPanelController_t2182119727::get_offset_of_driverStarCount_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1967 = { sizeof (OrderDetailPanelController_t1354893729), -1, sizeof(OrderDetailPanelController_t1354893729_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1967[17] = 
{
	OrderDetailPanelController_t1354893729_StaticFields::get_offset_of_instance_5(),
	OrderDetailPanelController_t1354893729::get_offset_of__orderData_6(),
	OrderDetailPanelController_t1354893729::get_offset_of__subOrderData_7(),
	OrderDetailPanelController_t1354893729::get_offset_of_defaultScrollRect_8(),
	OrderDetailPanelController_t1354893729::get_offset_of_restaurant_9(),
	OrderDetailPanelController_t1354893729::get_offset_of_dishBar_10(),
	OrderDetailPanelController_t1354893729::get_offset_of_coupon_11(),
	OrderDetailPanelController_t1354893729::get_offset_of_fees_12(),
	OrderDetailPanelController_t1354893729::get_offset_of_delivery_13(),
	OrderDetailPanelController_t1354893729::get_offset_of_wechat_14(),
	OrderDetailPanelController_t1354893729::get_offset_of_orderID_15(),
	OrderDetailPanelController_t1354893729::get_offset_of_contactPerson_16(),
	OrderDetailPanelController_t1354893729::get_offset_of_email_17(),
	OrderDetailPanelController_t1354893729::get_offset_of_address_18(),
	OrderDetailPanelController_t1354893729::get_offset_of_paymentMethod_19(),
	OrderDetailPanelController_t1354893729::get_offset_of_orderTime_20(),
	OrderDetailPanelController_t1354893729::get_offset_of_tempGO_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1968 = { sizeof (OrderPanelController_t3155145650), -1, sizeof(OrderPanelController_t3155145650_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1968[4] = 
{
	OrderPanelController_t3155145650_StaticFields::get_offset_of_instance_5(),
	OrderPanelController_t3155145650::get_offset_of_emptyOrderPanel_6(),
	OrderPanelController_t3155145650::get_offset_of_orderListContent_7(),
	OrderPanelController_t3155145650_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1969 = { sizeof (U3CLoadDataU3Ec__Iterator22_t993998146), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1969[10] = 
{
	U3CLoadDataU3Ec__Iterator22_t993998146::get_offset_of_data_0(),
	U3CLoadDataU3Ec__Iterator22_t993998146::get_offset_of_U3CiU3E__0_1(),
	U3CLoadDataU3Ec__Iterator22_t993998146::get_offset_of_U3CorderDataU3E__1_2(),
	U3CLoadDataU3Ec__Iterator22_t993998146::get_offset_of_U3CsubOrderDataU3E__2_3(),
	U3CLoadDataU3Ec__Iterator22_t993998146::get_offset_of_U3CjU3E__3_4(),
	U3CLoadDataU3Ec__Iterator22_t993998146::get_offset_of_U3CorderBarControllerU3E__4_5(),
	U3CLoadDataU3Ec__Iterator22_t993998146::get_offset_of_U24PC_6(),
	U3CLoadDataU3Ec__Iterator22_t993998146::get_offset_of_U24current_7(),
	U3CLoadDataU3Ec__Iterator22_t993998146::get_offset_of_U3CU24U3Edata_8(),
	U3CLoadDataU3Ec__Iterator22_t993998146::get_offset_of_U3CU3Ef__this_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1970 = { sizeof (OrderPanelOrderBarController_t3029815671), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1970[16] = 
{
	OrderPanelOrderBarController_t3029815671::get_offset_of__orderID_2(),
	OrderPanelOrderBarController_t3029815671::get_offset_of__subOrderID_3(),
	OrderPanelOrderBarController_t3029815671::get_offset_of__restaurantID_4(),
	OrderPanelOrderBarController_t3029815671::get_offset_of__orderStatus_5(),
	OrderPanelOrderBarController_t3029815671::get_offset_of__orderData_6(),
	OrderPanelOrderBarController_t3029815671::get_offset_of__subOrderData_7(),
	OrderPanelOrderBarController_t3029815671::get_offset_of_statusText_8(),
	OrderPanelOrderBarController_t3029815671::get_offset_of_restaurantName_9(),
	OrderPanelOrderBarController_t3029815671::get_offset_of_dishList_10(),
	OrderPanelOrderBarController_t3029815671::get_offset_of_dishNumberList_11(),
	OrderPanelOrderBarController_t3029815671::get_offset_of_totalPrice_12(),
	OrderPanelOrderBarController_t3029815671::get_offset_of_image_13(),
	OrderPanelOrderBarController_t3029815671::get_offset_of_deleteButton_14(),
	OrderPanelOrderBarController_t3029815671::get_offset_of_shareButton_15(),
	OrderPanelOrderBarController_t3029815671::get_offset_of_commentButton_16(),
	OrderPanelOrderBarController_t3029815671::get_offset_of_againButton_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1971 = { sizeof (PasswordResetPanelController_t2615324364), -1, sizeof(PasswordResetPanelController_t2615324364_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1971[11] = 
{
	PasswordResetPanelController_t2615324364_StaticFields::get_offset_of_instance_5(),
	PasswordResetPanelController_t2615324364::get_offset_of_emailInputField_6(),
	PasswordResetPanelController_t2615324364::get_offset_of_captchaInputField_7(),
	PasswordResetPanelController_t2615324364::get_offset_of_captchaArithmeticText_8(),
	PasswordResetPanelController_t2615324364::get_offset_of_submitButton_9(),
	PasswordResetPanelController_t2615324364::get_offset_of_logoTransform_10(),
	PasswordResetPanelController_t2615324364::get_offset_of_randomNumber1_11(),
	PasswordResetPanelController_t2615324364::get_offset_of_randomNumber2_12(),
	PasswordResetPanelController_t2615324364::get_offset_of_randomNumber3_13(),
	PasswordResetPanelController_t2615324364_StaticFields::get_offset_of_U3CU3Ef__amU24cache9_14(),
	PasswordResetPanelController_t2615324364_StaticFields::get_offset_of_U3CU3Ef__amU24cacheA_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1972 = { sizeof (PlaceOrderPanelController_t1990927129), -1, sizeof(PlaceOrderPanelController_t1990927129_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1972[33] = 
{
	PlaceOrderPanelController_t1990927129_StaticFields::get_offset_of_instance_5(),
	PlaceOrderPanelController_t1990927129::get_offset_of_addressSection_6(),
	PlaceOrderPanelController_t1990927129::get_offset_of_titleRestaurantBarSection_7(),
	PlaceOrderPanelController_t1990927129::get_offset_of_couponSection_8(),
	PlaceOrderPanelController_t1990927129::get_offset_of_tipSection_9(),
	PlaceOrderPanelController_t1990927129::get_offset_of_feeSection_10(),
	PlaceOrderPanelController_t1990927129::get_offset_of_paymentSection_11(),
	PlaceOrderPanelController_t1990927129::get_offset_of_paymentCreditCardSection_12(),
	PlaceOrderPanelController_t1990927129::get_offset_of_creditCardSection_13(),
	PlaceOrderPanelController_t1990927129::get_offset_of_confirmOrderPanel_14(),
	PlaceOrderPanelController_t1990927129::get_offset_of_uniwebviewPanel_15(),
	PlaceOrderPanelController_t1990927129::get_offset_of_couponInputField_16(),
	PlaceOrderPanelController_t1990927129::get_offset_of_payButton_17(),
	PlaceOrderPanelController_t1990927129::get_offset_of_isCurrentOrderInstantSend_18(),
	PlaceOrderPanelController_t1990927129::get_offset_of_restaurantBarPrefab_19(),
	PlaceOrderPanelController_t1990927129::get_offset_of_tempGOList_20(),
	PlaceOrderPanelController_t1990927129::get_offset_of_selectedAddressID_21(),
	PlaceOrderPanelController_t1990927129::get_offset_of_selectedCreditCardID_22(),
	PlaceOrderPanelController_t1990927129::get_offset_of_selectedCouponID_23(),
	PlaceOrderPanelController_t1990927129::get_offset_of_targetRegionDeliveryFee_24(),
	PlaceOrderPanelController_t1990927129::get_offset_of_totalPrice_25(),
	PlaceOrderPanelController_t1990927129::get_offset_of_extraFee_26(),
	PlaceOrderPanelController_t1990927129::get_offset_of_deliveryFee_27(),
	PlaceOrderPanelController_t1990927129::get_offset_of_cartDetailIDString_28(),
	PlaceOrderPanelController_t1990927129::get_offset_of_isUsingFreeDelivery_29(),
	PlaceOrderPanelController_t1990927129::get_offset_of_couponList_30(),
	PlaceOrderPanelController_t1990927129::get_offset_of_restaurantDeliveryFee_31(),
	PlaceOrderPanelController_t1990927129::get_offset_of_orderNumber_32(),
	PlaceOrderPanelController_t1990927129::get_offset_of_orderID_33(),
	PlaceOrderPanelController_t1990927129::get_offset_of_submitAttempts_34(),
	PlaceOrderPanelController_t1990927129::get_offset_of_checkForCompletionIEnumerator_35(),
	PlaceOrderPanelController_t1990927129_StaticFields::get_offset_of_U3CU3Ef__amU24cache1F_36(),
	PlaceOrderPanelController_t1990927129_StaticFields::get_offset_of_U3CU3Ef__amU24cache20_37(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1973 = { sizeof (U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1973[19] = 
{
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CcreditCardJSONU3E__0_0(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CdeliveryContentU3E__1_1(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CreservationContentU3E__2_2(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CdeliverCountU3E__3_3(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CreservationCountU3E__4_4(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CiU3E__5_5(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CrestaurantBarControllerU3E__6_6(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CU24s_62U3E__7_7(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CdishBarControllerU3E__8_8(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CiU3E__9_9(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CrestaurantBarControllerU3E__10_10(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CdishBarControllerU3E__11_11(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CdeliveryTimeZHU3E__12_12(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CdeliveryTimeENU3E__13_13(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CU24s_63U3E__14_14(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CdishBarU3E__15_15(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U24PC_16(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U24current_17(),
	U3CReloadPanelCoroutineU3Ec__Iterator23_t3640130919::get_offset_of_U3CU3Ef__this_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1974 = { sizeof (U3CCheckUniwebviewGOU3Ec__Iterator24_t2072599816), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1974[2] = 
{
	U3CCheckUniwebviewGOU3Ec__Iterator24_t2072599816::get_offset_of_U24PC_0(),
	U3CCheckUniwebviewGOU3Ec__Iterator24_t2072599816::get_offset_of_U24current_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1975 = { sizeof (U3CCheckForCompletionCoroutineU3Ec__Iterator25_t2904026667), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1975[6] = 
{
	U3CCheckForCompletionCoroutineU3Ec__Iterator25_t2904026667::get_offset_of_U3CisOrderPaymentCompleteU3E__0_0(),
	U3CCheckForCompletionCoroutineU3Ec__Iterator25_t2904026667::get_offset_of_U3CisResultBackU3E__1_1(),
	U3CCheckForCompletionCoroutineU3Ec__Iterator25_t2904026667::get_offset_of_U3CformU3E__2_2(),
	U3CCheckForCompletionCoroutineU3Ec__Iterator25_t2904026667::get_offset_of_U24PC_3(),
	U3CCheckForCompletionCoroutineU3Ec__Iterator25_t2904026667::get_offset_of_U24current_4(),
	U3CCheckForCompletionCoroutineU3Ec__Iterator25_t2904026667::get_offset_of_U3CU3Ef__this_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1976 = { sizeof (U3CSubmitOrderU3Ec__AnonStorey39_t3755600287), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1976[2] = 
{
	U3CSubmitOrderU3Ec__AnonStorey39_t3755600287::get_offset_of_successCallBack_0(),
	U3CSubmitOrderU3Ec__AnonStorey39_t3755600287::get_offset_of_U3CU3Ef__this_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1977 = { sizeof (PlaceOrderPanelPaymentToggleElementController_t2986330331), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1977[2] = 
{
	PlaceOrderPanelPaymentToggleElementController_t2986330331::get_offset_of_toggleBackground_7(),
	PlaceOrderPanelPaymentToggleElementController_t2986330331::get_offset_of_toggleCheckMark_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1978 = { sizeof (PlaceOrderPanelTipCustomToggleElementController_t1865536757), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1978[1] = 
{
	PlaceOrderPanelTipCustomToggleElementController_t1865536757::get_offset_of_inputField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1979 = { sizeof (PlaceOrderPanelTipToggleElementController_t727427366), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1980 = { sizeof (PlaceOrderPanelUniwebview_t2415642758), -1, sizeof(PlaceOrderPanelUniwebview_t2415642758_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1980[2] = 
{
	PlaceOrderPanelUniwebview_t2415642758::get_offset_of_url_2(),
	PlaceOrderPanelUniwebview_t2415642758_StaticFields::get_offset_of_webViewGameObject_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1981 = { sizeof (PopUpPanelController_t2747753076), -1, sizeof(PopUpPanelController_t2747753076_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1981[6] = 
{
	PopUpPanelController_t2747753076_StaticFields::get_offset_of_instance_5(),
	PopUpPanelController_t2747753076::get_offset_of_title_6(),
	PopUpPanelController_t2747753076::get_offset_of_cancel_7(),
	PopUpPanelController_t2747753076::get_offset_of_confirm_8(),
	PopUpPanelController_t2747753076::get_offset_of_cancelAction_9(),
	PopUpPanelController_t2747753076::get_offset_of_confirmAction_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1982 = { sizeof (PopUpTogglePanelController_t2896082304), -1, sizeof(PopUpTogglePanelController_t2896082304_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1982[10] = 
{
	PopUpTogglePanelController_t2896082304_StaticFields::get_offset_of_instance_5(),
	PopUpTogglePanelController_t2896082304::get_offset_of_togglePanel_6(),
	PopUpTogglePanelController_t2896082304::get_offset_of_toggleController_7(),
	PopUpTogglePanelController_t2896082304::get_offset_of_toggleElementTemplate_8(),
	PopUpTogglePanelController_t2896082304::get_offset_of_title_9(),
	PopUpTogglePanelController_t2896082304::get_offset_of_cancel_10(),
	PopUpTogglePanelController_t2896082304::get_offset_of_confirm_11(),
	PopUpTogglePanelController_t2896082304::get_offset_of_cancelAction_12(),
	PopUpTogglePanelController_t2896082304::get_offset_of_confirmAction_13(),
	PopUpTogglePanelController_t2896082304::get_offset_of_tempGOList_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1983 = { sizeof (PopUpTogglePanelToggleElementController_t503958368), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1984 = { sizeof (RegistrationPanelController_t2680136359), -1, sizeof(RegistrationPanelController_t2680136359_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1984[8] = 
{
	RegistrationPanelController_t2680136359_StaticFields::get_offset_of_instance_5(),
	RegistrationPanelController_t2680136359::get_offset_of_emailInputField_6(),
	RegistrationPanelController_t2680136359::get_offset_of_passwordInputField_7(),
	RegistrationPanelController_t2680136359::get_offset_of_repasswordInputField_8(),
	RegistrationPanelController_t2680136359::get_offset_of_invitationCodeInputField_9(),
	RegistrationPanelController_t2680136359::get_offset_of_registrationButton_10(),
	RegistrationPanelController_t2680136359::get_offset_of_logoTransform_11(),
	RegistrationPanelController_t2680136359_StaticFields::get_offset_of_U3CU3Ef__amU24cache7_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1985 = { sizeof (RestaurantDetailPanelCategoryBarController_t1797646523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1985[4] = 
{
	RestaurantDetailPanelCategoryBarController_t1797646523::get_offset_of_isRestaurant_2(),
	RestaurantDetailPanelCategoryBarController_t1797646523::get_offset_of_categoryID_3(),
	RestaurantDetailPanelCategoryBarController_t1797646523::get_offset_of_restaurantID_4(),
	RestaurantDetailPanelCategoryBarController_t1797646523::get_offset_of_accumualtedYOffset_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1986 = { sizeof (RestaurantDetailPanelCategoryBarToggleElementController_t2955603973), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1986[1] = 
{
	RestaurantDetailPanelCategoryBarToggleElementController_t2955603973::get_offset_of_selectedImage_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1987 = { sizeof (RestaurantDetailPanelCategoryScrollRectController_t545198753), -1, sizeof(RestaurantDetailPanelCategoryScrollRectController_t545198753_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1987[3] = 
{
	RestaurantDetailPanelCategoryScrollRectController_t545198753_StaticFields::get_offset_of_instance_38(),
	RestaurantDetailPanelCategoryScrollRectController_t545198753::get_offset_of_mainScrollRect_39(),
	RestaurantDetailPanelCategoryScrollRectController_t545198753::get_offset_of_sendToparent_40(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1988 = { sizeof (RestaurantDetailPanelCommentEndlessScroll_t1577071224), -1, sizeof(RestaurantDetailPanelCommentEndlessScroll_t1577071224_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1988[4] = 
{
	RestaurantDetailPanelCommentEndlessScroll_t1577071224::get_offset_of__data_14(),
	RestaurantDetailPanelCommentEndlessScroll_t1577071224_StaticFields::get_offset_of_instance_15(),
	RestaurantDetailPanelCommentEndlessScroll_t1577071224::get_offset_of_noCommentBar_16(),
	RestaurantDetailPanelCommentEndlessScroll_t1577071224_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1989 = { sizeof (RestaurantDetailPanelController_t2815147218), -1, sizeof(RestaurantDetailPanelController_t2815147218_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1989[24] = 
{
	RestaurantDetailPanelController_t2815147218_StaticFields::get_offset_of_instance_5(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_isRestaurantData_6(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_grouponID_7(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_restaurantID_8(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_restaurantNameZH_9(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_restaurantNameEN_10(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_isRestaurantOpen_11(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_categoryToggleController_12(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_dishEndlessScrollController_13(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_dishContent_14(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_commentContent_15(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_noCommentBar_16(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_dishCategoryBarPrefab_17(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_dishBarPrefab_18(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_categoryBarPrefab_19(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_dictionaryCategoryData_20(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_dictionaryDishData_21(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_dictionaryCommentData_22(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_grouponRestaurantData_23(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_grouponGoodsData_24(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_allComments_25(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_positiveComments_26(),
	RestaurantDetailPanelController_t2815147218::get_offset_of_negativeComments_27(),
	RestaurantDetailPanelController_t2815147218_StaticFields::get_offset_of_U3CU3Ef__amU24cache17_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1990 = { sizeof (U3CLoadDishDetailPanelCoroutineU3Ec__Iterator26_t1278650907), -1, sizeof(U3CLoadDishDetailPanelCoroutineU3Ec__Iterator26_t1278650907_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1990[8] = 
{
	U3CLoadDishDetailPanelCoroutineU3Ec__Iterator26_t1278650907::get_offset_of_U3CcachedDataU3E__0_0(),
	U3CLoadDishDetailPanelCoroutineU3Ec__Iterator26_t1278650907::get_offset_of_U3CformU3E__1_1(),
	U3CLoadDishDetailPanelCoroutineU3Ec__Iterator26_t1278650907::get_offset_of_U3CformU3E__2_2(),
	U3CLoadDishDetailPanelCoroutineU3Ec__Iterator26_t1278650907::get_offset_of_U24PC_3(),
	U3CLoadDishDetailPanelCoroutineU3Ec__Iterator26_t1278650907::get_offset_of_U24current_4(),
	U3CLoadDishDetailPanelCoroutineU3Ec__Iterator26_t1278650907::get_offset_of_U3CU3Ef__this_5(),
	U3CLoadDishDetailPanelCoroutineU3Ec__Iterator26_t1278650907_StaticFields::get_offset_of_U3CU3Ef__amU24cache6_6(),
	U3CLoadDishDetailPanelCoroutineU3Ec__Iterator26_t1278650907_StaticFields::get_offset_of_U3CU3Ef__amU24cache7_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1991 = { sizeof (U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1991[18] = 
{
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_data_0(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CrestaurantDataU3E__0_1(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CrestaurantImageBarU3E__1_2(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CstartTimeU3E__2_3(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CtoTimeU3E__3_4(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CsecondStartTimeU3E__4_5(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CsecondToTimeU3E__5_6(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CcurrentWeekdayU3E__6_7(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3ChourU3E__7_8(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CtypeDataU3E__8_9(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CtypeIndexU3E__9_10(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CcategoryBarU3E__10_11(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CdishDataU3E__11_12(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CdishIndexU3E__12_13(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U24PC_14(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U24current_15(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CU24U3Edata_16(),
	U3CLoadContentAndDishDataU3Ec__Iterator27_t2695086367::get_offset_of_U3CU3Ef__this_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1992 = { sizeof (U3CLoadGrouponDataU3Ec__Iterator28_t1634968252), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1992[10] = 
{
	U3CLoadGrouponDataU3Ec__Iterator28_t1634968252::get_offset_of_data_0(),
	U3CLoadGrouponDataU3Ec__Iterator28_t1634968252::get_offset_of_U3CgrouponU3E__0_1(),
	U3CLoadGrouponDataU3Ec__Iterator28_t1634968252::get_offset_of_U3CrestaurantImageBarU3E__1_2(),
	U3CLoadGrouponDataU3Ec__Iterator28_t1634968252::get_offset_of_U3CiU3E__2_3(),
	U3CLoadGrouponDataU3Ec__Iterator28_t1634968252::get_offset_of_U3CcategoryBarU3E__3_4(),
	U3CLoadGrouponDataU3Ec__Iterator28_t1634968252::get_offset_of_U3CdishDataU3E__4_5(),
	U3CLoadGrouponDataU3Ec__Iterator28_t1634968252::get_offset_of_U24PC_6(),
	U3CLoadGrouponDataU3Ec__Iterator28_t1634968252::get_offset_of_U24current_7(),
	U3CLoadGrouponDataU3Ec__Iterator28_t1634968252::get_offset_of_U3CU24U3Edata_8(),
	U3CLoadGrouponDataU3Ec__Iterator28_t1634968252::get_offset_of_U3CU3Ef__this_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1993 = { sizeof (RestaurantDetailPanelDishBarController_t4182018719), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1993[20] = 
{
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of_image_2(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of__imgURL_3(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of__restaurantID_4(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of__dishID_5(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of__dishTypeID_6(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of__price_7(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of__nameZH_8(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of__nameEN_9(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of__saleCount_10(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of__quantity_11(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of_titleT_12(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of_priceT_13(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of_saleCountT_14(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of_quantityT_15(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of_minusButton_16(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of_plusButton_17(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of__data_18(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of_isRestaurant_19(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of_grouponGoodsID_20(),
	RestaurantDetailPanelDishBarController_t4182018719::get_offset_of_grouponID_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1994 = { sizeof (RestaurantDetailPanelDishEndlessScroll_t4133165937), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1994[4] = 
{
	RestaurantDetailPanelDishEndlessScroll_t4133165937::get_offset_of__data_14(),
	RestaurantDetailPanelDishEndlessScroll_t4133165937::get_offset_of_lastContentYPosition_15(),
	RestaurantDetailPanelDishEndlessScroll_t4133165937::get_offset_of_isRestaurant_16(),
	RestaurantDetailPanelDishEndlessScroll_t4133165937::get_offset_of_grouponID_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1995 = { sizeof (RestaurantDetailPanelMainScrollRectController_t3410164444), -1, sizeof(RestaurantDetailPanelMainScrollRectController_t3410164444_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1995[1] = 
{
	RestaurantDetailPanelMainScrollRectController_t3410164444_StaticFields::get_offset_of_instance_38(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1996 = { sizeof (RestaurantDetailPanelTitleSectionToggleElementController_t3300369953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1996[2] = 
{
	RestaurantDetailPanelTitleSectionToggleElementController_t3300369953::get_offset_of_text_7(),
	RestaurantDetailPanelTitleSectionToggleElementController_t3300369953::get_offset_of_underline_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1997 = { sizeof (RestaurantDetailPanelTransparentBarController_t1706199699), -1, sizeof(RestaurantDetailPanelTransparentBarController_t1706199699_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1997[5] = 
{
	RestaurantDetailPanelTransparentBarController_t1706199699_StaticFields::get_offset_of_instance_2(),
	RestaurantDetailPanelTransparentBarController_t1706199699::get_offset_of_layoutElement_3(),
	RestaurantDetailPanelTransparentBarController_t1706199699::get_offset_of_isResizing_4(),
	RestaurantDetailPanelTransparentBarController_t1706199699::get_offset_of_resizingSpeed_5(),
	RestaurantDetailPanelTransparentBarController_t1706199699::get_offset_of_isResizedDown_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1998 = { sizeof (RestaurantDishDetailAttributeToggleElementController_t3598513776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1998[7] = 
{
	RestaurantDishDetailAttributeToggleElementController_t3598513776::get_offset_of_selecteCover_7(),
	RestaurantDishDetailAttributeToggleElementController_t3598513776::get_offset_of_text_8(),
	RestaurantDishDetailAttributeToggleElementController_t3598513776::get_offset_of__textZH_9(),
	RestaurantDishDetailAttributeToggleElementController_t3598513776::get_offset_of__textEN_10(),
	RestaurantDishDetailAttributeToggleElementController_t3598513776::get_offset_of_canSelectQuantity_11(),
	RestaurantDishDetailAttributeToggleElementController_t3598513776::get_offset_of_price_12(),
	RestaurantDishDetailAttributeToggleElementController_t3598513776::get_offset_of_quantity_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1999 = { sizeof (RestaurantDishDetailAttributeToggleParentController_t913154606), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1999[3] = 
{
	RestaurantDishDetailAttributeToggleParentController_t913154606::get_offset_of_canSelectQuantity_11(),
	RestaurantDishDetailAttributeToggleParentController_t913154606::get_offset_of_leastAmount_12(),
	RestaurantDishDetailAttributeToggleParentController_t913154606::get_offset_of_mostAmount_13(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
