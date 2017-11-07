#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// TextController
struct TextController_t3861806281;
// UnityEngine.UI.LayoutElement
struct LayoutElement_t1596995480;
// UnityEngine.UI.Image
struct Image_t538875265;
// JSONObject
struct JSONObject_t1752376903;
// System.Collections.Generic.List`1<CartPanelDishBarController>
struct List_1_t2286948641;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CartPanelRestaurantBarController
struct  CartPanelRestaurantBarController_t3060481166  : public MonoBehaviour_t667441552
{
public:
	// System.String CartPanelRestaurantBarController::restaurantID
	String_t* ___restaurantID_2;
	// UnityEngine.RectTransform CartPanelRestaurantBarController::header
	RectTransform_t972643934 * ___header_3;
	// TextController CartPanelRestaurantBarController::title
	TextController_t3861806281 * ___title_4;
	// UnityEngine.UI.LayoutElement CartPanelRestaurantBarController::layoutElement
	LayoutElement_t1596995480 * ___layoutElement_5;
	// UnityEngine.UI.Image CartPanelRestaurantBarController::noDeliveryMask
	Image_t538875265 * ___noDeliveryMask_6;
	// JSONObject CartPanelRestaurantBarController::data
	JSONObject_t1752376903 * ___data_7;
	// System.Boolean CartPanelRestaurantBarController::isOpen
	bool ___isOpen_8;
	// System.Boolean CartPanelRestaurantBarController::isMinOrderSatisfied
	bool ___isMinOrderSatisfied_9;
	// System.Boolean CartPanelRestaurantBarController::isRestaurant
	bool ___isRestaurant_10;
	// System.Boolean CartPanelRestaurantBarController::canDeliver
	bool ___canDeliver_11;
	// System.Collections.Generic.List`1<CartPanelDishBarController> CartPanelRestaurantBarController::dishBarList
	List_1_t2286948641 * ___dishBarList_12;
	// System.Single CartPanelRestaurantBarController::_minOrder
	float ____minOrder_13;
	// System.String CartPanelRestaurantBarController::_nameZH
	String_t* ____nameZH_14;
	// System.String CartPanelRestaurantBarController::_nameEN
	String_t* ____nameEN_15;
	// System.Int32 CartPanelRestaurantBarController::headerHeight
	int32_t ___headerHeight_16;

public:
	inline static int32_t get_offset_of_restaurantID_2() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ___restaurantID_2)); }
	inline String_t* get_restaurantID_2() const { return ___restaurantID_2; }
	inline String_t** get_address_of_restaurantID_2() { return &___restaurantID_2; }
	inline void set_restaurantID_2(String_t* value)
	{
		___restaurantID_2 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantID_2, value);
	}

	inline static int32_t get_offset_of_header_3() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ___header_3)); }
	inline RectTransform_t972643934 * get_header_3() const { return ___header_3; }
	inline RectTransform_t972643934 ** get_address_of_header_3() { return &___header_3; }
	inline void set_header_3(RectTransform_t972643934 * value)
	{
		___header_3 = value;
		Il2CppCodeGenWriteBarrier(&___header_3, value);
	}

	inline static int32_t get_offset_of_title_4() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ___title_4)); }
	inline TextController_t3861806281 * get_title_4() const { return ___title_4; }
	inline TextController_t3861806281 ** get_address_of_title_4() { return &___title_4; }
	inline void set_title_4(TextController_t3861806281 * value)
	{
		___title_4 = value;
		Il2CppCodeGenWriteBarrier(&___title_4, value);
	}

	inline static int32_t get_offset_of_layoutElement_5() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ___layoutElement_5)); }
	inline LayoutElement_t1596995480 * get_layoutElement_5() const { return ___layoutElement_5; }
	inline LayoutElement_t1596995480 ** get_address_of_layoutElement_5() { return &___layoutElement_5; }
	inline void set_layoutElement_5(LayoutElement_t1596995480 * value)
	{
		___layoutElement_5 = value;
		Il2CppCodeGenWriteBarrier(&___layoutElement_5, value);
	}

	inline static int32_t get_offset_of_noDeliveryMask_6() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ___noDeliveryMask_6)); }
	inline Image_t538875265 * get_noDeliveryMask_6() const { return ___noDeliveryMask_6; }
	inline Image_t538875265 ** get_address_of_noDeliveryMask_6() { return &___noDeliveryMask_6; }
	inline void set_noDeliveryMask_6(Image_t538875265 * value)
	{
		___noDeliveryMask_6 = value;
		Il2CppCodeGenWriteBarrier(&___noDeliveryMask_6, value);
	}

	inline static int32_t get_offset_of_data_7() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ___data_7)); }
	inline JSONObject_t1752376903 * get_data_7() const { return ___data_7; }
	inline JSONObject_t1752376903 ** get_address_of_data_7() { return &___data_7; }
	inline void set_data_7(JSONObject_t1752376903 * value)
	{
		___data_7 = value;
		Il2CppCodeGenWriteBarrier(&___data_7, value);
	}

	inline static int32_t get_offset_of_isOpen_8() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ___isOpen_8)); }
	inline bool get_isOpen_8() const { return ___isOpen_8; }
	inline bool* get_address_of_isOpen_8() { return &___isOpen_8; }
	inline void set_isOpen_8(bool value)
	{
		___isOpen_8 = value;
	}

	inline static int32_t get_offset_of_isMinOrderSatisfied_9() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ___isMinOrderSatisfied_9)); }
	inline bool get_isMinOrderSatisfied_9() const { return ___isMinOrderSatisfied_9; }
	inline bool* get_address_of_isMinOrderSatisfied_9() { return &___isMinOrderSatisfied_9; }
	inline void set_isMinOrderSatisfied_9(bool value)
	{
		___isMinOrderSatisfied_9 = value;
	}

	inline static int32_t get_offset_of_isRestaurant_10() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ___isRestaurant_10)); }
	inline bool get_isRestaurant_10() const { return ___isRestaurant_10; }
	inline bool* get_address_of_isRestaurant_10() { return &___isRestaurant_10; }
	inline void set_isRestaurant_10(bool value)
	{
		___isRestaurant_10 = value;
	}

	inline static int32_t get_offset_of_canDeliver_11() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ___canDeliver_11)); }
	inline bool get_canDeliver_11() const { return ___canDeliver_11; }
	inline bool* get_address_of_canDeliver_11() { return &___canDeliver_11; }
	inline void set_canDeliver_11(bool value)
	{
		___canDeliver_11 = value;
	}

	inline static int32_t get_offset_of_dishBarList_12() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ___dishBarList_12)); }
	inline List_1_t2286948641 * get_dishBarList_12() const { return ___dishBarList_12; }
	inline List_1_t2286948641 ** get_address_of_dishBarList_12() { return &___dishBarList_12; }
	inline void set_dishBarList_12(List_1_t2286948641 * value)
	{
		___dishBarList_12 = value;
		Il2CppCodeGenWriteBarrier(&___dishBarList_12, value);
	}

	inline static int32_t get_offset_of__minOrder_13() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ____minOrder_13)); }
	inline float get__minOrder_13() const { return ____minOrder_13; }
	inline float* get_address_of__minOrder_13() { return &____minOrder_13; }
	inline void set__minOrder_13(float value)
	{
		____minOrder_13 = value;
	}

	inline static int32_t get_offset_of__nameZH_14() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ____nameZH_14)); }
	inline String_t* get__nameZH_14() const { return ____nameZH_14; }
	inline String_t** get_address_of__nameZH_14() { return &____nameZH_14; }
	inline void set__nameZH_14(String_t* value)
	{
		____nameZH_14 = value;
		Il2CppCodeGenWriteBarrier(&____nameZH_14, value);
	}

	inline static int32_t get_offset_of__nameEN_15() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ____nameEN_15)); }
	inline String_t* get__nameEN_15() const { return ____nameEN_15; }
	inline String_t** get_address_of__nameEN_15() { return &____nameEN_15; }
	inline void set__nameEN_15(String_t* value)
	{
		____nameEN_15 = value;
		Il2CppCodeGenWriteBarrier(&____nameEN_15, value);
	}

	inline static int32_t get_offset_of_headerHeight_16() { return static_cast<int32_t>(offsetof(CartPanelRestaurantBarController_t3060481166, ___headerHeight_16)); }
	inline int32_t get_headerHeight_16() const { return ___headerHeight_16; }
	inline int32_t* get_address_of_headerHeight_16() { return &___headerHeight_16; }
	inline void set_headerHeight_16(int32_t value)
	{
		___headerHeight_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
