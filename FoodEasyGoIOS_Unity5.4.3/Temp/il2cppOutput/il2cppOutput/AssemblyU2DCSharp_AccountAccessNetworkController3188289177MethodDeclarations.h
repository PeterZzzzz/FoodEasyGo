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

// AccountAccessNetworkController
struct AccountAccessNetworkController_t3188289177;
// System.String
struct String_t;
// LDFW.Network.LDFWServerResponseEvent
struct LDFWServerResponseEvent_t123101851;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_LDFW_Network_LDFWServerResponseEv123101851.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void AccountAccessNetworkController::.ctor()
extern "C"  void AccountAccessNetworkController__ctor_m3918629410 (AccountAccessNetworkController_t3188289177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccountAccessNetworkController::Awake()
extern "C"  void AccountAccessNetworkController_Awake_m4156234629 (AccountAccessNetworkController_t3188289177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccountAccessNetworkController::Update()
extern "C"  void AccountAccessNetworkController_Update_m2945289515 (AccountAccessNetworkController_t3188289177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccountAccessNetworkController::BackgroundUserLogin()
extern "C"  void AccountAccessNetworkController_BackgroundUserLogin_m1829902800 (AccountAccessNetworkController_t3188289177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccountAccessNetworkController::UserLogin(System.String,System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void AccountAccessNetworkController_UserLogin_m3523226912 (AccountAccessNetworkController_t3188289177 * __this, String_t* ___email0, String_t* ___password1, LDFWServerResponseEvent_t123101851 * ___success2, LDFWServerResponseEvent_t123101851 * ___failure3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccountAccessNetworkController::ThirdPartyLogin(System.String,System.String,System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void AccountAccessNetworkController_ThirdPartyLogin_m3766259344 (AccountAccessNetworkController_t3188289177 * __this, String_t* ___userid0, String_t* ___platform1, String_t* ___email2, LDFWServerResponseEvent_t123101851 * ___success3, LDFWServerResponseEvent_t123101851 * ___failure4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccountAccessNetworkController::UserRegister(System.String,System.String,System.String,System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void AccountAccessNetworkController_UserRegister_m3209526662 (AccountAccessNetworkController_t3188289177 * __this, String_t* ___email0, String_t* ___password1, String_t* ___repassword2, String_t* ___invitationCode3, LDFWServerResponseEvent_t123101851 * ___success4, LDFWServerResponseEvent_t123101851 * ___failure5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccountAccessNetworkController::ValidateZipCode(System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void AccountAccessNetworkController_ValidateZipCode_m1858800394 (AccountAccessNetworkController_t3188289177 * __this, String_t* ___zipcode0, LDFWServerResponseEvent_t123101851 * ___success1, LDFWServerResponseEvent_t123101851 * ___failure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccountAccessNetworkController::GetAvailableRegionList(System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void AccountAccessNetworkController_GetAvailableRegionList_m620730843 (AccountAccessNetworkController_t3188289177 * __this, String_t* ___zipcode0, LDFWServerResponseEvent_t123101851 * ___success1, LDFWServerResponseEvent_t123101851 * ___failure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccountAccessNetworkController::PasswordReset(System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void AccountAccessNetworkController_PasswordReset_m3771189774 (AccountAccessNetworkController_t3188289177 * __this, String_t* ___email0, LDFWServerResponseEvent_t123101851 * ___success1, LDFWServerResponseEvent_t123101851 * ___failure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccountAccessNetworkController::PasswordResetNewPassword(System.String,System.String,System.String,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void AccountAccessNetworkController_PasswordResetNewPassword_m3868814385 (AccountAccessNetworkController_t3188289177 * __this, String_t* ___oldPassword0, String_t* ___newPassword1, String_t* ___repassword2, LDFWServerResponseEvent_t123101851 * ___success3, LDFWServerResponseEvent_t123101851 * ___failure4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccountAccessNetworkController::<BackgroundUserLogin>m__D(JSONObject,System.String)
extern "C"  void AccountAccessNetworkController_U3CBackgroundUserLoginU3Em__D_m1122663574 (AccountAccessNetworkController_t3188289177 * __this, JSONObject_t1752376903 * ___json0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AccountAccessNetworkController::<BackgroundUserLogin>m__E(JSONObject,System.String)
extern "C"  void AccountAccessNetworkController_U3CBackgroundUserLoginU3Em__E_m2084277591 (AccountAccessNetworkController_t3188289177 * __this, JSONObject_t1752376903 * ___json0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
