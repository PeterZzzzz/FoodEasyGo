#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CartController
struct CartController_t4265484028;
// CartData
struct CartData_t70693642;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CartController
struct  CartController_t4265484028  : public MonoBehaviour_t667441552
{
public:
	// CartData CartController::cart
	CartData_t70693642 * ___cart_3;
	// System.String CartController::cartID
	String_t* ___cartID_4;
	// System.Int32 CartController::getCartDetailAttemps
	int32_t ___getCartDetailAttemps_5;

public:
	inline static int32_t get_offset_of_cart_3() { return static_cast<int32_t>(offsetof(CartController_t4265484028, ___cart_3)); }
	inline CartData_t70693642 * get_cart_3() const { return ___cart_3; }
	inline CartData_t70693642 ** get_address_of_cart_3() { return &___cart_3; }
	inline void set_cart_3(CartData_t70693642 * value)
	{
		___cart_3 = value;
		Il2CppCodeGenWriteBarrier(&___cart_3, value);
	}

	inline static int32_t get_offset_of_cartID_4() { return static_cast<int32_t>(offsetof(CartController_t4265484028, ___cartID_4)); }
	inline String_t* get_cartID_4() const { return ___cartID_4; }
	inline String_t** get_address_of_cartID_4() { return &___cartID_4; }
	inline void set_cartID_4(String_t* value)
	{
		___cartID_4 = value;
		Il2CppCodeGenWriteBarrier(&___cartID_4, value);
	}

	inline static int32_t get_offset_of_getCartDetailAttemps_5() { return static_cast<int32_t>(offsetof(CartController_t4265484028, ___getCartDetailAttemps_5)); }
	inline int32_t get_getCartDetailAttemps_5() const { return ___getCartDetailAttemps_5; }
	inline int32_t* get_address_of_getCartDetailAttemps_5() { return &___getCartDetailAttemps_5; }
	inline void set_getCartDetailAttemps_5(int32_t value)
	{
		___getCartDetailAttemps_5 = value;
	}
};

struct CartController_t4265484028_StaticFields
{
public:
	// CartController CartController::instance
	CartController_t4265484028 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(CartController_t4265484028_StaticFields, ___instance_2)); }
	inline CartController_t4265484028 * get_instance_2() const { return ___instance_2; }
	inline CartController_t4265484028 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(CartController_t4265484028 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
