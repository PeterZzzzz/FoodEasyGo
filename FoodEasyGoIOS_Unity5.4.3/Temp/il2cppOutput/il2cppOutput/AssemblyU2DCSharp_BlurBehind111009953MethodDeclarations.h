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

// BlurBehind
struct BlurBehind_t111009953;
// UnityEngine.RenderTexture
struct RenderTexture_t1963041563;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat2841883826.h"
#include "UnityEngine_UnityEngine_RenderTexture1963041563.h"

// System.Void BlurBehind::.ctor()
extern "C"  void BlurBehind__ctor_m2600066330 (BlurBehind_t111009953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurBehind::.cctor()
extern "C"  void BlurBehind__cctor_m2810548691 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurBehind::SetViewport()
extern "C"  void BlurBehind_SetViewport_m4156533280 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurBehind::ResetViewport()
extern "C"  void BlurBehind_ResetViewport_m1481073933 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurBehind::CheckSettings(System.Int32)
extern "C"  void BlurBehind_CheckSettings_m2377357972 (BlurBehind_t111009953 * __this, int32_t ___sourceSize0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurBehind::CheckOutput(System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  void BlurBehind_CheckOutput_m43115468 (BlurBehind_t111009953 * __this, int32_t ___rtW0, int32_t ___rtH1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BlurBehind::CheckResources()
extern "C"  bool BlurBehind_CheckResources_m701752603 (BlurBehind_t111009953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BlurBehind::CheckSupport()
extern "C"  bool BlurBehind_CheckSupport_m2191928709 (BlurBehind_t111009953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurBehind::CreateOutput(System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  void BlurBehind_CreateOutput_m1037980582 (BlurBehind_t111009953 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture BlurBehind::CropSource(UnityEngine.RenderTexture)
extern "C"  RenderTexture_t1963041563 * BlurBehind_CropSource_m2091498986 (BlurBehind_t111009953 * __this, RenderTexture_t1963041563 * ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurBehind::Downsample(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BlurBehind_Downsample_m2500993996 (BlurBehind_t111009953 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___dest1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurBehind::OnDisable()
extern "C"  void BlurBehind_OnDisable_m2956530817 (BlurBehind_t111009953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurBehind::OnEnable()
extern "C"  void BlurBehind_OnEnable_m912432172 (BlurBehind_t111009953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurBehind::OnPreRender()
extern "C"  void BlurBehind_OnPreRender_m2278473074 (BlurBehind_t111009953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurBehind::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BlurBehind_OnRenderImage_m1129293572 (BlurBehind_t111009953 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___destination1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BlurBehind::SetOutputSize(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32&,System.Int32&)
extern "C"  void BlurBehind_SetOutputSize_m38985488 (BlurBehind_t111009953 * __this, RenderTexture_t1963041563 * ___source0, RenderTexture_t1963041563 * ___croppedSource1, int32_t* ___width2, int32_t* ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
