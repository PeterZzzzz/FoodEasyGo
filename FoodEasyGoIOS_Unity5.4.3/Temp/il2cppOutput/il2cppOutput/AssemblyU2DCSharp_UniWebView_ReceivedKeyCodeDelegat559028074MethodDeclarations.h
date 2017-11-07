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

// UniWebView/ReceivedKeyCodeDelegate
struct ReceivedKeyCodeDelegate_t559028074;
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

// System.Void UniWebView/ReceivedKeyCodeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ReceivedKeyCodeDelegate__ctor_m1331424529 (ReceivedKeyCodeDelegate_t559028074 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/ReceivedKeyCodeDelegate::Invoke(UniWebView,System.Int32)
extern "C"  void ReceivedKeyCodeDelegate_Invoke_m3074186741 (ReceivedKeyCodeDelegate_t559028074 * __this, UniWebView_t424341801 * ___webView0, int32_t ___keyCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/ReceivedKeyCodeDelegate::BeginInvoke(UniWebView,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ReceivedKeyCodeDelegate_BeginInvoke_m1640050430 (ReceivedKeyCodeDelegate_t559028074 * __this, UniWebView_t424341801 * ___webView0, int32_t ___keyCode1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/ReceivedKeyCodeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ReceivedKeyCodeDelegate_EndInvoke_m2324336545 (ReceivedKeyCodeDelegate_t559028074 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
