#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// cn.sharesdk.unity3d.DevInfoSet
struct DevInfoSet_t2372148617;
// cn.sharesdk.unity3d.ShareSDKImpl
struct ShareSDKImpl_t3934264613;
// cn.sharesdk.unity3d.ShareSDK/EventHandler
struct EventHandler_t2477476364;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cn.sharesdk.unity3d.ShareSDK
struct  ShareSDK_t3009509477  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 cn.sharesdk.unity3d.ShareSDK::reqID
	int32_t ___reqID_2;
	// System.String cn.sharesdk.unity3d.ShareSDK::appKey
	String_t* ___appKey_3;
	// cn.sharesdk.unity3d.DevInfoSet cn.sharesdk.unity3d.ShareSDK::devInfo
	DevInfoSet_t2372148617 * ___devInfo_4;
	// cn.sharesdk.unity3d.ShareSDKImpl cn.sharesdk.unity3d.ShareSDK::shareSDKUtils
	ShareSDKImpl_t3934264613 * ___shareSDKUtils_5;
	// cn.sharesdk.unity3d.ShareSDK/EventHandler cn.sharesdk.unity3d.ShareSDK::authHandler
	EventHandler_t2477476364 * ___authHandler_6;
	// cn.sharesdk.unity3d.ShareSDK/EventHandler cn.sharesdk.unity3d.ShareSDK::shareHandler
	EventHandler_t2477476364 * ___shareHandler_7;
	// cn.sharesdk.unity3d.ShareSDK/EventHandler cn.sharesdk.unity3d.ShareSDK::showUserHandler
	EventHandler_t2477476364 * ___showUserHandler_8;
	// cn.sharesdk.unity3d.ShareSDK/EventHandler cn.sharesdk.unity3d.ShareSDK::getFriendsHandler
	EventHandler_t2477476364 * ___getFriendsHandler_9;
	// cn.sharesdk.unity3d.ShareSDK/EventHandler cn.sharesdk.unity3d.ShareSDK::followFriendHandler
	EventHandler_t2477476364 * ___followFriendHandler_10;

public:
	inline static int32_t get_offset_of_reqID_2() { return static_cast<int32_t>(offsetof(ShareSDK_t3009509477, ___reqID_2)); }
	inline int32_t get_reqID_2() const { return ___reqID_2; }
	inline int32_t* get_address_of_reqID_2() { return &___reqID_2; }
	inline void set_reqID_2(int32_t value)
	{
		___reqID_2 = value;
	}

	inline static int32_t get_offset_of_appKey_3() { return static_cast<int32_t>(offsetof(ShareSDK_t3009509477, ___appKey_3)); }
	inline String_t* get_appKey_3() const { return ___appKey_3; }
	inline String_t** get_address_of_appKey_3() { return &___appKey_3; }
	inline void set_appKey_3(String_t* value)
	{
		___appKey_3 = value;
		Il2CppCodeGenWriteBarrier(&___appKey_3, value);
	}

	inline static int32_t get_offset_of_devInfo_4() { return static_cast<int32_t>(offsetof(ShareSDK_t3009509477, ___devInfo_4)); }
	inline DevInfoSet_t2372148617 * get_devInfo_4() const { return ___devInfo_4; }
	inline DevInfoSet_t2372148617 ** get_address_of_devInfo_4() { return &___devInfo_4; }
	inline void set_devInfo_4(DevInfoSet_t2372148617 * value)
	{
		___devInfo_4 = value;
		Il2CppCodeGenWriteBarrier(&___devInfo_4, value);
	}

	inline static int32_t get_offset_of_shareSDKUtils_5() { return static_cast<int32_t>(offsetof(ShareSDK_t3009509477, ___shareSDKUtils_5)); }
	inline ShareSDKImpl_t3934264613 * get_shareSDKUtils_5() const { return ___shareSDKUtils_5; }
	inline ShareSDKImpl_t3934264613 ** get_address_of_shareSDKUtils_5() { return &___shareSDKUtils_5; }
	inline void set_shareSDKUtils_5(ShareSDKImpl_t3934264613 * value)
	{
		___shareSDKUtils_5 = value;
		Il2CppCodeGenWriteBarrier(&___shareSDKUtils_5, value);
	}

	inline static int32_t get_offset_of_authHandler_6() { return static_cast<int32_t>(offsetof(ShareSDK_t3009509477, ___authHandler_6)); }
	inline EventHandler_t2477476364 * get_authHandler_6() const { return ___authHandler_6; }
	inline EventHandler_t2477476364 ** get_address_of_authHandler_6() { return &___authHandler_6; }
	inline void set_authHandler_6(EventHandler_t2477476364 * value)
	{
		___authHandler_6 = value;
		Il2CppCodeGenWriteBarrier(&___authHandler_6, value);
	}

	inline static int32_t get_offset_of_shareHandler_7() { return static_cast<int32_t>(offsetof(ShareSDK_t3009509477, ___shareHandler_7)); }
	inline EventHandler_t2477476364 * get_shareHandler_7() const { return ___shareHandler_7; }
	inline EventHandler_t2477476364 ** get_address_of_shareHandler_7() { return &___shareHandler_7; }
	inline void set_shareHandler_7(EventHandler_t2477476364 * value)
	{
		___shareHandler_7 = value;
		Il2CppCodeGenWriteBarrier(&___shareHandler_7, value);
	}

	inline static int32_t get_offset_of_showUserHandler_8() { return static_cast<int32_t>(offsetof(ShareSDK_t3009509477, ___showUserHandler_8)); }
	inline EventHandler_t2477476364 * get_showUserHandler_8() const { return ___showUserHandler_8; }
	inline EventHandler_t2477476364 ** get_address_of_showUserHandler_8() { return &___showUserHandler_8; }
	inline void set_showUserHandler_8(EventHandler_t2477476364 * value)
	{
		___showUserHandler_8 = value;
		Il2CppCodeGenWriteBarrier(&___showUserHandler_8, value);
	}

	inline static int32_t get_offset_of_getFriendsHandler_9() { return static_cast<int32_t>(offsetof(ShareSDK_t3009509477, ___getFriendsHandler_9)); }
	inline EventHandler_t2477476364 * get_getFriendsHandler_9() const { return ___getFriendsHandler_9; }
	inline EventHandler_t2477476364 ** get_address_of_getFriendsHandler_9() { return &___getFriendsHandler_9; }
	inline void set_getFriendsHandler_9(EventHandler_t2477476364 * value)
	{
		___getFriendsHandler_9 = value;
		Il2CppCodeGenWriteBarrier(&___getFriendsHandler_9, value);
	}

	inline static int32_t get_offset_of_followFriendHandler_10() { return static_cast<int32_t>(offsetof(ShareSDK_t3009509477, ___followFriendHandler_10)); }
	inline EventHandler_t2477476364 * get_followFriendHandler_10() const { return ___followFriendHandler_10; }
	inline EventHandler_t2477476364 ** get_address_of_followFriendHandler_10() { return &___followFriendHandler_10; }
	inline void set_followFriendHandler_10(EventHandler_t2477476364 * value)
	{
		___followFriendHandler_10 = value;
		Il2CppCodeGenWriteBarrier(&___followFriendHandler_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
