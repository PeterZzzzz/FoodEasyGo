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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFWPlayerPrefsSettingsController
struct  LDFWPlayerPrefsSettingsController_t3843250949  : public Il2CppObject
{
public:

public:
};

struct LDFWPlayerPrefsSettingsController_t3843250949_StaticFields
{
public:
	// System.String LDFWPlayerPrefsSettingsController::SoundVolumeKey
	String_t* ___SoundVolumeKey_0;
	// System.String LDFWPlayerPrefsSettingsController::FrameRateDisplayKey
	String_t* ___FrameRateDisplayKey_1;

public:
	inline static int32_t get_offset_of_SoundVolumeKey_0() { return static_cast<int32_t>(offsetof(LDFWPlayerPrefsSettingsController_t3843250949_StaticFields, ___SoundVolumeKey_0)); }
	inline String_t* get_SoundVolumeKey_0() const { return ___SoundVolumeKey_0; }
	inline String_t** get_address_of_SoundVolumeKey_0() { return &___SoundVolumeKey_0; }
	inline void set_SoundVolumeKey_0(String_t* value)
	{
		___SoundVolumeKey_0 = value;
		Il2CppCodeGenWriteBarrier(&___SoundVolumeKey_0, value);
	}

	inline static int32_t get_offset_of_FrameRateDisplayKey_1() { return static_cast<int32_t>(offsetof(LDFWPlayerPrefsSettingsController_t3843250949_StaticFields, ___FrameRateDisplayKey_1)); }
	inline String_t* get_FrameRateDisplayKey_1() const { return ___FrameRateDisplayKey_1; }
	inline String_t** get_address_of_FrameRateDisplayKey_1() { return &___FrameRateDisplayKey_1; }
	inline void set_FrameRateDisplayKey_1(String_t* value)
	{
		___FrameRateDisplayKey_1 = value;
		Il2CppCodeGenWriteBarrier(&___FrameRateDisplayKey_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
