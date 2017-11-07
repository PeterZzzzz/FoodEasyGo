#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CartPanelController
struct CartPanelController_t216331616;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// LDFW.UI.LDFWToggleController
struct LDFWToggleController_t986233105;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// TextController
struct TextController_t3861806281;
// UnityEngine.UI.Button
struct Button_t3896396478;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Single>
struct Dictionary_2_t4289182211;
// System.Collections.Generic.List`1<CartPanelRestaurantBarController>
struct List_1_t133699422;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t2572795273;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CartPanelController
struct  CartPanelController_t216331616  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.Transform CartPanelController::addressSection
	Transform_t1659122786 * ___addressSection_6;
	// UnityEngine.UI.ScrollRect CartPanelController::scrollRect
	ScrollRect_t3606982749 * ___scrollRect_7;
	// LDFW.UI.LDFWToggleController CartPanelController::header2ToggleController
	LDFWToggleController_t986233105 * ___header2ToggleController_8;
	// UnityEngine.RectTransform CartPanelController::deliveryContent
	RectTransform_t972643934 * ___deliveryContent_9;
	// UnityEngine.RectTransform CartPanelController::reservationContent
	RectTransform_t972643934 * ___reservationContent_10;
	// TextController CartPanelController::totalPriceText
	TextController_t3861806281 * ___totalPriceText_11;
	// TextController CartPanelController::deliveryTitle
	TextController_t3861806281 * ___deliveryTitle_12;
	// TextController CartPanelController::reservationTitle
	TextController_t3861806281 * ___reservationTitle_13;
	// UnityEngine.UI.Button CartPanelController::payButton
	Button_t3896396478 * ___payButton_14;
	// System.String CartPanelController::selectedAddressID
	String_t* ___selectedAddressID_15;
	// System.String CartPanelController::selectedRegionID
	String_t* ___selectedRegionID_16;
	// UnityEngine.GameObject CartPanelController::restaurantBarPrefab
	GameObject_t3674682005 * ___restaurantBarPrefab_17;
	// UnityEngine.GameObject CartPanelController::dishBarPrefab
	GameObject_t3674682005 * ___dishBarPrefab_18;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Single> CartPanelController::restaurantDeliverFee
	Dictionary_2_t4289182211 * ___restaurantDeliverFee_19;
	// System.Collections.Generic.List`1<CartPanelRestaurantBarController> CartPanelController::nowRestaurantBarList
	List_1_t133699422 * ___nowRestaurantBarList_20;
	// System.Collections.Generic.List`1<CartPanelRestaurantBarController> CartPanelController::deliveryRestaurantBarList
	List_1_t133699422 * ___deliveryRestaurantBarList_21;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> CartPanelController::restaurantDic
	Dictionary_2_t2572795273 * ___restaurantDic_22;
	// System.Boolean CartPanelController::isDisplayNowRestaurant
	bool ___isDisplayNowRestaurant_23;
	// System.Collections.IEnumerator CartPanelController::getDeliverFeeIEnumerator
	Il2CppObject * ___getDeliverFeeIEnumerator_24;

