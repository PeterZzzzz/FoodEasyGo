#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// RestaurantPanelCategoryToggleController
struct RestaurantPanelCategoryToggleController_t3634727669;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Image
struct Image_t538875265;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantPanelCategoryToggle
struct  RestaurantPanelCategoryToggle_t3972419193  : public MonoBehaviour_t667441552
{
public:
	// RestaurantPanelCategoryToggleController RestaurantPanelCategoryToggle::toggleController
	RestaurantPanelCategoryToggleController_t3634727669 * ___toggleController_2;
	// UnityEngine.Color RestaurantPanelCategoryToggle::selectColor
	Color_t4194546905  ___selectColor_3;
	// UnityEngine.Color RestaurantPanelCategoryToggle::deselectColor
	Color_t4194546905  ___deselectColor_4;
	// UnityEngine.Color RestaurantPanelCategoryToggle::transparentColor
	Color_t4194546905  ___transparentColor_5;
	// UnityEngine.UI.Text RestaurantPanelCategoryToggle::title
	Text_t9039225 * ___title_6;
	// UnityEngine.UI.Image RestaurantPanelCategoryToggle::underline
	Image_t538875265 * ___underline_7;
	// System.Int32 RestaurantPanelCategoryToggle::categoryID
	int32_t ___categoryID_8;

public:
	inline static int32_t get_offset_of_toggleController_2() { return static_cast<int32_t>(offsetof(RestaurantPanelCategoryToggle_t3972419193, ___toggleController_2)); }
	inline RestaurantPanelCategoryToggleController_t3634727669 * get_toggleController_2() const { return ___toggleController_2; }
	inline RestaurantPanelCategoryToggleController_t3634727669 ** get_address_of_toggleController_2() { return &___toggleController_2; }
	inline void set_toggleController_2(RestaurantPanelCategoryToggleController_t3634727669 * value)
	{
		___toggleController_2 = value;
		Il2CppCodeGenWriteBarrier(&___toggleController_2, value);
	}

	inline static int32_t get_offset_of_selectColor_3() { return static_cast<int32_t>(offsetof(RestaurantPanelCategoryToggle_t3972419193, ___selectColor_3)); }
	inline Color_t4194546905  get_selectColor_3() const { return ___selectColor_3; }
	inline Color_t4194546905 * get_address_of_selectColor_3() { return &___selectColor_3; }
	inline void set_selectColor_3(Color_t4194546905  value)
	{
		___selectColor_3 = value;
	}

	inline static int32_t get_offset_of_deselectColor_4() { return static_cast<int32_t>(offsetof(RestaurantPanelCategoryToggle_t3972419193, ___deselectColor_4)); }
	inline Color_t4194546905  get_deselectColor_4() const { return ___deselectColor_4; }
	inline Color_t4194546905 * get_address_of_deselectColor_4() { return &___deselectColor_4; }
	inline void set_deselectColor_4(Color_t4194546905  value)
	{
		___deselectColor_4 = value;
	}

	inline static int32_t get_offset_of_transparentColor_5() { return static_cast<int32_t>(offsetof(RestaurantPanelCategoryToggle_t3972419193, ___transparentColor_5)); }
	inline Color_t4194546905  get_transparentColor_5() const { return ___transparentColor_5; }
	inline Color_t4194546905 * get_address_of_transparentColor_5() { return &___transparentColor_5; }
	inline void set_transparentColor_5(Color_t4194546905  value)
	{
		___transparentColor_5 = value;
	}

	inline static int32_t get_offset_of_title_6() { return static_cast<int32_t>(offsetof(RestaurantPanelCategoryToggle_t3972419193, ___title_6)); }
	inline Text_t9039225 * get_title_6() const { return ___title_6; }
	inline Text_t9039225 ** get_address_of_title_6() { return &___title_6; }
	inline void set_title_6(Text_t9039225 * value)
	{
		___title_6 = value;
		Il2CppCodeGenWriteBarrier(&___title_6, value);
	}

	inline static int32_t get_offset_of_underline_7() { return static_cast<int32_t>(offsetof(RestaurantPanelCategoryToggle_t3972419193, ___underline_7)); }
	inline Image_t538875265 * get_underline_7() const { return ___underline_7; }
	inline Image_t538875265 ** get_address_of_underline_7() { return &___underline_7; }
	inline void set_underline_7(Image_t538875265 * value)
	{
		___underline_7 = value;
		Il2CppCodeGenWriteBarrier(&___underline_7, value);
	}

	inline static int32_t get_offset_of_categoryID_8() { return static_cast<int32_t>(offsetof(RestaurantPanelCategoryToggle_t3972419193, ___categoryID_8)); }
	inline int32_t get_categoryID_8() const { return ___categoryID_8; }
	inline int32_t* get_address_of_categoryID_8() { return &___categoryID_8; }
	inline void set_categoryID_8(int32_t value)
	{
		___categoryID_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
