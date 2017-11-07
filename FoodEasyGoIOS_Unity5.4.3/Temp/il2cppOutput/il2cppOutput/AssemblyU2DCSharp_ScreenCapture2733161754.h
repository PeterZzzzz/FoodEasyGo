#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScreenCapture
struct  ScreenCapture_t2733161754  : public Il2CppObject
{
public:

public:
};

struct ScreenCapture_t2733161754_StaticFields
{
public:
	// UnityEngine.Texture2D ScreenCapture::tex
	Texture2D_t3884108195 * ___tex_0;

public:
	inline static int32_t get_offset_of_tex_0() { return static_cast<int32_t>(offsetof(ScreenCapture_t2733161754_StaticFields, ___tex_0)); }
	inline Texture2D_t3884108195 * get_tex_0() const { return ___tex_0; }
	inline Texture2D_t3884108195 ** get_address_of_tex_0() { return &___tex_0; }
	inline void set_tex_0(Texture2D_t3884108195 * value)
	{
		___tex_0 = value;
		Il2CppCodeGenWriteBarrier(&___tex_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
