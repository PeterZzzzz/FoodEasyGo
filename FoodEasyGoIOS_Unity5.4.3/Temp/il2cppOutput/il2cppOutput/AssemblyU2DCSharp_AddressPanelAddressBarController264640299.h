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
// LDFW.Tween.LDFWTweenUIAnchoredPosition
struct LDFWTweenUIAnchoredPosition_t1293302509;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AddressPanelAddressBarController
struct  AddressPanelAddressBarController_t264640299  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.ScrollRect AddressPanelAddressBarController::parentScrollRect
	ScrollRect_t3606982749 * ___parentScrollRect_2;
	// LDFW.Tween.LDFWTweenUIAnchoredPosition AddressPanelAddressBarController::anchoredPositionTweener
	LDFWTweenUIAnchoredPosition_t1293302509 * ___anchoredPositionTweener_3;
	// UnityEngine.UI.Image AddressPanelAddressBarController::defaultButton
	Image_t538875265 * ___defaultButton_4;
	// UnityEngine.RectTransform AddressPanelAddressBarController::nameTransform
	RectTransform_t972643934 * ___nameTransform_5;
	// UnityEngine.RectTransform AddressPanelAddressBarController::contactNumberTransform
	RectTransform_t972643934 * ___contactNumberTransform_6;
	// UnityEngine.RectTransform AddressPanelAddressBarController::addressTransform
	RectTransform_t972643934 * ___addressTransform_7;
	// UnityEngine.RectTransform AddressPanelAddressBarController::defaultAddressText
	RectTransform_t972643934 * ___defaultAddressText_8;
	// UnityEngine.RectTransform AddressPanelAddressBarController::defaultAddressIcon
	RectTransform_t972643934 * ___defaultAddressIcon_9;
	// System.Boolean AddressPanelAddressBarController::_isDefault
	bool ____isDefault_10;
	// System.String AddressPanelAddressBarController::_addressID
	String_t* ____addressID_11;
	// System.String AddressPanelAddressBarController::_name
	String_t* ____name_12;
	// System.String AddressPanelAddressBarController::_phone
	String_t* ____phone_13;
	// System.String AddressPanelAddressBarController::_address
	String_t* ____address_14;
	// System.String AddressPanelAddressBarController::_street
	String_t* ____street_15;
	// System.String AddressPanelAddressBarController::_city
	String_t* ____city_16;
	// System.String AddressPanelAddressBarController::_state
	String_t* ____state_17;
	// System.String AddressPanelAddressBarController::_zipCode
	String_t* ____zipCode_18;
	// System.String AddressPanelAddressBarController::_regionID
	String_t* ____regionID_19;
	// System.Single AddressPanelAddressBarController::tweenCoolDown
	float ___tweenCoolDown_20;
	// System.Boolean AddressPanelAddressBarController::isPointerDown
	bool ___isPointerDown_21;
	// System.Boolean AddressPanelAddressBarController::isDeleteButtonVisible
	bool ___isDeleteButtonVisible_22;

