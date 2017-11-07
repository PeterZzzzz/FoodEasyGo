#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "AssemblyU2DCSharp_LDFW_UI_LDFWToggleElementControl2675525193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantPanelDeliveryTimeController
struct  RestaurantPanelDeliveryTimeController_t1099025636  : public LDFWToggleElementController_t2675525193
{
public:
	// UnityEngine.UI.Image RestaurantPanelDeliveryTimeController::background
	Image_t538875265 * ___background_7;
	// UnityEngine.UI.Text RestaurantPanelDeliveryTimeController::text
	Text_t9039225 * ___text_8;
	// System.Boolean RestaurantPanelDeliveryTimeController::isInteractable
	bool ___isInteractable_9;

public:
	inline static int32_t get_offset_of_background_7() { return static_cast<int32_t>(offsetof(RestaurantPanelDeliveryTimeController_t1099025636, ___background_7)); }
	inline Image_t538875265 * get_background_7() const { return ___background_7; }
	inline Image_t538875265 ** get_address_of_background_7() { return &___background_7; }
	inline void set_background_7(Image_t538875265 * value)
	{
		___background_7 = value;
		Il2CppCodeGenWriteBarrier(&___background_7, value);
	}

	inline static int32_t get_offset_of_text_8() { return static_cast<int32_t>(offsetof(RestaurantPanelDeliveryTimeController_t1099025636, ___text_8)); }
	inline Text_t9039225 * get_text_8() const { return ___text_8; }
	inline Text_t9039225 ** get_address_of_text_8() { return &___text_8; }
	inline void set_text_8(Text_t9039225 * value)
	{
		___text_8 = value;
		Il2CppCodeGenWriteBarrier(&___text_8, value);
	}

	inline static int32_t get_offset_of_isInteractable_9() { return static_cast<int32_t>(offsetof(RestaurantPanelDeliveryTimeController_t1099025636, ___isInteractable_9)); }
	inline bool get_isInteractable_9() const { return ___isInteractable_9; }
	inline bool* get_address_of_isInteractable_9() { return &___isInteractable_9; }
	inline void set_isInteractable_9(bool value)
	{
		___isInteractable_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
