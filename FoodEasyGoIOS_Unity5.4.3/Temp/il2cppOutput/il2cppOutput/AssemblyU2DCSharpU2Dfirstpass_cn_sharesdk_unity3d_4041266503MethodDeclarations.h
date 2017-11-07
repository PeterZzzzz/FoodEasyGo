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

// cn.sharesdk.unity3d.iOSImpl
struct iOSImpl_t4041266503;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// cn.sharesdk.unity3d.ShareContent
struct ShareContent_t3883757604;
// cn.sharesdk.unity3d.PlatformType[]
struct PlatformTypeU5BU5D_t3712579566;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3506026199.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3883757604.h"

// System.Void cn.sharesdk.unity3d.iOSImpl::.ctor(UnityEngine.GameObject)
extern "C"  void iOSImpl__ctor_m2637477626 (iOSImpl_t4041266503 * __this, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKRegisterAppAndSetPltformsConfig(System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKRegisterAppAndSetPltformsConfig_m1864767810 (Il2CppObject * __this /* static, unused */, String_t* ___appKey0, String_t* ___configInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKAuthorize(System.Int32,System.Int32,System.String)
extern "C"  void iOSImpl___iosShareSDKAuthorize_m2303511679 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platType1, String_t* ___observer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKCancelAuthorize(System.Int32)
extern "C"  void iOSImpl___iosShareSDKCancelAuthorize_m2910398778 (Il2CppObject * __this /* static, unused */, int32_t ___platType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cn.sharesdk.unity3d.iOSImpl::__iosShareSDKHasAuthorized(System.Int32)
extern "C"  bool iOSImpl___iosShareSDKHasAuthorized_m412988964 (Il2CppObject * __this /* static, unused */, int32_t ___platType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKGetUserInfo(System.Int32,System.Int32,System.String)
extern "C"  void iOSImpl___iosShareSDKGetUserInfo_m2130730201 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platType1, String_t* ___observer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKShare(System.Int32,System.Int32,System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKShare_m1794957637 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platType1, String_t* ___content2, String_t* ___observer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKOneKeyShare(System.Int32,System.String,System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKOneKeyShare_m709247141 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, String_t* ___platTypes1, String_t* ___content2, String_t* ___observer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKShowShareMenu(System.Int32,System.String,System.String,System.Int32,System.Int32,System.String)
extern "C"  void iOSImpl___iosShareSDKShowShareMenu_m1855771616 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, String_t* ___platTypes1, String_t* ___content2, int32_t ___x3, int32_t ___y4, String_t* ___observer5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKShowShareView(System.Int32,System.Int32,System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKShowShareView_m2684547197 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platType1, String_t* ___content2, String_t* ___observer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKGetFriendsList(System.Int32,System.Int32,System.Int32,System.Int32,System.String)
extern "C"  void iOSImpl___iosShareSDKGetFriendsList_m454448061 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platType1, int32_t ___count2, int32_t ___page3, String_t* ___observer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKFollowFriend(System.Int32,System.Int32,System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKFollowFriend_m2969812487 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platform1, String_t* ___account2, String_t* ___observer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String cn.sharesdk.unity3d.iOSImpl::__iosShareSDKGetCredential(System.Int32)
extern "C"  String_t* iOSImpl___iosShareSDKGetCredential_m1170920309 (Il2CppObject * __this /* static, unused */, int32_t ___platType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cn.sharesdk.unity3d.iOSImpl::__iosShareSDKIsClientInstalled(System.Int32)
extern "C"  bool iOSImpl___iosShareSDKIsClientInstalled_m605933876 (Il2CppObject * __this /* static, unused */, int32_t ___platType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKShareWithContentName(System.Int32,System.Int32,System.String,System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKShareWithContentName_m718088339 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platform1, String_t* ___contentName2, String_t* ___customFields3, String_t* ___observer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKShowShareMenuWithContentName(System.Int32,System.String,System.String,System.String,System.Int32,System.Int32,System.String)
extern "C"  void iOSImpl___iosShareSDKShowShareMenuWithContentName_m3748528326 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, String_t* ___contentName1, String_t* ___customFields2, String_t* ___platTypes3, int32_t ___x4, int32_t ___y5, String_t* ___observer6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::__iosShareSDKShowShareViewWithContentName(System.Int32,System.Int32,System.String,System.String,System.String)
extern "C"  void iOSImpl___iosShareSDKShowShareViewWithContentName_m1599800411 (Il2CppObject * __this /* static, unused */, int32_t ___reqID0, int32_t ___platform1, String_t* ___contentName2, String_t* ___customFields3, String_t* ___observer4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::InitSDK(System.String)
extern "C"  void iOSImpl_InitSDK_m3590067800 (iOSImpl_t4041266503 * __this, String_t* ___appKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::SetPlatformConfig(System.Collections.Hashtable)
extern "C"  void iOSImpl_SetPlatformConfig_m696067247 (iOSImpl_t4041266503 * __this, Hashtable_t1407064410 * ___configs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::Authorize(System.Int32,cn.sharesdk.unity3d.PlatformType)
extern "C"  void iOSImpl_Authorize_m3979229159 (iOSImpl_t4041266503 * __this, int32_t ___reqID0, int32_t ___platform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::CancelAuthorize(cn.sharesdk.unity3d.PlatformType)
extern "C"  void iOSImpl_CancelAuthorize_m3240531562 (iOSImpl_t4041266503 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cn.sharesdk.unity3d.iOSImpl::IsAuthorized(cn.sharesdk.unity3d.PlatformType)
extern "C"  bool iOSImpl_IsAuthorized_m4179308870 (iOSImpl_t4041266503 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean cn.sharesdk.unity3d.iOSImpl::IsClientValid(cn.sharesdk.unity3d.PlatformType)
extern "C"  bool iOSImpl_IsClientValid_m2860518558 (iOSImpl_t4041266503 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::GetUserInfo(System.Int32,cn.sharesdk.unity3d.PlatformType)
extern "C"  void iOSImpl_GetUserInfo_m3014223425 (iOSImpl_t4041266503 * __this, int32_t ___reqID0, int32_t ___platform1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShareContent(System.Int32,cn.sharesdk.unity3d.PlatformType,cn.sharesdk.unity3d.ShareContent)
extern "C"  void iOSImpl_ShareContent_m3773988000 (iOSImpl_t4041266503 * __this, int32_t ___reqID0, int32_t ___platform1, ShareContent_t3883757604 * ___content2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShareContent(System.Int32,cn.sharesdk.unity3d.PlatformType[],cn.sharesdk.unity3d.ShareContent)
extern "C"  void iOSImpl_ShareContent_m2041765442 (iOSImpl_t4041266503 * __this, int32_t ___reqID0, PlatformTypeU5BU5D_t3712579566* ___platforms1, ShareContent_t3883757604 * ___content2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShowPlatformList(System.Int32,cn.sharesdk.unity3d.PlatformType[],cn.sharesdk.unity3d.ShareContent,System.Int32,System.Int32)
extern "C"  void iOSImpl_ShowPlatformList_m456778326 (iOSImpl_t4041266503 * __this, int32_t ___reqID0, PlatformTypeU5BU5D_t3712579566* ___platforms1, ShareContent_t3883757604 * ___content2, int32_t ___x3, int32_t ___y4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShowShareContentEditor(System.Int32,cn.sharesdk.unity3d.PlatformType,cn.sharesdk.unity3d.ShareContent)
extern "C"  void iOSImpl_ShowShareContentEditor_m2019270474 (iOSImpl_t4041266503 * __this, int32_t ___reqID0, int32_t ___platform1, ShareContent_t3883757604 * ___content2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShareWithContentName(System.Int32,cn.sharesdk.unity3d.PlatformType,System.String,System.Collections.Hashtable)
extern "C"  void iOSImpl_ShareWithContentName_m143316307 (iOSImpl_t4041266503 * __this, int32_t ___reqId0, int32_t ___platform1, String_t* ___contentName2, Hashtable_t1407064410 * ___customFields3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShowPlatformListWithContentName(System.Int32,System.String,System.Collections.Hashtable,cn.sharesdk.unity3d.PlatformType[],System.Int32,System.Int32)
extern "C"  void iOSImpl_ShowPlatformListWithContentName_m425642110 (iOSImpl_t4041266503 * __this, int32_t ___reqId0, String_t* ___contentName1, Hashtable_t1407064410 * ___customFields2, PlatformTypeU5BU5D_t3712579566* ___platforms3, int32_t ___x4, int32_t ___y5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::ShowShareContentEditorWithContentName(System.Int32,cn.sharesdk.unity3d.PlatformType,System.String,System.Collections.Hashtable)
extern "C"  void iOSImpl_ShowShareContentEditorWithContentName_m3311671660 (iOSImpl_t4041266503 * __this, int32_t ___reqId0, int32_t ___platform1, String_t* ___contentName2, Hashtable_t1407064410 * ___customFields3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::GetFriendList(System.Int32,cn.sharesdk.unity3d.PlatformType,System.Int32,System.Int32)
extern "C"  void iOSImpl_GetFriendList_m1252691902 (iOSImpl_t4041266503 * __this, int32_t ___reqID0, int32_t ___platform1, int32_t ___count2, int32_t ___page3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::AddFriend(System.Int32,cn.sharesdk.unity3d.PlatformType,System.String)
extern "C"  void iOSImpl_AddFriend_m458354925 (iOSImpl_t4041266503 * __this, int32_t ___reqID0, int32_t ___platform1, String_t* ___account2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable cn.sharesdk.unity3d.iOSImpl::GetAuthInfo(cn.sharesdk.unity3d.PlatformType)
extern "C"  Hashtable_t1407064410 * iOSImpl_GetAuthInfo_m2885789988 (iOSImpl_t4041266503 * __this, int32_t ___platform0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.iOSImpl::DisableSSO(System.Boolean)
extern "C"  void iOSImpl_DisableSSO_m2716757312 (iOSImpl_t4041266503 * __this, bool ___open0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
