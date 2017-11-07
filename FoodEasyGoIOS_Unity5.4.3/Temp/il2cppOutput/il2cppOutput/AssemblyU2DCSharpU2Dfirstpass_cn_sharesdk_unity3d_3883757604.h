#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t1407064410;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cn.sharesdk.unity3d.ShareContent
struct  ShareContent_t3883757604  : public Il2CppObject
{
public:
	// System.Collections.Hashtable cn.sharesdk.unity3d.ShareContent::shareParams
	Hashtable_t1407064410 * ___shareParams_0;
	// System.Collections.Hashtable cn.sharesdk.unity3d.ShareContent::customizeShareParams
	Hashtable_t1407064410 * ___customizeShareParams_1;

public:
	inline static int32_t get_offset_of_shareParams_0() { return static_cast<int32_t>(offsetof(ShareContent_t3883757604, ___shareParams_0)); }
	inline Hashtable_t1407064410 * get_shareParams_0() const { return ___shareParams_0; }
	inline Hashtable_t1407064410 ** get_address_of_shareParams_0() { return &___shareParams_0; }
	inline void set_shareParams_0(Hashtable_t1407064410 * value)
	{
		___shareParams_0 = value;
		Il2CppCodeGenWriteBarrier(&___shareParams_0, value);
	}

	inline static int32_t get_offset_of_customizeShareParams_1() { return static_cast<int32_t>(offsetof(ShareContent_t3883757604, ___customizeShareParams_1)); }
	inline Hashtable_t1407064410 * get_customizeShareParams_1() const { return ___customizeShareParams_1; }
	inline Hashtable_t1407064410 ** get_address_of_customizeShareParams_1() { return &___customizeShareParams_1; }
	inline void set_customizeShareParams_1(Hashtable_t1407064410 * value)
	{
		___customizeShareParams_1 = value;
		Il2CppCodeGenWriteBarrier(&___customizeShareParams_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
