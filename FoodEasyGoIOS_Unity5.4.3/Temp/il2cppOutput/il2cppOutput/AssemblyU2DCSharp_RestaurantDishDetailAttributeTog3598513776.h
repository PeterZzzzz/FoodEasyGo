#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// TextController
struct TextController_t3861806281;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_LDFW_UI_LDFWToggleElementControl2675525193.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RestaurantDishDetailAttributeToggleElementController
struct  RestaurantDishDetailAttributeToggleElementController_t3598513776  : public LDFWToggleElementController_t2675525193
{
public:
	// UnityEngine.GameObject RestaurantDishDetailAttributeToggleElementController::selecteCover
	GameObject_t3674682005 * ___selecteCover_7;
	// TextController RestaurantDishDetailAttributeToggleElementController::text
	TextController_t3861806281 * ___text_8;
	// System.String RestaurantDishDetailAttributeToggleElementController::_textZH
	String_t* ____textZH_9;
	// System.String RestaurantDishDetailAttributeToggleElementController::_textEN
	String_t* ____textEN_10;
	// System.Boolean RestaurantDishDetailAttributeToggleElementController::canSelectQuantity
	bool ___canSelectQuantity_11;
	// System.Single RestaurantDishDetailAttributeToggleElementController::price
	float ___price_12;
	// System.Int32 RestaurantDishDetailAttributeToggleElementController::quantity
	int32_t ___quantity_13;

public:
	inline static int32_t get_offset_of_selecteCover_7() { return static_cast<int32_t>(offsetof(RestaurantDishDetailAttributeToggleElementController_t3598513776, ___selecteCover_7)); }
	inline GameObject_t3674682005 * get_selecteCover_7() const { return ___selecteCover_7; }
	inline GameObject_t3674682005 ** get_address_of_selecteCover_7() { return &___selecteCover_7; }
	inline void set_selecteCover_7(GameObject_t3674682005 * value)
	{
		___selecteCover_7 = value;
		Il2CppCodeGenWriteBarrier(&___selecteCover_7, value);
	}

	inline static int32_t get_offset_of_text_8() { return static_cast<int32_t>(offsetof(RestaurantDishDetailAttributeToggleElementController_t3598513776, ___text_8)); }
	inline TextController_t3861806281 * get_text_8() const { return ___text_8; }
	inline TextController_t3861806281 ** get_address_of_text_8() { return &___text_8; }
	inline void set_text_8(TextController_t3861806281 * value)
	{
		___text_8 = value;
		Il2CppCodeGenWriteBarrier(&___text_8, value);
	}

	inline static int32_t get_offset_of__textZH_9() { return static_cast<int32_t>(offsetof(RestaurantDishDetailAttributeToggleElementController_t3598513776, ____textZH_9)); }
	inline String_t* get__textZH_9() const { return ____textZH_9; }
	inline String_t** get_address_of__textZH_9() { return &____textZH_9; }
	inline void set__textZH_9(String_t* value)
	{
		____textZH_9 = value;
		Il2CppCodeGenWriteBarrier(&____textZH_9, value);
	}

	inline static int32_t get_offset_of__textEN_10() { return static_cast<int32_t>(offsetof(RestaurantDishDetailAttributeToggleElementController_t3598513776, ____textEN_10)); }
	inline String_t* get__textEN_10() const { return ____textEN_10; }
	inline String_t** get_address_of__textEN_10() { return &____textEN_10; }
	inline void set__textEN_10(String_t* value)
	{
		____textEN_10 = value;
		Il2CppCodeGenWriteBarrier(&____textEN_10, value);
	}

	inline static int32_t get_offset_of_canSelectQuantity_11() { return static_cast<int32_t>(offsetof(RestaurantDishDetailAttributeToggleElementController_t3598513776, ___canSelectQuantity_11)); }
	inline bool get_canSelectQuantity_11() const { return ___canSelectQuantity_11; }
	inline bool* get_address_of_canSelectQuantity_11() { return &___canSelectQuantity_11; }
	inline void set_canSelectQuantity_11(bool value)
	{
		___canSelectQuantity_11 = value;
	}

	inline static int32_t get_offset_of_price_12() { return static_cast<int32_t>(offsetof(RestaurantDishDetailAttributeToggleElementController_t3598513776, ___price_12)); }
	inline float get_price_12() const { return ___price_12; }
	inline float* get_address_of_price_12() { return &___price_12; }
	inline void set_price_12(float value)
	{
		___price_12 = value;
	}

	inline static int32_t get_offset_of_quantity_13() { return static_cast<int32_t>(offsetof(RestaurantDishDetailAttributeToggleElementController_t3598513776, ___quantity_13)); }
	inline int32_t get_quantity_13() const { return ___quantity_13; }
	inline int32_t* get_address_of_quantity_13() { return &___quantity_13; }
	inline void set_quantity_13(int32_t value)
	{
		___quantity_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
