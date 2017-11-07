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
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t1266085011;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_LDFW_Tween_LDFWTweenBase_TweenerS713720285.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.Tween.LDFWTweenBase
struct  LDFWTweenBase_t342943053  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform LDFW.Tween.LDFWTweenBase::targetTransform
	Transform_t1659122786 * ___targetTransform_2;
	// System.Boolean LDFW.Tween.LDFWTweenBase::autoPlay
	bool ___autoPlay_3;
	// System.Boolean LDFW.Tween.LDFWTweenBase::useCurrentValueAsStartingValue
	bool ___useCurrentValueAsStartingValue_4;
	// System.Boolean LDFW.Tween.LDFWTweenBase::useRelativeValueBasedOnStartingValue
	bool ___useRelativeValueBasedOnStartingValue_5;
	// System.Boolean LDFW.Tween.LDFWTweenBase::generateRandomCurveBasedOnFromAndTo
	bool ___generateRandomCurveBasedOnFromAndTo_6;
	// UnityEngine.Vector3 LDFW.Tween.LDFWTweenBase::fromValue
	Vector3_t4282066566  ___fromValue_7;
	// UnityEngine.Vector3 LDFW.Tween.LDFWTweenBase::toValue
	Vector3_t4282066566  ___toValue_8;
	// UnityEngine.AnimationCurve LDFW.Tween.LDFWTweenBase::animationXCurve
	AnimationCurve_t3667593487 * ___animationXCurve_9;
	// UnityEngine.AnimationCurve LDFW.Tween.LDFWTweenBase::animationYCurve
	AnimationCurve_t3667593487 * ___animationYCurve_10;
	// UnityEngine.AnimationCurve LDFW.Tween.LDFWTweenBase::animationZCurve
	AnimationCurve_t3667593487 * ___animationZCurve_11;
	// LDFW.Tween.LDFWTweenBase/TweenerStyle LDFW.Tween.LDFWTweenBase::style
	int32_t ___style_12;
	// System.Single LDFW.Tween.LDFWTweenBase::startDelay
	float ___startDelay_13;
	// System.Single LDFW.Tween.LDFWTweenBase::duration
	float ___duration_14;
	// System.Boolean LDFW.Tween.LDFWTweenBase::ignoreTimeScale
	bool ___ignoreTimeScale_15;
	// UnityEngine.Events.UnityEvent LDFW.Tween.LDFWTweenBase::tweenEndEvent
	UnityEvent_t1266085011 * ___tweenEndEvent_16;
	// UnityEngine.Vector3 LDFW.Tween.LDFWTweenBase::startingValue
	Vector3_t4282066566  ___startingValue_17;
	// UnityEngine.Vector3 LDFW.Tween.LDFWTweenBase::currentValue
	Vector3_t4282066566  ___currentValue_18;
	// UnityEngine.Vector3 LDFW.Tween.LDFWTweenBase::diffValue
	Vector3_t4282066566  ___diffValue_19;
	// System.Single LDFW.Tween.LDFWTweenBase::accumulatedTime
	float ___accumulatedTime_20;
	// System.Boolean LDFW.Tween.LDFWTweenBase::isPlayingReverse
	bool ___isPlayingReverse_21;
	// System.Boolean LDFW.Tween.LDFWTweenBase::isCurrentAnimationBackwards
	bool ___isCurrentAnimationBackwards_22;
	// System.Boolean LDFW.Tween.LDFWTweenBase::isTweenerPlaying
	bool ___isTweenerPlaying_23;
	// System.Collections.IEnumerator LDFW.Tween.LDFWTweenBase::burstTweenIEnumerator
	Il2CppObject * ___burstTweenIEnumerator_24;

