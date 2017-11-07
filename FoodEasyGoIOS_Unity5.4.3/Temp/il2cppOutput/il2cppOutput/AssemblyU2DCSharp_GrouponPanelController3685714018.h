#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GrouponPanelController
struct GrouponPanelController_t3685714018;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t2572795273;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GrouponPanelController
struct  GrouponPanelController_t3685714018  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.UI.ScrollRect GrouponPanelController::scrollRect
	ScrollRect_t3606982749 * ___scrollRect_6;
	// UnityEngine.Transform GrouponPanelController::scrollRectContent
	Transform_t1659122786 * ___scrollRectContent_7;
	// UnityEngine.GameObject GrouponPanelController::grouponBarPrefab
	GameObject_t3674682005 * ___grouponBarPrefab_8;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> GrouponPanelController::restaurantData
	Dictionary_2_t2572795273 * ___restaurantData_9;

public:
	inline static int32_t get_offset_of_scrollRect_6() { return static_cast<int32_t>(offsetof(GrouponPanelController_t3685714018, ___scrollRect_6)); }
	inline ScrollRect_t3606982749 * get_scrollRect_6() const { return ___scrollRect_6; }
	inline ScrollRect_t3606982749 ** get_address_of_scrollRect_6() { return &___scrollRect_6; }
	inline void set_scrollRect_6(ScrollRect_t3606982749 * value)
	{
		___scrollRect_6 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRect_6, value);
	}

	inline static int32_t get_offset_of_scrollRectContent_7() { return static_cast<int32_t>(offsetof(GrouponPanelController_t3685714018, ___scrollRectContent_7)); }
	inline Transform_t1659122786 * get_scrollRectContent_7() const { return ___scrollRectContent_7; }
	inline Transform_t1659122786 ** get_address_of_scrollRectContent_7() { return &___scrollRectContent_7; }
	inline void set_scrollRectContent_7(Transform_t1659122786 * value)
	{
		___scrollRectContent_7 = value;
		Il2CppCodeGenWriteBarrier(&___scrollRectContent_7, value);
	}

	inline static int32_t get_offset_of_grouponBarPrefab_8() { return static_cast<int32_t>(offsetof(GrouponPanelController_t3685714018, ___grouponBarPrefab_8)); }
	inline GameObject_t3674682005 * get_grouponBarPrefab_8() const { return ___grouponBarPrefab_8; }
	inline GameObject_t3674682005 ** get_address_of_grouponBarPrefab_8() { return &___grouponBarPrefab_8; }
	inline void set_grouponBarPrefab_8(GameObject_t3674682005 * value)
	{
		___grouponBarPrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___grouponBarPrefab_8, value);
	}

	inline static int32_t get_offset_of_restaurantData_9() { return static_cast<int32_t>(offsetof(GrouponPanelController_t3685714018, ___restaurantData_9)); }
	inline Dictionary_2_t2572795273 * get_restaurantData_9() const { return ___restaurantData_9; }
	inline Dictionary_2_t2572795273 ** get_address_of_restaurantData_9() { return &___restaurantData_9; }
	inline void set_restaurantData_9(Dictionary_2_t2572795273 * value)
	{
		___restaurantData_9 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantData_9, value);
	}
};

struct GrouponPanelController_t3685714018_StaticFields
{
public:
	// GrouponPanelController GrouponPanelController::instance
	GrouponPanelController_t3685714018 * ___instance_5;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> GrouponPanelController::<>f__am$cache5
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache5_10;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(GrouponPanelController_t3685714018_StaticFields, ___instance_5)); }
	inline GrouponPanelController_t3685714018 * get_instance_5() const { return ___instance_5; }
	inline GrouponPanelController_t3685714018 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(GrouponPanelController_t3685714018 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_10() { return static_cast<int32_t>(offsetof(GrouponPanelController_t3685714018_StaticFields, ___U3CU3Ef__amU24cache5_10)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache5_10() const { return ___U3CU3Ef__amU24cache5_10; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache5_10() { return &___U3CU3Ef__amU24cache5_10; }
	inline void set_U3CU3Ef__amU24cache5_10(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache5_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
