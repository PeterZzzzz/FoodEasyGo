#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CouponPanelController
struct CouponPanelController_t1015264154;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CouponPanelController
struct  CouponPanelController_t1015264154  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.UI.ScrollRect CouponPanelController::defaultScrollRect
	ScrollRect_t3606982749 * ___defaultScrollRect_6;
	// UnityEngine.GameObject CouponPanelController::discountCouponPrefab
	GameObject_t3674682005 * ___discountCouponPrefab_7;
	// UnityEngine.GameObject CouponPanelController::freeDeliveryCouponPrefab
	GameObject_t3674682005 * ___freeDeliveryCouponPrefab_8;

public:
	inline static int32_t get_offset_of_defaultScrollRect_6() { return static_cast<int32_t>(offsetof(CouponPanelController_t1015264154, ___defaultScrollRect_6)); }
	inline ScrollRect_t3606982749 * get_defaultScrollRect_6() const { return ___defaultScrollRect_6; }
	inline ScrollRect_t3606982749 ** get_address_of_defaultScrollRect_6() { return &___defaultScrollRect_6; }
	inline void set_defaultScrollRect_6(ScrollRect_t3606982749 * value)
	{
		___defaultScrollRect_6 = value;
		Il2CppCodeGenWriteBarrier(&___defaultScrollRect_6, value);
	}

	inline static int32_t get_offset_of_discountCouponPrefab_7() { return static_cast<int32_t>(offsetof(CouponPanelController_t1015264154, ___discountCouponPrefab_7)); }
	inline GameObject_t3674682005 * get_discountCouponPrefab_7() const { return ___discountCouponPrefab_7; }
	inline GameObject_t3674682005 ** get_address_of_discountCouponPrefab_7() { return &___discountCouponPrefab_7; }
	inline void set_discountCouponPrefab_7(GameObject_t3674682005 * value)
	{
		___discountCouponPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___discountCouponPrefab_7, value);
	}

	inline static int32_t get_offset_of_freeDeliveryCouponPrefab_8() { return static_cast<int32_t>(offsetof(CouponPanelController_t1015264154, ___freeDeliveryCouponPrefab_8)); }
	inline GameObject_t3674682005 * get_freeDeliveryCouponPrefab_8() const { return ___freeDeliveryCouponPrefab_8; }
	inline GameObject_t3674682005 ** get_address_of_freeDeliveryCouponPrefab_8() { return &___freeDeliveryCouponPrefab_8; }
	inline void set_freeDeliveryCouponPrefab_8(GameObject_t3674682005 * value)
	{
		___freeDeliveryCouponPrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___freeDeliveryCouponPrefab_8, value);
	}
};

struct CouponPanelController_t1015264154_StaticFields
{
public:
	// CouponPanelController CouponPanelController::instance
	CouponPanelController_t1015264154 * ___instance_5;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> CouponPanelController::<>f__am$cache4
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache4_9;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(CouponPanelController_t1015264154_StaticFields, ___instance_5)); }
	inline CouponPanelController_t1015264154 * get_instance_5() const { return ___instance_5; }
	inline CouponPanelController_t1015264154 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(CouponPanelController_t1015264154 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_9() { return static_cast<int32_t>(offsetof(CouponPanelController_t1015264154_StaticFields, ___U3CU3Ef__amU24cache4_9)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache4_9() const { return ___U3CU3Ef__amU24cache4_9; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache4_9() { return &___U3CU3Ef__amU24cache4_9; }
	inline void set_U3CU3Ef__amU24cache4_9(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache4_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
