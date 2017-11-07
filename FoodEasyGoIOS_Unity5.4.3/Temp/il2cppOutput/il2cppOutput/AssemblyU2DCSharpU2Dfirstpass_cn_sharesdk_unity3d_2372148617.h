#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// cn.sharesdk.unity3d.Facebook
struct Facebook_t4250411856;
// cn.sharesdk.unity3d.WeChat
struct WeChat_t1271016912;
// cn.sharesdk.unity3d.GooglePlus
struct GooglePlus_t2369388029;
// cn.sharesdk.unity3d.Copy
struct Copy_t2704147455;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cn.sharesdk.unity3d.DevInfoSet
struct  DevInfoSet_t2372148617  : public Il2CppObject
{
public:
	// cn.sharesdk.unity3d.Facebook cn.sharesdk.unity3d.DevInfoSet::facebook
	Facebook_t4250411856 * ___facebook_0;
	// cn.sharesdk.unity3d.WeChat cn.sharesdk.unity3d.DevInfoSet::wechat
	WeChat_t1271016912 * ___wechat_1;
	// cn.sharesdk.unity3d.GooglePlus cn.sharesdk.unity3d.DevInfoSet::googlePlus
	GooglePlus_t2369388029 * ___googlePlus_2;
	// cn.sharesdk.unity3d.Copy cn.sharesdk.unity3d.DevInfoSet::copy
	Copy_t2704147455 * ___copy_3;

public:
	inline static int32_t get_offset_of_facebook_0() { return static_cast<int32_t>(offsetof(DevInfoSet_t2372148617, ___facebook_0)); }
	inline Facebook_t4250411856 * get_facebook_0() const { return ___facebook_0; }
	inline Facebook_t4250411856 ** get_address_of_facebook_0() { return &___facebook_0; }
	inline void set_facebook_0(Facebook_t4250411856 * value)
	{
		___facebook_0 = value;
		Il2CppCodeGenWriteBarrier(&___facebook_0, value);
	}

	inline static int32_t get_offset_of_wechat_1() { return static_cast<int32_t>(offsetof(DevInfoSet_t2372148617, ___wechat_1)); }
	inline WeChat_t1271016912 * get_wechat_1() const { return ___wechat_1; }
	inline WeChat_t1271016912 ** get_address_of_wechat_1() { return &___wechat_1; }
	inline void set_wechat_1(WeChat_t1271016912 * value)
	{
		___wechat_1 = value;
		Il2CppCodeGenWriteBarrier(&___wechat_1, value);
	}

	inline static int32_t get_offset_of_googlePlus_2() { return static_cast<int32_t>(offsetof(DevInfoSet_t2372148617, ___googlePlus_2)); }
	inline GooglePlus_t2369388029 * get_googlePlus_2() const { return ___googlePlus_2; }
	inline GooglePlus_t2369388029 ** get_address_of_googlePlus_2() { return &___googlePlus_2; }
	inline void set_googlePlus_2(GooglePlus_t2369388029 * value)
	{
		___googlePlus_2 = value;
		Il2CppCodeGenWriteBarrier(&___googlePlus_2, value);
	}

	inline static int32_t get_offset_of_copy_3() { return static_cast<int32_t>(offsetof(DevInfoSet_t2372148617, ___copy_3)); }
	inline Copy_t2704147455 * get_copy_3() const { return ___copy_3; }
	inline Copy_t2704147455 ** get_address_of_copy_3() { return &___copy_3; }
	inline void set_copy_3(Copy_t2704147455 * value)
	{
		___copy_3 = value;
		Il2CppCodeGenWriteBarrier(&___copy_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
