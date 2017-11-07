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

// UniWebView/EvalJavaScriptFinishedDelegate
struct EvalJavaScriptFinishedDelegate_t1102887750;
// System.Object
struct Il2CppObject;
// UniWebView
struct UniWebView_t424341801;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_UniWebView424341801.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UniWebView/EvalJavaScriptFinishedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void EvalJavaScriptFinishedDelegate__ctor_m1169140765 (EvalJavaScriptFinishedDelegate_t1102887750 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/EvalJavaScriptFinishedDelegate::Invoke(UniWebView,System.String)
extern "C"  void EvalJavaScriptFinishedDelegate_Invoke_m2241338602 (EvalJavaScriptFinishedDelegate_t1102887750 * __this, UniWebView_t424341801 * ___webView0, String_t* ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/EvalJavaScriptFinishedDelegate::BeginInvoke(UniWebView,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EvalJavaScriptFinishedDelegate_BeginInvoke_m3678316375 (EvalJavaScriptFinishedDelegate_t1102887750 * __this, UniWebView_t424341801 * ___webView0, String_t* ___result1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/EvalJavaScriptFinishedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void EvalJavaScriptFinishedDelegate_EndInvoke_m1632613549 (EvalJavaScriptFinishedDelegate_t1102887750 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
