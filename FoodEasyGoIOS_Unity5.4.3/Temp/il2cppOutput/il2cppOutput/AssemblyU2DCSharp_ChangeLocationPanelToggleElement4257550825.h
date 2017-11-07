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
// UnityEngine.UI.Image
struct Image_t538875265;
// TextController
struct TextController_t3861806281;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChangeLocationPanelToggleElement
struct  ChangeLocationPanelToggleElement_t4257550825  : public MonoBehaviour_t667441552
{
public:
	// System.String ChangeLocationPanelToggleElement::id
	String_t* ___id_2;
	// System.String ChangeLocationPanelToggleElement::zip
	String_t* ___zip_3;
	// System.String ChangeLocationPanelToggleElement::nameZH
	String_t* ___nameZH_4;
	// System.String ChangeLocationPanelToggleElement::nameEN
	String_t* ___nameEN_5;
	// UnityEngine.UI.Image ChangeLocationPanelToggleElement::background
	Image_t538875265 * ___background_6;
	// TextController ChangeLocationPanelToggleElement::text
	TextController_t3861806281 * ___text_7;
	// UnityEngine.Color ChangeLocationPanelToggleElement::selectedColor
	Color_t4194546905  ___selectedColor_8;
	// UnityEngine.Color ChangeLocationPanelToggleElement::deselectedColor
	Color_t4194546905  ___deselectedColor_9;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(ChangeLocationPanelToggleElement_t4257550825, ___id_2)); }
	inline String_t* get_id_2() const { return ___id_2; }
	inline String_t** get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(String_t* value)
	{
		___id_2 = value;
		Il2CppCodeGenWriteBarrier(&___id_2, value);
	}

	inline static int32_t get_offset_of_zip_3() { return static_cast<int32_t>(offsetof(ChangeLocationPanelToggleElement_t4257550825, ___zip_3)); }
	inline String_t* get_zip_3() const { return ___zip_3; }
	inline String_t** get_address_of_zip_3() { return &___zip_3; }
	inline void set_zip_3(String_t* value)
	{
		___zip_3 = value;
		Il2CppCodeGenWriteBarrier(&___zip_3, value);
	}

	inline static int32_t get_offset_of_nameZH_4() { return static_cast<int32_t>(offsetof(ChangeLocationPanelToggleElement_t4257550825, ___nameZH_4)); }
	inline String_t* get_nameZH_4() const { return ___nameZH_4; }
	inline String_t** get_address_of_nameZH_4() { return &___nameZH_4; }
	inline void set_nameZH_4(String_t* value)
	{
		___nameZH_4 = value;
		Il2CppCodeGenWriteBarrier(&___nameZH_4, value);
	}

	inline static int32_t get_offset_of_nameEN_5() { return static_cast<int32_t>(offsetof(ChangeLocationPanelToggleElement_t4257550825, ___nameEN_5)); }
	inline String_t* get_nameEN_5() const { return ___nameEN_5; }
	inline String_t** get_address_of_nameEN_5() { return &___nameEN_5; }
	inline void set_nameEN_5(String_t* value)
	{
		___nameEN_5 = value;
		Il2CppCodeGenWriteBarrier(&___nameEN_5, value);
	}

	inline static int32_t get_offset_of_background_6() { return static_cast<int32_t>(offsetof(ChangeLocationPanelToggleElement_t4257550825, ___background_6)); }
	inline Image_t538875265 * get_background_6() const { return ___background_6; }
	inline Image_t538875265 ** get_address_of_background_6() { return &___background_6; }
	inline void set_background_6(Image_t538875265 * value)
	{
		___background_6 = value;
		Il2CppCodeGenWriteBarrier(&___background_6, value);
	}

	inline static int32_t get_offset_of_text_7() { return static_cast<int32_t>(offsetof(ChangeLocationPanelToggleElement_t4257550825, ___text_7)); }
	inline TextController_t3861806281 * get_text_7() const { return ___text_7; }
	inline TextController_t3861806281 ** get_address_of_text_7() { return &___text_7; }
	inline void set_text_7(TextController_t3861806281 * value)
	{
		___text_7 = value;
		Il2CppCodeGenWriteBarrier(&___text_7, value);
	}

	inline static int32_t get_offset_of_selectedColor_8() { return static_cast<int32_t>(offsetof(ChangeLocationPanelToggleElement_t4257550825, ___selectedColor_8)); }
	inline Color_t4194546905  get_selectedColor_8() const { return ___selectedColor_8; }
	inline Color_t4194546905 * get_address_of_selectedColor_8() { return &___selectedColor_8; }
	inline void set_selectedColor_8(Color_t4194546905  value)
	{
		___selectedColor_8 = value;
	}

	inline static int32_t get_offset_of_deselectedColor_9() { return static_cast<int32_t>(offsetof(ChangeLocationPanelToggleElement_t4257550825, ___deselectedColor_9)); }
	inline Color_t4194546905  get_deselectedColor_9() const { return ___deselectedColor_9; }
	inline Color_t4194546905 * get_address_of_deselectedColor_9() { return &___deselectedColor_9; }
	inline void set_deselectedColor_9(Color_t4194546905  value)
	{
		___deselectedColor_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
