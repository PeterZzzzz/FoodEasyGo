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

// ShareSDKAuthenticationController
struct ShareSDKAuthenticationController_t1600086863;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// LDFW.Network.LDFWServerResponseEvent
struct LDFWServerResponseEvent_t123101851;
// JSONObject
struct JSONObject_t1752376903;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3270525994.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3506026199.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "AssemblyU2DCSharp_LDFW_Network_LDFWServerResponseEv123101851.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"
#include "mscorlib_System_String7231557.h"

// System.Void ShareSDKAuthenticationController::.ctor()
extern "C"  void ShareSDKAuthenticationController__ctor_m2150620204 (ShareSDKAuthenticationController_t1600086863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::Awake()
extern "C"  void ShareSDKAuthenticationController_Awake_m2388225423 (ShareSDKAuthenticationController_t1600086863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ShareSDKAuthenticationController::Start()
extern "C"  Il2CppObject * ShareSDKAuthenticationController_Start_m360622052 (ShareSDKAuthenticationController_t1600086863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::OnWeChatLoginButtonClicked()
extern "C"  void ShareSDKAuthenticationController_OnWeChatLoginButtonClicked_m3808187049 (ShareSDKAuthenticationController_t1600086863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::OnGooglePlusLoginButtonClicked()
extern "C"  void ShareSDKAuthenticationController_OnGooglePlusLoginButtonClicked_m3520781142 (ShareSDKAuthenticationController_t1600086863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::OnFacebookLoginButtonClicked()
extern "C"  void ShareSDKAuthenticationController_OnFacebookLoginButtonClicked_m2718982313 (ShareSDKAuthenticationController_t1600086863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::ThirdPartyLogin()
extern "C"  void ShareSDKAuthenticationController_ThirdPartyLogin_m3757799540 (ShareSDKAuthenticationController_t1600086863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::AuthResultHandler(System.Int32,cn.sharesdk.unity3d.ResponseState,cn.sharesdk.unity3d.PlatformType,System.Collections.Hashtable)
extern "C"  void ShareSDKAuthenticationController_AuthResultHandler_m4063543761 (ShareSDKAuthenticationController_t1600086863 * __this, int32_t ___reqID0, int32_t ___state1, int32_t ___type2, Hashtable_t1407064410 * ___result3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::GetUserInfoResultHandler(System.Int32,cn.sharesdk.unity3d.ResponseState,cn.sharesdk.unity3d.PlatformType,System.Collections.Hashtable)
extern "C"  void ShareSDKAuthenticationController_GetUserInfoResultHandler_m3892189144 (ShareSDKAuthenticationController_t1600086863 * __this, int32_t ___reqID0, int32_t ___state1, int32_t ___type2, Hashtable_t1407064410 * ___result3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::GetUserInfo(System.Collections.Hashtable)
extern "C"  void ShareSDKAuthenticationController_GetUserInfo_m1032084625 (ShareSDKAuthenticationController_t1600086863 * __this, Hashtable_t1407064410 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::SwitchBindEmailPanel(System.Int32)
extern "C"  void ShareSDKAuthenticationController_SwitchBindEmailPanel_m476931938 (ShareSDKAuthenticationController_t1600086863 * __this, int32_t ___scale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::OnBindEmailButtonClicked()
extern "C"  void ShareSDKAuthenticationController_OnBindEmailButtonClicked_m2927024909 (ShareSDKAuthenticationController_t1600086863 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::TryUserLogin(LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void ShareSDKAuthenticationController_TryUserLogin_m3222954027 (ShareSDKAuthenticationController_t1600086863 * __this, LDFWServerResponseEvent_t123101851 * ___success0, LDFWServerResponseEvent_t123101851 * ___failure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::<GetUserInfoResultHandler>m__87(JSONObject,System.String)
extern "C"  void ShareSDKAuthenticationController_U3CGetUserInfoResultHandlerU3Em__87_m104284871 (ShareSDKAuthenticationController_t1600086863 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::<OnBindEmailButtonClicked>m__88(JSONObject,System.String)
extern "C"  void ShareSDKAuthenticationController_U3COnBindEmailButtonClickedU3Em__88_m1560803743 (ShareSDKAuthenticationController_t1600086863 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::<OnBindEmailButtonClicked>m__89(JSONObject,System.String)
extern "C"  void ShareSDKAuthenticationController_U3COnBindEmailButtonClickedU3Em__89_m2522417760 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::<TryUserLogin>m__8A(JSONObject,System.String)
extern "C"  void ShareSDKAuthenticationController_U3CTryUserLoginU3Em__8A_m2260658326 (ShareSDKAuthenticationController_t1600086863 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShareSDKAuthenticationController::<TryUserLogin>m__8B(JSONObject,System.String)
extern "C"  void ShareSDKAuthenticationController_U3CTryUserLoginU3Em__8B_m3222272343 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
