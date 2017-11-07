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
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantPanelSearchDisplayController
struct  RestaurantPanelSearchDisplayController_t1429484687  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color RestaurantPanelSearchDisplayController::selectedColor
	Color_t4194546905  ___selectedColor_2;
	// UnityEngine.Color RestaurantPanelSearchDisplayController::unselectedColor
	Color_t4194546905  ___unselectedColor_3;
	// UnityEngine.Transform RestaurantPanelSearchDisplayController::contentTransform
	Transform_t1659122786 * ___contentTransform_4;
	// System.Int32 RestaurantPanelSearchDisplayController::searchTypeIndex
	int32_t ___searchTypeIndex_5;

public:
	inline static int32_t get_offset_of_selectedColor_2() { return static_cast<int32_t>(offsetof(RestaurantPanelSearchDisplayController_t1429484687, ___selectedColor_2)); }
	inline Color_t4194546905  get_selectedColor_2() const { return ___selectedColor_2; }
	inline Color_t4194546905 * get_address_of_selectedColor_2() { return &___selectedColor_2; }
	inline void set_selectedColor_2(Color_t4194546905  value)
	{
		___selectedColor_2 = value;
	}

	inline static int32_t get_offset_of_unselectedColor_3() { return static_cast<int32_t>(offsetof(RestaurantPanelSearchDisplayController_t1429484687, ___unselectedColor_3)); }
	inline Color_t4194546905  get_unselectedColor_3() const { return ___unselectedColor_3; }
	inline Color_t4194546905 * get_address_of_unselectedColor_3() { return &___unselectedColor_3; }
	inline void set_unselectedColor_3(Color_t4194546905  value)
	{
		___unselectedColor_3 = value;
	}

	inline static int32_t get_offset_of_contentTransform_4() { return static_cast<int32_t>(offsetof(RestaurantPanelSearchDisplayController_t1429484687, ___contentTransform_4)); }
	inline Transform_t1659122786 * get_contentTransform_4() const { return ___contentTransform_4; }
	inline Transform_t1659122786 ** get_address_of_contentTransform_4() { return &___contentTransform_4; }
	inline void set_contentTransform_4(Transform_t1659122786 * value)
	{
		___contentTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___contentTransform_4, value);
	}

	inline static int32_t get_offset_of_searchTypeIndex_5() { return static_cast<int32_t>(offsetof(RestaurantPanelSearchDisplayController_t1429484687, ___searchTypeIndex_5)); }
	inline int32_t get_searchTypeIndex_5() const { return ___searchTypeIndex_5; }
	inline int32_t* get_address_of_searchTypeIndex_5() { return &___searchTypeIndex_5; }
	inline void set_searchTypeIndex_5(int32_t value)
	{
		___searchTypeIndex_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
