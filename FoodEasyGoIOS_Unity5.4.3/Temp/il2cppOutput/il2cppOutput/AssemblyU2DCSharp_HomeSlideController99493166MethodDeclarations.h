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

// HomeSlideController
struct HomeSlideController_t99493166;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform972643934.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void HomeSlideController::.ctor()
extern "C"  void HomeSlideController__ctor_m3933987325 (HomeSlideController_t99493166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeSlideController::Awake()
extern "C"  void HomeSlideController_Awake_m4171592544 (HomeSlideController_t99493166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeSlideController::AddImage(UnityEngine.RectTransform,System.String)
extern "C"  void HomeSlideController_AddImage_m672109628 (HomeSlideController_t99493166 * __this, RectTransform_t972643934 * ___image0, String_t* ___externalURL1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HomeSlideController::StartSlideShow(JSONObject)
extern "C"  void HomeSlideController_StartSlideShow_m1078165836 (HomeSlideController_t99493166 * __this, JSONObject_t1752376903 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HomeSlideController::StartSlideShowCoroutine(JSONObject)
extern "C"  Il2CppObject * HomeSlideController_StartSlideShowCoroutine_m2088079144 (HomeSlideController_t99493166 * __this, JSONObject_t1752376903 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
