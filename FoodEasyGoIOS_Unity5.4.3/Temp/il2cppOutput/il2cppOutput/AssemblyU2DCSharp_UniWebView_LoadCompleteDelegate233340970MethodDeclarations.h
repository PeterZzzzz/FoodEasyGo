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

// UniWebView/LoadCompleteDelegate
struct LoadCompleteDelegate_t233340970;
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

// System.Void UniWebView/LoadCompleteDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadCompleteDelegate__ctor_m2108755201 (LoadCompleteDelegate_t233340970 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/LoadCompleteDelegate::Invoke(UniWebView,System.Boolean,System.String)
extern "C"  void LoadCompleteDelegate_Invoke_m2580588583 (LoadCompleteDelegate_t233340970 * __this, UniWebView_t424341801 * ___webView0, bool ___success1, String_t* ___errorMessage2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/LoadCompleteDelegate::BeginInvoke(UniWebView,System.Boolean,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadCompleteDelegate_BeginInvoke_m3574055220 (LoadCompleteDelegate_t233340970 * __this, UniWebView_t424341801 * ___webView0, bool ___success1, String_t* ___errorMessage2, AsyncCallback_t1369114871 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/LoadCompleteDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void LoadCompleteDelegate_EndInvoke_m1288513425 (LoadCompleteDelegate_t233340970 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
