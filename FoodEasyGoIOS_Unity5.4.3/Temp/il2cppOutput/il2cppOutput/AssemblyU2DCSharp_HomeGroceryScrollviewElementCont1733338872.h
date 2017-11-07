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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HomeGroceryScrollviewElementController
struct  HomeGroceryScrollviewElementController_t1733338872  : public MonoBehaviour_t667441552
{
public:
	// System.String HomeGroceryScrollviewElementController::groceryID
	String_t* ___groceryID_2;

public:
	inline static int32_t get_offset_of_groceryID_2() { return static_cast<int32_t>(offsetof(HomeGroceryScrollviewElementController_t1733338872, ___groceryID_2)); }
	inline String_t* get_groceryID_2() const { return ___groceryID_2; }
	inline String_t** get_address_of_groceryID_2() { return &___groceryID_2; }
	inline void set_groceryID_2(String_t* value)
	{
		___groceryID_2 = value;
		Il2CppCodeGenWriteBarrier(&___groceryID_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
