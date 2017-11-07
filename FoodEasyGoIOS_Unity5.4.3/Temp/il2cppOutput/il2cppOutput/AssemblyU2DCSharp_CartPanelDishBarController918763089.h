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
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// UnityEngine.UI.LayoutElement
struct LayoutElement_t1596995480;
// UnityEngine.UI.Button
struct Button_t3896396478;
// CartDetailData
struct CartDetailData_t2591270651;
// System.Action
struct Action_t3771233898;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CartPanelDishBarController
struct  CartPanelDishBarController_t918763089  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform CartPanelDishBarController::generalParent
	Transform_t1659122786 * ___generalParent_2;
	// UnityEngine.UI.ScrollRect CartPanelDishBarController::scrollRect
	ScrollRect_t3606982749 * ___scrollRect_3;
	// UnityEngine.UI.LayoutElement CartPanelDishBarController::layoutElement
	LayoutElement_t1596995480 * ___layoutElement_4;
	// UnityEngine.UI.Button CartPanelDishBarController::selectButton
	Button_t3896396478 * ___selectButton_5;
	// UnityEngine.UI.Button CartPanelDishBarController::deselectButton
	Button_t3896396478 * ___deselectButton_6;
	// CartDetailData CartPanelDishBarController::cartDetailData
	CartDetailData_t2591270651 * ___cartDetailData_7;
	// System.Boolean CartPanelDishBarController::isSelectedForCheckOut
	bool ___isSelectedForCheckOut_8;
	// System.Boolean CartPanelDishBarController::isShowingDeleteButton
	bool ___isShowingDeleteButton_9;
	// System.Boolean CartPanelDishBarController::isRestaurantOpen
	bool ___isRestaurantOpen_10;
	// System.Boolean CartPanelDishBarController::isPointerDown
	bool ___isPointerDown_11;
	// System.Boolean CartPanelDishBarController::isTweenerPlaying
	bool ___isTweenerPlaying_12;
	// UnityEngine.Vector2 CartPanelDishBarController::pointerDownPosition
	Vector2_t4282066565  ___pointerDownPosition_13;

