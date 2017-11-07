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

#include "AssemblyU2DCSharp_LDFW_UI_LDFWToggleElementControl2675525193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CartPanelHeader2ToggleElementController
struct  CartPanelHeader2ToggleElementController_t172686723  : public LDFWToggleElementController_t2675525193
{
public:
	// UnityEngine.UI.Image CartPanelHeader2ToggleElementController::line
	Image_t538875265 * ___line_7;
	// TextController CartPanelHeader2ToggleElementController::text
	TextController_t3861806281 * ___text_8;

public:
	inline static int32_t get_offset_of_line_7() { return static_cast<int32_t>(offsetof(CartPanelHeader2ToggleElementController_t172686723, ___line_7)); }
	inline Image_t538875265 * get_line_7() const { return ___line_7; }
	inline Image_t538875265 ** get_address_of_line_7() { return &___line_7; }
	inline void set_line_7(Image_t538875265 * value)
	{
		___line_7 = value;
		Il2CppCodeGenWriteBarrier(&___line_7, value);
	}

	inline static int32_t get_offset_of_text_8() { return static_cast<int32_t>(offsetof(CartPanelHeader2ToggleElementController_t172686723, ___text_8)); }
	inline TextController_t3861806281 * get_text_8() const { return ___text_8; }
	inline TextController_t3861806281 ** get_address_of_text_8() { return &___text_8; }
	inline void set_text_8(TextController_t3861806281 * value)
	{
		___text_8 = value;
		Il2CppCodeGenWriteBarrier(&___text_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
