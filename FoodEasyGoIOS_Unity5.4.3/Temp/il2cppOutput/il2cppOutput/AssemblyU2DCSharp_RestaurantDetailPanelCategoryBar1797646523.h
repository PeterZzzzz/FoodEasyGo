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

// RestaurantDetailPanelCategoryBarController
struct  RestaurantDetailPanelCategoryBarController_t1797646523  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean RestaurantDetailPanelCategoryBarController::isRestaurant
	bool ___isRestaurant_2;
	// System.String RestaurantDetailPanelCategoryBarController::categoryID
	String_t* ___categoryID_3;
	// System.String RestaurantDetailPanelCategoryBarController::restaurantID
	String_t* ___restaurantID_4;
	// System.Single RestaurantDetailPanelCategoryBarController::accumualtedYOffset
	float ___accumualtedYOffset_5;

public:
	inline static int32_t get_offset_of_isRestaurant_2() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelCategoryBarController_t1797646523, ___isRestaurant_2)); }
	inline bool get_isRestaurant_2() const { return ___isRestaurant_2; }
	inline bool* get_address_of_isRestaurant_2() { return &___isRestaurant_2; }
	inline void set_isRestaurant_2(bool value)
	{
		___isRestaurant_2 = value;
	}

	inline static int32_t get_offset_of_categoryID_3() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelCategoryBarController_t1797646523, ___categoryID_3)); }
	inline String_t* get_categoryID_3() const { return ___categoryID_3; }
	inline String_t** get_address_of_categoryID_3() { return &___categoryID_3; }
	inline void set_categoryID_3(String_t* value)
	{
		___categoryID_3 = value;
		Il2CppCodeGenWriteBarrier(&___categoryID_3, value);
	}

	inline static int32_t get_offset_of_restaurantID_4() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelCategoryBarController_t1797646523, ___restaurantID_4)); }
	inline String_t* get_restaurantID_4() const { return ___restaurantID_4; }
	inline String_t** get_address_of_restaurantID_4() { return &___restaurantID_4; }
	inline void set_restaurantID_4(String_t* value)
	{
		___restaurantID_4 = value;
		Il2CppCodeGenWriteBarrier(&___restaurantID_4, value);
	}

	inline static int32_t get_offset_of_accumualtedYOffset_5() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelCategoryBarController_t1797646523, ___accumualtedYOffset_5)); }
	inline float get_accumualtedYOffset_5() const { return ___accumualtedYOffset_5; }
	inline float* get_address_of_accumualtedYOffset_5() { return &___accumualtedYOffset_5; }
	inline void set_accumualtedYOffset_5(float value)
	{
		___accumualtedYOffset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
