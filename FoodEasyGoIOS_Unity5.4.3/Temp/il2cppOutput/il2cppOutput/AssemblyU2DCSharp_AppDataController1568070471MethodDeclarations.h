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

// AppDataController
struct AppDataController_t1568070471;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// System.Action
struct Action_t3771233898;
// JSONObject
struct JSONObject_t1752376903;
// System.Collections.Generic.List`1<JSONObject>
struct List_1_t3120562455;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_Core_System_Action3771233898.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void AppDataController::.ctor()
extern "C"  void AppDataController__ctor_m2470547972 (AppDataController_t1568070471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppDataController::Awake()
extern "C"  void AppDataController_Awake_m2708153191 (AppDataController_t1568070471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator AppDataController::Start()
extern "C"  Il2CppObject * AppDataController_Start_m4036484940 (AppDataController_t1568070471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppDataController::GetDeliveryDestineTime()
extern "C"  void AppDataController_GetDeliveryDestineTime_m1656468193 (AppDataController_t1568070471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AppDataController::GetDeliveryDestineTime(System.String)
extern "C"  String_t* AppDataController_GetDeliveryDestineTime_m373446372 (AppDataController_t1568070471 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppDataController::SyncAddressList(System.Action)
extern "C"  void AppDataController_SyncAddressList_m1501732068 (AppDataController_t1568070471 * __this, Action_t3771233898 * ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject AppDataController::GetAddress(System.String)
extern "C"  JSONObject_t1752376903 * AppDataController_GetAddress_m4023696666 (AppDataController_t1568070471 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<JSONObject> AppDataController::GetAllAddresses(System.String)
extern "C"  List_1_t3120562455 * AppDataController_GetAllAddresses_m1518955311 (AppDataController_t1568070471 * __this, String_t* ___exceptList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppDataController::SyncCreditCardList()
extern "C"  void AppDataController_SyncCreditCardList_m567269730 (AppDataController_t1568070471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject AppDataController::GetCreditCard(System.String)
extern "C"  JSONObject_t1752376903 * AppDataController_GetCreditCard_m3554412491 (AppDataController_t1568070471 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppDataController::SyncCouponList()
extern "C"  void AppDataController_SyncCouponList_m2783827743 (AppDataController_t1568070471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject AppDataController::GetCoupon(System.String)
extern "C"  JSONObject_t1752376903 * AppDataController_GetCoupon_m1748774190 (AppDataController_t1568070471 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppDataController::<GetDeliveryDestineTime>m__5(JSONObject,System.String)
extern "C"  void AppDataController_U3CGetDeliveryDestineTimeU3Em__5_m3478952286 (AppDataController_t1568070471 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppDataController::<GetDeliveryDestineTime>m__6(JSONObject,System.String)
extern "C"  void AppDataController_U3CGetDeliveryDestineTimeU3Em__6_m145599007 (AppDataController_t1568070471 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppDataController::<SyncCreditCardList>m__9(JSONObject,System.String)
extern "C"  void AppDataController_U3CSyncCreditCardListU3Em__9_m544895617 (AppDataController_t1568070471 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppDataController::<SyncCreditCardList>m__A(JSONObject,System.String)
extern "C"  void AppDataController_U3CSyncCreditCardListU3Em__A_m3942840457 (AppDataController_t1568070471 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppDataController::<SyncCouponList>m__B(JSONObject,System.String)
extern "C"  void AppDataController_U3CSyncCouponListU3Em__B_m256369069 (AppDataController_t1568070471 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppDataController::<SyncCouponList>m__C(JSONObject,System.String)
extern "C"  void AppDataController_U3CSyncCouponListU3Em__C_m1217983086 (AppDataController_t1568070471 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
