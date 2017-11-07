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

// GroceryNetworkController
struct GroceryNetworkController_t4219088637;
// LDFW.Network.LDFWServerResponseEvent
struct LDFWServerResponseEvent_t123101851;
// UnityEngine.WWWForm
struct WWWForm_t461342257;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LDFW_Network_LDFWServerResponseEv123101851.h"
#include "UnityEngine_UnityEngine_WWWForm461342257.h"

// System.Void GroceryNetworkController::.ctor()
extern "C"  void GroceryNetworkController__ctor_m1844440126 (GroceryNetworkController_t4219088637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GroceryNetworkController::Awake()
extern "C"  void GroceryNetworkController_Awake_m2082045345 (GroceryNetworkController_t4219088637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GroceryNetworkController::GetGroceryRecommendedList(LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void GroceryNetworkController_GetGroceryRecommendedList_m4026623272 (GroceryNetworkController_t4219088637 * __this, LDFWServerResponseEvent_t123101851 * ___success0, LDFWServerResponseEvent_t123101851 * ___failure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GroceryNetworkController::GetGroceryCategoryList(LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void GroceryNetworkController_GetGroceryCategoryList_m2178584109 (GroceryNetworkController_t4219088637 * __this, LDFWServerResponseEvent_t123101851 * ___success0, LDFWServerResponseEvent_t123101851 * ___failure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GroceryNetworkController::GetGroceryList(UnityEngine.WWWForm,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void GroceryNetworkController_GetGroceryList_m3501404371 (GroceryNetworkController_t4219088637 * __this, WWWForm_t461342257 * ___form0, LDFWServerResponseEvent_t123101851 * ___success1, LDFWServerResponseEvent_t123101851 * ___failure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GroceryNetworkController::GetGroceryDetails(UnityEngine.WWWForm,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void GroceryNetworkController_GetGroceryDetails_m1437777063 (GroceryNetworkController_t4219088637 * __this, WWWForm_t461342257 * ___form0, LDFWServerResponseEvent_t123101851 * ___success1, LDFWServerResponseEvent_t123101851 * ___failure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
