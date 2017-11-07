#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_LDFW_UI_LDFWRecursiveScrollview_2231186473.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.UI.LDFWRecursiveScrollview
struct  LDFWRecursiveScrollview_t2975365449  : public MonoBehaviour_t667441552
{
public:
	// LDFW.UI.LDFWRecursiveScrollview/ScrollDirection LDFW.UI.LDFWRecursiveScrollview::scrollDirection
	int32_t ___scrollDirection_2;
	// System.Single LDFW.UI.LDFWRecursiveScrollview::reAdjustCooldown
	float ___reAdjustCooldown_3;
	// UnityEngine.UI.ScrollRect LDFW.UI.LDFWRecursiveScrollview::targetScrollRect
	ScrollRect_t3606982749 * ___targetScrollRect_4;
	// UnityEngine.RectTransform LDFW.UI.LDFWRecursiveScrollview::targetContent
	RectTransform_t972643934 * ___targetContent_5;
	// UnityEngine.RectTransform LDFW.UI.LDFWRecursiveScrollview::targetElementParent
	RectTransform_t972643934 * ___targetElementParent_6;
	// UnityEngine.Vector2 LDFW.UI.LDFWRecursiveScrollview::viewportSize
	Vector2_t4282066565  ___viewportSize_7;
	// System.Int32 LDFW.UI.LDFWRecursiveScrollview::elementParntChildCount
	int32_t ___elementParntChildCount_8;
	// System.Single LDFW.UI.LDFWRecursiveScrollview::topSectionTargetAnchoredPosition
	float ___topSectionTargetAnchoredPosition_9;
	// System.Single LDFW.UI.LDFWRecursiveScrollview::scrollBottomRepositionAnchoredPosition
	float ___scrollBottomRepositionAnchoredPosition_10;
	// System.Single LDFW.UI.LDFWRecursiveScrollview::scrollTopRepositionAnchoredPosition
	float ___scrollTopRepositionAnchoredPosition_11;
	// System.Single LDFW.UI.LDFWRecursiveScrollview::reAdjustCountDown
	float ___reAdjustCountDown_12;

public:
	inline static int32_t get_offset_of_scrollDirection_2() { return static_cast<int32_t>(offsetof(LDFWRecursiveScrollview_t2975365449, ___scrollDirection_2)); }
	inline int32_t get_scrollDirection_2() const { return ___scrollDirection_2; }
	inline int32_t* get_address_of_scrollDirection_2() { return &___scrollDirection_2; }
	inline void set_scrollDirection_2(int32_t value)
	{
		___scrollDirection_2 = value;
	}

	inline static int32_t get_offset_of_reAdjustCooldown_3() { return static_cast<int32_t>(offsetof(LDFWRecursiveScrollview_t2975365449, ___reAdjustCooldown_3)); }
	inline float get_reAdjustCooldown_3() const { return ___reAdjustCooldown_3; }
	inline float* get_address_of_reAdjustCooldown_3() { return &___reAdjustCooldown_3; }
	inline void set_reAdjustCooldown_3(float value)
	{
		___reAdjustCooldown_3 = value;
	}

	inline static int32_t get_offset_of_targetScrollRect_4() { return static_cast<int32_t>(offsetof(LDFWRecursiveScrollview_t2975365449, ___targetScrollRect_4)); }
	inline ScrollRect_t3606982749 * get_targetScrollRect_4() const { return ___targetScrollRect_4; }
	inline ScrollRect_t3606982749 ** get_address_of_targetScrollRect_4() { return &___targetScrollRect_4; }
	inline void set_targetScrollRect_4(ScrollRect_t3606982749 * value)
	{
		___targetScrollRect_4 = value;
		Il2CppCodeGenWriteBarrier(&___targetScrollRect_4, value);
	}

	inline static int32_t get_offset_of_targetContent_5() { return static_cast<int32_t>(offsetof(LDFWRecursiveScrollview_t2975365449, ___targetContent_5)); }
	inline RectTransform_t972643934 * get_targetContent_5() const { return ___targetContent_5; }
	inline RectTransform_t972643934 ** get_address_of_targetContent_5() { return &___targetContent_5; }
	inline void set_targetContent_5(RectTransform_t972643934 * value)
	{
		___targetContent_5 = value;
		Il2CppCodeGenWriteBarrier(&___targetContent_5, value);
	}

