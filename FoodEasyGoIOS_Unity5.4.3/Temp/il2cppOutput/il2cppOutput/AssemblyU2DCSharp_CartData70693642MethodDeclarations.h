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

// CartData
struct CartData_t70693642;
// System.String
struct String_t;
// CartDetailData
struct CartDetailData_t2591270651;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_CartDetailData2591270651.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void CartData::.ctor(System.String,System.Single)
extern "C"  void CartData__ctor_m3909102838 (CartData_t70693642 * __this, String_t* ___id0, float ___tipPrice1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartData::AddToCart(CartDetailData)
extern "C"  void CartData_AddToCart_m3292295952 (CartData_t70693642 * __this, CartDetailData_t2591270651 * ___cartDetail0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CartData::GetTotalPrice()
extern "C"  float CartData_GetTotalPrice_m3102567486 (CartData_t70693642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CartDetailData CartData::GetCartDetailData(System.String)
extern "C"  CartDetailData_t2591270651 * CartData_GetCartDetailData_m788104036 (CartData_t70693642 * __this, String_t* ___dishID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartData::SerializeDictionary()
extern "C"  void CartData_SerializeDictionary_m912298373 (CartData_t70693642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CartDetailData CartData::SearchForCartDetailBasedOnDishID(System.String)
extern "C"  CartDetailData_t2591270651 * CartData_SearchForCartDetailBasedOnDishID_m3408891992 (CartData_t70693642 * __this, String_t* ___dishID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// CartDetailData CartData::SearchForCartDetailBasedOnCartDetailID(System.String)
extern "C"  CartDetailData_t2591270651 * CartData_SearchForCartDetailBasedOnCartDetailID_m2077551169 (CartData_t70693642 * __this, String_t* ___cartDetailID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 CartData::CountForGoodsType(System.String)
extern "C"  int32_t CartData_CountForGoodsType_m4029233835 (CartData_t70693642 * __this, String_t* ___goodsTypeID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartData::DeleteCartDetail(System.String)
extern "C"  void CartData_DeleteCartDetail_m2037609843 (CartData_t70693642 * __this, String_t* ___cartDetailID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CartData::IsSyncedWithServer()
extern "C"  bool CartData_IsSyncedWithServer_m1129611860 (CartData_t70693642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartData::SyncWithServer()
extern "C"  void CartData_SyncWithServer_m3136385399 (CartData_t70693642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CartData::SyncWithServerCoroutine()
extern "C"  Il2CppObject * CartData_SyncWithServerCoroutine_m3987861179 (CartData_t70693642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String CartData::GetRestaurantIDList()
extern "C"  String_t* CartData_GetRestaurantIDList_m1461508920 (CartData_t70693642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartData::<DeleteCartDetail>m__14(JSONObject,System.String)
extern "C"  void CartData_U3CDeleteCartDetailU3Em__14_m2845400526 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
