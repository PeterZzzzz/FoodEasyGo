#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "AssemblyU2DCSharp_BlurBehind_Mode3867499121.h"
#include "AssemblyU2DCSharp_BlurBehind_Settings2434516465.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlurBehind
struct  BlurBehind_t111009953  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Shader BlurBehind::blurShader
	Shader_t3191267369 * ___blurShader_5;
	// UnityEngine.Material BlurBehind::blurMaterial
	Material_t3870600107 * ___blurMaterial_6;
	// BlurBehind/Mode BlurBehind::mode
	int32_t ___mode_7;
	// System.Single BlurBehind::radius
	float ___radius_8;
	// BlurBehind/Settings BlurBehind::settings
	int32_t ___settings_9;
	// System.Single BlurBehind::downsample
	float ___downsample_10;
	// System.Int32 BlurBehind::iterations
	int32_t ___iterations_11;
	// UnityEngine.Rect BlurBehind::cropRect
	Rect_t4241904616  ___cropRect_12;
	// UnityEngine.Rect BlurBehind::pixelOffset
	Rect_t4241904616  ___pixelOffset_13;

public:
	inline static int32_t get_offset_of_blurShader_5() { return static_cast<int32_t>(offsetof(BlurBehind_t111009953, ___blurShader_5)); }
	inline Shader_t3191267369 * get_blurShader_5() const { return ___blurShader_5; }
	inline Shader_t3191267369 ** get_address_of_blurShader_5() { return &___blurShader_5; }
	inline void set_blurShader_5(Shader_t3191267369 * value)
	{
		___blurShader_5 = value;
		Il2CppCodeGenWriteBarrier(&___blurShader_5, value);
	}

	inline static int32_t get_offset_of_blurMaterial_6() { return static_cast<int32_t>(offsetof(BlurBehind_t111009953, ___blurMaterial_6)); }
	inline Material_t3870600107 * get_blurMaterial_6() const { return ___blurMaterial_6; }
	inline Material_t3870600107 ** get_address_of_blurMaterial_6() { return &___blurMaterial_6; }
	inline void set_blurMaterial_6(Material_t3870600107 * value)
	{
		___blurMaterial_6 = value;
		Il2CppCodeGenWriteBarrier(&___blurMaterial_6, value);
	}

	inline static int32_t get_offset_of_mode_7() { return static_cast<int32_t>(offsetof(BlurBehind_t111009953, ___mode_7)); }
	inline int32_t get_mode_7() const { return ___mode_7; }
	inline int32_t* get_address_of_mode_7() { return &___mode_7; }
	inline void set_mode_7(int32_t value)
	{
		___mode_7 = value;
	}

	inline static int32_t get_offset_of_radius_8() { return static_cast<int32_t>(offsetof(BlurBehind_t111009953, ___radius_8)); }
	inline float get_radius_8() const { return ___radius_8; }
	inline float* get_address_of_radius_8() { return &___radius_8; }
	inline void set_radius_8(float value)
	{
		___radius_8 = value;
	}

	inline static int32_t get_offset_of_settings_9() { return static_cast<int32_t>(offsetof(BlurBehind_t111009953, ___settings_9)); }
	inline int32_t get_settings_9() const { return ___settings_9; }
	inline int32_t* get_address_of_settings_9() { return &___settings_9; }
	inline void set_settings_9(int32_t value)
	{
		___settings_9 = value;
	}

	inline static int32_t get_offset_of_downsample_10() { return static_cast<int32_t>(offsetof(BlurBehind_t111009953, ___downsample_10)); }
	inline float get_downsample_10() const { return ___downsample_10; }
	inline float* get_address_of_downsample_10() { return &___downsample_10; }
	inline void set_downsample_10(float value)
	{
		___downsample_10 = value;
	}

	inline static int32_t get_offset_of_iterations_11() { return static_cast<int32_t>(offsetof(BlurBehind_t111009953, ___iterations_11)); }
	inline int32_t get_iterations_11() const { return ___iterations_11; }
	inline int32_t* get_address_of_iterations_11() { return &___iterations_11; }
	inline void set_iterations_11(int32_t value)
	{
		___iterations_11 = value;
	}

	inline static int32_t get_offset_of_cropRect_12() { return static_cast<int32_t>(offsetof(BlurBehind_t111009953, ___cropRect_12)); }
	inline Rect_t4241904616  get_cropRect_12() const { return ___cropRect_12; }
	inline Rect_t4241904616 * get_address_of_cropRect_12() { return &___cropRect_12; }
	inline void set_cropRect_12(Rect_t4241904616  value)
	{
		___cropRect_12 = value;
	}

	inline static int32_t get_offset_of_pixelOffset_13() { return static_cast<int32_t>(offsetof(BlurBehind_t111009953, ___pixelOffset_13)); }
	inline Rect_t4241904616  get_pixelOffset_13() const { return ___pixelOffset_13; }
	inline Rect_t4241904616 * get_address_of_pixelOffset_13() { return &___pixelOffset_13; }
	inline void set_pixelOffset_13(Rect_t4241904616  value)
	{
		___pixelOffset_13 = value;
	}
};

struct BlurBehind_t111009953_StaticFields
{
public:
	// UnityEngine.RenderTexture BlurBehind::storedTexture
	RenderTexture_t1963041563 * ___storedTexture_2;
	// System.Int32 BlurBehind::count
	int32_t ___count_3;
	// UnityEngine.Rect BlurBehind::storedRect
	Rect_t4241904616  ___storedRect_4;

public:
	inline static int32_t get_offset_of_storedTexture_2() { return static_cast<int32_t>(offsetof(BlurBehind_t111009953_StaticFields, ___storedTexture_2)); }
	inline RenderTexture_t1963041563 * get_storedTexture_2() const { return ___storedTexture_2; }
	inline RenderTexture_t1963041563 ** get_address_of_storedTexture_2() { return &___storedTexture_2; }
	inline void set_storedTexture_2(RenderTexture_t1963041563 * value)
	{
		___storedTexture_2 = value;
		Il2CppCodeGenWriteBarrier(&___storedTexture_2, value);
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(BlurBehind_t111009953_StaticFields, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}

	inline static int32_t get_offset_of_storedRect_4() { return static_cast<int32_t>(offsetof(BlurBehind_t111009953_StaticFields, ___storedRect_4)); }
	inline Rect_t4241904616  get_storedRect_4() const { return ___storedRect_4; }
	inline Rect_t4241904616 * get_address_of_storedRect_4() { return &___storedRect_4; }
	inline void set_storedRect_4(Rect_t4241904616  value)
	{
		___storedRect_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
