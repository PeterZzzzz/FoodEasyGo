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

// PaymentPanelController
struct PaymentPanelController_t3853957626;
// PaymentPanelPaymentBarController
struct PaymentPanelPaymentBarController_t3312808071;
// LDFW.Network.LDFWServerResponseEvent
struct LDFWServerResponseEvent_t123101851;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PaymentPanelPaymentBarController3312808071.h"
#include "AssemblyU2DCSharp_LDFW_Network_LDFWServerResponseEv123101851.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void PaymentPanelController::.ctor()
extern "C"  void PaymentPanelController__ctor_m1753093089 (PaymentPanelController_t3853957626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::Awake()
extern "C"  void PaymentPanelController_Awake_m1990698308 (PaymentPanelController_t3853957626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::ResetPanel()
extern "C"  void PaymentPanelController_ResetPanel_m463449208 (PaymentPanelController_t3853957626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::ReloadPanel()
extern "C"  void PaymentPanelController_ReloadPanel_m1417307050 (PaymentPanelController_t3853957626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::OnCloseButtonClicked()
extern "C"  void PaymentPanelController_OnCloseButtonClicked_m3009425407 (PaymentPanelController_t3853957626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::OnAddPaymentButtonClicked()
extern "C"  void PaymentPanelController_OnAddPaymentButtonClicked_m2809133904 (PaymentPanelController_t3853957626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::SwitchModifyPaymentPanel(System.Boolean,PaymentPanelPaymentBarController)
extern "C"  void PaymentPanelController_SwitchModifyPaymentPanel_m3906170201 (PaymentPanelController_t3853957626 * __this, bool ___state0, PaymentPanelPaymentBarController_t3312808071 * ___bar1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::OnSaveModifyPaymentButtonClicked()
extern "C"  void PaymentPanelController_OnSaveModifyPaymentButtonClicked_m3200698920 (PaymentPanelController_t3853957626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PaymentPanelController::ValidateModifyPaymentPanel()
extern "C"  bool PaymentPanelController_ValidateModifyPaymentPanel_m3425468965 (PaymentPanelController_t3853957626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::GetPaymentList(LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void PaymentPanelController_GetPaymentList_m2260860373 (PaymentPanelController_t3853957626 * __this, LDFWServerResponseEvent_t123101851 * ___success0, LDFWServerResponseEvent_t123101851 * ___failure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::SetDefaultPayment(System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void PaymentPanelController_SetDefaultPayment_m2312954044 (PaymentPanelController_t3853957626 * __this, String_t* ___defaultPaymentID0, LDFWServerResponseEvent_t123101851 * ___success1, LDFWServerResponseEvent_t123101851 * ___failure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::AddPayment(System.String,System.String,System.String,System.String,System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void PaymentPanelController_AddPayment_m1330338442 (PaymentPanelController_t3853957626 * __this, String_t* ___firstName0, String_t* ___lastName1, String_t* ___card2, String_t* ___exp_time3, String_t* ___security_code4, LDFWServerResponseEvent_t123101851 * ___success5, LDFWServerResponseEvent_t123101851 * ___failure6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::DeletePayment(System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void PaymentPanelController_DeletePayment_m2032265192 (PaymentPanelController_t3853957626 * __this, String_t* ___paymentID0, LDFWServerResponseEvent_t123101851 * ___success1, LDFWServerResponseEvent_t123101851 * ___failure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::ModifyPayment(System.String,System.String,System.String,System.String,System.String,System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void PaymentPanelController_ModifyPayment_m589386211 (PaymentPanelController_t3853957626 * __this, String_t* ___id0, String_t* ___firstName1, String_t* ___lastName2, String_t* ___card3, String_t* ___exp_time4, String_t* ___security_code5, LDFWServerResponseEvent_t123101851 * ___success6, LDFWServerResponseEvent_t123101851 * ___failure7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::<ReloadPanel>m__75(JSONObject,System.String)
extern "C"  void PaymentPanelController_U3CReloadPanelU3Em__75_m3197775348 (PaymentPanelController_t3853957626 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::<ReloadPanel>m__76(JSONObject,System.String)
extern "C"  void PaymentPanelController_U3CReloadPanelU3Em__76_m4159389365 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::<OnSaveModifyPaymentButtonClicked>m__77(JSONObject,System.String)
extern "C"  void PaymentPanelController_U3COnSaveModifyPaymentButtonClickedU3Em__77_m4219427556 (PaymentPanelController_t3853957626 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaymentPanelController::<OnSaveModifyPaymentButtonClicked>m__78(JSONObject,System.String)
extern "C"  void PaymentPanelController_U3COnSaveModifyPaymentButtonClickedU3Em__78_m886074277 (PaymentPanelController_t3853957626 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
