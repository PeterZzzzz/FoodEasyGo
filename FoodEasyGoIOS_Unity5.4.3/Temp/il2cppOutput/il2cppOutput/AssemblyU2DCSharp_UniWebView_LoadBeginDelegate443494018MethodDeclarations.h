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

// UniWebView/LoadBeginDelegate
struct LoadBeginDelegate_t443494018;
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

// System.Void UniWebView/LoadBeginDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void LoadBeginDelegate__ctor_m1527785001 (LoadBeginDelegate_t443494018 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/LoadBeginDelegate::Invoke(UniWebView,System.String)
extern "C"  void LoadBeginDelegate_Invoke_m547858934 (LoadBeginDelegate_t443494018 * __this, UniWebView_t424341801 * ___webView0, String_t* ___loadingUrl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/LoadBeginDelegate::BeginInvoke(UniWebView,System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * LoadBeginDelegate_BeginInvoke_m1415915 (LoadBeginDelegate_t443494018 * __this, UniWebView_t424341801 * ___webView0, String_t* ___loadingUrl1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/LoadBeginDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void LoadBeginDelegate_EndInvoke_m951522489 (LoadBeginDelegate_t443494018 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
