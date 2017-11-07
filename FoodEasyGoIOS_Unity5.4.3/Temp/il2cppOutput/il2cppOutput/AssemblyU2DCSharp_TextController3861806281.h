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

#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextController
struct  TextController_t3861806281  : public Text_t9039225
{
public:
	// System.String TextController::textZH
	String_t* ___textZH_35;
	// System.String TextController::textEN
	String_t* ___textEN_36;

public:
	inline static int32_t get_offset_of_textZH_35() { return static_cast<int32_t>(offsetof(TextController_t3861806281, ___textZH_35)); }
	inline String_t* get_textZH_35() const { return ___textZH_35; }
	inline String_t** get_address_of_textZH_35() { return &___textZH_35; }
	inline void set_textZH_35(String_t* value)
	{
		___textZH_35 = value;
		Il2CppCodeGenWriteBarrier(&___textZH_35, value);
	}

	inline static int32_t get_offset_of_textEN_36() { return static_cast<int32_t>(offsetof(TextController_t3861806281, ___textEN_36)); }
	inline String_t* get_textEN_36() const { return ___textEN_36; }
	inline String_t** get_address_of_textEN_36() { return &___textEN_36; }
	inline void set_textEN_36(String_t* value)
	{
		___textEN_36 = value;
		Il2CppCodeGenWriteBarrier(&___textEN_36, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
