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

// IOManager
struct IOManager_t3942786983;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Texture2D3884108195.h"

// System.Void IOManager::.ctor()
extern "C"  void IOManager__ctor_m1618844068 (IOManager_t3942786983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D IOManager::LoadImage(System.String)
extern "C"  Texture2D_t3884108195 * IOManager_LoadImage_m930875118 (Il2CppObject * __this /* static, unused */, String_t* ___relativePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IOManager::SaveImage(UnityEngine.Texture2D,System.String,System.String)
extern "C"  void IOManager_SaveImage_m1796822772 (Il2CppObject * __this /* static, unused */, Texture2D_t3884108195 * ___texture0, String_t* ___path1, String_t* ___filename2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
