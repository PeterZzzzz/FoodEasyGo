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

// LDFW.Network.LDFWImageDownloader
struct LDFWImageDownloader_t2979035701;
// System.String
struct String_t;
// UnityEngine.WWWForm
struct WWWForm_t461342257;
// UnityEngine.UI.RawImage
struct RawImage_t821930207;
// UnityEngine.Events.UnityAction
struct UnityAction_t594794173;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_WWWForm461342257.h"
#include "UnityEngine_UI_UnityEngine_UI_RawImage821930207.h"
#include "UnityEngine_UnityEngine_Events_UnityAction594794173.h"

// System.Void LDFW.Network.LDFWImageDownloader::.ctor()
extern "C"  void LDFWImageDownloader__ctor_m4290618745 (LDFWImageDownloader_t2979035701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LDFW.Network.LDFWImageDownloader::get_isDone()
extern "C"  bool LDFWImageDownloader_get_isDone_m1021037652 (LDFWImageDownloader_t2979035701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single LDFW.Network.LDFWImageDownloader::get_progress()
extern "C"  float LDFWImageDownloader_get_progress_m3844510413 (LDFWImageDownloader_t2979035701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFW.Network.LDFWImageDownloader::LDFWImageDownloader2(System.String,UnityEngine.WWWForm,UnityEngine.UI.RawImage,UnityEngine.Events.UnityAction,UnityEngine.Events.UnityAction)
extern "C"  void LDFWImageDownloader_LDFWImageDownloader2_m3826327306 (LDFWImageDownloader_t2979035701 * __this, String_t* ___url0, WWWForm_t461342257 * ___form1, RawImage_t821930207 * ___img2, UnityAction_t594794173 * ___callbackEventSuccess3, UnityAction_t594794173 * ___callbackEventFailure4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator LDFW.Network.LDFWImageDownloader::StartDownloadCoroutine()
extern "C"  Il2CppObject * LDFWImageDownloader_StartDownloadCoroutine_m2048159201 (LDFWImageDownloader_t2979035701 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
