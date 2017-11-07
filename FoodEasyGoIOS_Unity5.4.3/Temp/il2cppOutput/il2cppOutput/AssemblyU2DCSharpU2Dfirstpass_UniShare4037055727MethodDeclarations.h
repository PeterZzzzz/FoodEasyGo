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

// UniShare
struct UniShare_t4037055727;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void UniShare::.ctor()
extern "C"  void UniShare__ctor_m1303159104 (UniShare_t4037055727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniShare::presentActivitySheetWithImageAndString(System.String,System.Byte[],System.Int32)
extern "C"  void UniShare_presentActivitySheetWithImageAndString_m2596252958 (Il2CppObject * __this /* static, unused */, String_t* ___message0, ByteU5BU5D_t4260760469* ___imgData1, int32_t ____length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniShare::pluginInit(System.String)
extern "C"  void UniShare_pluginInit_m3172200091 (Il2CppObject * __this /* static, unused */, String_t* ___vkid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniShare::Start()
extern "C"  void UniShare_Start_m250296896 (UniShare_t4037055727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniShare::TakeScreenshot()
extern "C"  void UniShare_TakeScreenshot_m661452369 (UniShare_t4037055727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniShare::TakeScreenshotAndShare()
extern "C"  void UniShare_TakeScreenshotAndShare_m3942319289 (UniShare_t4037055727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniShare::ShareScreenshot()
extern "C"  void UniShare_ShareScreenshot_m4053682051 (UniShare_t4037055727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniShare::OnGUI()
extern "C"  void UniShare_OnGUI_m798557754 (UniShare_t4037055727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UniShare::getScreenshot()
extern "C"  Il2CppObject * UniShare_getScreenshot_m1403766954 (UniShare_t4037055727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniShare::ShareNativeImage(System.String)
extern "C"  void UniShare_ShareNativeImage_m3145853241 (UniShare_t4037055727 * __this, String_t* ___shareText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniShare::_Call()
extern "C"  void UniShare__Call_m907391643 (UniShare_t4037055727 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
