#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PaymentPanelController
struct PaymentPanelController_t3853957626;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// UnityEngine.Transform
struct Transform_t1659122786;
// PaymentPanelPaymentBarController
struct PaymentPanelPaymentBarController_t3312808071;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaymentPanelController
struct  PaymentPanelController_t3853957626  : public BasePanelController_t1482191247
{
public:
	// UnityEngine.GameObject PaymentPanelController::paymentBarPrefab
	GameObject_t3674682005 * ___paymentBarPrefab_6;
	// UnityEngine.UI.ScrollRect PaymentPanelController::defaultScrollRect
	ScrollRect_t3606982749 * ___defaultScrollRect_7;
	// UnityEngine.Transform PaymentPanelController::modifyPaymentPanel
	Transform_t1659122786 * ___modifyPaymentPanel_8;
	// PaymentPanelPaymentBarController PaymentPanelController::currentBar
	PaymentPanelPaymentBarController_t3312808071 * ___currentBar_9;

public:
	inline static int32_t get_offset_of_paymentBarPrefab_6() { return static_cast<int32_t>(offsetof(PaymentPanelController_t3853957626, ___paymentBarPrefab_6)); }
	inline GameObject_t3674682005 * get_paymentBarPrefab_6() const { return ___paymentBarPrefab_6; }
	inline GameObject_t3674682005 ** get_address_of_paymentBarPrefab_6() { return &___paymentBarPrefab_6; }
	inline void set_paymentBarPrefab_6(GameObject_t3674682005 * value)
	{
		___paymentBarPrefab_6 = value;
		Il2CppCodeGenWriteBarrier(&___paymentBarPrefab_6, value);
	}

	inline static int32_t get_offset_of_defaultScrollRect_7() { return static_cast<int32_t>(offsetof(PaymentPanelController_t3853957626, ___defaultScrollRect_7)); }
	inline ScrollRect_t3606982749 * get_defaultScrollRect_7() const { return ___defaultScrollRect_7; }
	inline ScrollRect_t3606982749 ** get_address_of_defaultScrollRect_7() { return &___defaultScrollRect_7; }
	inline void set_defaultScrollRect_7(ScrollRect_t3606982749 * value)
	{
		___defaultScrollRect_7 = value;
		Il2CppCodeGenWriteBarrier(&___defaultScrollRect_7, value);
	}

	inline static int32_t get_offset_of_modifyPaymentPanel_8() { return static_cast<int32_t>(offsetof(PaymentPanelController_t3853957626, ___modifyPaymentPanel_8)); }
	inline Transform_t1659122786 * get_modifyPaymentPanel_8() const { return ___modifyPaymentPanel_8; }
	inline Transform_t1659122786 ** get_address_of_modifyPaymentPanel_8() { return &___modifyPaymentPanel_8; }
	inline void set_modifyPaymentPanel_8(Transform_t1659122786 * value)
	{
		___modifyPaymentPanel_8 = value;
		Il2CppCodeGenWriteBarrier(&___modifyPaymentPanel_8, value);
	}

	inline static int32_t get_offset_of_currentBar_9() { return static_cast<int32_t>(offsetof(PaymentPanelController_t3853957626, ___currentBar_9)); }
	inline PaymentPanelPaymentBarController_t3312808071 * get_currentBar_9() const { return ___currentBar_9; }
	inline PaymentPanelPaymentBarController_t3312808071 ** get_address_of_currentBar_9() { return &___currentBar_9; }
	inline void set_currentBar_9(PaymentPanelPaymentBarController_t3312808071 * value)
	{
		___currentBar_9 = value;
		Il2CppCodeGenWriteBarrier(&___currentBar_9, value);
	}
};

struct PaymentPanelController_t3853957626_StaticFields
{
public:
	// PaymentPanelController PaymentPanelController::instance
	PaymentPanelController_t3853957626 * ___instance_5;
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> PaymentPanelController::<>f__am$cache5
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache5_10;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(PaymentPanelController_t3853957626_StaticFields, ___instance_5)); }
	inline PaymentPanelController_t3853957626 * get_instance_5() const { return ___instance_5; }
	inline PaymentPanelController_t3853957626 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(PaymentPanelController_t3853957626 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_10() { return static_cast<int32_t>(offsetof(PaymentPanelController_t3853957626_StaticFields, ___U3CU3Ef__amU24cache5_10)); }
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
