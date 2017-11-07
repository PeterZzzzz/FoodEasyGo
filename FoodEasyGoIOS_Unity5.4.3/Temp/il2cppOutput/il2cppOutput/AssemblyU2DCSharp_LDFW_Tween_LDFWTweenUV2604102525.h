#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;

#include "AssemblyU2DCSharp_LDFW_Tween_LDFWTweenBase342943053.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.Tween.LDFWTweenUV
struct  LDFWTweenUV_t2604102525  : public LDFWTweenBase_t342943053
{
public:
	// UnityEngine.Material LDFW.Tween.LDFWTweenUV::material
	Material_t3870600107 * ___material_25;

public:
	inline static int32_t get_offset_of_material_25() { return static_cast<int32_t>(offsetof(LDFWTweenUV_t2604102525, ___material_25)); }
	inline Material_t3870600107 * get_material_25() const { return ___material_25; }
	inline Material_t3870600107 ** get_address_of_material_25() { return &___material_25; }
	inline void set_material_25(Material_t3870600107 * value)
	{
		___material_25 = value;
		Il2CppCodeGenWriteBarrier(&___material_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
