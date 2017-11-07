#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OrderPanelController
struct OrderPanelController_t3155145650;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OrderPanelController
struct  OrderPanelController_t3155145650  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.Transform OrderPanelController::emptyOrderPanel
	Transform_t1659122786 * ___emptyOrderPanel_6;
	// UnityEngine.Transform OrderPanelController::orderListContent
	Transform_t1659122786 * ___orderListContent_7;

public:
	inline static int32_t get_offset_of_emptyOrderPanel_6() { return static_cast<int32_t>(offsetof(OrderPanelController_t3155145650, ___emptyOrderPanel_6)); }
	inline Transform_t1659122786 * get_emptyOrderPanel_6() const { return ___emptyOrderPanel_6; }
	inline Transform_t1659122786 ** get_address_of_emptyOrderPanel_6() { return &___emptyOrderPanel_6; }
	inline void set_emptyOrderPanel_6(Transform_t1659122786 * value)
	{
		___emptyOrderPanel_6 = value;
		Il2CppCodeGenWriteBarrier(&___emptyOrderPanel_6, value);
	}

	inline static int32_t get_offset_of_orderListContent_7() { return static_cast<int32_t>(offsetof(OrderPanelController_t3155145650, ___orderListContent_7)); }
	inline Transform_t1659122786 * get_orderListContent_7() const { return ___orderListContent_7; }
	inline Transform_t1659122786 ** get_address_of_orderListContent_7() { return &___orderListContent_7; }
	inline void set_orderListContent_7(Transform_t1659122786 * value)
	{
		___orderListContent_7 = value;
		Il2CppCodeGenWriteBarrier(&___orderListContent_7, value);
	}
};

struct OrderPanelController_t3155145650_StaticFields
{
public:
	// OrderPanelController OrderPanelController::instance
	OrderPanelController_t3155145650 * ___instance_5;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> OrderPanelController::<>f__am$cache3
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache3_8;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(OrderPanelController_t3155145650_StaticFields, ___instance_5)); }
	inline OrderPanelController_t3155145650 * get_instance_5() const { return ___instance_5; }
	inline OrderPanelController_t3155145650 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(OrderPanelController_t3155145650 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_8() { return static_cast<int32_t>(offsetof(OrderPanelController_t3155145650_StaticFields, ___U3CU3Ef__amU24cache3_8)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache3_8() const { return ___U3CU3Ef__amU24cache3_8; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache3_8() { return &___U3CU3Ef__amU24cache3_8; }
	inline void set_U3CU3Ef__amU24cache3_8(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache3_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache3_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
