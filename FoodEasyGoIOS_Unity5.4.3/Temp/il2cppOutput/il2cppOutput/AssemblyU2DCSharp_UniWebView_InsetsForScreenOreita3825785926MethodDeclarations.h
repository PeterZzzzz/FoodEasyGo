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

// UniWebView/InsetsForScreenOreitationDelegate
struct InsetsForScreenOreitationDelegate_t3825785926;
// System.Object
struct Il2CppObject;
// UniWebViewEdgeInsets
struct UniWebViewEdgeInsets_t2575124764;
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
#include "AssemblyU2DCSharp_UniWebViewOrientation2587134183.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UniWebView/InsetsForScreenOreitationDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InsetsForScreenOreitationDelegate__ctor_m358248941 (InsetsForScreenOreitationDelegate_t3825785926 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UniWebViewEdgeInsets UniWebView/InsetsForScreenOreitationDelegate::Invoke(UniWebView,UniWebViewOrientation)
extern "C"  UniWebViewEdgeInsets_t2575124764 * InsetsForScreenOreitationDelegate_Invoke_m614986052 (InsetsForScreenOreitationDelegate_t3825785926 * __this, UniWebView_t424341801 * ___webView0, int32_t ___orientation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/InsetsForScreenOreitationDelegate::BeginInvoke(UniWebView,UniWebViewOrientation,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InsetsForScreenOreitationDelegate_BeginInvoke_m1317945958 (InsetsForScreenOreitationDelegate_t3825785926 * __this, UniWebView_t424341801 * ___webView0, int32_t ___orientation1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UniWebViewEdgeInsets UniWebView/InsetsForScreenOreitationDelegate::EndInvoke(System.IAsyncResult)
extern "C"  UniWebViewEdgeInsets_t2575124764 * InsetsForScreenOreitationDelegate_EndInvoke_m607869086 (InsetsForScreenOreitationDelegate_t3825785926 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
