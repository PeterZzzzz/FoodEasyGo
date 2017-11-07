#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlaceOrderPanelController
struct PlaceOrderPanelController_t1990927129;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.UI.InputField
struct InputField_t609046876;
// UnityEngine.UI.Button
struct Button_t3896396478;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t2572795273;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Single>
struct Dictionary_2_t4289182211;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlaceOrderPanelController
struct  PlaceOrderPanelController_t1990927129  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.Transform PlaceOrderPanelController::addressSection
	Transform_t1659122786 * ___addressSection_6;
	// UnityEngine.Transform PlaceOrderPanelController::titleRestaurantBarSection
	Transform_t1659122786 * ___titleRestaurantBarSection_7;
	// UnityEngine.Transform PlaceOrderPanelController::couponSection
	Transform_t1659122786 * ___couponSection_8;
	// UnityEngine.Transform PlaceOrderPanelController::tipSection
	Transform_t1659122786 * ___tipSection_9;
	// UnityEngine.Transform PlaceOrderPanelController::feeSection
	Transform_t1659122786 * ___feeSection_10;
	// UnityEngine.Transform PlaceOrderPanelController::paymentSection
	Transform_t1659122786 * ___paymentSection_11;
	// UnityEngine.Transform PlaceOrderPanelController::paymentCreditCardSection
	Transform_t1659122786 * ___paymentCreditCardSection_12;
	// UnityEngine.Transform PlaceOrderPanelController::creditCardSection
	Transform_t1659122786 * ___creditCardSection_13;
	// UnityEngine.Transform PlaceOrderPanelController::confirmOrderPanel
	Transform_t1659122786 * ___confirmOrderPanel_14;
	// UnityEngine.Transform PlaceOrderPanelController::uniwebviewPanel
	Transform_t1659122786 * ___uniwebviewPanel_15;
	// UnityEngine.UI.InputField PlaceOrderPanelController::couponInputField
	InputField_t609046876 * ___couponInputField_16;
	// UnityEngine.UI.Button PlaceOrderPanelController::payButton
	Button_t3896396478 * ___payButton_17;
	// System.Boolean PlaceOrderPanelController::isCurrentOrderInstantSend
	bool ___isCurrentOrderInstantSend_18;
	// UnityEngine.Transform PlaceOrderPanelController::restaurantBarPrefab
	Transform_t1659122786 * ___restaurantBarPrefab_19;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PlaceOrderPanelController::tempGOList
	List_1_t747900261 * ___tempGOList_20;
	// System.String PlaceOrderPanelController::selectedAddressID
	String_t* ___selectedAddressID_21;
	// System.String PlaceOrderPanelController::selectedCreditCardID
	String_t* ___selectedCreditCardID_22;
	// System.String PlaceOrderPanelController::selectedCouponID
	String_t* ___selectedCouponID_23;
	// System.Single PlaceOrderPanelController::targetRegionDeliveryFee
	float ___targetRegionDeliveryFee_24;
	// System.String PlaceOrderPanelController::totalPrice
	String_t* ___totalPrice_25;
	// System.String PlaceOrderPanelController::extraFee
	String_t* ___extraFee_26;
	// System.String PlaceOrderPanelController::deliveryFee
	String_t* ___deliveryFee_27;
	// System.String PlaceOrderPanelController::cartDetailIDString
	String_t* ___cartDetailIDString_28;
	// System.Boolean PlaceOrderPanelController::isUsingFreeDelivery
	bool ___isUsingFreeDelivery_29;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> PlaceOrderPanelController::couponList
	Dictionary_2_t2572795273 * ___couponList_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Single> PlaceOrderPanelController::restaurantDeliveryFee
	Dictionary_2_t4289182211 * ___restaurantDeliveryFee_31;
	// System.String PlaceOrderPanelController::orderNumber
	String_t* ___orderNumber_32;
	// System.String PlaceOrderPanelController::orderID
	String_t* ___orderID_33;
	// System.Int32 PlaceOrderPanelController::submitAttempts
	int32_t ___submitAttempts_34;
	// System.Collections.IEnumerator PlaceOrderPanelController::checkForCompletionIEnumerator
	Il2CppObject * ___checkForCompletionIEnumerator_35;

