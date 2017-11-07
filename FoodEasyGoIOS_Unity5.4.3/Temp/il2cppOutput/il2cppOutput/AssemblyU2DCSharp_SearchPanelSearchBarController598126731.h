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
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SearchPanelSearchBarController
struct  SearchPanelSearchBarController_t598126731  : public MonoBehaviour_t667441552
{
public:
	// System.String SearchPanelSearchBarController::_id
	String_t* ____id_2;
	// System.String SearchPanelSearchBarController::_type
	String_t* ____type_3;
	// JSONObject SearchPanelSearchBarController::_data
	JSONObject_t1752376903 * ____data_4;
	// UnityEngine.GameObject SearchPanelSearchBarController::tempDishBarGO
	GameObject_t3674682005 * ___tempDishBarGO_5;
	// UnityEngine.GameObject SearchPanelSearchBarController::tempCommodityBarGO
	GameObject_t3674682005 * ___tempCommodityBarGO_6;

public:
	inline static int32_t get_offset_of__id_2() { return static_cast<int32_t>(offsetof(SearchPanelSearchBarController_t598126731, ____id_2)); }
	inline String_t* get__id_2() const { return ____id_2; }
	inline String_t** get_address_of__id_2() { return &____id_2; }
	inline void set__id_2(String_t* value)
	{
		____id_2 = value;
		Il2CppCodeGenWriteBarrier(&____id_2, value);
	}

	inline static int32_t get_offset_of__type_3() { return static_cast<int32_t>(offsetof(SearchPanelSearchBarController_t598126731, ____type_3)); }
	inline String_t* get__type_3() const { return ____type_3; }
	inline String_t** get_address_of__type_3() { return &____type_3; }
	inline void set__type_3(String_t* value)
	{
		____type_3 = value;
		Il2CppCodeGenWriteBarrier(&____type_3, value);
	}

	inline static int32_t get_offset_of__data_4() { return static_cast<int32_t>(offsetof(SearchPanelSearchBarController_t598126731, ____data_4)); }
	inline JSONObject_t1752376903 * get__data_4() const { return ____data_4; }
	inline JSONObject_t1752376903 ** get_address_of__data_4() { return &____data_4; }
	inline void set__data_4(JSONObject_t1752376903 * value)
	{
		____data_4 = value;
		Il2CppCodeGenWriteBarrier(&____data_4, value);
	}

	inline static int32_t get_offset_of_tempDishBarGO_5() { return static_cast<int32_t>(offsetof(SearchPanelSearchBarController_t598126731, ___tempDishBarGO_5)); }
	inline GameObject_t3674682005 * get_tempDishBarGO_5() const { return ___tempDishBarGO_5; }
	inline GameObject_t3674682005 ** get_address_of_tempDishBarGO_5() { return &___tempDishBarGO_5; }
	inline void set_tempDishBarGO_5(GameObject_t3674682005 * value)
	{
		___tempDishBarGO_5 = value;
		Il2CppCodeGenWriteBarrier(&___tempDishBarGO_5, value);
	}

	inline static int32_t get_offset_of_tempCommodityBarGO_6() { return static_cast<int32_t>(offsetof(SearchPanelSearchBarController_t598126731, ___tempCommodityBarGO_6)); }
	inline GameObject_t3674682005 * get_tempCommodityBarGO_6() const { return ___tempCommodityBarGO_6; }
	inline GameObject_t3674682005 ** get_address_of_tempCommodityBarGO_6() { return &___tempCommodityBarGO_6; }
	inline void set_tempCommodityBarGO_6(GameObject_t3674682005 * value)
	{
		___tempCommodityBarGO_6 = value;
		Il2CppCodeGenWriteBarrier(&___tempCommodityBarGO_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
