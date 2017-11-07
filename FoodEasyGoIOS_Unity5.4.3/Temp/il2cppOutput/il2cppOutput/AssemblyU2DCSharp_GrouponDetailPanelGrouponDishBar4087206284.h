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
// UnityEngine.UI.RawImage
struct RawImage_t821930207;
// TextController
struct TextController_t3861806281;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GrouponDetailPanelGrouponDishBarController
struct  GrouponDetailPanelGrouponDishBarController_t4087206284  : public MonoBehaviour_t667441552
{
public:
	// System.String GrouponDetailPanelGrouponDishBarController::dishID
	String_t* ___dishID_2;
	// UnityEngine.UI.RawImage GrouponDetailPanelGrouponDishBarController::image
	RawImage_t821930207 * ___image_3;
	// TextController GrouponDetailPanelGrouponDishBarController::title
	TextController_t3861806281 * ___title_4;
	// TextController GrouponDetailPanelGrouponDishBarController::price
	TextController_t3861806281 * ___price_5;
	// TextController GrouponDetailPanelGrouponDishBarController::quantity
	TextController_t3861806281 * ___quantity_6;

public:
	inline static int32_t get_offset_of_dishID_2() { return static_cast<int32_t>(offsetof(GrouponDetailPanelGrouponDishBarController_t4087206284, ___dishID_2)); }
	inline String_t* get_dishID_2() const { return ___dishID_2; }
	inline String_t** get_address_of_dishID_2() { return &___dishID_2; }
	inline void set_dishID_2(String_t* value)
	{
		___dishID_2 = value;
		Il2CppCodeGenWriteBarrier(&___dishID_2, value);
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(GrouponDetailPanelGrouponDishBarController_t4087206284, ___image_3)); }
	inline RawImage_t821930207 * get_image_3() const { return ___image_3; }
	inline RawImage_t821930207 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(RawImage_t821930207 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier(&___image_3, value);
	}

	inline static int32_t get_offset_of_title_4() { return static_cast<int32_t>(offsetof(GrouponDetailPanelGrouponDishBarController_t4087206284, ___title_4)); }
	inline TextController_t3861806281 * get_title_4() const { return ___title_4; }
	inline TextController_t3861806281 ** get_address_of_title_4() { return &___title_4; }
	inline void set_title_4(TextController_t3861806281 * value)
	{
		___title_4 = value;
		Il2CppCodeGenWriteBarrier(&___title_4, value);
	}

	inline static int32_t get_offset_of_price_5() { return static_cast<int32_t>(offsetof(GrouponDetailPanelGrouponDishBarController_t4087206284, ___price_5)); }
	inline TextController_t3861806281 * get_price_5() const { return ___price_5; }
	inline TextController_t3861806281 ** get_address_of_price_5() { return &___price_5; }
	inline void set_price_5(TextController_t3861806281 * value)
	{
		___price_5 = value;
		Il2CppCodeGenWriteBarrier(&___price_5, value);
	}

	inline static int32_t get_offset_of_quantity_6() { return static_cast<int32_t>(offsetof(GrouponDetailPanelGrouponDishBarController_t4087206284, ___quantity_6)); }
	inline TextController_t3861806281 * get_quantity_6() const { return ___quantity_6; }
	inline TextController_t3861806281 ** get_address_of_quantity_6() { return &___quantity_6; }
	inline void set_quantity_6(TextController_t3861806281 * value)
	{
		___quantity_6 = value;
		Il2CppCodeGenWriteBarrier(&___quantity_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
