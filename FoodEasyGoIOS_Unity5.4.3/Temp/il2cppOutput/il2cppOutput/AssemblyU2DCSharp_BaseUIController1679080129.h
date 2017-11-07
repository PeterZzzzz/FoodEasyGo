#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BaseUIController
struct  BaseUIController_t1679080129  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.RectTransform BaseUIController::mRectTransform
	RectTransform_t972643934 * ___mRectTransform_2;

public:
	inline static int32_t get_offset_of_mRectTransform_2() { return static_cast<int32_t>(offsetof(BaseUIController_t1679080129, ___mRectTransform_2)); }
	inline RectTransform_t972643934 * get_mRectTransform_2() const { return ___mRectTransform_2; }
	inline RectTransform_t972643934 ** get_address_of_mRectTransform_2() { return &___mRectTransform_2; }
	inline void set_mRectTransform_2(RectTransform_t972643934 * value)
	{
		___mRectTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___mRectTransform_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