	inline static int32_t get_offset_of_targetElementParent_6() { return static_cast<int32_t>(offsetof(LDFWRecursiveScrollview_t2975365449, ___targetElementParent_6)); }
	inline RectTransform_t972643934 * get_targetElementParent_6() const { return ___targetElementParent_6; }
	inline RectTransform_t972643934 ** get_address_of_targetElementParent_6() { return &___targetElementParent_6; }
	inline void set_targetElementParent_6(RectTransform_t972643934 * value)
	{
		___targetElementParent_6 = value;
		Il2CppCodeGenWriteBarrier(&___targetElementParent_6, value);
	}

	inline static int32_t get_offset_of_viewportSize_7() { return static_cast<int32_t>(offsetof(LDFWRecursiveScrollview_t2975365449, ___viewportSize_7)); }
	inline Vector2_t4282066565  get_viewportSize_7() const { return ___viewportSize_7; }
	inline Vector2_t4282066565 * get_address_of_viewportSize_7() { return &___viewportSize_7; }
	inline void set_viewportSize_7(Vector2_t4282066565  value)
	{
		___viewportSize_7 = value;
	}

	inline static int32_t get_offset_of_elementParntChildCount_8() { return static_cast<int32_t>(offsetof(LDFWRecursiveScrollview_t2975365449, ___elementParntChildCount_8)); }
	inline int32_t get_elementParntChildCount_8() const { return ___elementParntChildCount_8; }
	inline int32_t* get_address_of_elementParntChildCount_8() { return &___elementParntChildCount_8; }
	inline void set_elementParntChildCount_8(int32_t value)
	{
		___elementParntChildCount_8 = value;
	}

	inline static int32_t get_offset_of_topSectionTargetAnchoredPosition_9() { return static_cast<int32_t>(offsetof(LDFWRecursiveScrollview_t2975365449, ___topSectionTargetAnchoredPosition_9)); }
	inline float get_topSectionTargetAnchoredPosition_9() const { return ___topSectionTargetAnchoredPosition_9; }
	inline float* get_address_of_topSectionTargetAnchoredPosition_9() { return &___topSectionTargetAnchoredPosition_9; }
	inline void set_topSectionTargetAnchoredPosition_9(float value)
	{
		___topSectionTargetAnchoredPosition_9 = value;
	}

	inline static int32_t get_offset_of_scrollBottomRepositionAnchoredPosition_10() { return static_cast<int32_t>(offsetof(LDFWRecursiveScrollview_t2975365449, ___scrollBottomRepositionAnchoredPosition_10)); }
	inline float get_scrollBottomRepositionAnchoredPosition_10() const { return ___scrollBottomRepositionAnchoredPosition_10; }
	inline float* get_address_of_scrollBottomRepositionAnchoredPosition_10() { return &___scrollBottomRepositionAnchoredPosition_10; }
	inline void set_scrollBottomRepositionAnchoredPosition_10(float value)
	{
		___scrollBottomRepositionAnchoredPosition_10 = value;
	}

	inline static int32_t get_offset_of_scrollTopRepositionAnchoredPosition_11() { return static_cast<int32_t>(offsetof(LDFWRecursiveScrollview_t2975365449, ___scrollTopRepositionAnchoredPosition_11)); }
	inline float get_scrollTopRepositionAnchoredPosition_11() const { return ___scrollTopRepositionAnchoredPosition_11; }
	inline float* get_address_of_scrollTopRepositionAnchoredPosition_11() { return &___scrollTopRepositionAnchoredPosition_11; }
	inline void set_scrollTopRepositionAnchoredPosition_11(float value)
	{
		___scrollTopRepositionAnchoredPosition_11 = value;
	}

	inline static int32_t get_offset_of_reAdjustCountDown_12() { return static_cast<int32_t>(offsetof(LDFWRecursiveScrollview_t2975365449, ___reAdjustCountDown_12)); }
	inline float get_reAdjustCountDown_12() const { return ___reAdjustCountDown_12; }
	inline float* get_address_of_reAdjustCountDown_12() { return &___reAdjustCountDown_12; }
	inline void set_reAdjustCountDown_12(float value)
	{
		___reAdjustCountDown_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
