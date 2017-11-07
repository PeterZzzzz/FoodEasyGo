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

// NotificationNetworkController
struct NotificationNetworkController_t3220828831;
// LDFW.Network.LDFWServerResponseEvent
struct LDFWServerResponseEvent_t123101851;
// UnityEngine.WWWForm
struct WWWForm_t461342257;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LDFW_Network_LDFWServerResponseEv123101851.h"
#include "UnityEngine_UnityEngine_WWWForm461342257.h"

// System.Void NotificationNetworkController::.ctor()
extern "C"  void NotificationNetworkController__ctor_m615457196 (NotificationNetworkController_t3220828831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationNetworkController::Awake()
extern "C"  void NotificationNetworkController_Awake_m853062415 (NotificationNetworkController_t3220828831 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationNetworkController::GetNotificationList(LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void NotificationNetworkController_GetNotificationList_m739768253 (NotificationNetworkController_t3220828831 * __this, LDFWServerResponseEvent_t123101851 * ___success0, LDFWServerResponseEvent_t123101851 * ___failure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationNetworkController::DeleteNotification(UnityEngine.WWWForm,LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void NotificationNetworkController_DeleteNotification_m3120035584 (NotificationNetworkController_t3220828831 * __this, WWWForm_t461342257 * ___form0, LDFWServerResponseEvent_t123101851 * ___success1, LDFWServerResponseEvent_t123101851 * ___failure2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NotificationNetworkController::DeleteAllNotifications(LDFW.Network.LDFWServerResponseEvent,LDFW.Network.LDFWServerResponseEvent)
extern "C"  void NotificationNetworkController_DeleteAllNotifications_m3578704220 (NotificationNetworkController_t3220828831 * __this, LDFWServerResponseEvent_t123101851 * ___success0, LDFWServerResponseEvent_t123101851 * ___failure1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
