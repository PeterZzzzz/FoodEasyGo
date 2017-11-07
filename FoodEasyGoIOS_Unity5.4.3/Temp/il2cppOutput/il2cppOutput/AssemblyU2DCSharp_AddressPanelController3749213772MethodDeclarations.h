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

// AddressPanelController
struct AddressPanelController_t3749213772;
// AddressPanelAddressBarController
struct AddressPanelAddressBarController_t264640299;
// LDFW.Network.LDFWServerResponseEvent
struct LDFWServerResponseEvent_t123101851;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_AddressPanelAddressBarController264640299.h"
#include "AssemblyU2DCSharp_LDFW_Network_LDFWServerResponseEv123101851.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void AddressPanelController::.ctor()
extern "C"  void AddressPanelController__ctor_m108401615 (AddressPanelController_t3749213772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::Awake()
extern "C"  void AddressPanelController_Awake_m346006834 (AddressPanelController_t3749213772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::ResetPanel()
extern "C"  void AddressPanelController_ResetPanel_m1508929866 (AddressPanelController_t3749213772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::ReloadPanel()
extern "C"  void AddressPanelController_ReloadPanel_m3762436376 (AddressPanelController_t3749213772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::ReloadModifyAddreessPanel()
extern "C"  void AddressPanelController_ReloadModifyAddreessPanel_m1831159821 (AddressPanelController_t3749213772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::OnCloseButtonClicked()
extern "C"  void AddressPanelController_OnCloseButtonClicked_m2317784657 (AddressPanelController_t3749213772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::OnAddAddressButtonClicked()
extern "C"  void AddressPanelController_OnAddAddressButtonClicked_m2959635600 (AddressPanelController_t3749213772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::SwitchModifyAddressPanel(System.Boolean,AddressPanelAddressBarController)
extern "C"  void AddressPanelController_SwitchModifyAddressPanel_m412013329 (AddressPanelController_t3749213772 * __this, bool ___state0, AddressPanelAddressBarController_t264640299 * ___bar1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::OnSaveModifyAddressButtonClicked()
extern "C"  void AddressPanelController_OnSaveModifyAddressButtonClicked_m819855820 (AddressPanelController_t3749213772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AddressPanelController::ValidateModifyAddressPanel()
extern "C"  bool AddressPanelController_ValidateModifyAddressPanel_m4155609417 (AddressPanelController_t3749213772 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::GetAddressList(LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void AddressPanelController_GetAddressList_m87743125 (AddressPanelController_t3749213772 * __this, LDFWServerResponseEvent_t123101851 * ___success0, LDFWServerResponseEvent_t123101851 * ___failure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::SetDefaultAddress(System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void AddressPanelController_SetDefaultAddress_m2561656800 (AddressPanelController_t3749213772 * __this, String_t* ___defaultAddressID0, LDFWServerResponseEvent_t123101851 * ___success1, LDFWServerResponseEvent_t123101851 * ___failure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::AddAddress(System.String,System.String,System.String,System.String,System.String,System.String,System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void AddressPanelController_AddAddress_m416527810 (AddressPanelController_t3749213772 * __this, String_t* ___name0, String_t* ___phone1, String_t* ___address2, String_t* ___street3, String_t* ___city4, String_t* ___state5, String_t* ___zipCode6, LDFWServerResponseEvent_t123101851 * ___success7, LDFWServerResponseEvent_t123101851 * ___failure8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::DeleteAddress(System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void AddressPanelController_DeleteAddress_m2092582924 (AddressPanelController_t3749213772 * __this, String_t* ___addressID0, LDFWServerResponseEvent_t123101851 * ___success1, LDFWServerResponseEvent_t123101851 * ___failure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::ModifyAddress(System.String,System.String,System.String,System.String,System.String,System.String,System.String,System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void AddressPanelController_ModifyAddress_m3518482431 (AddressPanelController_t3749213772 * __this, String_t* ___id0, String_t* ___name1, String_t* ___phone2, String_t* ___address3, String_t* ___street4, String_t* ___city5, String_t* ___state6, String_t* ___zipCode7, LDFWServerResponseEvent_t123101851 * ___success8, LDFWServerResponseEvent_t123101851 * ___failure9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::<ReloadPanel>m__66(JSONObject,System.String)
extern "C"  void AddressPanelController_U3CReloadPanelU3Em__66_m1817392168 (AddressPanelController_t3749213772 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::<ReloadPanel>m__67(JSONObject,System.String)
extern "C"  void AddressPanelController_U3CReloadPanelU3Em__67_m2779006185 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::<OnSaveModifyAddressButtonClicked>m__68(JSONObject,System.String)
extern "C"  void AddressPanelController_U3COnSaveModifyAddressButtonClickedU3Em__68_m2798641030 (AddressPanelController_t3749213772 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::<OnSaveModifyAddressButtonClicked>m__69(JSONObject,System.String)
extern "C"  void AddressPanelController_U3COnSaveModifyAddressButtonClickedU3Em__69_m3760255047 (AddressPanelController_t3749213772 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::<OnSaveModifyAddressButtonClicked>m__6A()
extern "C"  void AddressPanelController_U3COnSaveModifyAddressButtonClickedU3Em__6A_m2039990778 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AddressPanelController::<OnSaveModifyAddressButtonClicked>m__6B()
extern "C"  void AddressPanelController_U3COnSaveModifyAddressButtonClickedU3Em__6B_m2039991739 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
