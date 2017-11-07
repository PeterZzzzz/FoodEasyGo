#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// CartController
struct CartController_t4265484028;
// System.Action
struct Action_t3771233898;
// JSONObject
struct JSONObject_t1752376903;
// System.String
struct String_t;
// DishData
struct DishData_t341145732;
// System.Collections.Generic.Dictionary`2<System.String,AttributeData>
struct Dictionary_2_t169813896;
// CartDetailData
struct CartDetailData_t2591270651;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3771233898.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_DishData341145732.h"

// System.Void CartController::.ctor()
extern "C"  void CartController__ctor_m2703542559 (CartController_t4265484028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartController::Awake()
extern "C"  void CartController_Awake_m2941147778 (CartController_t4265484028 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartController::GetCartDetails(System.Action)
extern "C"  void CartController_GetCartDetails_m2369166092 (CartController_t4265484028 * __this, Action_t3771233898 * ___successAction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartController::LoadCartDetail(JSONObject,System.Boolean)
extern "C"  void CartController_LoadCartDetail_m66336104 (CartController_t4265484028 * __this, JSONObject_t1752376903 * ___data0, bool ___isFromServer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartController::AddToCart(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Int32,DishData,System.Collections.Generic.Dictionary`2<System.String,AttributeData>)
extern "C"  void CartController_AddToCart_m863279749 (CartController_t4265484028 * __this, String_t* ___category0, String_t* ___deliveryTimeID1, String_t* ___grouponID2, String_t* ___grouponGoodsID3, String_t* ___restaurantID4, String_t* ___restaurantNameZH5, String_t* ___restaurantNameEN6, String_t* ___dishID7, String_t* ___dishTypeID8, String_t* ___attributeList9, String_t* ___attributeNumberList10, String_t* ___notes11, int32_t ___number12, DishData_t341145732 * ___dishData13, Dictionary_2_t169813896 * ___attributeDataDic14, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CartDetailData CartController::SearchForCartDetailBasedOnDishID(System.String)
extern "C"  CartDetailData_t2591270651 * CartController_SearchForCartDetailBasedOnDishID_m2784230950 (CartController_t4265484028 * __this, String_t* ___dishID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CartDetailData CartController::SearchForCartDetailBasedOnCartDetailID(System.String)
extern "C"  CartDetailData_t2591270651 * CartController_SearchForCartDetailBasedOnCartDetailID_m3424077199 (CartController_t4265484028 * __this, String_t* ___cartDetailID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CartController::CountForGoodsType(System.String)
extern "C"  int32_t CartController_CountForGoodsType_m2273491357 (CartController_t4265484028 * __this, String_t* ___goodsTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartController::DeleteCartDetail(System.String)
extern "C"  void CartController_DeleteCartDetail_m4262976961 (CartController_t4265484028 * __this, String_t* ___cartDetailID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
