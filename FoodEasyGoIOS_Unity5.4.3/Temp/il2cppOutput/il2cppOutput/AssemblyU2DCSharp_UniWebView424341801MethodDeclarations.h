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

// UniWebView
struct UniWebView_t424341801;
// UniWebView/LoadCompleteDelegate
struct LoadCompleteDelegate_t233340970;
// UniWebView/LoadBeginDelegate
struct LoadBeginDelegate_t443494018;
// UniWebView/ReceivedMessageDelegate
struct ReceivedMessageDelegate_t1738560389;
// UniWebView/EvalJavaScriptFinishedDelegate
struct EvalJavaScriptFinishedDelegate_t1102887750;
// UniWebView/WebViewShouldCloseDelegate
struct WebViewShouldCloseDelegate_t2943758487;
// UniWebView/ReceivedKeyCodeDelegate
struct ReceivedKeyCodeDelegate_t559028074;
// UniWebView/InsetsForScreenOreitationDelegate
struct InsetsForScreenOreitationDelegate_t3825785926;
// UniWebViewEdgeInsets
struct UniWebViewEdgeInsets_t2575124764;
// System.String
struct String_t;
// System.Action
struct Action_t3771233898;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UniWebView_LoadCompleteDelegate233340970.h"
#include "AssemblyU2DCSharp_UniWebView_LoadBeginDelegate443494018.h"
#include "AssemblyU2DCSharp_UniWebView_ReceivedMessageDelega1738560389.h"
#include "AssemblyU2DCSharp_UniWebView_EvalJavaScriptFinishe1102887750.h"
#include "AssemblyU2DCSharp_UniWebView_WebViewShouldCloseDel2943758487.h"
#include "AssemblyU2DCSharp_UniWebView_ReceivedKeyCodeDelegat559028074.h"
#include "AssemblyU2DCSharp_UniWebView_InsetsForScreenOreita3825785926.h"
#include "AssemblyU2DCSharp_UniWebViewEdgeInsets2575124764.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_UniWebViewTransitionEdge1338482235.h"
#include "System_Core_System_Action3771233898.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

