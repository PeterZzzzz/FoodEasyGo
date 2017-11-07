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
// LDFW.UI.LDFWToggleController
struct LDFWToggleController_t986233105;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t1266085011;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.UI.LDFWToggleElementController
struct  LDFWToggleElementController_t2675525193  : public MonoBehaviour_t667441552
{
public:
	// System.String LDFW.UI.LDFWToggleElementController::toggleID
	String_t* ___toggleID_2;
	// LDFW.UI.LDFWToggleController LDFW.UI.LDFWToggleElementController::toggleController
	LDFWToggleController_t986233105 * ___toggleController_3;
	// System.Boolean LDFW.UI.LDFWToggleElementController::isToggleOn
	bool ___isToggleOn_4;
	// UnityEngine.Events.UnityEvent LDFW.UI.LDFWToggleElementController::onSelectEvent
	UnityEvent_t1266085011 * ___onSelectEvent_5;
	// UnityEngine.Events.UnityEvent LDFW.UI.LDFWToggleElementController::onDeselectEvent
	UnityEvent_t1266085011 * ___onDeselectEvent_6;

public:
	inline static int32_t get_offset_of_toggleID_2() { return static_cast<int32_t>(offsetof(LDFWToggleElementController_t2675525193, ___toggleID_2)); }
	inline String_t* get_toggleID_2() const { return ___toggleID_2; }
	inline String_t** get_address_of_toggleID_2() { return &___toggleID_2; }
	inline void set_toggleID_2(String_t* value)
	{
		___toggleID_2 = value;
		Il2CppCodeGenWriteBarrier(&___toggleID_2, value);
	}

	inline static int32_t get_offset_of_toggleController_3() { return static_cast<int32_t>(offsetof(LDFWToggleElementController_t2675525193, ___toggleController_3)); }
	inline LDFWToggleController_t986233105 * get_toggleController_3() const { return ___toggleController_3; }
	inline LDFWToggleController_t986233105 ** get_address_of_toggleController_3() { return &___toggleController_3; }
	inline void set_toggleController_3(LDFWToggleController_t986233105 * value)
	{
		___toggleController_3 = value;
		Il2CppCodeGenWriteBarrier(&___toggleController_3, value);
	}

	inline static int32_t get_offset_of_isToggleOn_4() { return static_cast<int32_t>(offsetof(LDFWToggleElementController_t2675525193, ___isToggleOn_4)); }
	inline bool get_isToggleOn_4() const { return ___isToggleOn_4; }
	inline bool* get_address_of_isToggleOn_4() { return &___isToggleOn_4; }
	inline void set_isToggleOn_4(bool value)
	{
		___isToggleOn_4 = value;
	}

	inline static int32_t get_offset_of_onSelectEvent_5() { return static_cast<int32_t>(offsetof(LDFWToggleElementController_t2675525193, ___onSelectEvent_5)); }
	inline UnityEvent_t1266085011 * get_onSelectEvent_5() const { return ___onSelectEvent_5; }
	inline UnityEvent_t1266085011 ** get_address_of_onSelectEvent_5() { return &___onSelectEvent_5; }
	inline void set_onSelectEvent_5(UnityEvent_t1266085011 * value)
	{
		___onSelectEvent_5 = value;
		Il2CppCodeGenWriteBarrier(&___onSelectEvent_5, value);
	}

	inline static int32_t get_offset_of_onDeselectEvent_6() { return static_cast<int32_t>(offsetof(LDFWToggleElementController_t2675525193, ___onDeselectEvent_6)); }
	inline UnityEvent_t1266085011 * get_onDeselectEvent_6() const { return ___onDeselectEvent_6; }
	inline UnityEvent_t1266085011 ** get_address_of_onDeselectEvent_6() { return &___onDeselectEvent_6; }
	inline void set_onDeselectEvent_6(UnityEvent_t1266085011 * value)
	{
		___onDeselectEvent_6 = value;
		Il2CppCodeGenWriteBarrier(&___onDeselectEvent_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
