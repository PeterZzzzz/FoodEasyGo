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
// TextController
struct TextController_t3861806281;
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

// PaymentPanelPaymentBarController
struct  PaymentPanelPaymentBarController_t3312808071  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.ScrollRect PaymentPanelPaymentBarController::parentScrollRect
	ScrollRect_t3606982749 * ___parentScrollRect_2;
	// LDFW.Tween.LDFWTweenUIAnchoredPosition PaymentPanelPaymentBarController::anchoredPositionTweener
	LDFWTweenUIAnchoredPosition_t1293302509 * ___anchoredPositionTweener_3;
	// TextController PaymentPanelPaymentBarController::defaultCardText
	TextController_t3861806281 * ___defaultCardText_4;
	// UnityEngine.RectTransform PaymentPanelPaymentBarController::defaultCardIcon
	RectTransform_t972643934 * ___defaultCardIcon_5;
	// System.Boolean PaymentPanelPaymentBarController::_isDefault
	bool ____isDefault_6;
	// System.String PaymentPanelPaymentBarController::_id
	String_t* ____id_7;
	// System.String PaymentPanelPaymentBarController::_firstName
	String_t* ____firstName_8;
	// System.String PaymentPanelPaymentBarController::_lastName
	String_t* ____lastName_9;
	// System.String PaymentPanelPaymentBarController::_cardNumber
	String_t* ____cardNumber_10;
	// System.String PaymentPanelPaymentBarController::_month
	String_t* ____month_11;
	// System.String PaymentPanelPaymentBarController::_year
	String_t* ____year_12;
	// System.Single PaymentPanelPaymentBarController::tweenCoolDown
	float ___tweenCoolDown_13;
	// System.Boolean PaymentPanelPaymentBarController::isPointerDown
	bool ___isPointerDown_14;
	// System.Boolean PaymentPanelPaymentBarController::isDeleteButtonVisible
	bool ___isDeleteButtonVisible_15;

