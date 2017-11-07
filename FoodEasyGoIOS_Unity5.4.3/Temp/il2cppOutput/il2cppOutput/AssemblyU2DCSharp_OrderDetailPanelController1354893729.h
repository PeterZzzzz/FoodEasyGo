#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OrderDetailPanelController
struct OrderDetailPanelController_t1354893729;
// JSONObject
struct JSONObject_t1752376903;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t3606982749;
// TextController
struct TextController_t3861806281;
// UnityEngine.Transform
struct Transform_t1659122786;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;

#include "AssemblyU2DCSharp_BasePanelController1482191247.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OrderDetailPanelController
struct  OrderDetailPanelController_t1354893729  : public BasePanelController_t1482191247
{
public:
	// JSONObject OrderDetailPanelController::_orderData
	JSONObject_t1752376903 * ____orderData_6;
	// JSONObject OrderDetailPanelController::_subOrderData
	JSONObject_t1752376903 * ____subOrderData_7;
	// UnityEngine.UI.ScrollRect OrderDetailPanelController::defaultScrollRect
	ScrollRect_t3606982749 * ___defaultScrollRect_8;
	// TextController OrderDetailPanelController::restaurant
	TextController_t3861806281 * ___restaurant_9;
	// UnityEngine.Transform OrderDetailPanelController::dishBar
	Transform_t1659122786 * ___dishBar_10;
	// UnityEngine.Transform OrderDetailPanelController::coupon
	Transform_t1659122786 * ___coupon_11;
	// UnityEngine.Transform OrderDetailPanelController::fees
	Transform_t1659122786 * ___fees_12;
	// TextController OrderDetailPanelController::delivery
	TextController_t3861806281 * ___delivery_13;
	// TextController OrderDetailPanelController::wechat
	TextController_t3861806281 * ___wechat_14;
	// TextController OrderDetailPanelController::orderID
	TextController_t3861806281 * ___orderID_15;
	// TextController OrderDetailPanelController::contactPerson
	TextController_t3861806281 * ___contactPerson_16;
	// TextController OrderDetailPanelController::email
	TextController_t3861806281 * ___email_17;
	// TextController OrderDetailPanelController::address
	TextController_t3861806281 * ___address_18;
	// TextController OrderDetailPanelController::paymentMethod
	TextController_t3861806281 * ___paymentMethod_19;
	// TextController OrderDetailPanelController::orderTime
	TextController_t3861806281 * ___orderTime_20;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> OrderDetailPanelController::tempGO
	List_1_t747900261 * ___tempGO_21;

public:
	inline static int32_t get_offset_of__orderData_6() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ____orderData_6)); }
	inline JSONObject_t1752376903 * get__orderData_6() const { return ____orderData_6; }
	inline JSONObject_t1752376903 ** get_address_of__orderData_6() { return &____orderData_6; }
	inline void set__orderData_6(JSONObject_t1752376903 * value)
	{
		____orderData_6 = value;
		Il2CppCodeGenWriteBarrier(&____orderData_6, value);
	}

	inline static int32_t get_offset_of__subOrderData_7() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ____subOrderData_7)); }
	inline JSONObject_t1752376903 * get__subOrderData_7() const { return ____subOrderData_7; }
	inline JSONObject_t1752376903 ** get_address_of__subOrderData_7() { return &____subOrderData_7; }
	inline void set__subOrderData_7(JSONObject_t1752376903 * value)
	{
		____subOrderData_7 = value;
		Il2CppCodeGenWriteBarrier(&____subOrderData_7, value);
	}

	inline static int32_t get_offset_of_defaultScrollRect_8() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___defaultScrollRect_8)); }
	inline ScrollRect_t3606982749 * get_defaultScrollRect_8() const { return ___defaultScrollRect_8; }
	inline ScrollRect_t3606982749 ** get_address_of_defaultScrollRect_8() { return &___defaultScrollRect_8; }
	inline void set_defaultScrollRect_8(ScrollRect_t3606982749 * value)
	{
		___defaultScrollRect_8 = value;
		Il2CppCodeGenWriteBarrier(&___defaultScrollRect_8, value);
	}

	inline static int32_t get_offset_of_restaurant_9() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___restaurant_9)); }
	inline TextController_t3861806281 * get_restaurant_9() const { return ___restaurant_9; }
	inline TextController_t3861806281 ** get_address_of_restaurant_9() { return &___restaurant_9; }
	inline void set_restaurant_9(TextController_t3861806281 * value)
	{
		___restaurant_9 = value;
		Il2CppCodeGenWriteBarrier(&___restaurant_9, value);
	}

	inline static int32_t get_offset_of_dishBar_10() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___dishBar_10)); }
	inline Transform_t1659122786 * get_dishBar_10() const { return ___dishBar_10; }
	inline Transform_t1659122786 ** get_address_of_dishBar_10() { return &___dishBar_10; }
	inline void set_dishBar_10(Transform_t1659122786 * value)
	{
		___dishBar_10 = value;
		Il2CppCodeGenWriteBarrier(&___dishBar_10, value);
	}

	inline static int32_t get_offset_of_coupon_11() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___coupon_11)); }
	inline Transform_t1659122786 * get_coupon_11() const { return ___coupon_11; }
	inline Transform_t1659122786 ** get_address_of_coupon_11() { return &___coupon_11; }
	inline void set_coupon_11(Transform_t1659122786 * value)
	{
		___coupon_11 = value;
		Il2CppCodeGenWriteBarrier(&___coupon_11, value);
	}

	inline static int32_t get_offset_of_fees_12() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___fees_12)); }
	inline Transform_t1659122786 * get_fees_12() const { return ___fees_12; }
	inline Transform_t1659122786 ** get_address_of_fees_12() { return &___fees_12; }
	inline void set_fees_12(Transform_t1659122786 * value)
	{
		___fees_12 = value;
		Il2CppCodeGenWriteBarrier(&___fees_12, value);
	}

	inline static int32_t get_offset_of_delivery_13() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___delivery_13)); }
	inline TextController_t3861806281 * get_delivery_13() const { return ___delivery_13; }
	inline TextController_t3861806281 ** get_address_of_delivery_13() { return &___delivery_13; }
	inline void set_delivery_13(TextController_t3861806281 * value)
	{
		___delivery_13 = value;
		Il2CppCodeGenWriteBarrier(&___delivery_13, value);
	}

	inline static int32_t get_offset_of_wechat_14() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___wechat_14)); }
	inline TextController_t3861806281 * get_wechat_14() const { return ___wechat_14; }
	inline TextController_t3861806281 ** get_address_of_wechat_14() { return &___wechat_14; }
	inline void set_wechat_14(TextController_t3861806281 * value)
	{
		___wechat_14 = value;
		Il2CppCodeGenWriteBarrier(&___wechat_14, value);
	}

	inline static int32_t get_offset_of_orderID_15() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___orderID_15)); }
	inline TextController_t3861806281 * get_orderID_15() const { return ___orderID_15; }
	inline TextController_t3861806281 ** get_address_of_orderID_15() { return &___orderID_15; }
	inline void set_orderID_15(TextController_t3861806281 * value)
	{
		___orderID_15 = value;
		Il2CppCodeGenWriteBarrier(&___orderID_15, value);
	}

	inline static int32_t get_offset_of_contactPerson_16() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___contactPerson_16)); }
	inline TextController_t3861806281 * get_contactPerson_16() const { return ___contactPerson_16; }
	inline TextController_t3861806281 ** get_address_of_contactPerson_16() { return &___contactPerson_16; }
	inline void set_contactPerson_16(TextController_t3861806281 * value)
	{
		___contactPerson_16 = value;
		Il2CppCodeGenWriteBarrier(&___contactPerson_16, value);
	}

	inline static int32_t get_offset_of_email_17() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___email_17)); }
	inline TextController_t3861806281 * get_email_17() const { return ___email_17; }
	inline TextController_t3861806281 ** get_address_of_email_17() { return &___email_17; }
	inline void set_email_17(TextController_t3861806281 * value)
	{
		___email_17 = value;
		Il2CppCodeGenWriteBarrier(&___email_17, value);
	}

	inline static int32_t get_offset_of_address_18() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___address_18)); }
	inline TextController_t3861806281 * get_address_18() const { return ___address_18; }
	inline TextController_t3861806281 ** get_address_of_address_18() { return &___address_18; }
	inline void set_address_18(TextController_t3861806281 * value)
	{
		___address_18 = value;
		Il2CppCodeGenWriteBarrier(&___address_18, value);
	}

	inline static int32_t get_offset_of_paymentMethod_19() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___paymentMethod_19)); }
	inline TextController_t3861806281 * get_paymentMethod_19() const { return ___paymentMethod_19; }
	inline TextController_t3861806281 ** get_address_of_paymentMethod_19() { return &___paymentMethod_19; }
	inline void set_paymentMethod_19(TextController_t3861806281 * value)
	{
		___paymentMethod_19 = value;
		Il2CppCodeGenWriteBarrier(&___paymentMethod_19, value);
	}

	inline static int32_t get_offset_of_orderTime_20() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___orderTime_20)); }
	inline TextController_t3861806281 * get_orderTime_20() const { return ___orderTime_20; }
	inline TextController_t3861806281 ** get_address_of_orderTime_20() { return &___orderTime_20; }
	inline void set_orderTime_20(TextController_t3861806281 * value)
	{
		___orderTime_20 = value;
		Il2CppCodeGenWriteBarrier(&___orderTime_20, value);
	}

	inline static int32_t get_offset_of_tempGO_21() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729, ___tempGO_21)); }
	inline List_1_t747900261 * get_tempGO_21() const { return ___tempGO_21; }
	inline List_1_t747900261 ** get_address_of_tempGO_21() { return &___tempGO_21; }
	inline void set_tempGO_21(List_1_t747900261 * value)
	{
		___tempGO_21 = value;
		Il2CppCodeGenWriteBarrier(&___tempGO_21, value);
	}
};

struct OrderDetailPanelController_t1354893729_StaticFields
{
public:
	// OrderDetailPanelController OrderDetailPanelController::instance
	OrderDetailPanelController_t1354893729 * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(OrderDetailPanelController_t1354893729_StaticFields, ___instance_5)); }
	inline OrderDetailPanelController_t1354893729 * get_instance_5() const { return ___instance_5; }
	inline OrderDetailPanelController_t1354893729 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(OrderDetailPanelController_t1354893729 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier(&___instance_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
