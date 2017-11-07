#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// cn.sharesdk.unity3d.ShareSDK
struct ShareSDK_t3009509477;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShareSDKSetup
struct  ShareSDKSetup_t1726495554  : public MonoBehaviour_t667441552
{
public:
	// cn.sharesdk.unity3d.ShareSDK ShareSDKSetup::shareSDK
	ShareSDK_t3009509477 * ___shareSDK_2;

public:
	inline static int32_t get_offset_of_shareSDK_2() { return static_cast<int32_t>(offsetof(ShareSDKSetup_t1726495554, ___shareSDK_2)); }
	inline ShareSDK_t3009509477 * get_shareSDK_2() const { return ___shareSDK_2; }
	inline ShareSDK_t3009509477 ** get_address_of_shareSDK_2() { return &___shareSDK_2; }
	inline void set_shareSDK_2(ShareSDK_t3009509477 * value)
	{
		___shareSDK_2 = value;
		Il2CppCodeGenWriteBarrier(&___shareSDK_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
