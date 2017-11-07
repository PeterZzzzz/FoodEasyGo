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

// cn.sharesdk.unity3d.ShareSDK
struct ShareSDK_t3009509477;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// cn.sharesdk.unity3d.ShareContent
struct ShareContent_t3883757604;
// cn.sharesdk.unity3d.PlatformType[]
struct PlatformTypeU5BU5D_t3712579566;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3506026199.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3883757604.h"

// System.Void cn.sharesdk.unity3d.ShareSDK::.ctor()
extern "C"  void ShareSDK__ctor_m605078204 (ShareSDK_t3009509477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::Awake()
extern "C"  void ShareSDK_Awake_m842683423 (ShareSDK_t3009509477 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::_Callback(System.String)
extern "C"  void ShareSDK__Callback_m3965694852 (ShareSDK_t3009509477 * __this, String_t* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::OnError(System.Int32,cn.sharesdk.unity3d.PlatformType,System.Int32,System.Collections.Hashtable)
extern "C"  void ShareSDK_OnError_m2181379636 (ShareSDK_t3009509477 * __this, int32_t ___reqID0, int32_t ___platform1, int32_t ___action2, Hashtable_t1407064410 * ___throwable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::OnComplete(System.Int32,cn.sharesdk.unity3d.PlatformType,System.Int32,System.Collections.Hashtable)
extern "C"  void ShareSDK_OnComplete_m3560564823 (ShareSDK_t3009509477 * __this, int32_t ___reqID0, int32_t ___platform1, int32_t ___action2, Hashtable_t1407064410 * ___res3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::OnCancel(System.Int32,cn.sharesdk.unity3d.PlatformType,System.Int32)
extern "C"  void ShareSDK_OnCancel_m2927631496 (ShareSDK_t3009509477 * __this, int32_t ___reqID0, int32_t ___platform1, int32_t ___action2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::InitSDK(System.String)
extern "C"  void ShareSDK_InitSDK_m1035451742 (ShareSDK_t3009509477 * __this, String_t* ___appKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::SetPlatformConfig(System.Collections.Hashtable)
extern "C"  void ShareSDK_SetPlatformConfig_m712200297 (ShareSDK_t3009509477 * __this, Hashtable_t1407064410 * ___configInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::Authorize(cn.sharesdk.unity3d.PlatformType)
extern "C"  int32_t ShareSDK_Authorize_m3337054216 (ShareSDK_t3009509477 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::CancelAuthorize(cn.sharesdk.unity3d.PlatformType)
extern "C"  void ShareSDK_CancelAuthorize_m1564523428 (ShareSDK_t3009509477 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cn.sharesdk.unity3d.ShareSDK::IsAuthorized(cn.sharesdk.unity3d.PlatformType)
extern "C"  bool ShareSDK_IsAuthorized_m759509252 (ShareSDK_t3009509477 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cn.sharesdk.unity3d.ShareSDK::IsClientValid(cn.sharesdk.unity3d.PlatformType)
extern "C"  bool ShareSDK_IsClientValid_m4220912800 (ShareSDK_t3009509477 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::GetUserInfo(cn.sharesdk.unity3d.PlatformType)
extern "C"  int32_t ShareSDK_GetUserInfo_m3909623406 (ShareSDK_t3009509477 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShareContent(cn.sharesdk.unity3d.PlatformType,cn.sharesdk.unity3d.ShareContent)
extern "C"  int32_t ShareSDK_ShareContent_m3695606049 (ShareSDK_t3009509477 * __this, int32_t ___platform0, ShareContent_t3883757604 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShareContent(cn.sharesdk.unity3d.PlatformType[],cn.sharesdk.unity3d.ShareContent)
extern "C"  int32_t ShareSDK_ShareContent_m4026121859 (ShareSDK_t3009509477 * __this, PlatformTypeU5BU5D_t3712579566* ___platforms0, ShareContent_t3883757604 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShowPlatformList(cn.sharesdk.unity3d.PlatformType[],cn.sharesdk.unity3d.ShareContent,System.Int32,System.Int32)
extern "C"  int32_t ShareSDK_ShowPlatformList_m1362002543 (ShareSDK_t3009509477 * __this, PlatformTypeU5BU5D_t3712579566* ___platforms0, ShareContent_t3883757604 * ___content1, int32_t ___x2, int32_t ___y3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShowShareContentEditor(cn.sharesdk.unity3d.PlatformType,cn.sharesdk.unity3d.ShareContent)
extern "C"  int32_t ShareSDK_ShowShareContentEditor_m3508811063 (ShareSDK_t3009509477 * __this, int32_t ___platform0, ShareContent_t3883757604 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShareWithContentName(cn.sharesdk.unity3d.PlatformType,System.String,System.Collections.Hashtable)
extern "C"  int32_t ShareSDK_ShareWithContentName_m1592053226 (ShareSDK_t3009509477 * __this, int32_t ___platform0, String_t* ___contentName1, Hashtable_t1407064410 * ___customFields2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShowPlatformListWithContentName(System.String,System.Collections.Hashtable,cn.sharesdk.unity3d.PlatformType[],System.Int32,System.Int32)
extern "C"  int32_t ShareSDK_ShowPlatformListWithContentName_m418136079 (ShareSDK_t3009509477 * __this, String_t* ___contentName0, Hashtable_t1407064410 * ___customFields1, PlatformTypeU5BU5D_t3712579566* ___platforms2, int32_t ___x3, int32_t ___y4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::ShowShareContentEditorWithContentName(cn.sharesdk.unity3d.PlatformType,System.String,System.Collections.Hashtable)
extern "C"  int32_t ShareSDK_ShowShareContentEditorWithContentName_m1348265129 (ShareSDK_t3009509477 * __this, int32_t ___platform0, String_t* ___contentName1, Hashtable_t1407064410 * ___customFields2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::GetFriendList(cn.sharesdk.unity3d.PlatformType,System.Int32,System.Int32)
extern "C"  int32_t ShareSDK_GetFriendList_m3419967185 (ShareSDK_t3009509477 * __this, int32_t ___platform0, int32_t ___count1, int32_t ___page2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 cn.sharesdk.unity3d.ShareSDK::AddFriend(cn.sharesdk.unity3d.PlatformType,System.String)
extern "C"  int32_t ShareSDK_AddFriend_m2970028282 (ShareSDK_t3009509477 * __this, int32_t ___platform0, String_t* ___account1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable cn.sharesdk.unity3d.ShareSDK::GetAuthInfo(cn.sharesdk.unity3d.PlatformType)
extern "C"  Hashtable_t1407064410 * ShareSDK_GetAuthInfo_m4062663876 (ShareSDK_t3009509477 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK::DisableSSO(System.Boolean)
extern "C"  void ShareSDK_DisableSSO_m3855819078 (ShareSDK_t3009509477 * __this, bool ___open0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
