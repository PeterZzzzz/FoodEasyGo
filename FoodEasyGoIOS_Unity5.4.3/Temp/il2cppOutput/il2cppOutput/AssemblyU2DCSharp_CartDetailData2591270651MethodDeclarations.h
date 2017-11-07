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

// CartDetailData
struct CartDetailData_t2591270651;
// System.String
struct String_t;
// DishData
struct DishData_t341145732;
// System.Collections.Generic.Dictionary`2<System.String,AttributeData>
struct Dictionary_2_t169813896;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_DishData341145732.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void CartDetailData::.ctor(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Int32,DishData,System.Collections.Generic.Dictionary`2<System.String,AttributeData>)
extern "C"  void CartDetailData__ctor_m2356896784 (CartDetailData_t2591270651 * __this, String_t* ___id0, String_t* ___category1, String_t* ___deliverTimeID2, String_t* ___grouponID3, String_t* ___grouponGoodsID4, String_t* ___goodsID5, String_t* ___goodsTypeID6, String_t* ___goodsRestaurantID7, String_t* ___restaurantNameZH8, String_t* ___restaurantNameEN9, String_t* ___attributeIDList10, String_t* ___attributeNumberList11, String_t* ___notes12, int32_t ___number13, DishData_t341145732 * ___dishData14, Dictionary_2_t169813896 * ___attributeDic15, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartDetailData::SetData(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.Int32,DishData,System.Collections.Generic.Dictionary`2<System.String,AttributeData>)
extern "C"  void CartDetailData_SetData_m1952595670 (CartDetailData_t2591270651 * __this, String_t* ___category0, String_t* ___deliverTimeID1, String_t* ___grouponID2, String_t* ___grouponGoodsID3, String_t* ___goodsID4, String_t* ___goodsTypeID5, String_t* ___goodsRestaurantID6, String_t* ___restaurantNameZH7, String_t* ___restaurantNameEN8, String_t* ___attributeIDList9, String_t* ___attributeNumberList10, String_t* ___notes11, int32_t ___number12, DishData_t341145732 * ___dishData13, Dictionary_2_t169813896 * ___attributeDic14, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartDetailData::AddAttribute(System.String,System.Single,System.Int32,System.String,System.String)
extern "C"  void CartDetailData_AddAttribute_m4016004167 (CartDetailData_t2591270651 * __this, String_t* ___id0, float ___price1, int32_t ___quantity2, String_t* ___nameZH3, String_t* ___nameEN4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartDetailData::DeleteAttribute(System.String)
extern "C"  void CartDetailData_DeleteAttribute_m3594511763 (CartDetailData_t2591270651 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CartDetailData::GetDishPrice()
extern "C"  float CartDetailData_GetDishPrice_m4260121833 (CartDetailData_t2591270651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CartDetailData::GetAttributeTotalPrice()
extern "C"  float CartDetailData_GetAttributeTotalPrice_m1121805691 (CartDetailData_t2591270651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CartDetailData::GetTotalPrice()
extern "C"  float CartDetailData_GetTotalPrice_m71004013 (CartDetailData_t2591270651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartDetailData::SerializeDictionary()
extern "C"  void CartDetailData_SerializeDictionary_m2304658548 (CartDetailData_t2591270651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartDetailData::IncreaseQuantity(System.Int32)
extern "C"  void CartDetailData_IncreaseQuantity_m2515567170 (CartDetailData_t2591270651 * __this, int32_t ___increase0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CartDetailData::GetAttributeNameListEN()
extern "C"  String_t* CartDetailData_GetAttributeNameListEN_m2242227295 (CartDetailData_t2591270651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CartDetailData::GetAttributeNameListZH()
extern "C"  String_t* CartDetailData_GetAttributeNameListZH_m2242847140 (CartDetailData_t2591270651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartDetailData::SyncWithServer()
extern "C"  void CartDetailData_SyncWithServer_m815291688 (CartDetailData_t2591270651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartDetailData::UpdateAttributeIDList()
extern "C"  void CartDetailData_UpdateAttributeIDList_m4052922890 (CartDetailData_t2591270651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartDetailData::<SyncWithServer>m__15(JSONObject,System.String)
extern "C"  void CartDetailData_U3CSyncWithServerU3Em__15_m2207760454 (CartDetailData_t2591270651 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartDetailData::<SyncWithServer>m__16(JSONObject,System.String)
extern "C"  void CartDetailData_U3CSyncWithServerU3Em__16_m3169374471 (CartDetailData_t2591270651 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartDetailData::<SyncWithServer>m__17(JSONObject,System.String)
extern "C"  void CartDetailData_U3CSyncWithServerU3Em__17_m4130988488 (CartDetailData_t2591270651 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartDetailData::<SyncWithServer>m__18(JSONObject,System.String)
extern "C"  void CartDetailData_U3CSyncWithServerU3Em__18_m797635209 (CartDetailData_t2591270651 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
