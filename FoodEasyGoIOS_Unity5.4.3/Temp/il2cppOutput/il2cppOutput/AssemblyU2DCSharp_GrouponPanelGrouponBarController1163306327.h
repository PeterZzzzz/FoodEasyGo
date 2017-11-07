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
// JSONObject
struct JSONObject_t1752376903;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GrouponPanelGrouponBarController
struct  GrouponPanelGrouponBarController_t1163306327  : public MonoBehaviour_t667441552
{
public:
	// System.String GrouponPanelGrouponBarController::grouponID
	String_t* ___grouponID_2;
	// UnityEngine.UI.RawImage GrouponPanelGrouponBarController::image
	RawImage_t821930207 * ___image_3;
	// TextController GrouponPanelGrouponBarController::titleTextController
	TextController_t3861806281 * ___titleTextController_4;
	// TextController GrouponPanelGrouponBarController::dateTextController
	TextController_t3861806281 * ___dateTextController_5;
	// TextController GrouponPanelGrouponBarController::timeTextController
	TextController_t3861806281 * ___timeTextController_6;
	// JSONObject GrouponPanelGrouponBarController::grouponData
	JSONObject_t1752376903 * ___grouponData_7;

public:
	inline static int32_t get_offset_of_grouponID_2() { return static_cast<int32_t>(offsetof(GrouponPanelGrouponBarController_t1163306327, ___grouponID_2)); }
	inline String_t* get_grouponID_2() const { return ___grouponID_2; }
	inline String_t** get_address_of_grouponID_2() { return &___grouponID_2; }
	inline void set_grouponID_2(String_t* value)
	{
		___grouponID_2 = value;
		Il2CppCodeGenWriteBarrier(&___grouponID_2, value);
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(GrouponPanelGrouponBarController_t1163306327, ___image_3)); }
	inline RawImage_t821930207 * get_image_3() const { return ___image_3; }
	inline RawImage_t821930207 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(RawImage_t821930207 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier(&___image_3, value);
	}

	inline static int32_t get_offset_of_titleTextController_4() { return static_cast<int32_t>(offsetof(GrouponPanelGrouponBarController_t1163306327, ___titleTextController_4)); }
	inline TextController_t3861806281 * get_titleTextController_4() const { return ___titleTextController_4; }
	inline TextController_t3861806281 ** get_address_of_titleTextController_4() { return &___titleTextController_4; }
	inline void set_titleTextController_4(TextController_t3861806281 * value)
	{
		___titleTextController_4 = value;
		Il2CppCodeGenWriteBarrier(&___titleTextController_4, value);
	}

	inline static int32_t get_offset_of_dateTextController_5() { return static_cast<int32_t>(offsetof(GrouponPanelGrouponBarController_t1163306327, ___dateTextController_5)); }
	inline TextController_t3861806281 * get_dateTextController_5() const { return ___dateTextController_5; }
	inline TextController_t3861806281 ** get_address_of_dateTextController_5() { return &___dateTextController_5; }
	inline void set_dateTextController_5(TextController_t3861806281 * value)
	{
		___dateTextController_5 = value;
		Il2CppCodeGenWriteBarrier(&___dateTextController_5, value);
	}

	inline static int32_t get_offset_of_timeTextController_6() { return static_cast<int32_t>(offsetof(GrouponPanelGrouponBarController_t1163306327, ___timeTextController_6)); }
	inline TextController_t3861806281 * get_timeTextController_6() const { return ___timeTextController_6; }
	inline TextController_t3861806281 ** get_address_of_timeTextController_6() { return &___timeTextController_6; }
	inline void set_timeTextController_6(TextController_t3861806281 * value)
	{
		___timeTextController_6 = value;
		Il2CppCodeGenWriteBarrier(&___timeTextController_6, value);
	}

	inline static int32_t get_offset_of_grouponData_7() { return static_cast<int32_t>(offsetof(GrouponPanelGrouponBarController_t1163306327, ___grouponData_7)); }
	inline JSONObject_t1752376903 * get_grouponData_7() const { return ___grouponData_7; }
	inline JSONObject_t1752376903 ** get_address_of_grouponData_7() { return &___grouponData_7; }
	inline void set_grouponData_7(JSONObject_t1752376903 * value)
	{
		___grouponData_7 = value;
		Il2CppCodeGenWriteBarrier(&___grouponData_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
