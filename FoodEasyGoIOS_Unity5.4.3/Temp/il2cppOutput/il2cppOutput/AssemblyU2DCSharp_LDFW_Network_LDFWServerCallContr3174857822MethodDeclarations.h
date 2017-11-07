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

// LDFW.Network.LDFWServerCallController
struct LDFWServerCallController_t3174857822;
// LDFW.Network.LDFWWWWCallCoroutineWrapper
struct LDFWWWWCallCoroutineWrapper_t3645557397;
// System.String
struct String_t;
// UnityEngine.WWWForm
struct WWWForm_t461342257;
// LDFW.Network.LDFWServerResponseEvent
struct LDFWServerResponseEvent_t123101851;
// UnityEngine.WWW
struct WWW_t3134621005;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_WWWForm461342257.h"
#include "AssemblyU2DCSharp_LDFW_Network_LDFWServerResponseEv123101851.h"
#include "UnityEngine_UnityEngine_WWW3134621005.h"

// System.Void LDFW.Network.LDFWServerCallController::.ctor()
extern "C"  void LDFWServerCallController__ctor_m57226304 (LDFWServerCallController_t3174857822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Network.LDFWServerCallController::Update()
extern "C"  void LDFWServerCallController_Update_m3500877517 (LDFWServerCallController_t3174857822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LDFW.Network.LDFWWWWCallCoroutineWrapper LDFW.Network.LDFWServerCallController::CommonWWWCall(System.String,UnityEngine.WWWForm,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  LDFWWWWCallCoroutineWrapper_t3645557397 * LDFWServerCallController_CommonWWWCall_m424124071 (LDFWServerCallController_t3174857822 * __this, String_t* ___url0, WWWForm_t461342257 * ___form1, LDFWServerResponseEvent_t123101851 * ___successCallBack2, LDFWServerResponseEvent_t123101851 * ___failureCallBack3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LDFW.Network.LDFWWWWCallCoroutineWrapper LDFW.Network.LDFWServerCallController::CommonWWWCall(UnityEngine.WWW,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  LDFWWWWCallCoroutineWrapper_t3645557397 * LDFWServerCallController_CommonWWWCall_m639499023 (LDFWServerCallController_t3174857822 * __this, WWW_t3134621005 * ___www0, LDFWServerResponseEvent_t123101851 * ___successCallBack1, LDFWServerResponseEvent_t123101851 * ___failureCallBack2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LDFW.Network.LDFWServerCallController::CommonWWWCallCoroutine(UnityEngine.WWW,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  Il2CppObject * LDFWServerCallController_CommonWWWCallCoroutine_m1733801128 (LDFWServerCallController_t3174857822 * __this, WWW_t3134621005 * ___www0, LDFWServerResponseEvent_t123101851 * ___successCallBack1, LDFWServerResponseEvent_t123101851 * ___failureCallBack2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
