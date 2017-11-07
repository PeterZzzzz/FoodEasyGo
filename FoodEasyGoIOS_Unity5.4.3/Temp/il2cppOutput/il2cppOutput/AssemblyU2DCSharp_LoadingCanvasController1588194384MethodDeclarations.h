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

// LoadingCanvasController
struct LoadingCanvasController_t1588194384;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void LoadingCanvasController::.ctor()
extern "C"  void LoadingCanvasController__ctor_m3502329115 (LoadingCanvasController_t1588194384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadingCanvasController::Awake()
extern "C"  void LoadingCanvasController_Awake_m3739934334 (LoadingCanvasController_t1588194384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LoadingCanvasController::Start()
extern "C"  Il2CppObject * LoadingCanvasController_Start_m1128350819 (LoadingCanvasController_t1588194384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadingCanvasController::DownLoadGuideImages()
extern "C"  void LoadingCanvasController_DownLoadGuideImages_m3938819077 (LoadingCanvasController_t1588194384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LoadingCanvasController::DownLoadGuideImagesCoroutine(System.String,System.String,System.String)
extern "C"  Il2CppObject * LoadingCanvasController_DownLoadGuideImagesCoroutine_m2467165741 (LoadingCanvasController_t1588194384 * __this, String_t* ___image0URL0, String_t* ___image1URL1, String_t* ___image2URL2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LoadingCanvasController::DisplayGuideImagesFromCache()
extern "C"  Il2CppObject * LoadingCanvasController_DisplayGuideImagesFromCache_m942465703 (LoadingCanvasController_t1588194384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadingCanvasController::LoadNextScene()
extern "C"  void LoadingCanvasController_LoadNextScene_m3153165452 (LoadingCanvasController_t1588194384 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadingCanvasController::<DownLoadGuideImages>m__35(JSONObject,System.String)
extern "C"  void LoadingCanvasController_U3CDownLoadGuideImagesU3Em__35_m3555189343 (LoadingCanvasController_t1588194384 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadingCanvasController::<DownLoadGuideImages>m__36(JSONObject,System.String)
extern "C"  void LoadingCanvasController_U3CDownLoadGuideImagesU3Em__36_m221836064 (LoadingCanvasController_t1588194384 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
