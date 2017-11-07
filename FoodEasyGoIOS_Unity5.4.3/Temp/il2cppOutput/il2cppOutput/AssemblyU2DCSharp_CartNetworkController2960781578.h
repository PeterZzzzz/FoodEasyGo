#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CartNetworkController
struct CartNetworkController_t2960781578;
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

// CartNetworkController
struct  CartNetworkController_t2960781578  : public ServerCallController_t539269853
{
public:
	// System.String CartNetworkController::cartControllerURL
	String_t* ___cartControllerURL_5;
	// System.String CartNetworkController::accessControllerURL
	String_t* ___accessControllerURL_6;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper CartNetworkController::getCartDetailsCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getCartDetailsCall_7;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper CartNetworkController::deleteCartCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___deleteCartCall_8;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper CartNetworkController::deleteCartGoodCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___deleteCartGoodCall_9;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper CartNetworkController::deleteCartRestaurantCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___deleteCartRestaurantCall_10;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper CartNetworkController::deleteCartDetailCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___deleteCartDetailCall_11;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper CartNetworkController::addToCartCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___addToCartCall_12;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper CartNetworkController::updateCartDetailCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___updateCartDetailCall_13;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper CartNetworkController::getRegionDeliveryFeeCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getRegionDeliveryFeeCall_14;

public:
	inline static int32_t get_offset_of_cartControllerURL_5() { return static_cast<int32_t>(offsetof(CartNetworkController_t2960781578, ___cartControllerURL_5)); }
	inline String_t* get_cartControllerURL_5() const { return ___cartControllerURL_5; }
	inline String_t** get_address_of_cartControllerURL_5() { return &___cartControllerURL_5; }
	inline void set_cartControllerURL_5(String_t* value)
	{
		___cartControllerURL_5 = value;
		Il2CppCodeGenWriteBarrier(&___cartControllerURL_5, value);
	}

	inline static int32_t get_offset_of_accessControllerURL_6() { return static_cast<int32_t>(offsetof(CartNetworkController_t2960781578, ___accessControllerURL_6)); }
	inline String_t* get_accessControllerURL_6() const { return ___accessControllerURL_6; }
	inline String_t** get_address_of_accessControllerURL_6() { return &___accessControllerURL_6; }
	inline void set_accessControllerURL_6(String_t* value)
	{
		___accessControllerURL_6 = value;
		Il2CppCodeGenWriteBarrier(&___accessControllerURL_6, value);
	}

	inline static int32_t get_offset_of_getCartDetailsCall_7() { return static_cast<int32_t>(offsetof(CartNetworkController_t2960781578, ___getCartDetailsCall_7)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getCartDetailsCall_7() const { return ___getCartDetailsCall_7; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getCartDetailsCall_7() { return &___getCartDetailsCall_7; }
	inline void set_getCartDetailsCall_7(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getCartDetailsCall_7 = value;
		Il2CppCodeGenWriteBarrier(&___getCartDetailsCall_7, value);
	}

	inline static int32_t get_offset_of_deleteCartCall_8() { return static_cast<int32_t>(offsetof(CartNetworkController_t2960781578, ___deleteCartCall_8)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_deleteCartCall_8() const { return ___deleteCartCall_8; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_deleteCartCall_8() { return &___deleteCartCall_8; }
	inline void set_deleteCartCall_8(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___deleteCartCall_8 = value;
		Il2CppCodeGenWriteBarrier(&___deleteCartCall_8, value);
	}

	inline static int32_t get_offset_of_deleteCartGoodCall_9() { return static_cast<int32_t>(offsetof(CartNetworkController_t2960781578, ___deleteCartGoodCall_9)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_deleteCartGoodCall_9() const { return ___deleteCartGoodCall_9; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_deleteCartGoodCall_9() { return &___deleteCartGoodCall_9; }
	inline void set_deleteCartGoodCall_9(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___deleteCartGoodCall_9 = value;
		Il2CppCodeGenWriteBarrier(&___deleteCartGoodCall_9, value);
	}

	inline static int32_t get_offset_of_deleteCartRestaurantCall_10() { return static_cast<int32_t>(offsetof(CartNetworkController_t2960781578, ___deleteCartRestaurantCall_10)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_deleteCartRestaurantCall_10() const { return ___deleteCartRestaurantCall_10; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_deleteCartRestaurantCall_10() { return &___deleteCartRestaurantCall_10; }
	inline void set_deleteCartRestaurantCall_10(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___deleteCartRestaurantCall_10 = value;
		Il2CppCodeGenWriteBarrier(&___deleteCartRestaurantCall_10, value);
	}

	inline static int32_t get_offset_of_deleteCartDetailCall_11() { return static_cast<int32_t>(offsetof(CartNetworkController_t2960781578, ___deleteCartDetailCall_11)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_deleteCartDetailCall_11() const { return ___deleteCartDetailCall_11; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_deleteCartDetailCall_11() { return &___deleteCartDetailCall_11; }
	inline void set_deleteCartDetailCall_11(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___deleteCartDetailCall_11 = value;
		Il2CppCodeGenWriteBarrier(&___deleteCartDetailCall_11, value);
	}

	inline static int32_t get_offset_of_addToCartCall_12() { return static_cast<int32_t>(offsetof(CartNetworkController_t2960781578, ___addToCartCall_12)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_addToCartCall_12() const { return ___addToCartCall_12; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_addToCartCall_12() { return &___addToCartCall_12; }
	inline void set_addToCartCall_12(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___addToCartCall_12 = value;
		Il2CppCodeGenWriteBarrier(&___addToCartCall_12, value);
	}

	inline static int32_t get_offset_of_updateCartDetailCall_13() { return static_cast<int32_t>(offsetof(CartNetworkController_t2960781578, ___updateCartDetailCall_13)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_updateCartDetailCall_13() const { return ___updateCartDetailCall_13; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_updateCartDetailCall_13() { return &___updateCartDetailCall_13; }
	inline void set_updateCartDetailCall_13(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___updateCartDetailCall_13 = value;
		Il2CppCodeGenWriteBarrier(&___updateCartDetailCall_13, value);
	}

	inline static int32_t get_offset_of_getRegionDeliveryFeeCall_14() { return static_cast<int32_t>(offsetof(CartNetworkController_t2960781578, ___getRegionDeliveryFeeCall_14)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getRegionDeliveryFeeCall_14() const { return ___getRegionDeliveryFeeCall_14; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getRegionDeliveryFeeCall_14() { return &___getRegionDeliveryFeeCall_14; }
	inline void set_getRegionDeliveryFeeCall_14(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getRegionDeliveryFeeCall_14 = value;
		Il2CppCodeGenWriteBarrier(&___getRegionDeliveryFeeCall_14, value);
	}
};

struct CartNetworkController_t2960781578_StaticFields
{
public:
	// CartNetworkController CartNetworkController::instance
	CartNetworkController_t2960781578 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(CartNetworkController_t2960781578_StaticFields, ___instance_4)); }
	inline CartNetworkController_t2960781578 * get_instance_4() const { return ___instance_4; }
	inline CartNetworkController_t2960781578 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(CartNetworkController_t2960781578 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
