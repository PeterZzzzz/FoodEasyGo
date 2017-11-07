#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t2522024052;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.UI.InfiniteScrollRectController
struct  InfiniteScrollRectController_t2227708089  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<System.Int32> LDFW.UI.InfiniteScrollRectController::_data
	List_1_t2522024052 * ____data_2;
	// UnityEngine.UI.ScrollRect LDFW.UI.InfiniteScrollRectController::_scrollRect
	ScrollRect_t3606982749 * ____scrollRect_3;
	// UnityEngine.RectTransform LDFW.UI.InfiniteScrollRectController::_scrollRectContent
	RectTransform_t972643934 * ____scrollRectContent_4;
	// UnityEngine.RectTransform LDFW.UI.InfiniteScrollRectController::_scrollRectElementParentContent
	RectTransform_t972643934 * ____scrollRectElementParentContent_5;
	// System.Int32 LDFW.UI.InfiniteScrollRectController::_scrollRectElementPreferredHeight
	int32_t ____scrollRectElementPreferredHeight_6;
	// System.Int32 LDFW.UI.InfiniteScrollRectController::_contentStartDataIndex
	int32_t ____contentStartDataIndex_7;
	// System.Int32 LDFW.UI.InfiniteScrollRectController::_contentEndDataIndex
	int32_t ____contentEndDataIndex_8;
	// System.Int32 LDFW.UI.InfiniteScrollRectController::_lastActiveIndex
	int32_t ____lastActiveIndex_9;
	// System.Int32 LDFW.UI.InfiniteScrollRectController::_dataLength
	int32_t ____dataLength_10;
	// System.Int32 LDFW.UI.InfiniteScrollRectController::_contentElementCount
	int32_t ____contentElementCount_11;
	// System.Single LDFW.UI.InfiniteScrollRectController::_contentTopActionPosition
	float ____contentTopActionPosition_12;
	// System.Single LDFW.UI.InfiniteScrollRectController::_contentBottomActionPosition
	float ____contentBottomActionPosition_13;

