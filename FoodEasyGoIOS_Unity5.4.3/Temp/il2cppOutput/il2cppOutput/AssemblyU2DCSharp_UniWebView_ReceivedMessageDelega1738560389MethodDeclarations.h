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

// UniWebView/ReceivedMessageDelegate
struct ReceivedMessageDelegate_t1738560389;
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
#include "AssemblyU2DCSharp_UniWebViewMessage4192712350.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void UniWebView/ReceivedMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ReceivedMessageDelegate__ctor_m1861187500 (ReceivedMessageDelegate_t1738560389 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/ReceivedMessageDelegate::Invoke(UniWebView,UniWebViewMessage)
extern "C"  void ReceivedMessageDelegate_Invoke_m2996982795 (ReceivedMessageDelegate_t1738560389 * __this, UniWebView_t424341801 * ___webView0, UniWebViewMessage_t4192712350  ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UniWebView/ReceivedMessageDelegate::BeginInvoke(UniWebView,UniWebViewMessage,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ReceivedMessageDelegate_BeginInvoke_m537597852 (ReceivedMessageDelegate_t1738560389 * __this, UniWebView_t424341801 * ___webView0, UniWebViewMessage_t4192712350  ___message1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebView/ReceivedMessageDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ReceivedMessageDelegate_EndInvoke_m4004093884 (ReceivedMessageDelegate_t1738560389 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
