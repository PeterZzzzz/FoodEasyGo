#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<LDFW.Network.LDFWWWWCallCoroutineWrapper>
struct List_1_t718775653;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.Network.LDFWServerCallController
struct  LDFWServerCallController_t3174857822  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<LDFW.Network.LDFWWWWCallCoroutineWrapper> LDFW.Network.LDFWServerCallController::wwwList
	List_1_t718775653 * ___wwwList_2;
	// System.Single LDFW.Network.LDFWServerCallController::wwwCheckTimeInterval
	float ___wwwCheckTimeInterval_3;

public:
	inline static int32_t get_offset_of_wwwList_2() { return static_cast<int32_t>(offsetof(LDFWServerCallController_t3174857822, ___wwwList_2)); }
	inline List_1_t718775653 * get_wwwList_2() const { return ___wwwList_2; }
	inline List_1_t718775653 ** get_address_of_wwwList_2() { return &___wwwList_2; }
	inline void set_wwwList_2(List_1_t718775653 * value)
	{
		___wwwList_2 = value;
		Il2CppCodeGenWriteBarrier(&___wwwList_2, value);
	}

	inline static int32_t get_offset_of_wwwCheckTimeInterval_3() { return static_cast<int32_t>(offsetof(LDFWServerCallController_t3174857822, ___wwwCheckTimeInterval_3)); }
	inline float get_wwwCheckTimeInterval_3() const { return ___wwwCheckTimeInterval_3; }
	inline float* get_address_of_wwwCheckTimeInterval_3() { return &___wwwCheckTimeInterval_3; }
	inline void set_wwwCheckTimeInterval_3(float value)
	{
		___wwwCheckTimeInterval_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