// System.Void UniWebView::.ctor()
extern "C"  void UniWebView__ctor_m2567103890 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::add_OnLoadComplete(UniWebView/LoadCompleteDelegate)
extern "C"  void UniWebView_add_OnLoadComplete_m1936180474 (UniWebView_t424341801 * __this, LoadCompleteDelegate_t233340970 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::remove_OnLoadComplete(UniWebView/LoadCompleteDelegate)
extern "C"  void UniWebView_remove_OnLoadComplete_m2089743839 (UniWebView_t424341801 * __this, LoadCompleteDelegate_t233340970 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::add_OnLoadBegin(UniWebView/LoadBeginDelegate)
extern "C"  void UniWebView_add_OnLoadBegin_m2562987092 (UniWebView_t424341801 * __this, LoadBeginDelegate_t443494018 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::remove_OnLoadBegin(UniWebView/LoadBeginDelegate)
extern "C"  void UniWebView_remove_OnLoadBegin_m398923001 (UniWebView_t424341801 * __this, LoadBeginDelegate_t443494018 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::add_OnReceivedMessage(UniWebView/ReceivedMessageDelegate)
extern "C"  void UniWebView_add_OnReceivedMessage_m2648302196 (UniWebView_t424341801 * __this, ReceivedMessageDelegate_t1738560389 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::remove_OnReceivedMessage(UniWebView/ReceivedMessageDelegate)
extern "C"  void UniWebView_remove_OnReceivedMessage_m1792021401 (UniWebView_t424341801 * __this, ReceivedMessageDelegate_t1738560389 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::add_OnEvalJavaScriptFinished(UniWebView/EvalJavaScriptFinishedDelegate)
extern "C"  void UniWebView_add_OnEvalJavaScriptFinished_m385390850 (UniWebView_t424341801 * __this, EvalJavaScriptFinishedDelegate_t1102887750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::remove_OnEvalJavaScriptFinished(UniWebView/EvalJavaScriptFinishedDelegate)
extern "C"  void UniWebView_remove_OnEvalJavaScriptFinished_m4185613671 (UniWebView_t424341801 * __this, EvalJavaScriptFinishedDelegate_t1102887750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::add_OnWebViewShouldClose(UniWebView/WebViewShouldCloseDelegate)
extern "C"  void UniWebView_add_OnWebViewShouldClose_m3302912480 (UniWebView_t424341801 * __this, WebViewShouldCloseDelegate_t2943758487 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::remove_OnWebViewShouldClose(UniWebView/WebViewShouldCloseDelegate)
extern "C"  void UniWebView_remove_OnWebViewShouldClose_m938636101 (UniWebView_t424341801 * __this, WebViewShouldCloseDelegate_t2943758487 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::add_OnReceivedKeyCode(UniWebView/ReceivedKeyCodeDelegate)
extern "C"  void UniWebView_add_OnReceivedKeyCode_m538396052 (UniWebView_t424341801 * __this, ReceivedKeyCodeDelegate_t559028074 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::remove_OnReceivedKeyCode(UniWebView/ReceivedKeyCodeDelegate)
extern "C"  void UniWebView_remove_OnReceivedKeyCode_m3977082553 (UniWebView_t424341801 * __this, ReceivedKeyCodeDelegate_t559028074 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::add_InsetsForScreenOreitation(UniWebView/InsetsForScreenOreitationDelegate)
extern "C"  void UniWebView_add_InsetsForScreenOreitation_m253318899 (UniWebView_t424341801 * __this, InsetsForScreenOreitationDelegate_t3825785926 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::remove_InsetsForScreenOreitation(UniWebView/InsetsForScreenOreitationDelegate)
extern "C"  void UniWebView_remove_InsetsForScreenOreitation_m551905496 (UniWebView_t424341801 * __this, InsetsForScreenOreitationDelegate_t3825785926 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UniWebViewEdgeInsets UniWebView::get_insets()
extern "C"  UniWebViewEdgeInsets_t2575124764 * UniWebView_get_insets_m3837515122 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::set_insets(UniWebViewEdgeInsets)
extern "C"  void UniWebView_set_insets_m4045272489 (UniWebView_t424341801 * __this, UniWebViewEdgeInsets_t2575124764 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::ForceUpdateInsetsInternal(UniWebViewEdgeInsets)
extern "C"  void UniWebView_ForceUpdateInsetsInternal_m3095307099 (UniWebView_t424341801 * __this, UniWebViewEdgeInsets_t2575124764 * ___insets0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UniWebView::get_currentUrl()
extern "C"  String_t* UniWebView_get_currentUrl_m2063489460 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UniWebView::get_backButtonEnable()
extern "C"  bool UniWebView_get_backButtonEnable_m376993643 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::set_backButtonEnable(System.Boolean)
extern "C"  void UniWebView_set_backButtonEnable_m3343958882 (UniWebView_t424341801 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UniWebView::get_bouncesEnable()
extern "C"  bool UniWebView_get_bouncesEnable_m2448170241 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::set_bouncesEnable(System.Boolean)
extern "C"  void UniWebView_set_bouncesEnable_m346810104 (UniWebView_t424341801 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UniWebView::get_zoomEnable()
extern "C"  bool UniWebView_get_zoomEnable_m2836321477 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::set_zoomEnable(System.Boolean)
extern "C"  void UniWebView_set_zoomEnable_m930679612 (UniWebView_t424341801 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UniWebView::get_userAgent()
extern "C"  String_t* UniWebView_get_userAgent_m457740254 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UniWebView::get_alpha()
extern "C"  float UniWebView_get_alpha_m2373829369 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::set_alpha(System.Single)
extern "C"  void UniWebView_set_alpha_m2556864250 (UniWebView_t424341801 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UniWebView::get_openLinksInExternalBrowser()
extern "C"  bool UniWebView_get_openLinksInExternalBrowser_m3390637560 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::set_openLinksInExternalBrowser(System.Boolean)
extern "C"  void UniWebView_set_openLinksInExternalBrowser_m2472290095 (UniWebView_t424341801 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UniWebView::get_immersiveMode()
extern "C"  bool UniWebView_get_immersiveMode_m3106661297 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::set_immersiveMode(System.Boolean)
extern "C"  void UniWebView_set_immersiveMode_m2628925864 (UniWebView_t424341801 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::SetUserAgent(System.String)
extern "C"  void UniWebView_SetUserAgent_m3024188696 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::ResetUserAgent()
extern "C"  void UniWebView_ResetUserAgent_m1688313565 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::SetDoneButtonText(System.String)
extern "C"  void UniWebView_SetDoneButtonText_m3255280847 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::Load()
extern "C"  void UniWebView_Load_m2476208344 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::Load(System.String)
extern "C"  void UniWebView_Load_m2421280042 (UniWebView_t424341801 * __this, String_t* ___aUrl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::LoadHTMLString(System.String,System.String)
extern "C"  void UniWebView_LoadHTMLString_m6034058 (UniWebView_t424341801 * __this, String_t* ___htmlString0, String_t* ___baseUrl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::Reload()
extern "C"  void UniWebView_Reload_m2132997259 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::Stop()
extern "C"  void UniWebView_Stop_m2681658612 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::Show(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
extern "C"  void UniWebView_Show_m818104417 (UniWebView_t424341801 * __this, bool ___fade0, int32_t ___direction1, float ___duration2, Action_t3771233898 * ___finishAction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::Hide(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
extern "C"  void UniWebView_Hide_m1659081020 (UniWebView_t424341801 * __this, bool ___fade0, int32_t ___direction1, float ___duration2, Action_t3771233898 * ___finishAction3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::EvaluatingJavaScript(System.String)
extern "C"  void UniWebView_EvaluatingJavaScript_m2942478637 (UniWebView_t424341801 * __this, String_t* ___javaScript0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::AddJavaScript(System.String)
extern "C"  void UniWebView_AddJavaScript_m1836445316 (UniWebView_t424341801 * __this, String_t* ___javaScript0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::CleanCache()
extern "C"  void UniWebView_CleanCache_m1118812459 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::CleanCookie(System.String)
extern "C"  void UniWebView_CleanCookie_m1410571237 (UniWebView_t424341801 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::SetTransparentBackground(System.Boolean)
extern "C"  void UniWebView_SetTransparentBackground_m2976868807 (UniWebView_t424341801 * __this, bool ___transparent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::SetBackgroundColor(UnityEngine.Color)
extern "C"  void UniWebView_SetBackgroundColor_m2621355969 (UniWebView_t424341801 * __this, Color_t4194546905  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::ShowToolBar(System.Boolean)
extern "C"  void UniWebView_ShowToolBar_m2105141893 (UniWebView_t424341801 * __this, bool ___animate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::HideToolBar(System.Boolean)
extern "C"  void UniWebView_HideToolBar_m2728929952 (UniWebView_t424341801 * __this, bool ___animate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::SetShowSpinnerWhenLoading(System.Boolean)
extern "C"  void UniWebView_SetShowSpinnerWhenLoading_m1275160655 (UniWebView_t424341801 * __this, bool ___show0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::SetSpinnerLabelText(System.String)
extern "C"  void UniWebView_SetSpinnerLabelText_m2267654824 (UniWebView_t424341801 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::SetUseWideViewPort(System.Boolean)
extern "C"  void UniWebView_SetUseWideViewPort_m2853797063 (UniWebView_t424341801 * __this, bool ___use0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::LoadWithOverviewMode(System.Boolean)
extern "C"  void UniWebView_LoadWithOverviewMode_m2519531793 (UniWebView_t424341801 * __this, bool ___overview0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UniWebView::CanGoBack()
extern "C"  bool UniWebView_CanGoBack_m2525087771 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UniWebView::CanGoForward()
extern "C"  bool UniWebView_CanGoForward_m3648337331 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::GoBack()
extern "C"  void UniWebView_GoBack_m3506734945 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::GoForward()
extern "C"  void UniWebView_GoForward_m3466979501 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::AddPermissionRequestTrustSite(System.String)
extern "C"  void UniWebView_AddPermissionRequestTrustSite_m95131122 (UniWebView_t424341801 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::AddUrlScheme(System.String)
extern "C"  void UniWebView_AddUrlScheme_m1301538589 (UniWebView_t424341801 * __this, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::RemoveUrlScheme(System.String)
extern "C"  void UniWebView_RemoveUrlScheme_m558881602 (UniWebView_t424341801 * __this, String_t* ___scheme0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::SetHeaderField(System.String,System.String)
extern "C"  void UniWebView_SetHeaderField_m2008621953 (UniWebView_t424341801 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::SetVerticalScrollBarShow(System.Boolean)
extern "C"  void UniWebView_SetVerticalScrollBarShow_m1989698036 (UniWebView_t424341801 * __this, bool ___show0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::SetHorizontalScrollBarShow(System.Boolean)
extern "C"  void UniWebView_SetHorizontalScrollBarShow_m1659167814 (UniWebView_t424341801 * __this, bool ___show0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::SetWebContentsDebuggingEnabled(System.Boolean)
extern "C"  void UniWebView_SetWebContentsDebuggingEnabled_m3549881224 (Il2CppObject * __this /* static, unused */, bool ___enabled0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UniWebView::OrientationChanged()
extern "C"  bool UniWebView_OrientationChanged_m3551857706 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::ResizeInternal()
extern "C"  void UniWebView_ResizeInternal_m283043715 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::LoadComplete(System.String)
extern "C"  void UniWebView_LoadComplete_m2054300081 (UniWebView_t424341801 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::LoadBegin(System.String)
extern "C"  void UniWebView_LoadBegin_m2681732111 (UniWebView_t424341801 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::ReceivedMessage(System.String)
extern "C"  void UniWebView_ReceivedMessage_m3477463404 (UniWebView_t424341801 * __this, String_t* ___rawMessage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::WebViewDone(System.String)
extern "C"  void UniWebView_WebViewDone_m441637111 (UniWebView_t424341801 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::WebViewKeyDown(System.String)
extern "C"  void UniWebView_WebViewKeyDown_m931649992 (UniWebView_t424341801 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::EvalJavaScriptFinished(System.String)
extern "C"  void UniWebView_EvalJavaScriptFinished_m3263197397 (UniWebView_t424341801 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::AnimationFinished(System.String)
extern "C"  void UniWebView_AnimationFinished_m2109064700 (UniWebView_t424341801 * __this, String_t* ___identifier0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::ShowTransitionFinished(System.String)
extern "C"  void UniWebView_ShowTransitionFinished_m3607752140 (UniWebView_t424341801 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::HideTransitionFinished(System.String)
extern "C"  void UniWebView_HideTransitionFinished_m3146188839 (UniWebView_t424341801 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UniWebView::LoadFromJarPackage(System.String)
extern "C"  Il2CppObject * UniWebView_LoadFromJarPackage_m1548333677 (UniWebView_t424341801 * __this, String_t* ___jarFilePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::Awake()
extern "C"  void UniWebView_Awake_m2804709109 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::Start()
extern "C"  void UniWebView_Start_m1514241682 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::OnDestroy()
extern "C"  void UniWebView_OnDestroy_m2061738379 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::RemoveAllListeners()
extern "C"  void UniWebView_RemoveAllListeners_m1272778612 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView::Update()
extern "C"  void UniWebView_Update_m3997671355 (UniWebView_t424341801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