public:
	inline static int32_t get_offset_of_targetTransform_2() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___targetTransform_2)); }
	inline Transform_t1659122786 * get_targetTransform_2() const { return ___targetTransform_2; }
	inline Transform_t1659122786 ** get_address_of_targetTransform_2() { return &___targetTransform_2; }
	inline void set_targetTransform_2(Transform_t1659122786 * value)
	{
		___targetTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetTransform_2, value);
	}

	inline static int32_t get_offset_of_autoPlay_3() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___autoPlay_3)); }
	inline bool get_autoPlay_3() const { return ___autoPlay_3; }
	inline bool* get_address_of_autoPlay_3() { return &___autoPlay_3; }
	inline void set_autoPlay_3(bool value)
	{
		___autoPlay_3 = value;
	}

	inline static int32_t get_offset_of_useCurrentValueAsStartingValue_4() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___useCurrentValueAsStartingValue_4)); }
	inline bool get_useCurrentValueAsStartingValue_4() const { return ___useCurrentValueAsStartingValue_4; }
	inline bool* get_address_of_useCurrentValueAsStartingValue_4() { return &___useCurrentValueAsStartingValue_4; }
	inline void set_useCurrentValueAsStartingValue_4(bool value)
	{
		___useCurrentValueAsStartingValue_4 = value;
	}

	inline static int32_t get_offset_of_useRelativeValueBasedOnStartingValue_5() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___useRelativeValueBasedOnStartingValue_5)); }
	inline bool get_useRelativeValueBasedOnStartingValue_5() const { return ___useRelativeValueBasedOnStartingValue_5; }
	inline bool* get_address_of_useRelativeValueBasedOnStartingValue_5() { return &___useRelativeValueBasedOnStartingValue_5; }
	inline void set_useRelativeValueBasedOnStartingValue_5(bool value)
	{
		___useRelativeValueBasedOnStartingValue_5 = value;
	}

	inline static int32_t get_offset_of_generateRandomCurveBasedOnFromAndTo_6() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___generateRandomCurveBasedOnFromAndTo_6)); }
	inline bool get_generateRandomCurveBasedOnFromAndTo_6() const { return ___generateRandomCurveBasedOnFromAndTo_6; }
	inline bool* get_address_of_generateRandomCurveBasedOnFromAndTo_6() { return &___generateRandomCurveBasedOnFromAndTo_6; }
	inline void set_generateRandomCurveBasedOnFromAndTo_6(bool value)
	{
		___generateRandomCurveBasedOnFromAndTo_6 = value;
	}

	inline static int32_t get_offset_of_fromValue_7() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___fromValue_7)); }
	inline Vector3_t4282066566  get_fromValue_7() const { return ___fromValue_7; }
	inline Vector3_t4282066566 * get_address_of_fromValue_7() { return &___fromValue_7; }
	inline void set_fromValue_7(Vector3_t4282066566  value)
	{
		___fromValue_7 = value;
	}

	inline static int32_t get_offset_of_toValue_8() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___toValue_8)); }
	inline Vector3_t4282066566  get_toValue_8() const { return ___toValue_8; }
	inline Vector3_t4282066566 * get_address_of_toValue_8() { return &___toValue_8; }
	inline void set_toValue_8(Vector3_t4282066566  value)
	{
		___toValue_8 = value;
	}

	inline static int32_t get_offset_of_animationXCurve_9() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___animationXCurve_9)); }
	inline AnimationCurve_t3667593487 * get_animationXCurve_9() const { return ___animationXCurve_9; }
	inline AnimationCurve_t3667593487 ** get_address_of_animationXCurve_9() { return &___animationXCurve_9; }
	inline void set_animationXCurve_9(AnimationCurve_t3667593487 * value)
	{
		___animationXCurve_9 = value;
		Il2CppCodeGenWriteBarrier(&___animationXCurve_9, value);
	}

	inline static int32_t get_offset_of_animationYCurve_10() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___animationYCurve_10)); }
	inline AnimationCurve_t3667593487 * get_animationYCurve_10() const { return ___animationYCurve_10; }
	inline AnimationCurve_t3667593487 ** get_address_of_animationYCurve_10() { return &___animationYCurve_10; }
	inline void set_animationYCurve_10(AnimationCurve_t3667593487 * value)
	{
		___animationYCurve_10 = value;
		Il2CppCodeGenWriteBarrier(&___animationYCurve_10, value);
	}

	inline static int32_t get_offset_of_animationZCurve_11() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___animationZCurve_11)); }
	inline AnimationCurve_t3667593487 * get_animationZCurve_11() const { return ___animationZCurve_11; }
	inline AnimationCurve_t3667593487 ** get_address_of_animationZCurve_11() { return &___animationZCurve_11; }
	inline void set_animationZCurve_11(AnimationCurve_t3667593487 * value)
	{
		___animationZCurve_11 = value;
		Il2CppCodeGenWriteBarrier(&___animationZCurve_11, value);
	}

	inline static int32_t get_offset_of_style_12() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___style_12)); }
	inline int32_t get_style_12() const { return ___style_12; }
	inline int32_t* get_address_of_style_12() { return &___style_12; }
	inline void set_style_12(int32_t value)
	{
		___style_12 = value;
	}

	inline static int32_t get_offset_of_startDelay_13() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___startDelay_13)); }
	inline float get_startDelay_13() const { return ___startDelay_13; }
	inline float* get_address_of_startDelay_13() { return &___startDelay_13; }
	inline void set_startDelay_13(float value)
	{
		___startDelay_13 = value;
	}

	inline static int32_t get_offset_of_duration_14() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___duration_14)); }
	inline float get_duration_14() const { return ___duration_14; }
	inline float* get_address_of_duration_14() { return &___duration_14; }
	inline void set_duration_14(float value)
	{
		___duration_14 = value;
	}

	inline static int32_t get_offset_of_ignoreTimeScale_15() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___ignoreTimeScale_15)); }
	inline bool get_ignoreTimeScale_15() const { return ___ignoreTimeScale_15; }
	inline bool* get_address_of_ignoreTimeScale_15() { return &___ignoreTimeScale_15; }
	inline void set_ignoreTimeScale_15(bool value)
	{
		___ignoreTimeScale_15 = value;
	}

	inline static int32_t get_offset_of_tweenEndEvent_16() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___tweenEndEvent_16)); }
	inline UnityEvent_t1266085011 * get_tweenEndEvent_16() const { return ___tweenEndEvent_16; }
	inline UnityEvent_t1266085011 ** get_address_of_tweenEndEvent_16() { return &___tweenEndEvent_16; }
	inline void set_tweenEndEvent_16(UnityEvent_t1266085011 * value)
	{
		___tweenEndEvent_16 = value;
		Il2CppCodeGenWriteBarrier(&___tweenEndEvent_16, value);
	}

	inline static int32_t get_offset_of_startingValue_17() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___startingValue_17)); }
	inline Vector3_t4282066566  get_startingValue_17() const { return ___startingValue_17; }
	inline Vector3_t4282066566 * get_address_of_startingValue_17() { return &___startingValue_17; }
	inline void set_startingValue_17(Vector3_t4282066566  value)
	{
		___startingValue_17 = value;
	}

	inline static int32_t get_offset_of_currentValue_18() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___currentValue_18)); }
	inline Vector3_t4282066566  get_currentValue_18() const { return ___currentValue_18; }
	inline Vector3_t4282066566 * get_address_of_currentValue_18() { return &___currentValue_18; }
	inline void set_currentValue_18(Vector3_t4282066566  value)
	{
		___currentValue_18 = value;
	}

	inline static int32_t get_offset_of_diffValue_19() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___diffValue_19)); }
	inline Vector3_t4282066566  get_diffValue_19() const { return ___diffValue_19; }
	inline Vector3_t4282066566 * get_address_of_diffValue_19() { return &___diffValue_19; }
	inline void set_diffValue_19(Vector3_t4282066566  value)
	{
		___diffValue_19 = value;
	}

	inline static int32_t get_offset_of_accumulatedTime_20() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___accumulatedTime_20)); }
	inline float get_accumulatedTime_20() const { return ___accumulatedTime_20; }
	inline float* get_address_of_accumulatedTime_20() { return &___accumulatedTime_20; }
	inline void set_accumulatedTime_20(float value)
	{
		___accumulatedTime_20 = value;
	}

	inline static int32_t get_offset_of_isPlayingReverse_21() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___isPlayingReverse_21)); }
	inline bool get_isPlayingReverse_21() const { return ___isPlayingReverse_21; }
	inline bool* get_address_of_isPlayingReverse_21() { return &___isPlayingReverse_21; }
	inline void set_isPlayingReverse_21(bool value)
	{
		___isPlayingReverse_21 = value;
	}

	inline static int32_t get_offset_of_isCurrentAnimationBackwards_22() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___isCurrentAnimationBackwards_22)); }
	inline bool get_isCurrentAnimationBackwards_22() const { return ___isCurrentAnimationBackwards_22; }
	inline bool* get_address_of_isCurrentAnimationBackwards_22() { return &___isCurrentAnimationBackwards_22; }
	inline void set_isCurrentAnimationBackwards_22(bool value)
	{
		___isCurrentAnimationBackwards_22 = value;
	}

	inline static int32_t get_offset_of_isTweenerPlaying_23() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___isTweenerPlaying_23)); }
	inline bool get_isTweenerPlaying_23() const { return ___isTweenerPlaying_23; }
	inline bool* get_address_of_isTweenerPlaying_23() { return &___isTweenerPlaying_23; }
	inline void set_isTweenerPlaying_23(bool value)
	{
		___isTweenerPlaying_23 = value;
	}

	inline static int32_t get_offset_of_burstTweenIEnumerator_24() { return static_cast<int32_t>(offsetof(LDFWTweenBase_t342943053, ___burstTweenIEnumerator_24)); }
	inline Il2CppObject * get_burstTweenIEnumerator_24() const { return ___burstTweenIEnumerator_24; }
	inline Il2CppObject ** get_address_of_burstTweenIEnumerator_24() { return &___burstTweenIEnumerator_24; }
	inline void set_burstTweenIEnumerator_24(Il2CppObject * value)
	{
		___burstTweenIEnumerator_24 = value;
		Il2CppCodeGenWriteBarrier(&___burstTweenIEnumerator_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
