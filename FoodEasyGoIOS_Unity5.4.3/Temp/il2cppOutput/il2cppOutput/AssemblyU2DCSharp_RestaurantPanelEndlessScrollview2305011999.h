#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// JSONObject
struct JSONObject_t1752376903;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "AssemblyU2DCSharp_LDFW_UI_InfiniteScrollRectContro2227708089.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantPanelEndlessScrollview
struct  RestaurantPanelEndlessScrollview_t2305011999  : public InfiniteScrollRectController_t2227708089
{
public:
	// JSONObject RestaurantPanelEndlessScrollview::_data
	JSONObject_t1752376903 * ____data_14;
	// System.Boolean RestaurantPanelEndlessScrollview::_supportInstantSend
	bool ____supportInstantSend_15;
	// System.String RestaurantPanelEndlessScrollview::_restaurantTypeID
	String_t* ____restaurantTypeID_16;
	// System.String RestaurantPanelEndlessScrollview::_sortTypeID
	String_t* ____sortTypeID_17;

public:
	inline static int32_t get_offset_of__data_14() { return static_cast<int32_t>(offsetof(RestaurantPanelEndlessScrollview_t2305011999, ____data_14)); }
	inline JSONObject_t1752376903 * get__data_14() const { return ____data_14; }
	inline JSONObject_t1752376903 ** get_address_of__data_14() { return &____data_14; }
	inline void set__data_14(JSONObject_t1752376903 * value)
	{
		____data_14 = value;
		Il2CppCodeGenWriteBarrier(&____data_14, value);
	}

	inline static int32_t get_offset_of__supportInstantSend_15() { return static_cast<int32_t>(offsetof(RestaurantPanelEndlessScrollview_t2305011999, ____supportInstantSend_15)); }
	inline bool get__supportInstantSend_15() const { return ____supportInstantSend_15; }
	inline bool* get_address_of__supportInstantSend_15() { return &____supportInstantSend_15; }
	inline void set__supportInstantSend_15(bool value)
	{
		____supportInstantSend_15 = value;
	}

	inline static int32_t get_offset_of__restaurantTypeID_16() { return static_cast<int32_t>(offsetof(RestaurantPanelEndlessScrollview_t2305011999, ____restaurantTypeID_16)); }
	inline String_t* get__restaurantTypeID_16() const { return ____restaurantTypeID_16; }
	inline String_t** get_address_of__restaurantTypeID_16() { return &____restaurantTypeID_16; }
	inline void set__restaurantTypeID_16(String_t* value)
	{
		____restaurantTypeID_16 = value;
		Il2CppCodeGenWriteBarrier(&____restaurantTypeID_16, value);
	}

	inline static int32_t get_offset_of__sortTypeID_17() { return static_cast<int32_t>(offsetof(RestaurantPanelEndlessScrollview_t2305011999, ____sortTypeID_17)); }
	inline String_t* get__sortTypeID_17() const { return ____sortTypeID_17; }
	inline String_t** get_address_of__sortTypeID_17() { return &____sortTypeID_17; }
	inline void set__sortTypeID_17(String_t* value)
	{
		____sortTypeID_17 = value;
		Il2CppCodeGenWriteBarrier(&____sortTypeID_17, value);
	}
};

struct RestaurantPanelEndlessScrollview_t2305011999_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> RestaurantPanelEndlessScrollview::<>f__am$cache4
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache4_18;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_18() { return static_cast<int32_t>(offsetof(RestaurantPanelEndlessScrollview_t2305011999_StaticFields, ___U3CU3Ef__amU24cache4_18)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache4_18() const { return ___U3CU3Ef__amU24cache4_18; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache4_18() { return &___U3CU3Ef__amU24cache4_18; }
	inline void set_U3CU3Ef__amU24cache4_18(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache4_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache4_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
