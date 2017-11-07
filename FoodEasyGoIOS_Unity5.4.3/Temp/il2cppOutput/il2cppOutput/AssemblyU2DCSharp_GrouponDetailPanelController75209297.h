#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GrouponDetailPanelController
struct GrouponDetailPanelController_t75209297;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GrouponDetailPanelController
struct  GrouponDetailPanelController_t75209297  : public BasePanelController_t1482191247
{
public:
	// System.String GrouponDetailPanelController::grouponID
	String_t* ___grouponID_6;
	// JSONObject GrouponDetailPanelController::grouponData
	JSONObject_t1752376903 * ___grouponData_7;
	// UnityEngine.Transform GrouponDetailPanelController::regionPanel
	Transform_t1659122786 * ___regionPanel_8;
	// UnityEngine.UI.ScrollRect GrouponDetailPanelController::dishScrollRect
	ScrollRect_t3606982749 * ___dishScrollRect_9;
	// UnityEngine.Transform GrouponDetailPanelController::dishScrollRectContent
	Transform_t1659122786 * ___dishScrollRectContent_10;
	// UnityEngine.GameObject GrouponDetailPanelController::grouponDishPrefab
	GameObject_t3674682005 * ___grouponDishPrefab_11;

public:
	inline static int32_t get_offset_of_grouponID_6() { return static_cast<int32_t>(offsetof(GrouponDetailPanelController_t75209297, ___grouponID_6)); }
	inline String_t* get_grouponID_6() const { return ___grouponID_6; }
	inline String_t** get_address_of_grouponID_6() { return &___grouponID_6; }
	inline void set_grouponID_6(String_t* value)
	{
		___grouponID_6 = value;
		Il2CppCodeGenWriteBarrier(&___grouponID_6, value);
	}

	inline static int32_t get_offset_of_grouponData_7() { return static_cast<int32_t>(offsetof(GrouponDetailPanelController_t75209297, ___grouponData_7)); }
	inline JSONObject_t1752376903 * get_grouponData_7() const { return ___grouponData_7; }
	inline JSONObject_t1752376903 ** get_address_of_grouponData_7() { return &___grouponData_7; }
	inline void set_grouponData_7(JSONObject_t1752376903 * value)
	{
		___grouponData_7 = value;
		Il2CppCodeGenWriteBarrier(&___grouponData_7, value);
	}

	inline static int32_t get_offset_of_regionPanel_8() { return static_cast<int32_t>(offsetof(GrouponDetailPanelController_t75209297, ___regionPanel_8)); }
	inline Transform_t1659122786 * get_regionPanel_8() const { return ___regionPanel_8; }
	inline Transform_t1659122786 ** get_address_of_regionPanel_8() { return &___regionPanel_8; }
	inline void set_regionPanel_8(Transform_t1659122786 * value)
	{
		___regionPanel_8 = value;
		Il2CppCodeGenWriteBarrier(&___regionPanel_8, value);
	}

	inline static int32_t get_offset_of_dishScrollRect_9() { return static_cast<int32_t>(offsetof(GrouponDetailPanelController_t75209297, ___dishScrollRect_9)); }
	inline ScrollRect_t3606982749 * get_dishScrollRect_9() const { return ___dishScrollRect_9; }
	inline ScrollRect_t3606982749 ** get_address_of_dishScrollRect_9() { return &___dishScrollRect_9; }
	inline void set_dishScrollRect_9(ScrollRect_t3606982749 * value)
	{
		___dishScrollRect_9 = value;
		Il2CppCodeGenWriteBarrier(&___dishScrollRect_9, value);
	}

	inline static int32_t get_offset_of_dishScrollRectContent_10() { return static_cast<int32_t>(offsetof(GrouponDetailPanelController_t75209297, ___dishScrollRectContent_10)); }
	inline Transform_t1659122786 * get_dishScrollRectContent_10() const { return ___dishScrollRectContent_10; }
	inline Transform_t1659122786 ** get_address_of_dishScrollRectContent_10() { return &___dishScrollRectContent_10; }
	inline void set_dishScrollRectContent_10(Transform_t1659122786 * value)
	{
		___dishScrollRectContent_10 = value;
		Il2CppCodeGenWriteBarrier(&___dishScrollRectContent_10, value);
	}

	inline static int32_t get_offset_of_grouponDishPrefab_11() { return static_cast<int32_t>(offsetof(GrouponDetailPanelController_t75209297, ___grouponDishPrefab_11)); }
	inline GameObject_t3674682005 * get_grouponDishPrefab_11() const { return ___grouponDishPrefab_11; }
	inline GameObject_t3674682005 ** get_address_of_grouponDishPrefab_11() { return &___grouponDishPrefab_11; }
	inline void set_grouponDishPrefab_11(GameObject_t3674682005 * value)
	{
		___grouponDishPrefab_11 = value;
		Il2CppCodeGenWriteBarrier(&___grouponDishPrefab_11, value);
	}
};

struct GrouponDetailPanelController_t75209297_StaticFields
{
public:
	// GrouponDetailPanelController GrouponDetailPanelController::instance
	GrouponDetailPanelController_t75209297 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(GrouponDetailPanelController_t75209297_StaticFields, ___instance_5)); }
	inline GrouponDetailPanelController_t75209297 * get_instance_5() const { return ___instance_5; }
	inline GrouponDetailPanelController_t75209297 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(GrouponDetailPanelController_t75209297 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
