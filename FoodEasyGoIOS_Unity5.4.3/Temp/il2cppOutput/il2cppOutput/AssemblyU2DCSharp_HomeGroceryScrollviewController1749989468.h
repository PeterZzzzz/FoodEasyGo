#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "AssemblyU2DCSharp_BaseUIController1679080129.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HomeGroceryScrollviewController
struct  HomeGroceryScrollviewController_t1749989468  : public BaseUIController_t1679080129
{
public:
	// UnityEngine.RectTransform HomeGroceryScrollviewController::content
	RectTransform_t972643934 * ___content_3;
	// System.Int32 HomeGroceryScrollviewController::loadedRestaurantCount
	int32_t ___loadedRestaurantCount_4;
	// System.Int32 HomeGroceryScrollviewController::recommendListLength
	int32_t ___recommendListLength_5;

public:
	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(HomeGroceryScrollviewController_t1749989468, ___content_3)); }
	inline RectTransform_t972643934 * get_content_3() const { return ___content_3; }
	inline RectTransform_t972643934 ** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(RectTransform_t972643934 * value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier(&___content_3, value);
	}

	inline static int32_t get_offset_of_loadedRestaurantCount_4() { return static_cast<int32_t>(offsetof(HomeGroceryScrollviewController_t1749989468, ___loadedRestaurantCount_4)); }
	inline int32_t get_loadedRestaurantCount_4() const { return ___loadedRestaurantCount_4; }
	inline int32_t* get_address_of_loadedRestaurantCount_4() { return &___loadedRestaurantCount_4; }
	inline void set_loadedRestaurantCount_4(int32_t value)
	{
		___loadedRestaurantCount_4 = value;
	}

	inline static int32_t get_offset_of_recommendListLength_5() { return static_cast<int32_t>(offsetof(HomeGroceryScrollviewController_t1749989468, ___recommendListLength_5)); }
	inline int32_t get_recommendListLength_5() const { return ___recommendListLength_5; }
	inline int32_t* get_address_of_recommendListLength_5() { return &___recommendListLength_5; }
	inline void set_recommendListLength_5(int32_t value)
	{
		___recommendListLength_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
