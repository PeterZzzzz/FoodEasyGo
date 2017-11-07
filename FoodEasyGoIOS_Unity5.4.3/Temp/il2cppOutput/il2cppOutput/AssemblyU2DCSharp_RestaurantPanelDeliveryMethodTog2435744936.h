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
// TextController
struct TextController_t3861806281;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_LDFW_UI_LDFWToggleElementControl2675525193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantPanelDeliveryMethodToggleElementController
struct  RestaurantPanelDeliveryMethodToggleElementController_t2435744936  : public LDFWToggleElementController_t2675525193
{
public:
	// UnityEngine.UI.Image RestaurantPanelDeliveryMethodToggleElementController::baseImage
	Image_t538875265 * ___baseImage_7;
	// TextController RestaurantPanelDeliveryMethodToggleElementController::text
	TextController_t3861806281 * ___text_8;
	// System.String RestaurantPanelDeliveryMethodToggleElementController::reserveID
	String_t* ___reserveID_9;

public:
	inline static int32_t get_offset_of_baseImage_7() { return static_cast<int32_t>(offsetof(RestaurantPanelDeliveryMethodToggleElementController_t2435744936, ___baseImage_7)); }
	inline Image_t538875265 * get_baseImage_7() const { return ___baseImage_7; }
	inline Image_t538875265 ** get_address_of_baseImage_7() { return &___baseImage_7; }
	inline void set_baseImage_7(Image_t538875265 * value)
	{
		___baseImage_7 = value;
		Il2CppCodeGenWriteBarrier(&___baseImage_7, value);
	}

	inline static int32_t get_offset_of_text_8() { return static_cast<int32_t>(offsetof(RestaurantPanelDeliveryMethodToggleElementController_t2435744936, ___text_8)); }
	inline TextController_t3861806281 * get_text_8() const { return ___text_8; }
	inline TextController_t3861806281 ** get_address_of_text_8() { return &___text_8; }
	inline void set_text_8(TextController_t3861806281 * value)
	{
		___text_8 = value;
		Il2CppCodeGenWriteBarrier(&___text_8, value);
	}

	inline static int32_t get_offset_of_reserveID_9() { return static_cast<int32_t>(offsetof(RestaurantPanelDeliveryMethodToggleElementController_t2435744936, ___reserveID_9)); }
	inline String_t* get_reserveID_9() const { return ___reserveID_9; }
	inline String_t** get_address_of_reserveID_9() { return &___reserveID_9; }
	inline void set_reserveID_9(String_t* value)
	{
		___reserveID_9 = value;
		Il2CppCodeGenWriteBarrier(&___reserveID_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
