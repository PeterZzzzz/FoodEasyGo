#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "AssemblyU2DCSharp_LDFW_UI_LDFWToggleElementControl2675525193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantDetailPanelCategoryBarToggleElementController
struct  RestaurantDetailPanelCategoryBarToggleElementController_t2955603973  : public LDFWToggleElementController_t2675525193
{
public:
	// UnityEngine.GameObject RestaurantDetailPanelCategoryBarToggleElementController::selectedImage
	GameObject_t3674682005 * ___selectedImage_7;

public:
	inline static int32_t get_offset_of_selectedImage_7() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelCategoryBarToggleElementController_t2955603973, ___selectedImage_7)); }
	inline GameObject_t3674682005 * get_selectedImage_7() const { return ___selectedImage_7; }
	inline GameObject_t3674682005 ** get_address_of_selectedImage_7() { return &___selectedImage_7; }
	inline void set_selectedImage_7(GameObject_t3674682005 * value)
	{
		___selectedImage_7 = value;
		Il2CppCodeGenWriteBarrier(&___selectedImage_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
