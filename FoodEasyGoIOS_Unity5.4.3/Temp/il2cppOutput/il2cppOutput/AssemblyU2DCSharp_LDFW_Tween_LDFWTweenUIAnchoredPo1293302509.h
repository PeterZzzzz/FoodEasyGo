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

#include "AssemblyU2DCSharp_LDFW_Tween_LDFWTweenBase342943053.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.Tween.LDFWTweenUIAnchoredPosition
struct  LDFWTweenUIAnchoredPosition_t1293302509  : public LDFWTweenBase_t342943053
{
public:
	// UnityEngine.RectTransform LDFW.Tween.LDFWTweenUIAnchoredPosition::targetRectTransform
	RectTransform_t972643934 * ___targetRectTransform_25;
	// UnityEngine.Vector2 LDFW.Tween.LDFWTweenUIAnchoredPosition::tempVector
	Vector2_t4282066565  ___tempVector_26;

public:
	inline static int32_t get_offset_of_targetRectTransform_25() { return static_cast<int32_t>(offsetof(LDFWTweenUIAnchoredPosition_t1293302509, ___targetRectTransform_25)); }
	inline RectTransform_t972643934 * get_targetRectTransform_25() const { return ___targetRectTransform_25; }
	inline RectTransform_t972643934 ** get_address_of_targetRectTransform_25() { return &___targetRectTransform_25; }
	inline void set_targetRectTransform_25(RectTransform_t972643934 * value)
	{
		___targetRectTransform_25 = value;
		Il2CppCodeGenWriteBarrier(&___targetRectTransform_25, value);
	}

	inline static int32_t get_offset_of_tempVector_26() { return static_cast<int32_t>(offsetof(LDFWTweenUIAnchoredPosition_t1293302509, ___tempVector_26)); }
	inline Vector2_t4282066565  get_tempVector_26() const { return ___tempVector_26; }
	inline Vector2_t4282066565 * get_address_of_tempVector_26() { return &___tempVector_26; }
	inline void set_tempVector_26(Vector2_t4282066565  value)
	{
		___tempVector_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
