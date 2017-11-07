#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RestaurantCacheController
struct RestaurantCacheController_t1903574945;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t2572795273;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantCacheController
struct  RestaurantCacheController_t1903574945  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> RestaurantCacheController::restaurantDictionary
	Dictionary_2_t2572795273 * ___restaurantDictionary_3;
	// System.Collections.Generic.List`1<System.String> RestaurantCacheController::restaurantIDList
	List_1_t1375417109 * ___restaurantIDList_4;
	// System.Collections.Generic.Dictionary`2<System.String,JSONObject> RestaurantCacheController::dishDictionary
	Dictionary_2_t2572795273 * ___dishDictionary_5;
	// System.Collections.Generic.List`1<System.String> RestaurantCacheController::dishIDList
	List_1_t1375417109 * ___dishIDList_6;

public:
	inline static int32_t get_offset_of_restaurantDictionary_3() { return static_cast<int32_t>(offsetof(RestaurantCacheController_t1903574945, ___restaurantDictionary_3)); }
	inline Dictionary_2_t2572795273 * get_restaurantDictionary_3() const { return ___restaurantDictionary_3; }
	inline Dictionary_2_t2572795273 ** get_address_of_restaurantDictionary_3() { return &___restaurantDictionary_3; }
	inline void set_restaurantDictionary_3(Dictionary_2_t2572795273 * value)
	{
		___restaurantDictionary_3 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantDictionary_3, value);
	}

	inline static int32_t get_offset_of_restaurantIDList_4() { return static_cast<int32_t>(offsetof(RestaurantCacheController_t1903574945, ___restaurantIDList_4)); }
	inline List_1_t1375417109 * get_restaurantIDList_4() const { return ___restaurantIDList_4; }
	inline List_1_t1375417109 ** get_address_of_restaurantIDList_4() { return &___restaurantIDList_4; }
	inline void set_restaurantIDList_4(List_1_t1375417109 * value)
	{
		___restaurantIDList_4 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantIDList_4, value);
	}

	inline static int32_t get_offset_of_dishDictionary_5() { return static_cast<int32_t>(offsetof(RestaurantCacheController_t1903574945, ___dishDictionary_5)); }
	inline Dictionary_2_t2572795273 * get_dishDictionary_5() const { return ___dishDictionary_5; }
	inline Dictionary_2_t2572795273 ** get_address_of_dishDictionary_5() { return &___dishDictionary_5; }
	inline void set_dishDictionary_5(Dictionary_2_t2572795273 * value)
	{
		___dishDictionary_5 = value;
		Il2CppCodeGenWriteBarrier(&___dishDictionary_5, value);
	}

	inline static int32_t get_offset_of_dishIDList_6() { return static_cast<int32_t>(offsetof(RestaurantCacheController_t1903574945, ___dishIDList_6)); }
	inline List_1_t1375417109 * get_dishIDList_6() const { return ___dishIDList_6; }
	inline List_1_t1375417109 ** get_address_of_dishIDList_6() { return &___dishIDList_6; }
	inline void set_dishIDList_6(List_1_t1375417109 * value)
	{
		___dishIDList_6 = value;
		Il2CppCodeGenWriteBarrier(&___dishIDList_6, value);
	}
};

struct RestaurantCacheController_t1903574945_StaticFields
{
public:
	// RestaurantCacheController RestaurantCacheController::instance
	RestaurantCacheController_t1903574945 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(RestaurantCacheController_t1903574945_StaticFields, ___instance_2)); }
	inline RestaurantCacheController_t1903574945 * get_instance_2() const { return ___instance_2; }
	inline RestaurantCacheController_t1903574945 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(RestaurantCacheController_t1903574945 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