public:
	inline static int32_t get_offset_of__data_2() { return static_cast<int32_t>(offsetof(InfiniteScrollRectController_t2227708089, ____data_2)); }
	inline List_1_t2522024052 * get__data_2() const { return ____data_2; }
	inline List_1_t2522024052 ** get_address_of__data_2() { return &____data_2; }
	inline void set__data_2(List_1_t2522024052 * value)
	{
		____data_2 = value;
		Il2CppCodeGenWriteBarrier(&____data_2, value);
	}

	inline static int32_t get_offset_of__scrollRect_3() { return static_cast<int32_t>(offsetof(InfiniteScrollRectController_t2227708089, ____scrollRect_3)); }
	inline ScrollRect_t3606982749 * get__scrollRect_3() const { return ____scrollRect_3; }
	inline ScrollRect_t3606982749 ** get_address_of__scrollRect_3() { return &____scrollRect_3; }
	inline void set__scrollRect_3(ScrollRect_t3606982749 * value)
	{
		____scrollRect_3 = value;
		Il2CppCodeGenWriteBarrier(&____scrollRect_3, value);
	}

	inline static int32_t get_offset_of__scrollRectContent_4() { return static_cast<int32_t>(offsetof(InfiniteScrollRectController_t2227708089, ____scrollRectContent_4)); }
	inline RectTransform_t972643934 * get__scrollRectContent_4() const { return ____scrollRectContent_4; }
	inline RectTransform_t972643934 ** get_address_of__scrollRectContent_4() { return &____scrollRectContent_4; }
	inline void set__scrollRectContent_4(RectTransform_t972643934 * value)
	{
		____scrollRectContent_4 = value;
		Il2CppCodeGenWriteBarrier(&____scrollRectContent_4, value);
	}

	inline static int32_t get_offset_of__scrollRectElementParentContent_5() { return static_cast<int32_t>(offsetof(InfiniteScrollRectController_t2227708089, ____scrollRectElementParentContent_5)); }
	inline RectTransform_t972643934 * get__scrollRectElementParentContent_5() const { return ____scrollRectElementParentContent_5; }
	inline RectTransform_t972643934 ** get_address_of__scrollRectElementParentContent_5() { return &____scrollRectElementParentContent_5; }
	inline void set__scrollRectElementParentContent_5(RectTransform_t972643934 * value)
	{
		____scrollRectElementParentContent_5 = value;
		Il2CppCodeGenWriteBarrier(&____scrollRectElementParentContent_5, value);
	}

	inline static int32_t get_offset_of__scrollRectElementPreferredHeight_6() { return static_cast<int32_t>(offsetof(InfiniteScrollRectController_t2227708089, ____scrollRectElementPreferredHeight_6)); }
	inline int32_t get__scrollRectElementPreferredHeight_6() const { return ____scrollRectElementPreferredHeight_6; }
	inline int32_t* get_address_of__scrollRectElementPreferredHeight_6() { return &____scrollRectElementPreferredHeight_6; }
	inline void set__scrollRectElementPreferredHeight_6(int32_t value)
	{
		____scrollRectElementPreferredHeight_6 = value;
	}

	inline static int32_t get_offset_of__contentStartDataIndex_7() { return static_cast<int32_t>(offsetof(InfiniteScrollRectController_t2227708089, ____contentStartDataIndex_7)); }
	inline int32_t get__contentStartDataIndex_7() const { return ____contentStartDataIndex_7; }
	inline int32_t* get_address_of__contentStartDataIndex_7() { return &____contentStartDataIndex_7; }
	inline void set__contentStartDataIndex_7(int32_t value)
	{
		____contentStartDataIndex_7 = value;
	}

	inline static int32_t get_offset_of__contentEndDataIndex_8() { return static_cast<int32_t>(offsetof(InfiniteScrollRectController_t2227708089, ____contentEndDataIndex_8)); }
	inline int32_t get__contentEndDataIndex_8() const { return ____contentEndDataIndex_8; }
	inline int32_t* get_address_of__contentEndDataIndex_8() { return &____contentEndDataIndex_8; }
	inline void set__contentEndDataIndex_8(int32_t value)
	{
		____contentEndDataIndex_8 = value;
	}

	inline static int32_t get_offset_of__lastActiveIndex_9() { return static_cast<int32_t>(offsetof(InfiniteScrollRectController_t2227708089, ____lastActiveIndex_9)); }
	inline int32_t get__lastActiveIndex_9() const { return ____lastActiveIndex_9; }
	inline int32_t* get_address_of__lastActiveIndex_9() { return &____lastActiveIndex_9; }
	inline void set__lastActiveIndex_9(int32_t value)
	{
		____lastActiveIndex_9 = value;
	}

	inline static int32_t get_offset_of__dataLength_10() { return static_cast<int32_t>(offsetof(InfiniteScrollRectController_t2227708089, ____dataLength_10)); }
	inline int32_t get__dataLength_10() const { return ____dataLength_10; }
	inline int32_t* get_address_of__dataLength_10() { return &____dataLength_10; }
	inline void set__dataLength_10(int32_t value)
	{
		____dataLength_10 = value;
	}

	inline static int32_t get_offset_of__contentElementCount_11() { return static_cast<int32_t>(offsetof(InfiniteScrollRectController_t2227708089, ____contentElementCount_11)); }
	inline int32_t get__contentElementCount_11() const { return ____contentElementCount_11; }
	inline int32_t* get_address_of__contentElementCount_11() { return &____contentElementCount_11; }
	inline void set__contentElementCount_11(int32_t value)
	{
		____contentElementCount_11 = value;
	}

	inline static int32_t get_offset_of__contentTopActionPosition_12() { return static_cast<int32_t>(offsetof(InfiniteScrollRectController_t2227708089, ____contentTopActionPosition_12)); }
	inline float get__contentTopActionPosition_12() const { return ____contentTopActionPosition_12; }
	inline float* get_address_of__contentTopActionPosition_12() { return &____contentTopActionPosition_12; }
	inline void set__contentTopActionPosition_12(float value)
	{
		____contentTopActionPosition_12 = value;
	}

	inline static int32_t get_offset_of__contentBottomActionPosition_13() { return static_cast<int32_t>(offsetof(InfiniteScrollRectController_t2227708089, ____contentBottomActionPosition_13)); }
	inline float get__contentBottomActionPosition_13() const { return ____contentBottomActionPosition_13; }
	inline float* get_address_of__contentBottomActionPosition_13() { return &____contentBottomActionPosition_13; }
	inline void set__contentBottomActionPosition_13(float value)
	{
		____contentBottomActionPosition_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
