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
// UnityEngine.Transform
struct Transform_t1659122786;

#include "AssemblyU2DCSharp_LDFW_UI_LDFWToggleElementControl2675525193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GroceryPanelDefaultDisplayCategoryBarElementController
struct  GroceryPanelDefaultDisplayCategoryBarElementController_t3648164443  : public LDFWToggleElementController_t2675525193
{
public:
	// System.String GroceryPanelDefaultDisplayCategoryBarElementController::categoryID
	String_t* ___categoryID_7;
	// UnityEngine.Transform GroceryPanelDefaultDisplayCategoryBarElementController::line
	Transform_t1659122786 * ___line_8;

public:
	inline static int32_t get_offset_of_categoryID_7() { return static_cast<int32_t>(offsetof(GroceryPanelDefaultDisplayCategoryBarElementController_t3648164443, ___categoryID_7)); }
	inline String_t* get_categoryID_7() const { return ___categoryID_7; }
	inline String_t** get_address_of_categoryID_7() { return &___categoryID_7; }
	inline void set_categoryID_7(String_t* value)
	{
		___categoryID_7 = value;
		Il2CppCodeGenWriteBarrier(&___categoryID_7, value);
	}

	inline static int32_t get_offset_of_line_8() { return static_cast<int32_t>(offsetof(GroceryPanelDefaultDisplayCategoryBarElementController_t3648164443, ___line_8)); }
	inline Transform_t1659122786 * get_line_8() const { return ___line_8; }
	inline Transform_t1659122786 ** get_address_of_line_8() { return &___line_8; }
	inline void set_line_8(Transform_t1659122786 * value)
	{
		___line_8 = value;
		Il2CppCodeGenWriteBarrier(&___line_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
