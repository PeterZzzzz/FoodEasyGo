#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// NotificationNetworkController
struct NotificationNetworkController_t3220828831;
// System.String
struct String_t;
// LDFW.Network.LDFWWWWCallCoroutineWrapper
struct LDFWWWWCallCoroutineWrapper_t3645557397;

#include "AssemblyU2DCSharp_ServerCallController539269853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NotificationNetworkController
struct  NotificationNetworkController_t3220828831  : public ServerCallController_t539269853
{
public:
	// System.String NotificationNetworkController::notificationControllerURL
	String_t* ___notificationControllerURL_5;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper NotificationNetworkController::getNotificationListCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getNotificationListCall_6;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper NotificationNetworkController::deleteNotificationCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___deleteNotificationCall_7;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper NotificationNetworkController::deleteAllNotificationsCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___deleteAllNotificationsCall_8;

public:
	inline static int32_t get_offset_of_notificationControllerURL_5() { return static_cast<int32_t>(offsetof(NotificationNetworkController_t3220828831, ___notificationControllerURL_5)); }
	inline String_t* get_notificationControllerURL_5() const { return ___notificationControllerURL_5; }
	inline String_t** get_address_of_notificationControllerURL_5() { return &___notificationControllerURL_5; }
	inline void set_notificationControllerURL_5(String_t* value)
	{
		___notificationControllerURL_5 = value;
		Il2CppCodeGenWriteBarrier(&___notificationControllerURL_5, value);
	}

	inline static int32_t get_offset_of_getNotificationListCall_6() { return static_cast<int32_t>(offsetof(NotificationNetworkController_t3220828831, ___getNotificationListCall_6)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getNotificationListCall_6() const { return ___getNotificationListCall_6; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getNotificationListCall_6() { return &___getNotificationListCall_6; }
	inline void set_getNotificationListCall_6(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getNotificationListCall_6 = value;
		Il2CppCodeGenWriteBarrier(&___getNotificationListCall_6, value);
	}

	inline static int32_t get_offset_of_deleteNotificationCall_7() { return static_cast<int32_t>(offsetof(NotificationNetworkController_t3220828831, ___deleteNotificationCall_7)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_deleteNotificationCall_7() const { return ___deleteNotificationCall_7; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_deleteNotificationCall_7() { return &___deleteNotificationCall_7; }
	inline void set_deleteNotificationCall_7(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___deleteNotificationCall_7 = value;
		Il2CppCodeGenWriteBarrier(&___deleteNotificationCall_7, value);
	}

	inline static int32_t get_offset_of_deleteAllNotificationsCall_8() { return static_cast<int32_t>(offsetof(NotificationNetworkController_t3220828831, ___deleteAllNotificationsCall_8)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_deleteAllNotificationsCall_8() const { return ___deleteAllNotificationsCall_8; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_deleteAllNotificationsCall_8() { return &___deleteAllNotificationsCall_8; }
	inline void set_deleteAllNotificationsCall_8(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___deleteAllNotificationsCall_8 = value;
		Il2CppCodeGenWriteBarrier(&___deleteAllNotificationsCall_8, value);
	}
};

struct NotificationNetworkController_t3220828831_StaticFields
{
public:
	// NotificationNetworkController NotificationNetworkController::instance
	NotificationNetworkController_t3220828831 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(NotificationNetworkController_t3220828831_StaticFields, ___instance_4)); }
	inline NotificationNetworkController_t3220828831 * get_instance_4() const { return ___instance_4; }
	inline NotificationNetworkController_t3220828831 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(NotificationNetworkController_t3220828831 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
