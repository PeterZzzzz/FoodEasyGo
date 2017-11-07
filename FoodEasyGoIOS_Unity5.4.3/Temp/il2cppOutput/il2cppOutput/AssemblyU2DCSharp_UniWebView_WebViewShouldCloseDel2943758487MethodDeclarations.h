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

// UniWebView/WebViewShouldCloseDelegate
struct WebViewShouldCloseDelegate_t2943758487;
// System.Object
struct Il2CppObject;
// UniWebView
struct UniWebView_t424341801;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_UniWebView424341801.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UniWebView/WebViewShouldCloseDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void WebViewShouldCloseDelegate__ctor_m3868285166 (WebViewShouldCloseDelegate_t2943758487 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UniWebView/WebViewShouldCloseDelegate::Invoke(UniWebView)
extern "C"  bool WebViewShouldCloseDelegate_Invoke_m2818187211 (WebViewShouldCloseDelegate_t2943758487 * __this, UniWebView_t424341801 * ___webView0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/WebViewShouldCloseDelegate::BeginInvoke(UniWebView,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WebViewShouldCloseDelegate_BeginInvoke_m1198345892 (WebViewShouldCloseDelegate_t2943758487 * __this, UniWebView_t424341801 * ___webView0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UniWebView/WebViewShouldCloseDelegate::EndInvoke(System.IAsyncResult)
extern "C"  bool WebViewShouldCloseDelegate_EndInvoke_m2850632650 (WebViewShouldCloseDelegate_t2943758487 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
