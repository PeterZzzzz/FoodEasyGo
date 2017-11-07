#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RestaurantDetailPanelController
struct RestaurantDetailPanelController_t2815147218;
// System.String
struct String_t;
// LDFW.UI.LDFWToggleController
struct LDFWToggleController_t986233105;
// RestaurantDetailPanelDishEndlessScroll
struct RestaurantDetailPanelDishEndlessScroll_t4133165937;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t2572795273;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t3027308338;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantDetailPanelController
struct  RestaurantDetailPanelController_t2815147218  : public BasePanelController_t1482191247
{
public:
	// System.Boolean RestaurantDetailPanelController::isRestaurantData
	bool ___isRestaurantData_6;
	// System.String RestaurantDetailPanelController::grouponID
	String_t* ___grouponID_7;
	// System.String RestaurantDetailPanelController::restaurantID
	String_t* ___restaurantID_8;
	// System.String RestaurantDetailPanelController::restaurantNameZH
	String_t* ___restaurantNameZH_9;
	// System.String RestaurantDetailPanelController::restaurantNameEN
	String_t* ___restaurantNameEN_10;
	// System.Boolean RestaurantDetailPanelController::isRestaurantOpen
	bool ___isRestaurantOpen_11;
	// LDFW.UI.LDFWToggleController RestaurantDetailPanelController::categoryToggleController
	LDFWToggleController_t986233105 * ___categoryToggleController_12;
	// RestaurantDetailPanelDishEndlessScroll RestaurantDetailPanelController::dishEndlessScrollController
	RestaurantDetailPanelDishEndlessScroll_t4133165937 * ___dishEndlessScrollController_13;
	// UnityEngine.RectTransform RestaurantDetailPanelController::dishContent
	RectTransform_t972643934 * ___dishContent_14;
	// UnityEngine.RectTransform RestaurantDetailPanelController::commentContent
	RectTransform_t972643934 * ___commentContent_15;
	// UnityEngine.RectTransform RestaurantDetailPanelController::noCommentBar
	RectTransform_t972643934 * ___noCommentBar_16;
	// UnityEngine.GameObject RestaurantDetailPanelController::dishCategoryBarPrefab
	GameObject_t3674682005 * ___dishCategoryBarPrefab_17;
	// UnityEngine.GameObject RestaurantDetailPanelController::dishBarPrefab
	GameObject_t3674682005 * ___dishBarPrefab_18;
	// UnityEngine.GameObject RestaurantDetailPanelController::categoryBarPrefab
	GameObject_t3674682005 * ___categoryBarPrefab_19;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> RestaurantDetailPanelController::dictionaryCategoryData
	Dictionary_2_t2572795273 * ___dictionaryCategoryData_20;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> RestaurantDetailPanelController::dictionaryDishData
	Dictionary_2_t2572795273 * ___dictionaryDishData_21;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> RestaurantDetailPanelController::dictionaryCommentData
	Dictionary_2_t2572795273 * ___dictionaryCommentData_22;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> RestaurantDetailPanelController::grouponRestaurantData
	Dictionary_2_t2572795273 * ___grouponRestaurantData_23;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> RestaurantDetailPanelController::grouponGoodsData
	Dictionary_2_t2572795273 * ___grouponGoodsData_24;
	// System.Collections.Generic.List`1<UnityEngine.Transform> RestaurantDetailPanelController::allComments
	List_1_t3027308338 * ___allComments_25;
	// System.Collections.Generic.List`1<UnityEngine.Transform> RestaurantDetailPanelController::positiveComments
	List_1_t3027308338 * ___positiveComments_26;
	// System.Collections.Generic.List`1<UnityEngine.Transform> RestaurantDetailPanelController::negativeComments
	List_1_t3027308338 * ___negativeComments_27;

public:
	inline static int32_t get_offset_of_isRestaurantData_6() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___isRestaurantData_6)); }
	inline bool get_isRestaurantData_6() const { return ___isRestaurantData_6; }
	inline bool* get_address_of_isRestaurantData_6() { return &___isRestaurantData_6; }
	inline void set_isRestaurantData_6(bool value)
	{
		___isRestaurantData_6 = value;
	}

	inline static int32_t get_offset_of_grouponID_7() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___grouponID_7)); }
	inline String_t* get_grouponID_7() const { return ___grouponID_7; }
	inline String_t** get_address_of_grouponID_7() { return &___grouponID_7; }
	inline void set_grouponID_7(String_t* value)
	{
		___grouponID_7 = value;
		Il2CppCodeGenWriteBarrier(&___grouponID_7, value);
	}

	inline static int32_t get_offset_of_restaurantID_8() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___restaurantID_8)); }
	inline String_t* get_restaurantID_8() const { return ___restaurantID_8; }
	inline String_t** get_address_of_restaurantID_8() { return &___restaurantID_8; }
	inline void set_restaurantID_8(String_t* value)
	{
		___restaurantID_8 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantID_8, value);
	}

	inline static int32_t get_offset_of_restaurantNameZH_9() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___restaurantNameZH_9)); }
	inline String_t* get_restaurantNameZH_9() const { return ___restaurantNameZH_9; }
	inline String_t** get_address_of_restaurantNameZH_9() { return &___restaurantNameZH_9; }
	inline void set_restaurantNameZH_9(String_t* value)
	{
		___restaurantNameZH_9 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantNameZH_9, value);
	}

	inline static int32_t get_offset_of_restaurantNameEN_10() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___restaurantNameEN_10)); }
	inline String_t* get_restaurantNameEN_10() const { return ___restaurantNameEN_10; }
	inline String_t** get_address_of_restaurantNameEN_10() { return &___restaurantNameEN_10; }
	inline void set_restaurantNameEN_10(String_t* value)
	{
		___restaurantNameEN_10 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantNameEN_10, value);
	}

	inline static int32_t get_offset_of_isRestaurantOpen_11() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___isRestaurantOpen_11)); }
	inline bool get_isRestaurantOpen_11() const { return ___isRestaurantOpen_11; }
	inline bool* get_address_of_isRestaurantOpen_11() { return &___isRestaurantOpen_11; }
	inline void set_isRestaurantOpen_11(bool value)
	{
		___isRestaurantOpen_11 = value;
	}

	inline static int32_t get_offset_of_categoryToggleController_12() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___categoryToggleController_12)); }
	inline LDFWToggleController_t986233105 * get_categoryToggleController_12() const { return ___categoryToggleController_12; }
	inline LDFWToggleController_t986233105 ** get_address_of_categoryToggleController_12() { return &___categoryToggleController_12; }
	inline void set_categoryToggleController_12(LDFWToggleController_t986233105 * value)
	{
		___categoryToggleController_12 = value;
		Il2CppCodeGenWriteBarrier(&___categoryToggleController_12, value);
	}

	inline static int32_t get_offset_of_dishEndlessScrollController_13() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___dishEndlessScrollController_13)); }
	inline RestaurantDetailPanelDishEndlessScroll_t4133165937 * get_dishEndlessScrollController_13() const { return ___dishEndlessScrollController_13; }
	inline RestaurantDetailPanelDishEndlessScroll_t4133165937 ** get_address_of_dishEndlessScrollController_13() { return &___dishEndlessScrollController_13; }
	inline void set_dishEndlessScrollController_13(RestaurantDetailPanelDishEndlessScroll_t4133165937 * value)
	{
		___dishEndlessScrollController_13 = value;
		Il2CppCodeGenWriteBarrier(&___dishEndlessScrollController_13, value);
	}

	inline static int32_t get_offset_of_dishContent_14() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___dishContent_14)); }
	inline RectTransform_t972643934 * get_dishContent_14() const { return ___dishContent_14; }
	inline RectTransform_t972643934 ** get_address_of_dishContent_14() { return &___dishContent_14; }
	inline void set_dishContent_14(RectTransform_t972643934 * value)
	{
		___dishContent_14 = value;
		Il2CppCodeGenWriteBarrier(&___dishContent_14, value);
	}

	inline static int32_t get_offset_of_commentContent_15() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___commentContent_15)); }
	inline RectTransform_t972643934 * get_commentContent_15() const { return ___commentContent_15; }
	inline RectTransform_t972643934 ** get_address_of_commentContent_15() { return &___commentContent_15; }
	inline void set_commentContent_15(RectTransform_t972643934 * value)
	{
		___commentContent_15 = value;
		Il2CppCodeGenWriteBarrier(&___commentContent_15, value);
	}

	inline static int32_t get_offset_of_noCommentBar_16() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___noCommentBar_16)); }
	inline RectTransform_t972643934 * get_noCommentBar_16() const { return ___noCommentBar_16; }
	inline RectTransform_t972643934 ** get_address_of_noCommentBar_16() { return &___noCommentBar_16; }
	inline void set_noCommentBar_16(RectTransform_t972643934 * value)
	{
		___noCommentBar_16 = value;
		Il2CppCodeGenWriteBarrier(&___noCommentBar_16, value);
	}

	inline static int32_t get_offset_of_dishCategoryBarPrefab_17() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___dishCategoryBarPrefab_17)); }
	inline GameObject_t3674682005 * get_dishCategoryBarPrefab_17() const { return ___dishCategoryBarPrefab_17; }
	inline GameObject_t3674682005 ** get_address_of_dishCategoryBarPrefab_17() { return &___dishCategoryBarPrefab_17; }
	inline void set_dishCategoryBarPrefab_17(GameObject_t3674682005 * value)
	{
		___dishCategoryBarPrefab_17 = value;
		Il2CppCodeGenWriteBarrier(&___dishCategoryBarPrefab_17, value);
	}

	inline static int32_t get_offset_of_dishBarPrefab_18() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___dishBarPrefab_18)); }
	inline GameObject_t3674682005 * get_dishBarPrefab_18() const { return ___dishBarPrefab_18; }
	inline GameObject_t3674682005 ** get_address_of_dishBarPrefab_18() { return &___dishBarPrefab_18; }
	inline void set_dishBarPrefab_18(GameObject_t3674682005 * value)
	{
		___dishBarPrefab_18 = value;
		Il2CppCodeGenWriteBarrier(&___dishBarPrefab_18, value);
	}

	inline static int32_t get_offset_of_categoryBarPrefab_19() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___categoryBarPrefab_19)); }
	inline GameObject_t3674682005 * get_categoryBarPrefab_19() const { return ___categoryBarPrefab_19; }
	inline GameObject_t3674682005 ** get_address_of_categoryBarPrefab_19() { return &___categoryBarPrefab_19; }
	inline void set_categoryBarPrefab_19(GameObject_t3674682005 * value)
	{
		___categoryBarPrefab_19 = value;
		Il2CppCodeGenWriteBarrier(&___categoryBarPrefab_19, value);
	}

	inline static int32_t get_offset_of_dictionaryCategoryData_20() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___dictionaryCategoryData_20)); }
	inline Dictionary_2_t2572795273 * get_dictionaryCategoryData_20() const { return ___dictionaryCategoryData_20; }
	inline Dictionary_2_t2572795273 ** get_address_of_dictionaryCategoryData_20() { return &___dictionaryCategoryData_20; }
	inline void set_dictionaryCategoryData_20(Dictionary_2_t2572795273 * value)
	{
		___dictionaryCategoryData_20 = value;
		Il2CppCodeGenWriteBarrier(&___dictionaryCategoryData_20, value);
	}

	inline static int32_t get_offset_of_dictionaryDishData_21() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___dictionaryDishData_21)); }
	inline Dictionary_2_t2572795273 * get_dictionaryDishData_21() const { return ___dictionaryDishData_21; }
	inline Dictionary_2_t2572795273 ** get_address_of_dictionaryDishData_21() { return &___dictionaryDishData_21; }
	inline void set_dictionaryDishData_21(Dictionary_2_t2572795273 * value)
	{
		___dictionaryDishData_21 = value;
		Il2CppCodeGenWriteBarrier(&___dictionaryDishData_21, value);
	}

	inline static int32_t get_offset_of_dictionaryCommentData_22() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___dictionaryCommentData_22)); }
	inline Dictionary_2_t2572795273 * get_dictionaryCommentData_22() const { return ___dictionaryCommentData_22; }
	inline Dictionary_2_t2572795273 ** get_address_of_dictionaryCommentData_22() { return &___dictionaryCommentData_22; }
	inline void set_dictionaryCommentData_22(Dictionary_2_t2572795273 * value)
	{
		___dictionaryCommentData_22 = value;
		Il2CppCodeGenWriteBarrier(&___dictionaryCommentData_22, value);
	}

	inline static int32_t get_offset_of_grouponRestaurantData_23() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___grouponRestaurantData_23)); }
	inline Dictionary_2_t2572795273 * get_grouponRestaurantData_23() const { return ___grouponRestaurantData_23; }
	inline Dictionary_2_t2572795273 ** get_address_of_grouponRestaurantData_23() { return &___grouponRestaurantData_23; }
	inline void set_grouponRestaurantData_23(Dictionary_2_t2572795273 * value)
	{
		___grouponRestaurantData_23 = value;
		Il2CppCodeGenWriteBarrier(&___grouponRestaurantData_23, value);
	}

	inline static int32_t get_offset_of_grouponGoodsData_24() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___grouponGoodsData_24)); }
	inline Dictionary_2_t2572795273 * get_grouponGoodsData_24() const { return ___grouponGoodsData_24; }
	inline Dictionary_2_t2572795273 ** get_address_of_grouponGoodsData_24() { return &___grouponGoodsData_24; }
	inline void set_grouponGoodsData_24(Dictionary_2_t2572795273 * value)
	{
		___grouponGoodsData_24 = value;
		Il2CppCodeGenWriteBarrier(&___grouponGoodsData_24, value);
	}

	inline static int32_t get_offset_of_allComments_25() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___allComments_25)); }
	inline List_1_t3027308338 * get_allComments_25() const { return ___allComments_25; }
	inline List_1_t3027308338 ** get_address_of_allComments_25() { return &___allComments_25; }
	inline void set_allComments_25(List_1_t3027308338 * value)
	{
		___allComments_25 = value;
		Il2CppCodeGenWriteBarrier(&___allComments_25, value);
	}

	inline static int32_t get_offset_of_positiveComments_26() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___positiveComments_26)); }
	inline List_1_t3027308338 * get_positiveComments_26() const { return ___positiveComments_26; }
	inline List_1_t3027308338 ** get_address_of_positiveComments_26() { return &___positiveComments_26; }
	inline void set_positiveComments_26(List_1_t3027308338 * value)
	{
		___positiveComments_26 = value;
		Il2CppCodeGenWriteBarrier(&___positiveComments_26, value);
	}

	inline static int32_t get_offset_of_negativeComments_27() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218, ___negativeComments_27)); }
	inline List_1_t3027308338 * get_negativeComments_27() const { return ___negativeComments_27; }
	inline List_1_t3027308338 ** get_address_of_negativeComments_27() { return &___negativeComments_27; }
	inline void set_negativeComments_27(List_1_t3027308338 * value)
	{
		___negativeComments_27 = value;
		Il2CppCodeGenWriteBarrier(&___negativeComments_27, value);
	}
};

struct RestaurantDetailPanelController_t2815147218_StaticFields
{
public:
	// RestaurantDetailPanelController RestaurantDetailPanelController::instance
	RestaurantDetailPanelController_t2815147218 * ___instance_5;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> RestaurantDetailPanelController::<>f__am$cache17
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache17_28;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218_StaticFields, ___instance_5)); }
	inline RestaurantDetailPanelController_t2815147218 * get_instance_5() const { return ___instance_5; }
	inline RestaurantDetailPanelController_t2815147218 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(RestaurantDetailPanelController_t2815147218 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache17_28() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelController_t2815147218_StaticFields, ___U3CU3Ef__amU24cache17_28)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache17_28() const { return ___U3CU3Ef__amU24cache17_28; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache17_28() { return &___U3CU3Ef__amU24cache17_28; }
	inline void set_U3CU3Ef__amU24cache17_28(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache17_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache17_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
