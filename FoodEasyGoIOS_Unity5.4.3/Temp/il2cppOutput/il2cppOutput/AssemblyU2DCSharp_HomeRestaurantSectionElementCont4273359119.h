#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HomeRestaurantSectionElementController
struct  HomeRestaurantSectionElementController_t4273359119  : public MonoBehaviour_t667441552
{
public:
	// System.String HomeRestaurantSectionElementController::restaurantID
	String_t* ___restaurantID_2;

public:
	inline static int32_t get_offset_of_restaurantID_2() { return static_cast<int32_t>(offsetof(HomeRestaurantSectionElementController_t4273359119, ___restaurantID_2)); }
	inline String_t* get_restaurantID_2() const { return ___restaurantID_2; }
	inline String_t** get_address_of_restaurantID_2() { return &___restaurantID_2; }
	inline void set_restaurantID_2(String_t* value)
	{
		___restaurantID_2 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantID_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
