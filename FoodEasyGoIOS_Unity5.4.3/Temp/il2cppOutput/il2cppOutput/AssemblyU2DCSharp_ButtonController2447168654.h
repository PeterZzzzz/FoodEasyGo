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
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UI_UnityEngine_UI_Button3896396478.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonController
struct  ButtonController_t2447168654  : public Button_t3896396478
{
public:
	// System.String ButtonController::buttonTextZH
	String_t* ___buttonTextZH_17;
	// System.String ButtonController::buttonTextEN
	String_t* ___buttonTextEN_18;
	// UnityEngine.UI.Text ButtonController::text
	Text_t9039225 * ___text_19;

public:
	inline static int32_t get_offset_of_buttonTextZH_17() { return static_cast<int32_t>(offsetof(ButtonController_t2447168654, ___buttonTextZH_17)); }
	inline String_t* get_buttonTextZH_17() const { return ___buttonTextZH_17; }
	inline String_t** get_address_of_buttonTextZH_17() { return &___buttonTextZH_17; }
	inline void set_buttonTextZH_17(String_t* value)
	{
		___buttonTextZH_17 = value;
		Il2CppCodeGenWriteBarrier(&___buttonTextZH_17, value);
	}

	inline static int32_t get_offset_of_buttonTextEN_18() { return static_cast<int32_t>(offsetof(ButtonController_t2447168654, ___buttonTextEN_18)); }
	inline String_t* get_buttonTextEN_18() const { return ___buttonTextEN_18; }
	inline String_t** get_address_of_buttonTextEN_18() { return &___buttonTextEN_18; }
	inline void set_buttonTextEN_18(String_t* value)
	{
		___buttonTextEN_18 = value;
		Il2CppCodeGenWriteBarrier(&___buttonTextEN_18, value);
	}

	inline static int32_t get_offset_of_text_19() { return static_cast<int32_t>(offsetof(ButtonController_t2447168654, ___text_19)); }
	inline Text_t9039225 * get_text_19() const { return ___text_19; }
	inline Text_t9039225 ** get_address_of_text_19() { return &___text_19; }
	inline void set_text_19(Text_t9039225 * value)
	{
		___text_19 = value;
		Il2CppCodeGenWriteBarrier(&___text_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
