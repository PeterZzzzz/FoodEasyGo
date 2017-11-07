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

// UnityEngine.Shader
struct Shader_t3191267369;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2526458961;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Vector44282066567.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"

// System.Boolean UnityEngine.Shader::get_isSupported()
extern "C"  bool Shader_get_isSupported_m1422621179 (Shader_t3191267369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::EnableKeyword(System.String)
extern "C"  void Shader_EnableKeyword_m944528214 (Il2CppObject * __this /* static, unused */, String_t* ___keyword0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
extern "C"  void Shader_DisableKeyword_m2163321765 (Il2CppObject * __this /* static, unused */, String_t* ___keyword0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalColor(System.String,UnityEngine.Color)
extern "C"  void Shader_SetGlobalColor_m1669397640 (Il2CppObject * __this /* static, unused */, String_t* ___propertyName0, Color_t4194546905  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalColor(System.Int32,UnityEngine.Color)
extern "C"  void Shader_SetGlobalColor_m1709492491 (Il2CppObject * __this /* static, unused */, int32_t ___nameID0, Color_t4194546905  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::INTERNAL_CALL_SetGlobalColor(System.Int32,UnityEngine.Color&)
extern "C"  void Shader_INTERNAL_CALL_SetGlobalColor_m1549785026 (Il2CppObject * __this /* static, unused */, int32_t ___nameID0, Color_t4194546905 * ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalVector(System.String,UnityEngine.Vector4)
extern "C"  void Shader_SetGlobalVector_m1990013606 (Il2CppObject * __this /* static, unused */, String_t* ___propertyName0, Vector4_t4282066567  ___vec1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalTexture(System.String,UnityEngine.Texture)
extern "C"  void Shader_SetGlobalTexture_m2110804504 (Il2CppObject * __this /* static, unused */, String_t* ___propertyName0, Texture_t2526458961 * ___tex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::SetGlobalTexture(System.Int32,UnityEngine.Texture)
extern "C"  void Shader_SetGlobalTexture_m2332174155 (Il2CppObject * __this /* static, unused */, int32_t ___nameID0, Texture_t2526458961 * ___tex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C"  int32_t Shader_PropertyToID_m3019342011 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
