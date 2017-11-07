#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// AppDataController
struct AppDataController_t1568070471;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t2572795273;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AppDataController
struct  AppDataController_t1568070471  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> AppDataController::restaurantDishData
	Dictionary_2_t2572795273 * ___restaurantDishData_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> AppDataController::deliveryDestineTime
	Dictionary_2_t827649927 * ___deliveryDestineTime_4;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> AppDataController::addressData
	Dictionary_2_t2572795273 * ___addressData_5;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> AppDataController::creditCardData
	Dictionary_2_t2572795273 * ___creditCardData_6;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> AppDataController::couponData
	Dictionary_2_t2572795273 * ___couponData_7;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> AppDataController::commonCouponData
	Dictionary_2_t2572795273 * ___commonCouponData_8;
	// System.Int32 AppDataController::getDeliveryDestineTimeAttempts
	int32_t ___getDeliveryDestineTimeAttempts_9;
	// System.Int32 AppDataController::syncAddressListAttempts
	int32_t ___syncAddressListAttempts_10;
	// System.Int32 AppDataController::syncCreditCardListAttemps
	int32_t ___syncCreditCardListAttemps_11;
	// System.Int32 AppDataController::synCouponAttempts
	int32_t ___synCouponAttempts_12;

public:
	inline static int32_t get_offset_of_restaurantDishData_3() { return static_cast<int32_t>(offsetof(AppDataController_t1568070471, ___restaurantDishData_3)); }
	inline Dictionary_2_t2572795273 * get_restaurantDishData_3() const { return ___restaurantDishData_3; }
	inline Dictionary_2_t2572795273 ** get_address_of_restaurantDishData_3() { return &___restaurantDishData_3; }
	inline void set_restaurantDishData_3(Dictionary_2_t2572795273 * value)
	{
		___restaurantDishData_3 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantDishData_3, value);
	}

	inline static int32_t get_offset_of_deliveryDestineTime_4() { return static_cast<int32_t>(offsetof(AppDataController_t1568070471, ___deliveryDestineTime_4)); }
	inline Dictionary_2_t827649927 * get_deliveryDestineTime_4() const { return ___deliveryDestineTime_4; }
	inline Dictionary_2_t827649927 ** get_address_of_deliveryDestineTime_4() { return &___deliveryDestineTime_4; }
	inline void set_deliveryDestineTime_4(Dictionary_2_t827649927 * value)
	{
		___deliveryDestineTime_4 = value;
		Il2CppCodeGenWriteBarrier(&___deliveryDestineTime_4, value);
	}

	inline static int32_t get_offset_of_addressData_5() { return static_cast<int32_t>(offsetof(AppDataController_t1568070471, ___addressData_5)); }
	inline Dictionary_2_t2572795273 * get_addressData_5() const { return ___addressData_5; }
	inline Dictionary_2_t2572795273 ** get_address_of_addressData_5() { return &___addressData_5; }
	inline void set_addressData_5(Dictionary_2_t2572795273 * value)
	{
		___addressData_5 = value;
		Il2CppCodeGenWriteBarrier(&___addressData_5, value);
	}

	inline static int32_t get_offset_of_creditCardData_6() { return static_cast<int32_t>(offsetof(AppDataController_t1568070471, ___creditCardData_6)); }
	inline Dictionary_2_t2572795273 * get_creditCardData_6() const { return ___creditCardData_6; }
	inline Dictionary_2_t2572795273 ** get_address_of_creditCardData_6() { return &___creditCardData_6; }
	inline void set_creditCardData_6(Dictionary_2_t2572795273 * value)
	{
		___creditCardData_6 = value;
		Il2CppCodeGenWriteBarrier(&___creditCardData_6, value);
	}

	inline static int32_t get_offset_of_couponData_7() { return static_cast<int32_t>(offsetof(AppDataController_t1568070471, ___couponData_7)); }
	inline Dictionary_2_t2572795273 * get_couponData_7() const { return ___couponData_7; }
	inline Dictionary_2_t2572795273 ** get_address_of_couponData_7() { return &___couponData_7; }
	inline void set_couponData_7(Dictionary_2_t2572795273 * value)
	{
		___couponData_7 = value;
		Il2CppCodeGenWriteBarrier(&___couponData_7, value);
	}

	inline static int32_t get_offset_of_commonCouponData_8() { return static_cast<int32_t>(offsetof(AppDataController_t1568070471, ___commonCouponData_8)); }
	inline Dictionary_2_t2572795273 * get_commonCouponData_8() const { return ___commonCouponData_8; }
	inline Dictionary_2_t2572795273 ** get_address_of_commonCouponData_8() { return &___commonCouponData_8; }
	inline void set_commonCouponData_8(Dictionary_2_t2572795273 * value)
	{
		___commonCouponData_8 = value;
		Il2CppCodeGenWriteBarrier(&___commonCouponData_8, value);
	}

	inline static int32_t get_offset_of_getDeliveryDestineTimeAttempts_9() { return static_cast<int32_t>(offsetof(AppDataController_t1568070471, ___getDeliveryDestineTimeAttempts_9)); }
	inline int32_t get_getDeliveryDestineTimeAttempts_9() const { return ___getDeliveryDestineTimeAttempts_9; }
	inline int32_t* get_address_of_getDeliveryDestineTimeAttempts_9() { return &___getDeliveryDestineTimeAttempts_9; }
	inline void set_getDeliveryDestineTimeAttempts_9(int32_t value)
	{
		___getDeliveryDestineTimeAttempts_9 = value;
	}

	inline static int32_t get_offset_of_syncAddressListAttempts_10() { return static_cast<int32_t>(offsetof(AppDataController_t1568070471, ___syncAddressListAttempts_10)); }
	inline int32_t get_syncAddressListAttempts_10() const { return ___syncAddressListAttempts_10; }
	inline int32_t* get_address_of_syncAddressListAttempts_10() { return &___syncAddressListAttempts_10; }
	inline void set_syncAddressListAttempts_10(int32_t value)
	{
		___syncAddressListAttempts_10 = value;
	}

	inline static int32_t get_offset_of_syncCreditCardListAttemps_11() { return static_cast<int32_t>(offsetof(AppDataController_t1568070471, ___syncCreditCardListAttemps_11)); }
	inline int32_t get_syncCreditCardListAttemps_11() const { return ___syncCreditCardListAttemps_11; }
	inline int32_t* get_address_of_syncCreditCardListAttemps_11() { return &___syncCreditCardListAttemps_11; }
	inline void set_syncCreditCardListAttemps_11(int32_t value)
	{
		___syncCreditCardListAttemps_11 = value;
	}

	inline static int32_t get_offset_of_synCouponAttempts_12() { return static_cast<int32_t>(offsetof(AppDataController_t1568070471, ___synCouponAttempts_12)); }
	inline int32_t get_synCouponAttempts_12() const { return ___synCouponAttempts_12; }
	inline int32_t* get_address_of_synCouponAttempts_12() { return &___synCouponAttempts_12; }
	inline void set_synCouponAttempts_12(int32_t value)
	{
		___synCouponAttempts_12 = value;
	}
};

struct AppDataController_t1568070471_StaticFields
{
public:
	// AppDataController AppDataController::instance
	AppDataController_t1568070471 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(AppDataController_t1568070471_StaticFields, ___instance_2)); }
	inline AppDataController_t1568070471 * get_instance_2() const { return ___instance_2; }
	inline AppDataController_t1568070471 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(AppDataController_t1568070471 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
