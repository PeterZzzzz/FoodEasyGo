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

// CartPanelController
struct CartPanelController_t216331616;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void CartPanelController::.ctor()
extern "C"  void CartPanelController__ctor_m3129420299 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::Awake()
extern "C"  void CartPanelController_Awake_m3367025518 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::ResetPanel()
extern "C"  void CartPanelController_ResetPanel_m2038423694 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::ReloadPanel()
extern "C"  void CartPanelController_ReloadPanel_m2996875860 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CartPanelController::ReloadPanelCoroutine()
extern "C"  Il2CppObject * CartPanelController_ReloadPanelCoroutine_m358948478 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CartPanelController::LoadAllPanelCoroutine()
extern "C"  Il2CppObject * CartPanelController_LoadAllPanelCoroutine_m456805024 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::GetRestaurantData()
extern "C"  void CartPanelController_GetRestaurantData_m1985330534 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::GetTotalPriceDetails(System.String&,System.String&,System.String&)
extern "C"  void CartPanelController_GetTotalPriceDetails_m2046144266 (CartPanelController_t216331616 * __this, String_t** ___totalPrice0, String_t** ___extraFee1, String_t** ___deliveryFee2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::CheckForAddress(System.String)
extern "C"  void CartPanelController_CheckForAddress_m929155590 (CartPanelController_t216331616 * __this, String_t* ___selectedString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::OpenAddressPanel()
extern "C"  void CartPanelController_OpenAddressPanel_m730019123 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::OpenAddressPopUpToggle()
extern "C"  void CartPanelController_OpenAddressPopUpToggle_m447315183 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::ResetAddress(JSONObject)
extern "C"  void CartPanelController_ResetAddress_m912950423 (CartPanelController_t216331616 * __this, JSONObject_t1752376903 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::UpdateTitleBarInfo()
extern "C"  void CartPanelController_UpdateTitleBarInfo_m1057393835 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::OnOrderSomethingButtonClicked()
extern "C"  void CartPanelController_OnOrderSomethingButtonClicked_m2917841523 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::OnCheckOutButtonClicked()
extern "C"  void CartPanelController_OnCheckOutButtonClicked_m2371500441 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CartPanelController::CheckOutCoroutine()
extern "C"  Il2CppObject * CartPanelController_CheckOutCoroutine_m824759619 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::SwitchDeliveryContent(System.Boolean)
extern "C"  void CartPanelController_SwitchDeliveryContent_m29474545 (CartPanelController_t216331616 * __this, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::UpdateTotalFeeAmount()
extern "C"  void CartPanelController_UpdateTotalFeeAmount_m3793039068 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::UpdateRestaurantStatus()
extern "C"  void CartPanelController_UpdateRestaurantStatus_m1218740817 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::UpdatePayButtonStatus()
extern "C"  void CartPanelController_UpdatePayButtonStatus_m2718293228 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::RestartGetDeliverFee()
extern "C"  void CartPanelController_RestartGetDeliverFee_m1803586081 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CartPanelController::GetDeliverFeeCoroutine()
extern "C"  Il2CppObject * CartPanelController_GetDeliverFeeCoroutine_m1439343314 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::ProcessRestaurantListBasedOnDeliverFee()
extern "C"  void CartPanelController_ProcessRestaurantListBasedOnDeliverFee_m3864926114 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::<GetRestaurantData>m__19(JSONObject,System.String)
extern "C"  void CartPanelController_U3CGetRestaurantDataU3Em__19_m1446226278 (CartPanelController_t216331616 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::<GetRestaurantData>m__1A(JSONObject,System.String)
extern "C"  void CartPanelController_U3CGetRestaurantDataU3Em__1A_m549203822 (CartPanelController_t216331616 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::<OpenAddressPanel>m__1B()
extern "C"  void CartPanelController_U3COpenAddressPanelU3Em__1B_m3172225023 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::<OpenAddressPopUpToggle>m__1C()
extern "C"  void CartPanelController_U3COpenAddressPopUpToggleU3Em__1C_m1783649660 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CartPanelController::<OpenAddressPopUpToggle>m__1D()
extern "C"  void CartPanelController_U3COpenAddressPopUpToggleU3Em__1D_m1783650621 (CartPanelController_t216331616 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
