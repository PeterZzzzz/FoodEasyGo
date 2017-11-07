#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantPanelCategoryToggleController
struct  RestaurantPanelCategoryToggleController_t3634727669  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform RestaurantPanelCategoryToggleController::toggleParent
	Transform_t1659122786 * ___toggleParent_2;
	// UnityEngine.Transform RestaurantPanelCategoryToggleController::currentSelected
	Transform_t1659122786 * ___currentSelected_3;

public:
	inline static int32_t get_offset_of_toggleParent_2() { return static_cast<int32_t>(offsetof(RestaurantPanelCategoryToggleController_t3634727669, ___toggleParent_2)); }
	inline Transform_t1659122786 * get_toggleParent_2() const { return ___toggleParent_2; }
	inline Transform_t1659122786 ** get_address_of_toggleParent_2() { return &___toggleParent_2; }
	inline void set_toggleParent_2(Transform_t1659122786 * value)
	{
		___toggleParent_2 = value;
		Il2CppCodeGenWriteBarrier(&___toggleParent_2, value);
	}

	inline static int32_t get_offset_of_currentSelected_3() { return static_cast<int32_t>(offsetof(RestaurantPanelCategoryToggleController_t3634727669, ___currentSelected_3)); }
	inline Transform_t1659122786 * get_currentSelected_3() const { return ___currentSelected_3; }
	inline Transform_t1659122786 ** get_address_of_currentSelected_3() { return &___currentSelected_3; }
	inline void set_currentSelected_3(Transform_t1659122786 * value)
	{
		___currentSelected_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentSelected_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
