#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RestaurantDishDetailPanelController
struct RestaurantDishDetailPanelController_t1534679512;
// RestaurantDetailPanelDishBarController
struct RestaurantDetailPanelDishBarController_t4182018719;
// System.String
struct String_t;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// TextController
struct TextController_t3861806281;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.UI.RawImage
struct RawImage_t821930207;
// UnityEngine.UI.InputField
struct InputField_t609046876;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<RestaurantDishDetailAttributeToggleParentController>
struct List_1_t2281340158;
// CartDetailData
struct CartDetailData_t2591270651;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantDishDetailPanelController
struct  RestaurantDishDetailPanelController_t1534679512  : public BasePanelController_t1482191247
{
public:
	// RestaurantDetailPanelDishBarController RestaurantDishDetailPanelController::dishBarController
	RestaurantDetailPanelDishBarController_t4182018719 * ___dishBarController_6;
	// System.String RestaurantDishDetailPanelController::dishID
	String_t* ___dishID_7;
	// System.String RestaurantDishDetailPanelController::cartDetailID
	String_t* ___cartDetailID_8;
	// UnityEngine.UI.ScrollRect RestaurantDishDetailPanelController::contentScrollRect
	ScrollRect_t3606982749 * ___contentScrollRect_9;
	// TextController RestaurantDishDetailPanelController::pageTitle
	TextController_t3861806281 * ___pageTitle_10;
	// UnityEngine.RectTransform RestaurantDishDetailPanelController::topSection
	RectTransform_t972643934 * ___topSection_11;
	// UnityEngine.RectTransform RestaurantDishDetailPanelController::bottomSection
	RectTransform_t972643934 * ___bottomSection_12;
	// UnityEngine.UI.RawImage RestaurantDishDetailPanelController::dishImage
	RawImage_t821930207 * ___dishImage_13;
	// TextController RestaurantDishDetailPanelController::nameText
	TextController_t3861806281 * ___nameText_14;
	// TextController RestaurantDishDetailPanelController::priceText
	TextController_t3861806281 * ___priceText_15;
	// TextController RestaurantDishDetailPanelController::selectedText
	TextController_t3861806281 * ___selectedText_16;
	// TextController RestaurantDishDetailPanelController::dishDescription
	TextController_t3861806281 * ___dishDescription_17;
	// TextController RestaurantDishDetailPanelController::deliveryText
	TextController_t3861806281 * ___deliveryText_18;
	// UnityEngine.UI.InputField RestaurantDishDetailPanelController::noteInputField
	InputField_t609046876 * ___noteInputField_19;
	// UnityEngine.GameObject RestaurantDishDetailPanelController::toggleParentPrefab
	GameObject_t3674682005 * ___toggleParentPrefab_20;
	// UnityEngine.GameObject RestaurantDishDetailPanelController::toggleElementPrefab
	GameObject_t3674682005 * ___toggleElementPrefab_21;
	// System.Collections.Generic.List`1<RestaurantDishDetailAttributeToggleParentController> RestaurantDishDetailPanelController::attributeList
	List_1_t2281340158 * ___attributeList_22;
	// CartDetailData RestaurantDishDetailPanelController::cartDetailData
	CartDetailData_t2591270651 * ___cartDetailData_23;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> RestaurantDishDetailPanelController::tempList
	List_1_t747900261 * ___tempList_24;
	// System.String RestaurantDishDetailPanelController::currentCategoryID
	String_t* ___currentCategoryID_25;

public:
	inline static int32_t get_offset_of_dishBarController_6() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___dishBarController_6)); }
	inline RestaurantDetailPanelDishBarController_t4182018719 * get_dishBarController_6() const { return ___dishBarController_6; }
	inline RestaurantDetailPanelDishBarController_t4182018719 ** get_address_of_dishBarController_6() { return &___dishBarController_6; }
	inline void set_dishBarController_6(RestaurantDetailPanelDishBarController_t4182018719 * value)
	{
		___dishBarController_6 = value;
		Il2CppCodeGenWriteBarrier(&___dishBarController_6, value);
	}

	inline static int32_t get_offset_of_dishID_7() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___dishID_7)); }
	inline String_t* get_dishID_7() const { return ___dishID_7; }
	inline String_t** get_address_of_dishID_7() { return &___dishID_7; }
	inline void set_dishID_7(String_t* value)
	{
		___dishID_7 = value;
		Il2CppCodeGenWriteBarrier(&___dishID_7, value);
	}

	inline static int32_t get_offset_of_cartDetailID_8() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___cartDetailID_8)); }
	inline String_t* get_cartDetailID_8() const { return ___cartDetailID_8; }
	inline String_t** get_address_of_cartDetailID_8() { return &___cartDetailID_8; }
	inline void set_cartDetailID_8(String_t* value)
	{
		___cartDetailID_8 = value;
		Il2CppCodeGenWriteBarrier(&___cartDetailID_8, value);
	}

	inline static int32_t get_offset_of_contentScrollRect_9() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___contentScrollRect_9)); }
	inline ScrollRect_t3606982749 * get_contentScrollRect_9() const { return ___contentScrollRect_9; }
	inline ScrollRect_t3606982749 ** get_address_of_contentScrollRect_9() { return &___contentScrollRect_9; }
	inline void set_contentScrollRect_9(ScrollRect_t3606982749 * value)
	{
		___contentScrollRect_9 = value;
		Il2CppCodeGenWriteBarrier(&___contentScrollRect_9, value);
	}

	inline static int32_t get_offset_of_pageTitle_10() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___pageTitle_10)); }
	inline TextController_t3861806281 * get_pageTitle_10() const { return ___pageTitle_10; }
	inline TextController_t3861806281 ** get_address_of_pageTitle_10() { return &___pageTitle_10; }
	inline void set_pageTitle_10(TextController_t3861806281 * value)
	{
		___pageTitle_10 = value;
		Il2CppCodeGenWriteBarrier(&___pageTitle_10, value);
	}

	inline static int32_t get_offset_of_topSection_11() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___topSection_11)); }
	inline RectTransform_t972643934 * get_topSection_11() const { return ___topSection_11; }
	inline RectTransform_t972643934 ** get_address_of_topSection_11() { return &___topSection_11; }
	inline void set_topSection_11(RectTransform_t972643934 * value)
	{
		___topSection_11 = value;
		Il2CppCodeGenWriteBarrier(&___topSection_11, value);
	}

	inline static int32_t get_offset_of_bottomSection_12() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___bottomSection_12)); }
	inline RectTransform_t972643934 * get_bottomSection_12() const { return ___bottomSection_12; }
	inline RectTransform_t972643934 ** get_address_of_bottomSection_12() { return &___bottomSection_12; }
	inline void set_bottomSection_12(RectTransform_t972643934 * value)
	{
		___bottomSection_12 = value;
		Il2CppCodeGenWriteBarrier(&___bottomSection_12, value);
	}

	inline static int32_t get_offset_of_dishImage_13() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___dishImage_13)); }
	inline RawImage_t821930207 * get_dishImage_13() const { return ___dishImage_13; }
	inline RawImage_t821930207 ** get_address_of_dishImage_13() { return &___dishImage_13; }
	inline void set_dishImage_13(RawImage_t821930207 * value)
	{
		___dishImage_13 = value;
		Il2CppCodeGenWriteBarrier(&___dishImage_13, value);
	}

	inline static int32_t get_offset_of_nameText_14() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___nameText_14)); }
	inline TextController_t3861806281 * get_nameText_14() const { return ___nameText_14; }
	inline TextController_t3861806281 ** get_address_of_nameText_14() { return &___nameText_14; }
	inline void set_nameText_14(TextController_t3861806281 * value)
	{
		___nameText_14 = value;
		Il2CppCodeGenWriteBarrier(&___nameText_14, value);
	}

	inline static int32_t get_offset_of_priceText_15() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___priceText_15)); }
	inline TextController_t3861806281 * get_priceText_15() const { return ___priceText_15; }
	inline TextController_t3861806281 ** get_address_of_priceText_15() { return &___priceText_15; }
	inline void set_priceText_15(TextController_t3861806281 * value)
	{
		___priceText_15 = value;
		Il2CppCodeGenWriteBarrier(&___priceText_15, value);
	}

	inline static int32_t get_offset_of_selectedText_16() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___selectedText_16)); }
	inline TextController_t3861806281 * get_selectedText_16() const { return ___selectedText_16; }
	inline TextController_t3861806281 ** get_address_of_selectedText_16() { return &___selectedText_16; }
	inline void set_selectedText_16(TextController_t3861806281 * value)
	{
		___selectedText_16 = value;
		Il2CppCodeGenWriteBarrier(&___selectedText_16, value);
	}

	inline static int32_t get_offset_of_dishDescription_17() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___dishDescription_17)); }
	inline TextController_t3861806281 * get_dishDescription_17() const { return ___dishDescription_17; }
	inline TextController_t3861806281 ** get_address_of_dishDescription_17() { return &___dishDescription_17; }
	inline void set_dishDescription_17(TextController_t3861806281 * value)
	{
		___dishDescription_17 = value;
		Il2CppCodeGenWriteBarrier(&___dishDescription_17, value);
	}

	inline static int32_t get_offset_of_deliveryText_18() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___deliveryText_18)); }
	inline TextController_t3861806281 * get_deliveryText_18() const { return ___deliveryText_18; }
	inline TextController_t3861806281 ** get_address_of_deliveryText_18() { return &___deliveryText_18; }
	inline void set_deliveryText_18(TextController_t3861806281 * value)
	{
		___deliveryText_18 = value;
		Il2CppCodeGenWriteBarrier(&___deliveryText_18, value);
	}

	inline static int32_t get_offset_of_noteInputField_19() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___noteInputField_19)); }
	inline InputField_t609046876 * get_noteInputField_19() const { return ___noteInputField_19; }
	inline InputField_t609046876 ** get_address_of_noteInputField_19() { return &___noteInputField_19; }
	inline void set_noteInputField_19(InputField_t609046876 * value)
	{
		___noteInputField_19 = value;
		Il2CppCodeGenWriteBarrier(&___noteInputField_19, value);
	}

	inline static int32_t get_offset_of_toggleParentPrefab_20() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___toggleParentPrefab_20)); }
	inline GameObject_t3674682005 * get_toggleParentPrefab_20() const { return ___toggleParentPrefab_20; }
	inline GameObject_t3674682005 ** get_address_of_toggleParentPrefab_20() { return &___toggleParentPrefab_20; }
	inline void set_toggleParentPrefab_20(GameObject_t3674682005 * value)
	{
		___toggleParentPrefab_20 = value;
		Il2CppCodeGenWriteBarrier(&___toggleParentPrefab_20, value);
	}

	inline static int32_t get_offset_of_toggleElementPrefab_21() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___toggleElementPrefab_21)); }
	inline GameObject_t3674682005 * get_toggleElementPrefab_21() const { return ___toggleElementPrefab_21; }
	inline GameObject_t3674682005 ** get_address_of_toggleElementPrefab_21() { return &___toggleElementPrefab_21; }
	inline void set_toggleElementPrefab_21(GameObject_t3674682005 * value)
	{
		___toggleElementPrefab_21 = value;
		Il2CppCodeGenWriteBarrier(&___toggleElementPrefab_21, value);
	}

	inline static int32_t get_offset_of_attributeList_22() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___attributeList_22)); }
	inline List_1_t2281340158 * get_attributeList_22() const { return ___attributeList_22; }
	inline List_1_t2281340158 ** get_address_of_attributeList_22() { return &___attributeList_22; }
	inline void set_attributeList_22(List_1_t2281340158 * value)
	{
		___attributeList_22 = value;
		Il2CppCodeGenWriteBarrier(&___attributeList_22, value);
	}

	inline static int32_t get_offset_of_cartDetailData_23() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___cartDetailData_23)); }
	inline CartDetailData_t2591270651 * get_cartDetailData_23() const { return ___cartDetailData_23; }
	inline CartDetailData_t2591270651 ** get_address_of_cartDetailData_23() { return &___cartDetailData_23; }
	inline void set_cartDetailData_23(CartDetailData_t2591270651 * value)
	{
		___cartDetailData_23 = value;
		Il2CppCodeGenWriteBarrier(&___cartDetailData_23, value);
	}

	inline static int32_t get_offset_of_tempList_24() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___tempList_24)); }
	inline List_1_t747900261 * get_tempList_24() const { return ___tempList_24; }
	inline List_1_t747900261 ** get_address_of_tempList_24() { return &___tempList_24; }
	inline void set_tempList_24(List_1_t747900261 * value)
	{
		___tempList_24 = value;
		Il2CppCodeGenWriteBarrier(&___tempList_24, value);
	}

	inline static int32_t get_offset_of_currentCategoryID_25() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512, ___currentCategoryID_25)); }
	inline String_t* get_currentCategoryID_25() const { return ___currentCategoryID_25; }
	inline String_t** get_address_of_currentCategoryID_25() { return &___currentCategoryID_25; }
	inline void set_currentCategoryID_25(String_t* value)
	{
		___currentCategoryID_25 = value;
		Il2CppCodeGenWriteBarrier(&___currentCategoryID_25, value);
	}
};

struct RestaurantDishDetailPanelController_t1534679512_StaticFields
{
public:
	// RestaurantDishDetailPanelController RestaurantDishDetailPanelController::instance
	RestaurantDishDetailPanelController_t1534679512 * ___instance_5;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> RestaurantDishDetailPanelController::<>f__am$cache15
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache15_26;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512_StaticFields, ___instance_5)); }
	inline RestaurantDishDetailPanelController_t1534679512 * get_instance_5() const { return ___instance_5; }
	inline RestaurantDishDetailPanelController_t1534679512 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(RestaurantDishDetailPanelController_t1534679512 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_26() { return static_cast<int32_t>(offsetof(RestaurantDishDetailPanelController_t1534679512_StaticFields, ___U3CU3Ef__amU24cache15_26)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache15_26() const { return ___U3CU3Ef__amU24cache15_26; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache15_26() { return &___U3CU3Ef__amU24cache15_26; }
	inline void set_U3CU3Ef__amU24cache15_26(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache15_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache15_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
