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

// ImageDownloader2
struct ImageDownloader2_t1159004002;
// System.String
struct String_t;
// UnityEngine.UI.RawImage
struct RawImage_t821930207;
// UnityEngine.Events.UnityAction
struct UnityAction_t594794173;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UI_UnityEngine_UI_RawImage821930207.h"
#include "UnityEngine_UnityEngine_Events_UnityAction594794173.h"

// System.Void ImageDownloader2::.ctor(System.String,System.String,UnityEngine.UI.RawImage,System.Int32,UnityEngine.Events.UnityAction,UnityEngine.Events.UnityAction,System.Boolean)
extern "C"  void ImageDownloader2__ctor_m3298310689 (ImageDownloader2_t1159004002 * __this, String_t* ___imagePath0, String_t* ___cacheDirPath1, RawImage_t821930207 * ___img2, int32_t ___size3, UnityAction_t594794173 * ___callbackEventSuccess4, UnityAction_t594794173 * ___callbackEventFailure5, bool ___saveCache6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