public:
	inline static int32_t get_offset_of_addressSection_6() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___addressSection_6)); }
	inline Transform_t1659122786 * get_addressSection_6() const { return ___addressSection_6; }
	inline Transform_t1659122786 ** get_address_of_addressSection_6() { return &___addressSection_6; }
	inline void set_addressSection_6(Transform_t1659122786 * value)
	{
		___addressSection_6 = value;
		Il2CppCodeGenWriteBarrier(&___addressSection_6, value);
	}

	inline static int32_t get_offset_of_scrollRect_7() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___scrollRect_7)); }
	inline ScrollRect_t3606982749 * get_scrollRect_7() const { return ___scrollRect_7; }
	inline ScrollRect_t3606982749 ** get_address_of_scrollRect_7() { return &___scrollRect_7; }
	inline void set_scrollRect_7(ScrollRect_t3606982749 * value)
	{
		___scrollRect_7 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRect_7, value);
	}

	inline static int32_t get_offset_of_header2ToggleController_8() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___header2ToggleController_8)); }
	inline LDFWToggleController_t986233105 * get_header2ToggleController_8() const { return ___header2ToggleController_8; }
	inline LDFWToggleController_t986233105 ** get_address_of_header2ToggleController_8() { return &___header2ToggleController_8; }
	inline void set_header2ToggleController_8(LDFWToggleController_t986233105 * value)
	{
		___header2ToggleController_8 = value;
		Il2CppCodeGenWriteBarrier(&___header2ToggleController_8, value);
	}

	inline static int32_t get_offset_of_deliveryContent_9() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___deliveryContent_9)); }
	inline RectTransform_t972643934 * get_deliveryContent_9() const { return ___deliveryContent_9; }
	inline RectTransform_t972643934 ** get_address_of_deliveryContent_9() { return &___deliveryContent_9; }
	inline void set_deliveryContent_9(RectTransform_t972643934 * value)
	{
		___deliveryContent_9 = value;
		Il2CppCodeGenWriteBarrier(&___deliveryContent_9, value);
	}

	inline static int32_t get_offset_of_reservationContent_10() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___reservationContent_10)); }
	inline RectTransform_t972643934 * get_reservationContent_10() const { return ___reservationContent_10; }
	inline RectTransform_t972643934 ** get_address_of_reservationContent_10() { return &___reservationContent_10; }
	inline void set_reservationContent_10(RectTransform_t972643934 * value)
	{
		___reservationContent_10 = value;
		Il2CppCodeGenWriteBarrier(&___reservationContent_10, value);
	}

	inline static int32_t get_offset_of_totalPriceText_11() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___totalPriceText_11)); }
	inline TextController_t3861806281 * get_totalPriceText_11() const { return ___totalPriceText_11; }
	inline TextController_t3861806281 ** get_address_of_totalPriceText_11() { return &___totalPriceText_11; }
	inline void set_totalPriceText_11(TextController_t3861806281 * value)
	{
		___totalPriceText_11 = value;
		Il2CppCodeGenWriteBarrier(&___totalPriceText_11, value);
	}

	inline static int32_t get_offset_of_deliveryTitle_12() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___deliveryTitle_12)); }
	inline TextController_t3861806281 * get_deliveryTitle_12() const { return ___deliveryTitle_12; }
	inline TextController_t3861806281 ** get_address_of_deliveryTitle_12() { return &___deliveryTitle_12; }
	inline void set_deliveryTitle_12(TextController_t3861806281 * value)
	{
		___deliveryTitle_12 = value;
		Il2CppCodeGenWriteBarrier(&___deliveryTitle_12, value);
	}

	inline static int32_t get_offset_of_reservationTitle_13() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___reservationTitle_13)); }
	inline TextController_t3861806281 * get_reservationTitle_13() const { return ___reservationTitle_13; }
	inline TextController_t3861806281 ** get_address_of_reservationTitle_13() { return &___reservationTitle_13; }
	inline void set_reservationTitle_13(TextController_t3861806281 * value)
	{
		___reservationTitle_13 = value;
		Il2CppCodeGenWriteBarrier(&___reservationTitle_13, value);
	}

	inline static int32_t get_offset_of_payButton_14() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___payButton_14)); }
	inline Button_t3896396478 * get_payButton_14() const { return ___payButton_14; }
	inline Button_t3896396478 ** get_address_of_payButton_14() { return &___payButton_14; }
	inline void set_payButton_14(Button_t3896396478 * value)
	{
		___payButton_14 = value;
		Il2CppCodeGenWriteBarrier(&___payButton_14, value);
	}

	inline static int32_t get_offset_of_selectedAddressID_15() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___selectedAddressID_15)); }
	inline String_t* get_selectedAddressID_15() const { return ___selectedAddressID_15; }
	inline String_t** get_address_of_selectedAddressID_15() { return &___selectedAddressID_15; }
	inline void set_selectedAddressID_15(String_t* value)
	{
		___selectedAddressID_15 = value;
		Il2CppCodeGenWriteBarrier(&___selectedAddressID_15, value);
	}

	inline static int32_t get_offset_of_selectedRegionID_16() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___selectedRegionID_16)); }
	inline String_t* get_selectedRegionID_16() const { return ___selectedRegionID_16; }
	inline String_t** get_address_of_selectedRegionID_16() { return &___selectedRegionID_16; }
	inline void set_selectedRegionID_16(String_t* value)
	{
		___selectedRegionID_16 = value;
		Il2CppCodeGenWriteBarrier(&___selectedRegionID_16, value);
	}

	inline static int32_t get_offset_of_restaurantBarPrefab_17() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___restaurantBarPrefab_17)); }
	inline GameObject_t3674682005 * get_restaurantBarPrefab_17() const { return ___restaurantBarPrefab_17; }
	inline GameObject_t3674682005 ** get_address_of_restaurantBarPrefab_17() { return &___restaurantBarPrefab_17; }
	inline void set_restaurantBarPrefab_17(GameObject_t3674682005 * value)
	{
		___restaurantBarPrefab_17 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantBarPrefab_17, value);
	}

	inline static int32_t get_offset_of_dishBarPrefab_18() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___dishBarPrefab_18)); }
	inline GameObject_t3674682005 * get_dishBarPrefab_18() const { return ___dishBarPrefab_18; }
	inline GameObject_t3674682005 ** get_address_of_dishBarPrefab_18() { return &___dishBarPrefab_18; }
	inline void set_dishBarPrefab_18(GameObject_t3674682005 * value)
	{
		___dishBarPrefab_18 = value;
		Il2CppCodeGenWriteBarrier(&___dishBarPrefab_18, value);
	}

	inline static int32_t get_offset_of_restaurantDeliverFee_19() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___restaurantDeliverFee_19)); }
	inline Dictionary_2_t4289182211 * get_restaurantDeliverFee_19() const { return ___restaurantDeliverFee_19; }
	inline Dictionary_2_t4289182211 ** get_address_of_restaurantDeliverFee_19() { return &___restaurantDeliverFee_19; }
	inline void set_restaurantDeliverFee_19(Dictionary_2_t4289182211 * value)
	{
		___restaurantDeliverFee_19 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantDeliverFee_19, value);
	}

	inline static int32_t get_offset_of_nowRestaurantBarList_20() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___nowRestaurantBarList_20)); }
	inline List_1_t133699422 * get_nowRestaurantBarList_20() const { return ___nowRestaurantBarList_20; }
	inline List_1_t133699422 ** get_address_of_nowRestaurantBarList_20() { return &___nowRestaurantBarList_20; }
	inline void set_nowRestaurantBarList_20(List_1_t133699422 * value)
	{
		___nowRestaurantBarList_20 = value;
		Il2CppCodeGenWriteBarrier(&___nowRestaurantBarList_20, value);
	}

	inline static int32_t get_offset_of_deliveryRestaurantBarList_21() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___deliveryRestaurantBarList_21)); }
	inline List_1_t133699422 * get_deliveryRestaurantBarList_21() const { return ___deliveryRestaurantBarList_21; }
	inline List_1_t133699422 ** get_address_of_deliveryRestaurantBarList_21() { return &___deliveryRestaurantBarList_21; }
	inline void set_deliveryRestaurantBarList_21(List_1_t133699422 * value)
	{
		___deliveryRestaurantBarList_21 = value;
		Il2CppCodeGenWriteBarrier(&___deliveryRestaurantBarList_21, value);
	}

	inline static int32_t get_offset_of_restaurantDic_22() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___restaurantDic_22)); }
	inline Dictionary_2_t2572795273 * get_restaurantDic_22() const { return ___restaurantDic_22; }
	inline Dictionary_2_t2572795273 ** get_address_of_restaurantDic_22() { return &___restaurantDic_22; }
	inline void set_restaurantDic_22(Dictionary_2_t2572795273 * value)
	{
		___restaurantDic_22 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantDic_22, value);
	}

	inline static int32_t get_offset_of_isDisplayNowRestaurant_23() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___isDisplayNowRestaurant_23)); }
	inline bool get_isDisplayNowRestaurant_23() const { return ___isDisplayNowRestaurant_23; }
	inline bool* get_address_of_isDisplayNowRestaurant_23() { return &___isDisplayNowRestaurant_23; }
	inline void set_isDisplayNowRestaurant_23(bool value)
	{
		___isDisplayNowRestaurant_23 = value;
	}

	inline static int32_t get_offset_of_getDeliverFeeIEnumerator_24() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616, ___getDeliverFeeIEnumerator_24)); }
	inline Il2CppObject * get_getDeliverFeeIEnumerator_24() const { return ___getDeliverFeeIEnumerator_24; }
	inline Il2CppObject ** get_address_of_getDeliverFeeIEnumerator_24() { return &___getDeliverFeeIEnumerator_24; }
	inline void set_getDeliverFeeIEnumerator_24(Il2CppObject * value)
	{
		___getDeliverFeeIEnumerator_24 = value;
		Il2CppCodeGenWriteBarrier(&___getDeliverFeeIEnumerator_24, value);
	}
};

struct CartPanelController_t216331616_StaticFields
{
public:
	// CartPanelController CartPanelController::instance
	CartPanelController_t216331616 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(CartPanelController_t216331616_StaticFields, ___instance_5)); }
	inline CartPanelController_t216331616 * get_instance_5() const { return ___instance_5; }
	inline CartPanelController_t216331616 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(CartPanelController_t216331616 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
