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

// cn.sharesdk.unity3d.ShareSDK/EventHandler
struct EventHandler_t2477476364;
// System.Object
struct Il2CppObject;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3270525994.h"
#include "AssemblyU2DCSharpU2Dfirstpass_cn_sharesdk_unity3d_3506026199.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void cn.sharesdk.unity3d.ShareSDK/EventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler__ctor_m2134115479 (EventHandler_t2477476364 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK/EventHandler::Invoke(System.Int32,cn.sharesdk.unity3d.ResponseState,cn.sharesdk.unity3d.PlatformType,System.Collections.Hashtable)
extern "C"  void EventHandler_Invoke_m404353107 (EventHandler_t2477476364 * __this, int32_t ___reqID0, int32_t ___state1, int32_t ___type2, Hashtable_t1407064410 * ___data3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult cn.sharesdk.unity3d.ShareSDK/EventHandler::BeginInvoke(System.Int32,cn.sharesdk.unity3d.ResponseState,cn.sharesdk.unity3d.PlatformType,System.Collections.Hashtable,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * EventHandler_BeginInvoke_m2649257474 (EventHandler_t2477476364 * __this, int32_t ___reqID0, int32_t ___state1, int32_t ___type2, Hashtable_t1407064410 * ___data3, AsyncCallback_t1369114871 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void cn.sharesdk.unity3d.ShareSDK/EventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void EventHandler_EndInvoke_m1786206759 (EventHandler_t2477476364 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