public:
	inline static int32_t get_offset_of_addressSection_6() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___addressSection_6)); }
	inline Transform_t1659122786 * get_addressSection_6() const { return ___addressSection_6; }
	inline Transform_t1659122786 ** get_address_of_addressSection_6() { return &___addressSection_6; }
	inline void set_addressSection_6(Transform_t1659122786 * value)
	{
		___addressSection_6 = value;
		Il2CppCodeGenWriteBarrier(&___addressSection_6, value);
	}

	inline static int32_t get_offset_of_titleRestaurantBarSection_7() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___titleRestaurantBarSection_7)); }
	inline Transform_t1659122786 * get_titleRestaurantBarSection_7() const { return ___titleRestaurantBarSection_7; }
	inline Transform_t1659122786 ** get_address_of_titleRestaurantBarSection_7() { return &___titleRestaurantBarSection_7; }
	inline void set_titleRestaurantBarSection_7(Transform_t1659122786 * value)
	{
		___titleRestaurantBarSection_7 = value;
		Il2CppCodeGenWriteBarrier(&___titleRestaurantBarSection_7, value);
	}

	inline static int32_t get_offset_of_couponSection_8() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___couponSection_8)); }
	inline Transform_t1659122786 * get_couponSection_8() const { return ___couponSection_8; }
	inline Transform_t1659122786 ** get_address_of_couponSection_8() { return &___couponSection_8; }
	inline void set_couponSection_8(Transform_t1659122786 * value)
	{
		___couponSection_8 = value;
		Il2CppCodeGenWriteBarrier(&___couponSection_8, value);
	}

	inline static int32_t get_offset_of_tipSection_9() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___tipSection_9)); }
	inline Transform_t1659122786 * get_tipSection_9() const { return ___tipSection_9; }
	inline Transform_t1659122786 ** get_address_of_tipSection_9() { return &___tipSection_9; }
	inline void set_tipSection_9(Transform_t1659122786 * value)
	{
		___tipSection_9 = value;
		Il2CppCodeGenWriteBarrier(&___tipSection_9, value);
	}

	inline static int32_t get_offset_of_feeSection_10() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___feeSection_10)); }
	inline Transform_t1659122786 * get_feeSection_10() const { return ___feeSection_10; }
	inline Transform_t1659122786 ** get_address_of_feeSection_10() { return &___feeSection_10; }
	inline void set_feeSection_10(Transform_t1659122786 * value)
	{
		___feeSection_10 = value;
		Il2CppCodeGenWriteBarrier(&___feeSection_10, value);
	}

	inline static int32_t get_offset_of_paymentSection_11() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___paymentSection_11)); }
	inline Transform_t1659122786 * get_paymentSection_11() const { return ___paymentSection_11; }
	inline Transform_t1659122786 ** get_address_of_paymentSection_11() { return &___paymentSection_11; }
	inline void set_paymentSection_11(Transform_t1659122786 * value)
	{
		___paymentSection_11 = value;
		Il2CppCodeGenWriteBarrier(&___paymentSection_11, value);
	}

	inline static int32_t get_offset_of_paymentCreditCardSection_12() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___paymentCreditCardSection_12)); }
	inline Transform_t1659122786 * get_paymentCreditCardSection_12() const { return ___paymentCreditCardSection_12; }
	inline Transform_t1659122786 ** get_address_of_paymentCreditCardSection_12() { return &___paymentCreditCardSection_12; }
	inline void set_paymentCreditCardSection_12(Transform_t1659122786 * value)
	{
		___paymentCreditCardSection_12 = value;
		Il2CppCodeGenWriteBarrier(&___paymentCreditCardSection_12, value);
	}

	inline static int32_t get_offset_of_creditCardSection_13() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___creditCardSection_13)); }
	inline Transform_t1659122786 * get_creditCardSection_13() const { return ___creditCardSection_13; }
	inline Transform_t1659122786 ** get_address_of_creditCardSection_13() { return &___creditCardSection_13; }
	inline void set_creditCardSection_13(Transform_t1659122786 * value)
	{
		___creditCardSection_13 = value;
		Il2CppCodeGenWriteBarrier(&___creditCardSection_13, value);
	}

	inline static int32_t get_offset_of_confirmOrderPanel_14() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___confirmOrderPanel_14)); }
	inline Transform_t1659122786 * get_confirmOrderPanel_14() const { return ___confirmOrderPanel_14; }
	inline Transform_t1659122786 ** get_address_of_confirmOrderPanel_14() { return &___confirmOrderPanel_14; }
	inline void set_confirmOrderPanel_14(Transform_t1659122786 * value)
	{
		___confirmOrderPanel_14 = value;
		Il2CppCodeGenWriteBarrier(&___confirmOrderPanel_14, value);
	}

	inline static int32_t get_offset_of_uniwebviewPanel_15() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___uniwebviewPanel_15)); }
	inline Transform_t1659122786 * get_uniwebviewPanel_15() const { return ___uniwebviewPanel_15; }
	inline Transform_t1659122786 ** get_address_of_uniwebviewPanel_15() { return &___uniwebviewPanel_15; }
	inline void set_uniwebviewPanel_15(Transform_t1659122786 * value)
	{
		___uniwebviewPanel_15 = value;
		Il2CppCodeGenWriteBarrier(&___uniwebviewPanel_15, value);
	}

	inline static int32_t get_offset_of_couponInputField_16() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___couponInputField_16)); }
	inline InputField_t609046876 * get_couponInputField_16() const { return ___couponInputField_16; }
	inline InputField_t609046876 ** get_address_of_couponInputField_16() { return &___couponInputField_16; }
	inline void set_couponInputField_16(InputField_t609046876 * value)
	{
		___couponInputField_16 = value;
		Il2CppCodeGenWriteBarrier(&___couponInputField_16, value);
	}

	inline static int32_t get_offset_of_payButton_17() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___payButton_17)); }
	inline Button_t3896396478 * get_payButton_17() const { return ___payButton_17; }
	inline Button_t3896396478 ** get_address_of_payButton_17() { return &___payButton_17; }
	inline void set_payButton_17(Button_t3896396478 * value)
	{
		___payButton_17 = value;
		Il2CppCodeGenWriteBarrier(&___payButton_17, value);
	}

	inline static int32_t get_offset_of_isCurrentOrderInstantSend_18() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___isCurrentOrderInstantSend_18)); }
	inline bool get_isCurrentOrderInstantSend_18() const { return ___isCurrentOrderInstantSend_18; }
	inline bool* get_address_of_isCurrentOrderInstantSend_18() { return &___isCurrentOrderInstantSend_18; }
	inline void set_isCurrentOrderInstantSend_18(bool value)
	{
		___isCurrentOrderInstantSend_18 = value;
	}

	inline static int32_t get_offset_of_restaurantBarPrefab_19() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___restaurantBarPrefab_19)); }
	inline Transform_t1659122786 * get_restaurantBarPrefab_19() const { return ___restaurantBarPrefab_19; }
	inline Transform_t1659122786 ** get_address_of_restaurantBarPrefab_19() { return &___restaurantBarPrefab_19; }
	inline void set_restaurantBarPrefab_19(Transform_t1659122786 * value)
	{
		___restaurantBarPrefab_19 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantBarPrefab_19, value);
	}

	inline static int32_t get_offset_of_tempGOList_20() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___tempGOList_20)); }
	inline List_1_t747900261 * get_tempGOList_20() const { return ___tempGOList_20; }
	inline List_1_t747900261 ** get_address_of_tempGOList_20() { return &___tempGOList_20; }
	inline void set_tempGOList_20(List_1_t747900261 * value)
	{
		___tempGOList_20 = value;
		Il2CppCodeGenWriteBarrier(&___tempGOList_20, value);
	}

	inline static int32_t get_offset_of_selectedAddressID_21() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___selectedAddressID_21)); }
	inline String_t* get_selectedAddressID_21() const { return ___selectedAddressID_21; }
	inline String_t** get_address_of_selectedAddressID_21() { return &___selectedAddressID_21; }
	inline void set_selectedAddressID_21(String_t* value)
	{
		___selectedAddressID_21 = value;
		Il2CppCodeGenWriteBarrier(&___selectedAddressID_21, value);
	}

	inline static int32_t get_offset_of_selectedCreditCardID_22() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___selectedCreditCardID_22)); }
	inline String_t* get_selectedCreditCardID_22() const { return ___selectedCreditCardID_22; }
	inline String_t** get_address_of_selectedCreditCardID_22() { return &___selectedCreditCardID_22; }
	inline void set_selectedCreditCardID_22(String_t* value)
	{
		___selectedCreditCardID_22 = value;
		Il2CppCodeGenWriteBarrier(&___selectedCreditCardID_22, value);
	}

	inline static int32_t get_offset_of_selectedCouponID_23() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___selectedCouponID_23)); }
	inline String_t* get_selectedCouponID_23() const { return ___selectedCouponID_23; }
	inline String_t** get_address_of_selectedCouponID_23() { return &___selectedCouponID_23; }
	inline void set_selectedCouponID_23(String_t* value)
	{
		___selectedCouponID_23 = value;
		Il2CppCodeGenWriteBarrier(&___selectedCouponID_23, value);
	}

	inline static int32_t get_offset_of_targetRegionDeliveryFee_24() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___targetRegionDeliveryFee_24)); }
	inline float get_targetRegionDeliveryFee_24() const { return ___targetRegionDeliveryFee_24; }
	inline float* get_address_of_targetRegionDeliveryFee_24() { return &___targetRegionDeliveryFee_24; }
	inline void set_targetRegionDeliveryFee_24(float value)
	{
		___targetRegionDeliveryFee_24 = value;
	}

	inline static int32_t get_offset_of_totalPrice_25() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___totalPrice_25)); }
	inline String_t* get_totalPrice_25() const { return ___totalPrice_25; }
	inline String_t** get_address_of_totalPrice_25() { return &___totalPrice_25; }
	inline void set_totalPrice_25(String_t* value)
	{
		___totalPrice_25 = value;
		Il2CppCodeGenWriteBarrier(&___totalPrice_25, value);
	}

	inline static int32_t get_offset_of_extraFee_26() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___extraFee_26)); }
	inline String_t* get_extraFee_26() const { return ___extraFee_26; }
	inline String_t** get_address_of_extraFee_26() { return &___extraFee_26; }
	inline void set_extraFee_26(String_t* value)
	{
		___extraFee_26 = value;
		Il2CppCodeGenWriteBarrier(&___extraFee_26, value);
	}

	inline static int32_t get_offset_of_deliveryFee_27() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___deliveryFee_27)); }
	inline String_t* get_deliveryFee_27() const { return ___deliveryFee_27; }
	inline String_t** get_address_of_deliveryFee_27() { return &___deliveryFee_27; }
	inline void set_deliveryFee_27(String_t* value)
	{
		___deliveryFee_27 = value;
		Il2CppCodeGenWriteBarrier(&___deliveryFee_27, value);
	}

	inline static int32_t get_offset_of_cartDetailIDString_28() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___cartDetailIDString_28)); }
	inline String_t* get_cartDetailIDString_28() const { return ___cartDetailIDString_28; }
	inline String_t** get_address_of_cartDetailIDString_28() { return &___cartDetailIDString_28; }
	inline void set_cartDetailIDString_28(String_t* value)
	{
		___cartDetailIDString_28 = value;
		Il2CppCodeGenWriteBarrier(&___cartDetailIDString_28, value);
	}

	inline static int32_t get_offset_of_isUsingFreeDelivery_29() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___isUsingFreeDelivery_29)); }
	inline bool get_isUsingFreeDelivery_29() const { return ___isUsingFreeDelivery_29; }
	inline bool* get_address_of_isUsingFreeDelivery_29() { return &___isUsingFreeDelivery_29; }
	inline void set_isUsingFreeDelivery_29(bool value)
	{
		___isUsingFreeDelivery_29 = value;
	}

	inline static int32_t get_offset_of_couponList_30() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___couponList_30)); }
	inline Dictionary_2_t2572795273 * get_couponList_30() const { return ___couponList_30; }
	inline Dictionary_2_t2572795273 ** get_address_of_couponList_30() { return &___couponList_30; }
	inline void set_couponList_30(Dictionary_2_t2572795273 * value)
	{
		___couponList_30 = value;
		Il2CppCodeGenWriteBarrier(&___couponList_30, value);
	}

	inline static int32_t get_offset_of_restaurantDeliveryFee_31() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___restaurantDeliveryFee_31)); }
	inline Dictionary_2_t4289182211 * get_restaurantDeliveryFee_31() const { return ___restaurantDeliveryFee_31; }
	inline Dictionary_2_t4289182211 ** get_address_of_restaurantDeliveryFee_31() { return &___restaurantDeliveryFee_31; }
	inline void set_restaurantDeliveryFee_31(Dictionary_2_t4289182211 * value)
	{
		___restaurantDeliveryFee_31 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantDeliveryFee_31, value);
	}

	inline static int32_t get_offset_of_orderNumber_32() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___orderNumber_32)); }
	inline String_t* get_orderNumber_32() const { return ___orderNumber_32; }
	inline String_t** get_address_of_orderNumber_32() { return &___orderNumber_32; }
	inline void set_orderNumber_32(String_t* value)
	{
		___orderNumber_32 = value;
		Il2CppCodeGenWriteBarrier(&___orderNumber_32, value);
	}

	inline static int32_t get_offset_of_orderID_33() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___orderID_33)); }
	inline String_t* get_orderID_33() const { return ___orderID_33; }
	inline String_t** get_address_of_orderID_33() { return &___orderID_33; }
	inline void set_orderID_33(String_t* value)
	{
		___orderID_33 = value;
		Il2CppCodeGenWriteBarrier(&___orderID_33, value);
	}

	inline static int32_t get_offset_of_submitAttempts_34() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___submitAttempts_34)); }
	inline int32_t get_submitAttempts_34() const { return ___submitAttempts_34; }
	inline int32_t* get_address_of_submitAttempts_34() { return &___submitAttempts_34; }
	inline void set_submitAttempts_34(int32_t value)
	{
		___submitAttempts_34 = value;
	}

	inline static int32_t get_offset_of_checkForCompletionIEnumerator_35() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129, ___checkForCompletionIEnumerator_35)); }
	inline Il2CppObject * get_checkForCompletionIEnumerator_35() const { return ___checkForCompletionIEnumerator_35; }
	inline Il2CppObject ** get_address_of_checkForCompletionIEnumerator_35() { return &___checkForCompletionIEnumerator_35; }
	inline void set_checkForCompletionIEnumerator_35(Il2CppObject * value)
	{
		___checkForCompletionIEnumerator_35 = value;
		Il2CppCodeGenWriteBarrier(&___checkForCompletionIEnumerator_35, value);
	}
};

