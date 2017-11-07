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
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "AssemblyU2DCSharp_BaseUIController1679080129.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HomeSlideController
struct  HomeSlideController_t99493166  : public BaseUIController_t1679080129
{
public:
	// System.Int32 HomeSlideController::slideNumber
	int32_t ___slideNumber_3;
	// UnityEngine.RectTransform HomeSlideController::imageParent
	RectTransform_t972643934 * ___imageParent_4;
	// System.Collections.IEnumerator HomeSlideController::startSlideShowIEnumerator
	Il2CppObject * ___startSlideShowIEnumerator_5;

public:
	inline static int32_t get_offset_of_slideNumber_3() { return static_cast<int32_t>(offsetof(HomeSlideController_t99493166, ___slideNumber_3)); }
	inline int32_t get_slideNumber_3() const { return ___slideNumber_3; }
	inline int32_t* get_address_of_slideNumber_3() { return &___slideNumber_3; }
	inline void set_slideNumber_3(int32_t value)
	{
		___slideNumber_3 = value;
	}

	inline static int32_t get_offset_of_imageParent_4() { return static_cast<int32_t>(offsetof(HomeSlideController_t99493166, ___imageParent_4)); }
	inline RectTransform_t972643934 * get_imageParent_4() const { return ___imageParent_4; }
	inline RectTransform_t972643934 ** get_address_of_imageParent_4() { return &___imageParent_4; }
	inline void set_imageParent_4(RectTransform_t972643934 * value)
	{
		___imageParent_4 = value;
		Il2CppCodeGenWriteBarrier(&___imageParent_4, value);
	}

	inline static int32_t get_offset_of_startSlideShowIEnumerator_5() { return static_cast<int32_t>(offsetof(HomeSlideController_t99493166, ___startSlideShowIEnumerator_5)); }
	inline Il2CppObject * get_startSlideShowIEnumerator_5() const { return ___startSlideShowIEnumerator_5; }
	inline Il2CppObject ** get_address_of_startSlideShowIEnumerator_5() { return &___startSlideShowIEnumerator_5; }
	inline void set_startSlideShowIEnumerator_5(Il2CppObject * value)
	{
		___startSlideShowIEnumerator_5 = value;
		Il2CppCodeGenWriteBarrier(&___startSlideShowIEnumerator_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
