#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Font
struct Font_t4241557075;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Test1
struct  Test1_t80698815  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform Test1::rootTransform
	Transform_t1659122786 * ___rootTransform_2;
	// UnityEngine.Font Test1::targetFont
	Font_t4241557075 * ___targetFont_3;

public:
	inline static int32_t get_offset_of_rootTransform_2() { return static_cast<int32_t>(offsetof(Test1_t80698815, ___rootTransform_2)); }
	inline Transform_t1659122786 * get_rootTransform_2() const { return ___rootTransform_2; }
	inline Transform_t1659122786 ** get_address_of_rootTransform_2() { return &___rootTransform_2; }
	inline void set_rootTransform_2(Transform_t1659122786 * value)
	{
		___rootTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___rootTransform_2, value);
	}

	inline static int32_t get_offset_of_targetFont_3() { return static_cast<int32_t>(offsetof(Test1_t80698815, ___targetFont_3)); }
	inline Font_t4241557075 * get_targetFont_3() const { return ___targetFont_3; }
	inline Font_t4241557075 ** get_address_of_targetFont_3() { return &___targetFont_3; }
	inline void set_targetFont_3(Font_t4241557075 * value)
	{
		___targetFont_3 = value;
		Il2CppCodeGenWriteBarrier(&___targetFont_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
