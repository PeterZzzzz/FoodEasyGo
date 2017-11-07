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

// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_iOS_NotificationType3233079183.h"

// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType)
extern "C"  void NotificationServices_RegisterForNotifications_m460427814 (Il2CppObject * __this /* static, unused */, int32_t ___notificationTypes0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.iOS.NotificationServices::RegisterForNotifications(UnityEngine.iOS.NotificationType,System.Boolean)
extern "C"  void NotificationServices_RegisterForNotifications_m736063639 (Il2CppObject * __this /* static, unused */, int32_t ___notificationTypes0, bool ___registerForRemote1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.iOS.NotificationServices::get_deviceToken()
extern "C"  ByteU5BU5D_t4260760469* NotificationServices_get_deviceToken_m1646897969 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