public:
	inline static int32_t get_offset_of_parentScrollRect_2() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ___parentScrollRect_2)); }
	inline ScrollRect_t3606982749 * get_parentScrollRect_2() const { return ___parentScrollRect_2; }
	inline ScrollRect_t3606982749 ** get_address_of_parentScrollRect_2() { return &___parentScrollRect_2; }
	inline void set_parentScrollRect_2(ScrollRect_t3606982749 * value)
	{
		___parentScrollRect_2 = value;
		Il2CppCodeGenWriteBarrier(&___parentScrollRect_2, value);
	}

	inline static int32_t get_offset_of_anchoredPositionTweener_3() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ___anchoredPositionTweener_3)); }
	inline LDFWTweenUIAnchoredPosition_t1293302509 * get_anchoredPositionTweener_3() const { return ___anchoredPositionTweener_3; }
	inline LDFWTweenUIAnchoredPosition_t1293302509 ** get_address_of_anchoredPositionTweener_3() { return &___anchoredPositionTweener_3; }
	inline void set_anchoredPositionTweener_3(LDFWTweenUIAnchoredPosition_t1293302509 * value)
	{
		___anchoredPositionTweener_3 = value;
		Il2CppCodeGenWriteBarrier(&___anchoredPositionTweener_3, value);
	}

	inline static int32_t get_offset_of_defaultButton_4() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ___defaultButton_4)); }
	inline Image_t538875265 * get_defaultButton_4() const { return ___defaultButton_4; }
	inline Image_t538875265 ** get_address_of_defaultButton_4() { return &___defaultButton_4; }
	inline void set_defaultButton_4(Image_t538875265 * value)
	{
		___defaultButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultButton_4, value);
	}

	inline static int32_t get_offset_of_nameTransform_5() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ___nameTransform_5)); }
	inline RectTransform_t972643934 * get_nameTransform_5() const { return ___nameTransform_5; }
	inline RectTransform_t972643934 ** get_address_of_nameTransform_5() { return &___nameTransform_5; }
	inline void set_nameTransform_5(RectTransform_t972643934 * value)
	{
		___nameTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___nameTransform_5, value);
	}

	inline static int32_t get_offset_of_contactNumberTransform_6() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ___contactNumberTransform_6)); }
	inline RectTransform_t972643934 * get_contactNumberTransform_6() const { return ___contactNumberTransform_6; }
	inline RectTransform_t972643934 ** get_address_of_contactNumberTransform_6() { return &___contactNumberTransform_6; }
	inline void set_contactNumberTransform_6(RectTransform_t972643934 * value)
	{
		___contactNumberTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___contactNumberTransform_6, value);
	}

	inline static int32_t get_offset_of_addressTransform_7() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ___addressTransform_7)); }
	inline RectTransform_t972643934 * get_addressTransform_7() const { return ___addressTransform_7; }
	inline RectTransform_t972643934 ** get_address_of_addressTransform_7() { return &___addressTransform_7; }
	inline void set_addressTransform_7(RectTransform_t972643934 * value)
	{
		___addressTransform_7 = value;
		Il2CppCodeGenWriteBarrier(&___addressTransform_7, value);
	}

	inline static int32_t get_offset_of_defaultAddressText_8() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ___defaultAddressText_8)); }
	inline RectTransform_t972643934 * get_defaultAddressText_8() const { return ___defaultAddressText_8; }
	inline RectTransform_t972643934 ** get_address_of_defaultAddressText_8() { return &___defaultAddressText_8; }
	inline void set_defaultAddressText_8(RectTransform_t972643934 * value)
	{
		___defaultAddressText_8 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAddressText_8, value);
	}

	inline static int32_t get_offset_of_defaultAddressIcon_9() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ___defaultAddressIcon_9)); }
	inline RectTransform_t972643934 * get_defaultAddressIcon_9() const { return ___defaultAddressIcon_9; }
	inline RectTransform_t972643934 ** get_address_of_defaultAddressIcon_9() { return &___defaultAddressIcon_9; }
	inline void set_defaultAddressIcon_9(RectTransform_t972643934 * value)
	{
		___defaultAddressIcon_9 = value;
		Il2CppCodeGenWriteBarrier(&___defaultAddressIcon_9, value);
	}

	inline static int32_t get_offset_of__isDefault_10() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ____isDefault_10)); }
	inline bool get__isDefault_10() const { return ____isDefault_10; }
	inline bool* get_address_of__isDefault_10() { return &____isDefault_10; }
	inline void set__isDefault_10(bool value)
	{
		____isDefault_10 = value;
	}

	inline static int32_t get_offset_of__addressID_11() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ____addressID_11)); }
	inline String_t* get__addressID_11() const { return ____addressID_11; }
	inline String_t** get_address_of__addressID_11() { return &____addressID_11; }
	inline void set__addressID_11(String_t* value)
	{
		____addressID_11 = value;
		Il2CppCodeGenWriteBarrier(&____addressID_11, value);
	}

	inline static int32_t get_offset_of__name_12() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ____name_12)); }
	inline String_t* get__name_12() const { return ____name_12; }
	inline String_t** get_address_of__name_12() { return &____name_12; }
	inline void set__name_12(String_t* value)
	{
		____name_12 = value;
		Il2CppCodeGenWriteBarrier(&____name_12, value);
	}

	inline static int32_t get_offset_of__phone_13() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ____phone_13)); }
	inline String_t* get__phone_13() const { return ____phone_13; }
	inline String_t** get_address_of__phone_13() { return &____phone_13; }
	inline void set__phone_13(String_t* value)
	{
		____phone_13 = value;
		Il2CppCodeGenWriteBarrier(&____phone_13, value);
	}

	inline static int32_t get_offset_of__address_14() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ____address_14)); }
	inline String_t* get__address_14() const { return ____address_14; }
	inline String_t** get_address_of__address_14() { return &____address_14; }
	inline void set__address_14(String_t* value)
	{
		____address_14 = value;
		Il2CppCodeGenWriteBarrier(&____address_14, value);
	}

	inline static int32_t get_offset_of__street_15() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ____street_15)); }
	inline String_t* get__street_15() const { return ____street_15; }
	inline String_t** get_address_of__street_15() { return &____street_15; }
	inline void set__street_15(String_t* value)
	{
		____street_15 = value;
		Il2CppCodeGenWriteBarrier(&____street_15, value);
	}

	inline static int32_t get_offset_of__city_16() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ____city_16)); }
	inline String_t* get__city_16() const { return ____city_16; }
	inline String_t** get_address_of__city_16() { return &____city_16; }
	inline void set__city_16(String_t* value)
	{
		____city_16 = value;
		Il2CppCodeGenWriteBarrier(&____city_16, value);
	}

	inline static int32_t get_offset_of__state_17() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ____state_17)); }
	inline String_t* get__state_17() const { return ____state_17; }
	inline String_t** get_address_of__state_17() { return &____state_17; }
	inline void set__state_17(String_t* value)
	{
		____state_17 = value;
		Il2CppCodeGenWriteBarrier(&____state_17, value);
	}

	inline static int32_t get_offset_of__zipCode_18() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ____zipCode_18)); }
	inline String_t* get__zipCode_18() const { return ____zipCode_18; }
	inline String_t** get_address_of__zipCode_18() { return &____zipCode_18; }
	inline void set__zipCode_18(String_t* value)
	{
		____zipCode_18 = value;
		Il2CppCodeGenWriteBarrier(&____zipCode_18, value);
	}

	inline static int32_t get_offset_of__regionID_19() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ____regionID_19)); }
	inline String_t* get__regionID_19() const { return ____regionID_19; }
	inline String_t** get_address_of__regionID_19() { return &____regionID_19; }
	inline void set__regionID_19(String_t* value)
	{
		____regionID_19 = value;
		Il2CppCodeGenWriteBarrier(&____regionID_19, value);
	}

	inline static int32_t get_offset_of_tweenCoolDown_20() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ___tweenCoolDown_20)); }
	inline float get_tweenCoolDown_20() const { return ___tweenCoolDown_20; }
	inline float* get_address_of_tweenCoolDown_20() { return &___tweenCoolDown_20; }
	inline void set_tweenCoolDown_20(float value)
	{
		___tweenCoolDown_20 = value;
	}

	inline static int32_t get_offset_of_isPointerDown_21() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ___isPointerDown_21)); }
	inline bool get_isPointerDown_21() const { return ___isPointerDown_21; }
	inline bool* get_address_of_isPointerDown_21() { return &___isPointerDown_21; }
	inline void set_isPointerDown_21(bool value)
	{
		___isPointerDown_21 = value;
	}

	inline static int32_t get_offset_of_isDeleteButtonVisible_22() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299, ___isDeleteButtonVisible_22)); }
	inline bool get_isDeleteButtonVisible_22() const { return ___isDeleteButtonVisible_22; }
	inline bool* get_address_of_isDeleteButtonVisible_22() { return &___isDeleteButtonVisible_22; }
	inline void set_isDeleteButtonVisible_22(bool value)
	{
		___isDeleteButtonVisible_22 = value;
	}
};

struct AddressPanelAddressBarController_t264640299_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> AddressPanelAddressBarController::<>f__am$cache15
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache15_23;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> AddressPanelAddressBarController::<>f__am$cache16
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache16_24;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_23() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299_StaticFields, ___U3CU3Ef__amU24cache15_23)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache15_23() const { return ___U3CU3Ef__amU24cache15_23; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache15_23() { return &___U3CU3Ef__amU24cache15_23; }
	inline void set_U3CU3Ef__amU24cache15_23(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache15_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache15_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache16_24() { return static_cast<int32_t>(offsetof(AddressPanelAddressBarController_t264640299_StaticFields, ___U3CU3Ef__amU24cache16_24)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache16_24() const { return ___U3CU3Ef__amU24cache16_24; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache16_24() { return &___U3CU3Ef__amU24cache16_24; }
	inline void set_U3CU3Ef__amU24cache16_24(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache16_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache16_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
