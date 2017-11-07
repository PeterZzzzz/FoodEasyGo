#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// JSONObject
struct JSONObject_t1752376903;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_LDFW_UI_InfiniteScrollRectContro2227708089.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantDetailPanelDishEndlessScroll
struct  RestaurantDetailPanelDishEndlessScroll_t4133165937  : public InfiniteScrollRectController_t2227708089
{
public:
	// JSONObject RestaurantDetailPanelDishEndlessScroll::_data
	JSONObject_t1752376903 * ____data_14;
	// System.Single RestaurantDetailPanelDishEndlessScroll::lastContentYPosition
	float ___lastContentYPosition_15;
	// System.Boolean RestaurantDetailPanelDishEndlessScroll::isRestaurant
	bool ___isRestaurant_16;
	// System.String RestaurantDetailPanelDishEndlessScroll::grouponID
	String_t* ___grouponID_17;

public:
	inline static int32_t get_offset_of__data_14() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelDishEndlessScroll_t4133165937, ____data_14)); }
	inline JSONObject_t1752376903 * get__data_14() const { return ____data_14; }
	inline JSONObject_t1752376903 ** get_address_of__data_14() { return &____data_14; }
	inline void set__data_14(JSONObject_t1752376903 * value)
	{
		____data_14 = value;
		Il2CppCodeGenWriteBarrier(&____data_14, value);
	}

	inline static int32_t get_offset_of_lastContentYPosition_15() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelDishEndlessScroll_t4133165937, ___lastContentYPosition_15)); }
	inline float get_lastContentYPosition_15() const { return ___lastContentYPosition_15; }
	inline float* get_address_of_lastContentYPosition_15() { return &___lastContentYPosition_15; }
	inline void set_lastContentYPosition_15(float value)
	{
		___lastContentYPosition_15 = value;
	}

	inline static int32_t get_offset_of_isRestaurant_16() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelDishEndlessScroll_t4133165937, ___isRestaurant_16)); }
	inline bool get_isRestaurant_16() const { return ___isRestaurant_16; }
	inline bool* get_address_of_isRestaurant_16() { return &___isRestaurant_16; }
	inline void set_isRestaurant_16(bool value)
	{
		___isRestaurant_16 = value;
	}

	inline static int32_t get_offset_of_grouponID_17() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelDishEndlessScroll_t4133165937, ___grouponID_17)); }
	inline String_t* get_grouponID_17() const { return ___grouponID_17; }
	inline String_t** get_address_of_grouponID_17() { return &___grouponID_17; }
	inline void set_grouponID_17(String_t* value)
	{
		___grouponID_17 = value;
		Il2CppCodeGenWriteBarrier(&___grouponID_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
