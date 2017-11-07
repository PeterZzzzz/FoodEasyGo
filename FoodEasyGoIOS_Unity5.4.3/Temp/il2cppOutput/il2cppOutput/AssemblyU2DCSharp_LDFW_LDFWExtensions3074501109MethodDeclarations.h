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

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Void LDFW.LDFWExtensions::DestroyGO(UnityEngine.GameObject)
extern "C"  void LDFWExtensions_DestroyGO_m217994977 (Il2CppObject * __this /* static, unused */, GameObject_t3674682005 * ___go0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.LDFWExtensions::DestroyAllChildren(UnityEngine.Transform)
extern "C"  void LDFWExtensions_DestroyAllChildren_m957970044 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.LDFWExtensions::DestroyAllChildrenAfterSiblingIndex(UnityEngine.Transform,System.Int32)
extern "C"  void LDFWExtensions_DestroyAllChildrenAfterSiblingIndex_m3124988967 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, int32_t ___sublingIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