public:
	inline static int32_t get_offset_of_generalParent_2() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089, ___generalParent_2)); }
	inline Transform_t1659122786 * get_generalParent_2() const { return ___generalParent_2; }
	inline Transform_t1659122786 ** get_address_of_generalParent_2() { return &___generalParent_2; }
	inline void set_generalParent_2(Transform_t1659122786 * value)
	{
		___generalParent_2 = value;
		Il2CppCodeGenWriteBarrier(&___generalParent_2, value);
	}

	inline static int32_t get_offset_of_scrollRect_3() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089, ___scrollRect_3)); }
	inline ScrollRect_t3606982749 * get_scrollRect_3() const { return ___scrollRect_3; }
	inline ScrollRect_t3606982749 ** get_address_of_scrollRect_3() { return &___scrollRect_3; }
	inline void set_scrollRect_3(ScrollRect_t3606982749 * value)
	{
		___scrollRect_3 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRect_3, value);
	}

	inline static int32_t get_offset_of_layoutElement_4() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089, ___layoutElement_4)); }
	inline LayoutElement_t1596995480 * get_layoutElement_4() const { return ___layoutElement_4; }
	inline LayoutElement_t1596995480 ** get_address_of_layoutElement_4() { return &___layoutElement_4; }
	inline void set_layoutElement_4(LayoutElement_t1596995480 * value)
	{
		___layoutElement_4 = value;
		Il2CppCodeGenWriteBarrier(&___layoutElement_4, value);
	}

	inline static int32_t get_offset_of_selectButton_5() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089, ___selectButton_5)); }
	inline Button_t3896396478 * get_selectButton_5() const { return ___selectButton_5; }
	inline Button_t3896396478 ** get_address_of_selectButton_5() { return &___selectButton_5; }
	inline void set_selectButton_5(Button_t3896396478 * value)
	{
		___selectButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___selectButton_5, value);
	}

	inline static int32_t get_offset_of_deselectButton_6() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089, ___deselectButton_6)); }
	inline Button_t3896396478 * get_deselectButton_6() const { return ___deselectButton_6; }
	inline Button_t3896396478 ** get_address_of_deselectButton_6() { return &___deselectButton_6; }
	inline void set_deselectButton_6(Button_t3896396478 * value)
	{
		___deselectButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___deselectButton_6, value);
	}

	inline static int32_t get_offset_of_cartDetailData_7() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089, ___cartDetailData_7)); }
	inline CartDetailData_t2591270651 * get_cartDetailData_7() const { return ___cartDetailData_7; }
	inline CartDetailData_t2591270651 ** get_address_of_cartDetailData_7() { return &___cartDetailData_7; }
	inline void set_cartDetailData_7(CartDetailData_t2591270651 * value)
	{
		___cartDetailData_7 = value;
		Il2CppCodeGenWriteBarrier(&___cartDetailData_7, value);
	}

	inline static int32_t get_offset_of_isSelectedForCheckOut_8() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089, ___isSelectedForCheckOut_8)); }
	inline bool get_isSelectedForCheckOut_8() const { return ___isSelectedForCheckOut_8; }
	inline bool* get_address_of_isSelectedForCheckOut_8() { return &___isSelectedForCheckOut_8; }
	inline void set_isSelectedForCheckOut_8(bool value)
	{
		___isSelectedForCheckOut_8 = value;
	}

	inline static int32_t get_offset_of_isShowingDeleteButton_9() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089, ___isShowingDeleteButton_9)); }
	inline bool get_isShowingDeleteButton_9() const { return ___isShowingDeleteButton_9; }
	inline bool* get_address_of_isShowingDeleteButton_9() { return &___isShowingDeleteButton_9; }
	inline void set_isShowingDeleteButton_9(bool value)
	{
		___isShowingDeleteButton_9 = value;
	}

	inline static int32_t get_offset_of_isRestaurantOpen_10() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089, ___isRestaurantOpen_10)); }
	inline bool get_isRestaurantOpen_10() const { return ___isRestaurantOpen_10; }
	inline bool* get_address_of_isRestaurantOpen_10() { return &___isRestaurantOpen_10; }
	inline void set_isRestaurantOpen_10(bool value)
	{
		___isRestaurantOpen_10 = value;
	}

	inline static int32_t get_offset_of_isPointerDown_11() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089, ___isPointerDown_11)); }
	inline bool get_isPointerDown_11() const { return ___isPointerDown_11; }
	inline bool* get_address_of_isPointerDown_11() { return &___isPointerDown_11; }
	inline void set_isPointerDown_11(bool value)
	{
		___isPointerDown_11 = value;
	}

	inline static int32_t get_offset_of_isTweenerPlaying_12() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089, ___isTweenerPlaying_12)); }
	inline bool get_isTweenerPlaying_12() const { return ___isTweenerPlaying_12; }
	inline bool* get_address_of_isTweenerPlaying_12() { return &___isTweenerPlaying_12; }
	inline void set_isTweenerPlaying_12(bool value)
	{
		___isTweenerPlaying_12 = value;
	}

	inline static int32_t get_offset_of_pointerDownPosition_13() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089, ___pointerDownPosition_13)); }
	inline Vector2_t4282066565  get_pointerDownPosition_13() const { return ___pointerDownPosition_13; }
	inline Vector2_t4282066565 * get_address_of_pointerDownPosition_13() { return &___pointerDownPosition_13; }
	inline void set_pointerDownPosition_13(Vector2_t4282066565  value)
	{
		___pointerDownPosition_13 = value;
	}
};

struct CartPanelDishBarController_t918763089_StaticFields
{
public:
	// System.Action CartPanelDishBarController::<>f__am$cacheC
	Action_t3771233898 * ___U3CU3Ef__amU24cacheC_14;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheC_14() { return static_cast<int32_t>(offsetof(CartPanelDishBarController_t918763089_StaticFields, ___U3CU3Ef__amU24cacheC_14)); }
	inline Action_t3771233898 * get_U3CU3Ef__amU24cacheC_14() const { return ___U3CU3Ef__amU24cacheC_14; }
	inline Action_t3771233898 ** get_address_of_U3CU3Ef__amU24cacheC_14() { return &___U3CU3Ef__amU24cacheC_14; }
	inline void set_U3CU3Ef__amU24cacheC_14(Action_t3771233898 * value)
	{
		___U3CU3Ef__amU24cacheC_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheC_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
