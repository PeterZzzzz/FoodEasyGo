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

// CartPanelRestaurantBarController
struct CartPanelRestaurantBarController_t3060481166;
// JSONObject
struct JSONObject_t1752376903;
// System.String
struct String_t;
// CartPanelDishBarController
struct CartPanelDishBarController_t918763089;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_CartPanelDishBarController918763089.h"

// System.Void CartPanelRestaurantBarController::.ctor()
extern "C"  void CartPanelRestaurantBarController__ctor_m1148910029 (CartPanelRestaurantBarController_t3060481166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelRestaurantBarController::Awake()
extern "C"  void CartPanelRestaurantBarController_Awake_m1386515248 (CartPanelRestaurantBarController_t3060481166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelRestaurantBarController::ResetUI(JSONObject,System.Boolean,System.String,System.String,System.String,System.Single)
extern "C"  void CartPanelRestaurantBarController_ResetUI_m635862031 (CartPanelRestaurantBarController_t3060481166 * __this, JSONObject_t1752376903 * ___restaurantData0, bool ___isRes1, String_t* ___id2, String_t* ___nameZH3, String_t* ___nameEN4, float ___minConsume5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelRestaurantBarController::UpdateUI()
extern "C"  void CartPanelRestaurantBarController_UpdateUI_m2242759860 (CartPanelRestaurantBarController_t3060481166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelRestaurantBarController::OnDeleteButtonClicked()
extern "C"  void CartPanelRestaurantBarController_OnDeleteButtonClicked_m4085651574 (CartPanelRestaurantBarController_t3060481166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelRestaurantBarController::AddDishBar(CartPanelDishBarController)
extern "C"  void CartPanelRestaurantBarController_AddDishBar_m4106080222 (CartPanelRestaurantBarController_t3060481166 * __this, CartPanelDishBarController_t918763089 * ___dishBar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelRestaurantBarController::RemoveDishBar(CartPanelDishBarController)
extern "C"  void CartPanelRestaurantBarController_RemoveDishBar_m3744555951 (CartPanelRestaurantBarController_t3060481166 * __this, CartPanelDishBarController_t918763089 * ___dishBar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CartPanelRestaurantBarController::GetTotalPrice()
extern "C"  float CartPanelRestaurantBarController_GetTotalPrice_m3499620154 (CartPanelRestaurantBarController_t3060481166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single CartPanelRestaurantBarController::GetExtraFee()
extern "C"  float CartPanelRestaurantBarController_GetExtraFee_m1849501931 (CartPanelRestaurantBarController_t3060481166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelRestaurantBarController::CheckForMinOrder()
extern "C"  void CartPanelRestaurantBarController_CheckForMinOrder_m2058955636 (CartPanelRestaurantBarController_t3060481166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelRestaurantBarController::<OnDeleteButtonClicked>m__23()
extern "C"  void CartPanelRestaurantBarController_U3COnDeleteButtonClickedU3Em__23_m2991794358 (CartPanelRestaurantBarController_t3060481166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