public:
	inline static int32_t get_offset_of_parentScrollRect_2() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ___parentScrollRect_2)); }
	inline ScrollRect_t3606982749 * get_parentScrollRect_2() const { return ___parentScrollRect_2; }
	inline ScrollRect_t3606982749 ** get_address_of_parentScrollRect_2() { return &___parentScrollRect_2; }
	inline void set_parentScrollRect_2(ScrollRect_t3606982749 * value)
	{
		___parentScrollRect_2 = value;
		Il2CppCodeGenWriteBarrier(&___parentScrollRect_2, value);
	}

	inline static int32_t get_offset_of_anchoredPositionTweener_3() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ___anchoredPositionTweener_3)); }
	inline LDFWTweenUIAnchoredPosition_t1293302509 * get_anchoredPositionTweener_3() const { return ___anchoredPositionTweener_3; }
	inline LDFWTweenUIAnchoredPosition_t1293302509 ** get_address_of_anchoredPositionTweener_3() { return &___anchoredPositionTweener_3; }
	inline void set_anchoredPositionTweener_3(LDFWTweenUIAnchoredPosition_t1293302509 * value)
	{
		___anchoredPositionTweener_3 = value;
		Il2CppCodeGenWriteBarrier(&___anchoredPositionTweener_3, value);
	}

	inline static int32_t get_offset_of_defaultCardText_4() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ___defaultCardText_4)); }
	inline TextController_t3861806281 * get_defaultCardText_4() const { return ___defaultCardText_4; }
	inline TextController_t3861806281 ** get_address_of_defaultCardText_4() { return &___defaultCardText_4; }
	inline void set_defaultCardText_4(TextController_t3861806281 * value)
	{
		___defaultCardText_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultCardText_4, value);
	}

	inline static int32_t get_offset_of_defaultCardIcon_5() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ___defaultCardIcon_5)); }
	inline RectTransform_t972643934 * get_defaultCardIcon_5() const { return ___defaultCardIcon_5; }
	inline RectTransform_t972643934 ** get_address_of_defaultCardIcon_5() { return &___defaultCardIcon_5; }
	inline void set_defaultCardIcon_5(RectTransform_t972643934 * value)
	{
		___defaultCardIcon_5 = value;
		Il2CppCodeGenWriteBarrier(&___defaultCardIcon_5, value);
	}

	inline static int32_t get_offset_of__isDefault_6() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ____isDefault_6)); }
	inline bool get__isDefault_6() const { return ____isDefault_6; }
	inline bool* get_address_of__isDefault_6() { return &____isDefault_6; }
	inline void set__isDefault_6(bool value)
	{
		____isDefault_6 = value;
	}

	inline static int32_t get_offset_of__id_7() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ____id_7)); }
	inline String_t* get__id_7() const { return ____id_7; }
	inline String_t** get_address_of__id_7() { return &____id_7; }
	inline void set__id_7(String_t* value)
	{
		____id_7 = value;
		Il2CppCodeGenWriteBarrier(&____id_7, value);
	}

	inline static int32_t get_offset_of__firstName_8() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ____firstName_8)); }
	inline String_t* get__firstName_8() const { return ____firstName_8; }
	inline String_t** get_address_of__firstName_8() { return &____firstName_8; }
	inline void set__firstName_8(String_t* value)
	{
		____firstName_8 = value;
		Il2CppCodeGenWriteBarrier(&____firstName_8, value);
	}

	inline static int32_t get_offset_of__lastName_9() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ____lastName_9)); }
	inline String_t* get__lastName_9() const { return ____lastName_9; }
	inline String_t** get_address_of__lastName_9() { return &____lastName_9; }
	inline void set__lastName_9(String_t* value)
	{
		____lastName_9 = value;
		Il2CppCodeGenWriteBarrier(&____lastName_9, value);
	}

	inline static int32_t get_offset_of__cardNumber_10() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ____cardNumber_10)); }
	inline String_t* get__cardNumber_10() const { return ____cardNumber_10; }
	inline String_t** get_address_of__cardNumber_10() { return &____cardNumber_10; }
	inline void set__cardNumber_10(String_t* value)
	{
		____cardNumber_10 = value;
		Il2CppCodeGenWriteBarrier(&____cardNumber_10, value);
	}

	inline static int32_t get_offset_of__month_11() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ____month_11)); }
	inline String_t* get__month_11() const { return ____month_11; }
	inline String_t** get_address_of__month_11() { return &____month_11; }
	inline void set__month_11(String_t* value)
	{
		____month_11 = value;
		Il2CppCodeGenWriteBarrier(&____month_11, value);
	}

	inline static int32_t get_offset_of__year_12() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ____year_12)); }
	inline String_t* get__year_12() const { return ____year_12; }
	inline String_t** get_address_of__year_12() { return &____year_12; }
	inline void set__year_12(String_t* value)
	{
		____year_12 = value;
		Il2CppCodeGenWriteBarrier(&____year_12, value);
	}

	inline static int32_t get_offset_of_tweenCoolDown_13() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ___tweenCoolDown_13)); }
	inline float get_tweenCoolDown_13() const { return ___tweenCoolDown_13; }
	inline float* get_address_of_tweenCoolDown_13() { return &___tweenCoolDown_13; }
	inline void set_tweenCoolDown_13(float value)
	{
		___tweenCoolDown_13 = value;
	}

	inline static int32_t get_offset_of_isPointerDown_14() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ___isPointerDown_14)); }
	inline bool get_isPointerDown_14() const { return ___isPointerDown_14; }
	inline bool* get_address_of_isPointerDown_14() { return &___isPointerDown_14; }
	inline void set_isPointerDown_14(bool value)
	{
		___isPointerDown_14 = value;
	}

	inline static int32_t get_offset_of_isDeleteButtonVisible_15() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071, ___isDeleteButtonVisible_15)); }
	inline bool get_isDeleteButtonVisible_15() const { return ___isDeleteButtonVisible_15; }
	inline bool* get_address_of_isDeleteButtonVisible_15() { return &___isDeleteButtonVisible_15; }
	inline void set_isDeleteButtonVisible_15(bool value)
	{
		___isDeleteButtonVisible_15 = value;
	}
};

struct PaymentPanelPaymentBarController_t3312808071_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> PaymentPanelPaymentBarController::<>f__am$cacheE
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cacheE_16;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> PaymentPanelPaymentBarController::<>f__am$cacheF
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cacheF_17;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_16() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071_StaticFields, ___U3CU3Ef__amU24cacheE_16)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cacheE_16() const { return ___U3CU3Ef__amU24cacheE_16; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cacheE_16() { return &___U3CU3Ef__amU24cacheE_16; }
	inline void set_U3CU3Ef__amU24cacheE_16(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cacheE_16 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheE_16, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_17() { return static_cast<int32_t>(offsetof(PaymentPanelPaymentBarController_t3312808071_StaticFields, ___U3CU3Ef__amU24cacheF_17)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cacheF_17() const { return ___U3CU3Ef__amU24cacheF_17; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cacheF_17() { return &___U3CU3Ef__amU24cacheF_17; }
	inline void set_U3CU3Ef__amU24cacheF_17(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cacheF_17 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheF_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
