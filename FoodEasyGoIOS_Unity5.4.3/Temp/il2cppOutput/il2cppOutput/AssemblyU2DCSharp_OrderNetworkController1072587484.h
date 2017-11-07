#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// OrderNetworkController
struct OrderNetworkController_t1072587484;
// System.String
struct String_t;
// LDFW.Network.LDFWWWWCallCoroutineWrapper
struct LDFWWWWCallCoroutineWrapper_t3645557397;

#include "AssemblyU2DCSharp_ServerCallController539269853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OrderNetworkController
struct  OrderNetworkController_t1072587484  : public ServerCallController_t539269853
{
public:
	// System.String OrderNetworkController::orderControllerURL
	String_t* ___orderControllerURL_5;
	// System.String OrderNetworkController::stripePaymentURL
	String_t* ___stripePaymentURL_6;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper OrderNetworkController::getOrderListCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getOrderListCall_7;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper OrderNetworkController::submitRestaurantGradeCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___submitRestaurantGradeCall_8;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper OrderNetworkController::submitDriverGradeCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___submitDriverGradeCall_9;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper OrderNetworkController::submitOrderCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___submitOrderCall_10;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper OrderNetworkController::confirmOrderCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___confirmOrderCall_11;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper OrderNetworkController::getOrderStatusCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getOrderStatusCall_12;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper OrderNetworkController::submitCommentCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___submitCommentCall_13;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper OrderNetworkController::getCouponStatusCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getCouponStatusCall_14;

public:
	inline static int32_t get_offset_of_orderControllerURL_5() { return static_cast<int32_t>(offsetof(OrderNetworkController_t1072587484, ___orderControllerURL_5)); }
	inline String_t* get_orderControllerURL_5() const { return ___orderControllerURL_5; }
	inline String_t** get_address_of_orderControllerURL_5() { return &___orderControllerURL_5; }
	inline void set_orderControllerURL_5(String_t* value)
	{
		___orderControllerURL_5 = value;
		Il2CppCodeGenWriteBarrier(&___orderControllerURL_5, value);
	}

	inline static int32_t get_offset_of_stripePaymentURL_6() { return static_cast<int32_t>(offsetof(OrderNetworkController_t1072587484, ___stripePaymentURL_6)); }
	inline String_t* get_stripePaymentURL_6() const { return ___stripePaymentURL_6; }
	inline String_t** get_address_of_stripePaymentURL_6() { return &___stripePaymentURL_6; }
	inline void set_stripePaymentURL_6(String_t* value)
	{
		___stripePaymentURL_6 = value;
		Il2CppCodeGenWriteBarrier(&___stripePaymentURL_6, value);
	}

	inline static int32_t get_offset_of_getOrderListCall_7() { return static_cast<int32_t>(offsetof(OrderNetworkController_t1072587484, ___getOrderListCall_7)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getOrderListCall_7() const { return ___getOrderListCall_7; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getOrderListCall_7() { return &___getOrderListCall_7; }
	inline void set_getOrderListCall_7(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getOrderListCall_7 = value;
		Il2CppCodeGenWriteBarrier(&___getOrderListCall_7, value);
	}

	inline static int32_t get_offset_of_submitRestaurantGradeCall_8() { return static_cast<int32_t>(offsetof(OrderNetworkController_t1072587484, ___submitRestaurantGradeCall_8)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_submitRestaurantGradeCall_8() const { return ___submitRestaurantGradeCall_8; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_submitRestaurantGradeCall_8() { return &___submitRestaurantGradeCall_8; }
	inline void set_submitRestaurantGradeCall_8(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___submitRestaurantGradeCall_8 = value;
		Il2CppCodeGenWriteBarrier(&___submitRestaurantGradeCall_8, value);
	}

	inline static int32_t get_offset_of_submitDriverGradeCall_9() { return static_cast<int32_t>(offsetof(OrderNetworkController_t1072587484, ___submitDriverGradeCall_9)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_submitDriverGradeCall_9() const { return ___submitDriverGradeCall_9; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_submitDriverGradeCall_9() { return &___submitDriverGradeCall_9; }
	inline void set_submitDriverGradeCall_9(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___submitDriverGradeCall_9 = value;
		Il2CppCodeGenWriteBarrier(&___submitDriverGradeCall_9, value);
	}

	inline static int32_t get_offset_of_submitOrderCall_10() { return static_cast<int32_t>(offsetof(OrderNetworkController_t1072587484, ___submitOrderCall_10)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_submitOrderCall_10() const { return ___submitOrderCall_10; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_submitOrderCall_10() { return &___submitOrderCall_10; }
	inline void set_submitOrderCall_10(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___submitOrderCall_10 = value;
		Il2CppCodeGenWriteBarrier(&___submitOrderCall_10, value);
	}

	inline static int32_t get_offset_of_confirmOrderCall_11() { return static_cast<int32_t>(offsetof(OrderNetworkController_t1072587484, ___confirmOrderCall_11)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_confirmOrderCall_11() const { return ___confirmOrderCall_11; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_confirmOrderCall_11() { return &___confirmOrderCall_11; }
	inline void set_confirmOrderCall_11(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___confirmOrderCall_11 = value;
		Il2CppCodeGenWriteBarrier(&___confirmOrderCall_11, value);
	}

	inline static int32_t get_offset_of_getOrderStatusCall_12() { return static_cast<int32_t>(offsetof(OrderNetworkController_t1072587484, ___getOrderStatusCall_12)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getOrderStatusCall_12() const { return ___getOrderStatusCall_12; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getOrderStatusCall_12() { return &___getOrderStatusCall_12; }
	inline void set_getOrderStatusCall_12(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getOrderStatusCall_12 = value;
		Il2CppCodeGenWriteBarrier(&___getOrderStatusCall_12, value);
	}

	inline static int32_t get_offset_of_submitCommentCall_13() { return static_cast<int32_t>(offsetof(OrderNetworkController_t1072587484, ___submitCommentCall_13)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_submitCommentCall_13() const { return ___submitCommentCall_13; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_submitCommentCall_13() { return &___submitCommentCall_13; }
	inline void set_submitCommentCall_13(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___submitCommentCall_13 = value;
		Il2CppCodeGenWriteBarrier(&___submitCommentCall_13, value);
	}

	inline static int32_t get_offset_of_getCouponStatusCall_14() { return static_cast<int32_t>(offsetof(OrderNetworkController_t1072587484, ___getCouponStatusCall_14)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getCouponStatusCall_14() const { return ___getCouponStatusCall_14; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getCouponStatusCall_14() { return &___getCouponStatusCall_14; }
	inline void set_getCouponStatusCall_14(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getCouponStatusCall_14 = value;
		Il2CppCodeGenWriteBarrier(&___getCouponStatusCall_14, value);
	}
};

struct OrderNetworkController_t1072587484_StaticFields
{
public:
	// OrderNetworkController OrderNetworkController::instance
	OrderNetworkController_t1072587484 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(OrderNetworkController_t1072587484_StaticFields, ___instance_4)); }
	inline OrderNetworkController_t1072587484 * get_instance_4() const { return ___instance_4; }
	inline OrderNetworkController_t1072587484 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(OrderNetworkController_t1072587484 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
