#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CanvasGroup
struct CanvasGroup_t3702418109;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t1266085011;

#include "AssemblyU2DCSharp_LDFW_Tween_LDFWTweenBase342943053.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.Tween.LDFWTweenUICanvasGroup
struct  LDFWTweenUICanvasGroup_t1346437691  : public LDFWTweenBase_t342943053
{
public:
	// UnityEngine.CanvasGroup LDFW.Tween.LDFWTweenUICanvasGroup::target
	CanvasGroup_t3702418109 * ___target_25;
	// UnityEngine.Events.UnityEvent LDFW.Tween.LDFWTweenUICanvasGroup::callBack
	UnityEvent_t1266085011 * ___callBack_26;

public:
	inline static int32_t get_offset_of_target_25() { return static_cast<int32_t>(offsetof(LDFWTweenUICanvasGroup_t1346437691, ___target_25)); }
	inline CanvasGroup_t3702418109 * get_target_25() const { return ___target_25; }
	inline CanvasGroup_t3702418109 ** get_address_of_target_25() { return &___target_25; }
	inline void set_target_25(CanvasGroup_t3702418109 * value)
	{
		___target_25 = value;
		Il2CppCodeGenWriteBarrier(&___target_25, value);
	}

	inline static int32_t get_offset_of_callBack_26() { return static_cast<int32_t>(offsetof(LDFWTweenUICanvasGroup_t1346437691, ___callBack_26)); }
	inline UnityEvent_t1266085011 * get_callBack_26() const { return ___callBack_26; }
	inline UnityEvent_t1266085011 ** get_address_of_callBack_26() { return &___callBack_26; }
	inline void set_callBack_26(UnityEvent_t1266085011 * value)
	{
		___callBack_26 = value;
		Il2CppCodeGenWriteBarrier(&___callBack_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
