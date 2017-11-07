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

// GrouponNetworkController
struct GrouponNetworkController_t4142648204;
// LDFW.Network.LDFWServerResponseEvent
struct LDFWServerResponseEvent_t123101851;
// UnityEngine.WWWForm
struct WWWForm_t461342257;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LDFW_Network_LDFWServerResponseEv123101851.h"
#include "UnityEngine_UnityEngine_WWWForm461342257.h"

// System.Void GrouponNetworkController::.ctor()
extern "C"  void GrouponNetworkController__ctor_m4153671823 (GrouponNetworkController_t4142648204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrouponNetworkController::Awake()
extern "C"  void GrouponNetworkController_Awake_m96309746 (GrouponNetworkController_t4142648204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrouponNetworkController::GetGrouponRecommendedList(LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void GrouponNetworkController_GetGrouponRecommendedList_m3511628488 (GrouponNetworkController_t4142648204 * __this, LDFWServerResponseEvent_t123101851 * ___success0, LDFWServerResponseEvent_t123101851 * ___failure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrouponNetworkController::GetGrouponList(LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void GrouponNetworkController_GetGrouponList_m332691819 (GrouponNetworkController_t4142648204 * __this, LDFWServerResponseEvent_t123101851 * ___success0, LDFWServerResponseEvent_t123101851 * ___failure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GrouponNetworkController::GetGrouponDetail(UnityEngine.WWWForm,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void GrouponNetworkController_GetGrouponDetail_m2031171616 (GrouponNetworkController_t4142648204 * __this, WWWForm_t461342257 * ___form0, LDFWServerResponseEvent_t123101851 * ___success1, LDFWServerResponseEvent_t123101851 * ___failure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
