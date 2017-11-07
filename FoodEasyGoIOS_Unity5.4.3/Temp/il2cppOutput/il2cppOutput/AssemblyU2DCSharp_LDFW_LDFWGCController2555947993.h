#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LDFW.LDFWGCController
struct LDFWGCController_t2555947993;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.LDFWGCController
struct  LDFWGCController_t2555947993  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LDFW.LDFWGCController::gcList
	List_1_t747900261 * ___gcList_3;

public:
	inline static int32_t get_offset_of_gcList_3() { return static_cast<int32_t>(offsetof(LDFWGCController_t2555947993, ___gcList_3)); }
	inline List_1_t747900261 * get_gcList_3() const { return ___gcList_3; }
	inline List_1_t747900261 ** get_address_of_gcList_3() { return &___gcList_3; }
	inline void set_gcList_3(List_1_t747900261 * value)
	{
		___gcList_3 = value;
		Il2CppCodeGenWriteBarrier(&___gcList_3, value);
	}
};

struct LDFWGCController_t2555947993_StaticFields
{
public:
	// LDFW.LDFWGCController LDFW.LDFWGCController::instance
	LDFWGCController_t2555947993 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(LDFWGCController_t2555947993_StaticFields, ___instance_2)); }
	inline LDFWGCController_t2555947993 * get_instance_2() const { return ___instance_2; }
	inline LDFWGCController_t2555947993 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(LDFWGCController_t2555947993 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
