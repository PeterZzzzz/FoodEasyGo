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
// JSONObject
struct JSONObject_t1752376903;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HomeGrouponScrollviewElementController
struct  HomeGrouponScrollviewElementController_t305077447  : public MonoBehaviour_t667441552
{
public:
	// System.String HomeGrouponScrollviewElementController::grouponID
	String_t* ___grouponID_2;
	// JSONObject HomeGrouponScrollviewElementController::grouponData
	JSONObject_t1752376903 * ___grouponData_3;

public:
	inline static int32_t get_offset_of_grouponID_2() { return static_cast<int32_t>(offsetof(HomeGrouponScrollviewElementController_t305077447, ___grouponID_2)); }
	inline String_t* get_grouponID_2() const { return ___grouponID_2; }
	inline String_t** get_address_of_grouponID_2() { return &___grouponID_2; }
	inline void set_grouponID_2(String_t* value)
	{
		___grouponID_2 = value;
		Il2CppCodeGenWriteBarrier(&___grouponID_2, value);
	}

	inline static int32_t get_offset_of_grouponData_3() { return static_cast<int32_t>(offsetof(HomeGrouponScrollviewElementController_t305077447, ___grouponData_3)); }
	inline JSONObject_t1752376903 * get_grouponData_3() const { return ___grouponData_3; }
	inline JSONObject_t1752376903 ** get_address_of_grouponData_3() { return &___grouponData_3; }
	inline void set_grouponData_3(JSONObject_t1752376903 * value)
	{
		___grouponData_3 = value;
		Il2CppCodeGenWriteBarrier(&___grouponData_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
