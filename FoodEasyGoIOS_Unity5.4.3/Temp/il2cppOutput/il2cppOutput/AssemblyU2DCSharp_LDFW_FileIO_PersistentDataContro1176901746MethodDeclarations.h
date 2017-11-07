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

// LDFW.FileIO.PersistentDataControl
struct PersistentDataControl_t1176901746;
// System.String
struct String_t;
// UnityEngine.UI.RawImage
struct RawImage_t821930207;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UI_UnityEngine_UI_RawImage821930207.h"

// System.Void LDFW.FileIO.PersistentDataControl::.ctor()
extern "C"  void PersistentDataControl__ctor_m3860049814 (PersistentDataControl_t1176901746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.FileIO.PersistentDataControl::Awake()
extern "C"  void PersistentDataControl_Awake_m4097655033 (PersistentDataControl_t1176901746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.FileIO.PersistentDataControl::CreateDirIfNotExist(System.String)
extern "C"  void PersistentDataControl_CreateDirIfNotExist_m1902968028 (Il2CppObject * __this /* static, unused */, String_t* ___subDirpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LDFW.FileIO.PersistentDataControl::CheckCacheByName(System.String,System.String)
extern "C"  bool PersistentDataControl_CheckCacheByName_m2241044552 (Il2CppObject * __this /* static, unused */, String_t* ___subDirPath0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.FileIO.PersistentDataControl::LoadCachedTextureToRawImage(System.String,System.String,UnityEngine.UI.RawImage)
extern "C"  void PersistentDataControl_LoadCachedTextureToRawImage_m2504699423 (PersistentDataControl_t1176901746 * __this, String_t* ___subDirPath0, String_t* ___name1, RawImage_t821930207 * ___image2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LDFW.FileIO.PersistentDataControl::SaveToLocal(System.String,System.String,System.Byte[])
extern "C"  bool PersistentDataControl_SaveToLocal_m1031230662 (Il2CppObject * __this /* static, unused */, String_t* ___subDirpath0, String_t* ___name1, ByteU5BU5D_t4260760469* ___bytes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LDFW.FileIO.PersistentDataControl::GetDirSize(System.String)
extern "C"  int64_t PersistentDataControl_GetDirSize_m1586416811 (Il2CppObject * __this /* static, unused */, String_t* ___subDirpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.FileIO.PersistentDataControl::ClearDir(System.String)
extern "C"  void PersistentDataControl_ClearDir_m1440962132 (Il2CppObject * __this /* static, unused */, String_t* ___subDirpath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 LDFW.FileIO.PersistentDataControl::GetPersistentDataPathDirSize()
extern "C"  int64_t PersistentDataControl_GetPersistentDataPathDirSize_m3677146545 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.FileIO.PersistentDataControl::ClearPersistentDataPathDir()
extern "C"  void PersistentDataControl_ClearPersistentDataPathDir_m4244290664 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LDFW.FileIO.PersistentDataControl::LoadCachedTextureToRawImageCoroutine(System.String,System.String,UnityEngine.UI.RawImage)
extern "C"  Il2CppObject * PersistentDataControl_LoadCachedTextureToRawImageCoroutine_m39430743 (PersistentDataControl_t1176901746 * __this, String_t* ___subDirPath0, String_t* ___name1, RawImage_t821930207 * ___image2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LDFW.FileIO.PersistentDataControl::GetPersistentDatapathFullPath(System.String,System.String)
extern "C"  String_t* PersistentDataControl_GetPersistentDatapathFullPath_m561846871 (Il2CppObject * __this /* static, unused */, String_t* ___subDirPath0, String_t* ___name1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LDFW.FileIO.PersistentDataControl::GetPersistentDatapathDirPath(System.String)
extern "C"  String_t* PersistentDataControl_GetPersistentDatapathDirPath_m3750315457 (Il2CppObject * __this /* static, unused */, String_t* ___subDirPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.FileIO.PersistentDataControl::OnDestroy()
extern "C"  void PersistentDataControl_OnDestroy_m3736586639 (PersistentDataControl_t1176901746 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
