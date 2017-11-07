#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AccountAccessNetworkController
struct AccountAccessNetworkController_t3188289177;

#include "AssemblyU2DCSharp_ServerCallController539269853.h"
#include "mscorlib_System_TimeSpan413522987.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AccountAccessNetworkController
struct  AccountAccessNetworkController_t3188289177  : public ServerCallController_t539269853
{
public:
	// System.TimeSpan AccountAccessNetworkController::lastAccessTokenGrantedTime
	TimeSpan_t413522987  ___lastAccessTokenGrantedTime_5;
	// System.Single AccountAccessNetworkController::accessTokenRefreshTime
	float ___accessTokenRefreshTime_6;
	// System.Single AccountAccessNetworkController::accessTokenRefreshTimeCountdown
	float ___accessTokenRefreshTimeCountdown_7;

public:
	inline static int32_t get_offset_of_lastAccessTokenGrantedTime_5() { return static_cast<int32_t>(offsetof(AccountAccessNetworkController_t3188289177, ___lastAccessTokenGrantedTime_5)); }
	inline TimeSpan_t413522987  get_lastAccessTokenGrantedTime_5() const { return ___lastAccessTokenGrantedTime_5; }
	inline TimeSpan_t413522987 * get_address_of_lastAccessTokenGrantedTime_5() { return &___lastAccessTokenGrantedTime_5; }
	inline void set_lastAccessTokenGrantedTime_5(TimeSpan_t413522987  value)
	{
		___lastAccessTokenGrantedTime_5 = value;
	}

	inline static int32_t get_offset_of_accessTokenRefreshTime_6() { return static_cast<int32_t>(offsetof(AccountAccessNetworkController_t3188289177, ___accessTokenRefreshTime_6)); }
	inline float get_accessTokenRefreshTime_6() const { return ___accessTokenRefreshTime_6; }
	inline float* get_address_of_accessTokenRefreshTime_6() { return &___accessTokenRefreshTime_6; }
	inline void set_accessTokenRefreshTime_6(float value)
	{
		___accessTokenRefreshTime_6 = value;
	}

	inline static int32_t get_offset_of_accessTokenRefreshTimeCountdown_7() { return static_cast<int32_t>(offsetof(AccountAccessNetworkController_t3188289177, ___accessTokenRefreshTimeCountdown_7)); }
	inline float get_accessTokenRefreshTimeCountdown_7() const { return ___accessTokenRefreshTimeCountdown_7; }
	inline float* get_address_of_accessTokenRefreshTimeCountdown_7() { return &___accessTokenRefreshTimeCountdown_7; }
	inline void set_accessTokenRefreshTimeCountdown_7(float value)
	{
		___accessTokenRefreshTimeCountdown_7 = value;
	}
};

struct AccountAccessNetworkController_t3188289177_StaticFields
{
public:
	// AccountAccessNetworkController AccountAccessNetworkController::instance
	AccountAccessNetworkController_t3188289177 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(AccountAccessNetworkController_t3188289177_StaticFields, ___instance_4)); }
	inline AccountAccessNetworkController_t3188289177 * get_instance_4() const { return ___instance_4; }
	inline AccountAccessNetworkController_t3188289177 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(AccountAccessNetworkController_t3188289177 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
