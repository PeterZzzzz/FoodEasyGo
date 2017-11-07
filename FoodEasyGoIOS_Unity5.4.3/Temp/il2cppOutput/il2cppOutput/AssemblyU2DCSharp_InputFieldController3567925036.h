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
// System.String
struct String_t;

#include "UnityEngine_UI_UnityEngine_UI_InputField609046876.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputFieldController
struct  InputFieldController_t3567925036  : public InputField_t609046876
{
public:
	// UnityEngine.UI.Image InputFieldController::backgroundImage
	Image_t538875265 * ___backgroundImage_64;
	// System.String InputFieldController::placeholderZH
	String_t* ___placeholderZH_65;
	// System.String InputFieldController::placeholderEN
	String_t* ___placeholderEN_66;
	// UnityEngine.Color InputFieldController::onSelectColor
	Color_t4194546905  ___onSelectColor_67;
	// UnityEngine.Color InputFieldController::onDeselectColor
	Color_t4194546905  ___onDeselectColor_68;

public:
	inline static int32_t get_offset_of_backgroundImage_64() { return static_cast<int32_t>(offsetof(InputFieldController_t3567925036, ___backgroundImage_64)); }
	inline Image_t538875265 * get_backgroundImage_64() const { return ___backgroundImage_64; }
	inline Image_t538875265 ** get_address_of_backgroundImage_64() { return &___backgroundImage_64; }
	inline void set_backgroundImage_64(Image_t538875265 * value)
	{
		___backgroundImage_64 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundImage_64, value);
	}

	inline static int32_t get_offset_of_placeholderZH_65() { return static_cast<int32_t>(offsetof(InputFieldController_t3567925036, ___placeholderZH_65)); }
	inline String_t* get_placeholderZH_65() const { return ___placeholderZH_65; }
	inline String_t** get_address_of_placeholderZH_65() { return &___placeholderZH_65; }
	inline void set_placeholderZH_65(String_t* value)
	{
		___placeholderZH_65 = value;
		Il2CppCodeGenWriteBarrier(&___placeholderZH_65, value);
	}

	inline static int32_t get_offset_of_placeholderEN_66() { return static_cast<int32_t>(offsetof(InputFieldController_t3567925036, ___placeholderEN_66)); }
	inline String_t* get_placeholderEN_66() const { return ___placeholderEN_66; }
	inline String_t** get_address_of_placeholderEN_66() { return &___placeholderEN_66; }
	inline void set_placeholderEN_66(String_t* value)
	{
		___placeholderEN_66 = value;
		Il2CppCodeGenWriteBarrier(&___placeholderEN_66, value);
	}

	inline static int32_t get_offset_of_onSelectColor_67() { return static_cast<int32_t>(offsetof(InputFieldController_t3567925036, ___onSelectColor_67)); }
	inline Color_t4194546905  get_onSelectColor_67() const { return ___onSelectColor_67; }
	inline Color_t4194546905 * get_address_of_onSelectColor_67() { return &___onSelectColor_67; }
	inline void set_onSelectColor_67(Color_t4194546905  value)
	{
		___onSelectColor_67 = value;
	}

	inline static int32_t get_offset_of_onDeselectColor_68() { return static_cast<int32_t>(offsetof(InputFieldController_t3567925036, ___onDeselectColor_68)); }
	inline Color_t4194546905  get_onDeselectColor_68() const { return ___onDeselectColor_68; }
	inline Color_t4194546905 * get_address_of_onDeselectColor_68() { return &___onDeselectColor_68; }
	inline void set_onDeselectColor_68(Color_t4194546905  value)
	{
		___onDeselectColor_68 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