struct PlaceOrderPanelController_t1990927129_StaticFields
{
public:
	// PlaceOrderPanelController PlaceOrderPanelController::instance
	PlaceOrderPanelController_t1990927129 * ___instance_5;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> PlaceOrderPanelController::<>f__am$cache1F
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache1F_36;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> PlaceOrderPanelController::<>f__am$cache20
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache20_37;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129_StaticFields, ___instance_5)); }
	inline PlaceOrderPanelController_t1990927129 * get_instance_5() const { return ___instance_5; }
	inline PlaceOrderPanelController_t1990927129 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(PlaceOrderPanelController_t1990927129 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1F_36() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129_StaticFields, ___U3CU3Ef__amU24cache1F_36)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache1F_36() const { return ___U3CU3Ef__amU24cache1F_36; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache1F_36() { return &___U3CU3Ef__amU24cache1F_36; }
	inline void set_U3CU3Ef__amU24cache1F_36(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache1F_36 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1F_36, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache20_37() { return static_cast<int32_t>(offsetof(PlaceOrderPanelController_t1990927129_StaticFields, ___U3CU3Ef__amU24cache20_37)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache20_37() const { return ___U3CU3Ef__amU24cache20_37; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache20_37() { return &___U3CU3Ef__amU24cache20_37; }
	inline void set_U3CU3Ef__amU24cache20_37(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache20_37 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache20_37, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
