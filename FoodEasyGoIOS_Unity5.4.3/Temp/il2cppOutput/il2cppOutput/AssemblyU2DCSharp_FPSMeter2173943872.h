#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FPSMeter
struct  FPSMeter_t2173943872  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text FPSMeter::m_text
	Text_t9039225 * ___m_text_3;
	// System.Single FPSMeter::m_cycleStartTime
	float ___m_cycleStartTime_4;
	// System.Int32 FPSMeter::m_cycleStartFrame
	int32_t ___m_cycleStartFrame_5;

public:
	inline static int32_t get_offset_of_m_text_3() { return static_cast<int32_t>(offsetof(FPSMeter_t2173943872, ___m_text_3)); }
	inline Text_t9039225 * get_m_text_3() const { return ___m_text_3; }
	inline Text_t9039225 ** get_address_of_m_text_3() { return &___m_text_3; }
	inline void set_m_text_3(Text_t9039225 * value)
	{
		___m_text_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_text_3, value);
	}

	inline static int32_t get_offset_of_m_cycleStartTime_4() { return static_cast<int32_t>(offsetof(FPSMeter_t2173943872, ___m_cycleStartTime_4)); }
	inline float get_m_cycleStartTime_4() const { return ___m_cycleStartTime_4; }
	inline float* get_address_of_m_cycleStartTime_4() { return &___m_cycleStartTime_4; }
	inline void set_m_cycleStartTime_4(float value)
	{
		___m_cycleStartTime_4 = value;
	}

	inline static int32_t get_offset_of_m_cycleStartFrame_5() { return static_cast<int32_t>(offsetof(FPSMeter_t2173943872, ___m_cycleStartFrame_5)); }
	inline int32_t get_m_cycleStartFrame_5() const { return ___m_cycleStartFrame_5; }
	inline int32_t* get_address_of_m_cycleStartFrame_5() { return &___m_cycleStartFrame_5; }
	inline void set_m_cycleStartFrame_5(int32_t value)
	{
		___m_cycleStartFrame_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
