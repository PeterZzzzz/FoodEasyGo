#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;
// UnityEngine.Material
struct Material_t3870600107;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"
#include "UnityEngine_UnityEngine_Material3870600107.h"

// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
extern "C"  void Graphics_Blit_m3408836917 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___source0, RenderTexture_t1963041563 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void Graphics_Blit_m336256356 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___source0, RenderTexture_t1963041563 * ___dest1, Material_t3870600107 * ___mat2, int32_t ___pass3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
extern "C"  void Graphics_Internal_BlitMaterial_m2813555808 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___source0, RenderTexture_t1963041563 * ___dest1, Material_t3870600107 * ___mat2, int32_t ___pass3, bool ___setRT4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
