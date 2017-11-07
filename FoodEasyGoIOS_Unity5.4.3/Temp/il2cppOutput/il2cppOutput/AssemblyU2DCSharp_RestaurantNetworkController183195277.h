#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RestaurantNetworkController
struct RestaurantNetworkController_t183195277;
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

// RestaurantNetworkController
struct  RestaurantNetworkController_t183195277  : public ServerCallController_t539269853
{
public:
	// System.String RestaurantNetworkController::restaurantControllerURL
	String_t* ___restaurantControllerURL_5;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper RestaurantNetworkController::getRestaurantRecommendedListCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getRestaurantRecommendedListCall_6;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper RestaurantNetworkController::getRestaurantCategoryListCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getRestaurantCategoryListCall_7;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper RestaurantNetworkController::getRestaurantListCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getRestaurantListCall_8;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper RestaurantNetworkController::getTargetRestaurantListCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getTargetRestaurantListCall_9;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper RestaurantNetworkController::getRestaurantDetailCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getRestaurantDetailCall_10;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper RestaurantNetworkController::getRestaurantCommentCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getRestaurantCommentCall_11;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper RestaurantNetworkController::postRestaurantCommentCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___postRestaurantCommentCall_12;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper RestaurantNetworkController::getRestaurantDishDetail
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getRestaurantDishDetail_13;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper RestaurantNetworkController::getRestaurantListDeliverFeesCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getRestaurantListDeliverFeesCall_14;

public:
	inline static int32_t get_offset_of_restaurantControllerURL_5() { return static_cast<int32_t>(offsetof(RestaurantNetworkController_t183195277, ___restaurantControllerURL_5)); }
	inline String_t* get_restaurantControllerURL_5() const { return ___restaurantControllerURL_5; }
	inline String_t** get_address_of_restaurantControllerURL_5() { return &___restaurantControllerURL_5; }
	inline void set_restaurantControllerURL_5(String_t* value)
	{
		___restaurantControllerURL_5 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantControllerURL_5, value);
	}

	inline static int32_t get_offset_of_getRestaurantRecommendedListCall_6() { return static_cast<int32_t>(offsetof(RestaurantNetworkController_t183195277, ___getRestaurantRecommendedListCall_6)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getRestaurantRecommendedListCall_6() const { return ___getRestaurantRecommendedListCall_6; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getRestaurantRecommendedListCall_6() { return &___getRestaurantRecommendedListCall_6; }
	inline void set_getRestaurantRecommendedListCall_6(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getRestaurantRecommendedListCall_6 = value;
		Il2CppCodeGenWriteBarrier(&___getRestaurantRecommendedListCall_6, value);
	}

	inline static int32_t get_offset_of_getRestaurantCategoryListCall_7() { return static_cast<int32_t>(offsetof(RestaurantNetworkController_t183195277, ___getRestaurantCategoryListCall_7)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getRestaurantCategoryListCall_7() const { return ___getRestaurantCategoryListCall_7; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getRestaurantCategoryListCall_7() { return &___getRestaurantCategoryListCall_7; }
	inline void set_getRestaurantCategoryListCall_7(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getRestaurantCategoryListCall_7 = value;
		Il2CppCodeGenWriteBarrier(&___getRestaurantCategoryListCall_7, value);
	}

	inline static int32_t get_offset_of_getRestaurantListCall_8() { return static_cast<int32_t>(offsetof(RestaurantNetworkController_t183195277, ___getRestaurantListCall_8)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getRestaurantListCall_8() const { return ___getRestaurantListCall_8; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getRestaurantListCall_8() { return &___getRestaurantListCall_8; }
	inline void set_getRestaurantListCall_8(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getRestaurantListCall_8 = value;
		Il2CppCodeGenWriteBarrier(&___getRestaurantListCall_8, value);
	}

	inline static int32_t get_offset_of_getTargetRestaurantListCall_9() { return static_cast<int32_t>(offsetof(RestaurantNetworkController_t183195277, ___getTargetRestaurantListCall_9)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getTargetRestaurantListCall_9() const { return ___getTargetRestaurantListCall_9; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getTargetRestaurantListCall_9() { return &___getTargetRestaurantListCall_9; }
	inline void set_getTargetRestaurantListCall_9(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getTargetRestaurantListCall_9 = value;
		Il2CppCodeGenWriteBarrier(&___getTargetRestaurantListCall_9, value);
	}

	inline static int32_t get_offset_of_getRestaurantDetailCall_10() { return static_cast<int32_t>(offsetof(RestaurantNetworkController_t183195277, ___getRestaurantDetailCall_10)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getRestaurantDetailCall_10() const { return ___getRestaurantDetailCall_10; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getRestaurantDetailCall_10() { return &___getRestaurantDetailCall_10; }
	inline void set_getRestaurantDetailCall_10(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getRestaurantDetailCall_10 = value;
		Il2CppCodeGenWriteBarrier(&___getRestaurantDetailCall_10, value);
	}

	inline static int32_t get_offset_of_getRestaurantCommentCall_11() { return static_cast<int32_t>(offsetof(RestaurantNetworkController_t183195277, ___getRestaurantCommentCall_11)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getRestaurantCommentCall_11() const { return ___getRestaurantCommentCall_11; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getRestaurantCommentCall_11() { return &___getRestaurantCommentCall_11; }
	inline void set_getRestaurantCommentCall_11(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getRestaurantCommentCall_11 = value;
		Il2CppCodeGenWriteBarrier(&___getRestaurantCommentCall_11, value);
	}

	inline static int32_t get_offset_of_postRestaurantCommentCall_12() { return static_cast<int32_t>(offsetof(RestaurantNetworkController_t183195277, ___postRestaurantCommentCall_12)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_postRestaurantCommentCall_12() const { return ___postRestaurantCommentCall_12; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_postRestaurantCommentCall_12() { return &___postRestaurantCommentCall_12; }
	inline void set_postRestaurantCommentCall_12(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___postRestaurantCommentCall_12 = value;
		Il2CppCodeGenWriteBarrier(&___postRestaurantCommentCall_12, value);
	}

	inline static int32_t get_offset_of_getRestaurantDishDetail_13() { return static_cast<int32_t>(offsetof(RestaurantNetworkController_t183195277, ___getRestaurantDishDetail_13)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getRestaurantDishDetail_13() const { return ___getRestaurantDishDetail_13; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getRestaurantDishDetail_13() { return &___getRestaurantDishDetail_13; }
	inline void set_getRestaurantDishDetail_13(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getRestaurantDishDetail_13 = value;
		Il2CppCodeGenWriteBarrier(&___getRestaurantDishDetail_13, value);
	}

	inline static int32_t get_offset_of_getRestaurantListDeliverFeesCall_14() { return static_cast<int32_t>(offsetof(RestaurantNetworkController_t183195277, ___getRestaurantListDeliverFeesCall_14)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getRestaurantListDeliverFeesCall_14() const { return ___getRestaurantListDeliverFeesCall_14; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getRestaurantListDeliverFeesCall_14() { return &___getRestaurantListDeliverFeesCall_14; }
	inline void set_getRestaurantListDeliverFeesCall_14(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getRestaurantListDeliverFeesCall_14 = value;
		Il2CppCodeGenWriteBarrier(&___getRestaurantListDeliverFeesCall_14, value);
	}
};

struct RestaurantNetworkController_t183195277_StaticFields
{
public:
	// RestaurantNetworkController RestaurantNetworkController::instance
	RestaurantNetworkController_t183195277 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(RestaurantNetworkController_t183195277_StaticFields, ___instance_4)); }
	inline RestaurantNetworkController_t183195277 * get_instance_4() const { return ___instance_4; }
	inline RestaurantNetworkController_t183195277 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(RestaurantNetworkController_t183195277 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
