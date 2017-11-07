#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LanguageButtonController
struct  LanguageButtonController_t308009990  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform LanguageButtonController::EN
	Transform_t1659122786 * ___EN_2;
	// UnityEngine.Transform LanguageButtonController::ZH
	Transform_t1659122786 * ___ZH_3;

public:
	inline static int32_t get_offset_of_EN_2() { return static_cast<int32_t>(offsetof(LanguageButtonController_t308009990, ___EN_2)); }
	inline Transform_t1659122786 * get_EN_2() const { return ___EN_2; }
	inline Transform_t1659122786 ** get_address_of_EN_2() { return &___EN_2; }
	inline void set_EN_2(Transform_t1659122786 * value)
	{
		___EN_2 = value;
		Il2CppCodeGenWriteBarrier(&___EN_2, value);
	}

	inline static int32_t get_offset_of_ZH_3() { return static_cast<int32_t>(offsetof(LanguageButtonController_t308009990, ___ZH_3)); }
	inline Transform_t1659122786 * get_ZH_3() const { return ___ZH_3; }
	inline Transform_t1659122786 ** get_address_of_ZH_3() { return &___ZH_3; }
	inline void set_ZH_3(Transform_t1659122786 * value)
	{
		___ZH_3 = value;
		Il2CppCodeGenWriteBarrier(&___ZH_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
