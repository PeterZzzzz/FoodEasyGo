#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Image
struct Image_t538875265;

#include "AssemblyU2DCSharp_LDFW_UI_LDFWToggleElementControl2675525193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantDetailPanelTitleSectionToggleElementController
struct  RestaurantDetailPanelTitleSectionToggleElementController_t3300369953  : public LDFWToggleElementController_t2675525193
{
public:
	// UnityEngine.UI.Text RestaurantDetailPanelTitleSectionToggleElementController::text
	Text_t9039225 * ___text_7;
	// UnityEngine.UI.Image RestaurantDetailPanelTitleSectionToggleElementController::underline
	Image_t538875265 * ___underline_8;

public:
	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelTitleSectionToggleElementController_t3300369953, ___text_7)); }
	inline Text_t9039225 * get_text_7() const { return ___text_7; }
	inline Text_t9039225 ** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(Text_t9039225 * value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier(&___text_7, value);
	}

	inline static int32_t get_offset_of_underline_8() { return static_cast<int32_t>(offsetof(RestaurantDetailPanelTitleSectionToggleElementController_t3300369953, ___underline_8)); }
	inline Image_t538875265 * get_underline_8() const { return ___underline_8; }
	inline Image_t538875265 ** get_address_of_underline_8() { return &___underline_8; }
	inline void set_underline_8(Image_t538875265 * value)
	{
		___underline_8 = value;
		Il2CppCodeGenWriteBarrier(&___underline_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
