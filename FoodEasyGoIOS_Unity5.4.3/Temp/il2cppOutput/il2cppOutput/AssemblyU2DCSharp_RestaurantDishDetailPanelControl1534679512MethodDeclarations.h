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

// RestaurantDishDetailPanelController
struct RestaurantDishDetailPanelController_t1534679512;
// System.String
struct String_t;
// RestaurantDetailPanelDishBarController
struct RestaurantDetailPanelDishBarController_t4182018719;
// CartDetailData
struct CartDetailData_t2591270651;
// GroceryPanelGroceryBarElementController
struct GroceryPanelGroceryBarElementController_t1364623611;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_RestaurantDetailPanelDishBarCont4182018719.h"
#include "AssemblyU2DCSharp_CartDetailData2591270651.h"
#include "AssemblyU2DCSharp_GroceryPanelGroceryBarElementCon1364623611.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void RestaurantDishDetailPanelController::.ctor()
extern "C"  void RestaurantDishDetailPanelController__ctor_m2863496339 (RestaurantDishDetailPanelController_t1534679512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::Awake()
extern "C"  void RestaurantDishDetailPanelController_Awake_m3101101558 (RestaurantDishDetailPanelController_t1534679512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::ResetPanel()
extern "C"  void RestaurantDishDetailPanelController_ResetPanel_m2257576710 (RestaurantDishDetailPanelController_t1534679512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::ReloadPanel()
extern "C"  void RestaurantDishDetailPanelController_ReloadPanel_m1200684764 (RestaurantDishDetailPanelController_t1534679512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::OpenPanel()
extern "C"  void RestaurantDishDetailPanelController_OpenPanel_m1202015499 (RestaurantDishDetailPanelController_t1534679512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::OpenPanel(System.String,System.String,RestaurantDetailPanelDishBarController)
extern "C"  void RestaurantDishDetailPanelController_OpenPanel_m817759444 (RestaurantDishDetailPanelController_t1534679512 * __this, String_t* ___dishID0, String_t* ___cartDetailID1, RestaurantDetailPanelDishBarController_t4182018719 * ___bar2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::OpenPanel(CartDetailData)
extern "C"  void RestaurantDishDetailPanelController_OpenPanel_m2921681392 (RestaurantDishDetailPanelController_t1534679512 * __this, CartDetailData_t2591270651 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::OpenPanel(System.Int32,System.String,System.String,GroceryPanelGroceryBarElementController)
extern "C"  void RestaurantDishDetailPanelController_OpenPanel_m384834277 (RestaurantDishDetailPanelController_t1534679512 * __this, int32_t ___index0, String_t* ___groceryID1, String_t* ___cartDetailID2, GroceryPanelGroceryBarElementController_t1364623611 * ___groceryBar3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::OpenPanel(System.String)
extern "C"  void RestaurantDishDetailPanelController_OpenPanel_m1292442583 (RestaurantDishDetailPanelController_t1534679512 * __this, String_t* ___dishID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::HidePanelImmediately()
extern "C"  void RestaurantDishDetailPanelController_HidePanelImmediately_m2006556941 (RestaurantDishDetailPanelController_t1534679512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RestaurantDishDetailPanelController::LoadDishDetailData(JSONObject)
extern "C"  Il2CppObject * RestaurantDishDetailPanelController_LoadDishDetailData_m2905474685 (RestaurantDishDetailPanelController_t1534679512 * __this, JSONObject_t1752376903 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::UpdateDishDetailsBasedOnCart()
extern "C"  void RestaurantDishDetailPanelController_UpdateDishDetailsBasedOnCart_m941522052 (RestaurantDishDetailPanelController_t1534679512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::OnAddButtonClicked()
extern "C"  void RestaurantDishDetailPanelController_OnAddButtonClicked_m4183741188 (RestaurantDishDetailPanelController_t1534679512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::RefreshSelectedAttributesText()
extern "C"  void RestaurantDishDetailPanelController_RefreshSelectedAttributesText_m277196427 (RestaurantDishDetailPanelController_t1534679512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RestaurantDishDetailPanelController::CheckAttributeValidity()
extern "C"  bool RestaurantDishDetailPanelController_CheckAttributeValidity_m3086878819 (RestaurantDishDetailPanelController_t1534679512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::OnNoteInputFieldPointerDown()
extern "C"  void RestaurantDishDetailPanelController_OnNoteInputFieldPointerDown_m1388573519 (RestaurantDishDetailPanelController_t1534679512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::<ReloadPanel>m__56(JSONObject,System.String)
extern "C"  void RestaurantDishDetailPanelController_U3CReloadPanelU3Em__56_m277589637 (RestaurantDishDetailPanelController_t1534679512 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDishDetailPanelController::<ReloadPanel>m__57(JSONObject,System.String)
extern "C"  void RestaurantDishDetailPanelController_U3CReloadPanelU3Em__57_m1239203654 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
