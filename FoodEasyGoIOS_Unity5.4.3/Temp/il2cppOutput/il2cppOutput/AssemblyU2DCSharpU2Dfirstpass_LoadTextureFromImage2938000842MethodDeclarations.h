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

// LoadTextureFromImagePicker
struct LoadTextureFromImagePicker_t2938000842;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Texture
struct Texture_t2526458961;
// UnityEngine.Color32[]
struct Color32U5BU5D_t2960766953;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Texture2526458961.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void LoadTextureFromImagePicker::.ctor()
extern "C"  void LoadTextureFromImagePicker__ctor_m2440858565 (LoadTextureFromImagePicker_t2938000842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadTextureFromImagePicker::ShowPhotoLibrary(System.String,System.String)
extern "C"  bool LoadTextureFromImagePicker_ShowPhotoLibrary_m364356189 (Il2CppObject * __this /* static, unused */, String_t* ___callbackGameObjectName0, String_t* ___callbackMethodName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadTextureFromImagePicker::ShowCamera(System.String,System.String)
extern "C"  bool LoadTextureFromImagePicker_ShowCamera_m527343009 (Il2CppObject * __this /* static, unused */, String_t* ___callbackGameObjectName0, String_t* ___callbackMethodName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::Release()
extern "C"  void LoadTextureFromImagePicker_Release_m349946538 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::ReleaseLoadedImage()
extern "C"  void LoadTextureFromImagePicker_ReleaseLoadedImage_m67799662 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadTextureFromImagePicker::IsLoaded()
extern "C"  bool LoadTextureFromImagePicker_IsLoaded_m3459811466 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LoadTextureFromImagePicker::GetLoadedTextureWidth()
extern "C"  int32_t LoadTextureFromImagePicker_GetLoadedTextureWidth_m623367603 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LoadTextureFromImagePicker::GetLoadedTextureHeight()
extern "C"  int32_t LoadTextureFromImagePicker_GetLoadedTextureHeight_m2648340860 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D LoadTextureFromImagePicker::GetLoadedTexture(System.String,System.Int32,System.Int32)
extern "C"  Texture2D_t3884108195 * LoadTextureFromImagePicker_GetLoadedTexture_m1020276582 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___width1, int32_t ___height2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D LoadTextureFromImagePicker::GetLoadedTexture(System.String,System.Int32,System.Int32,System.Boolean)
extern "C"  Texture2D_t3884108195 * LoadTextureFromImagePicker_GetLoadedTexture_m1011526487 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___width1, int32_t ___height2, bool ___mipmap3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D LoadTextureFromImagePicker::GetLoadedTexture(System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C"  Texture2D_t3884108195 * LoadTextureFromImagePicker_GetLoadedTexture_m2306649926 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___width1, int32_t ___height2, bool ___mipmap3, bool ___linear4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::SetDefaultFrontCamera(System.Boolean)
extern "C"  void LoadTextureFromImagePicker_SetDefaultFrontCamera_m42408137 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::SaveAsJpgToPhotoLibrary(UnityEngine.Texture,System.String,System.String)
extern "C"  void LoadTextureFromImagePicker_SaveAsJpgToPhotoLibrary_m926767661 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___texture0, String_t* ___callbackGameObjectName1, String_t* ___callbackMethodName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::SaveAsPngToPhotoLibrary(UnityEngine.Texture,System.String,System.String)
extern "C"  void LoadTextureFromImagePicker_SaveAsPngToPhotoLibrary_m417045221 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___texture0, String_t* ___callbackGameObjectName1, String_t* ___callbackMethodName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::SaveAsPngWithTransparencyToPhotoLibrary(UnityEngine.Texture,System.String,System.String)
extern "C"  void LoadTextureFromImagePicker_SaveAsPngWithTransparencyToPhotoLibrary_m1824883655 (Il2CppObject * __this /* static, unused */, Texture_t2526458961 * ___texture0, String_t* ___callbackGameObjectName1, String_t* ___callbackMethodName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::SaveToLocalFile(System.String,UnityEngine.Texture)
extern "C"  void LoadTextureFromImagePicker_SaveToLocalFile_m1504560440 (Il2CppObject * __this /* static, unused */, String_t* ___filepath0, Texture_t2526458961 * ___texture1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture LoadTextureFromImagePicker::LoadFromLocalFile(System.String)
extern "C"  Texture_t2526458961 * LoadTextureFromImagePicker_LoadFromLocalFile_m82664951 (Il2CppObject * __this /* static, unused */, String_t* ___filepath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::DeleteLocalFile(System.String)
extern "C"  void LoadTextureFromImagePicker_DeleteLocalFile_m2101311459 (Il2CppObject * __this /* static, unused */, String_t* ___filepath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::SetPopoverAutoClose(System.Boolean)
extern "C"  void LoadTextureFromImagePicker_SetPopoverAutoClose_m420457088 (Il2CppObject * __this /* static, unused */, bool ___autoclose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::SetPopoverToCenter()
extern "C"  void LoadTextureFromImagePicker_SetPopoverToCenter_m857296722 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::SetPopoverTargetRect(System.Single,System.Single,System.Single,System.Single)
extern "C"  void LoadTextureFromImagePicker_SetPopoverTargetRect_m3666519619 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___width2, float ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadTextureFromImagePicker::ImagePicker_showPicker(System.String,System.String,System.String)
extern "C"  bool LoadTextureFromImagePicker_ImagePicker_showPicker_m3875048478 (Il2CppObject * __this /* static, unused */, String_t* ___sourceType0, String_t* ___callbackGameObjectName1, String_t* ___callbackMethodName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadTextureFromImagePicker::ImagePicker_isLoaded()
extern "C"  bool LoadTextureFromImagePicker_ImagePicker_isLoaded_m2442543552 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LoadTextureFromImagePicker::ImagePicker_getLoadedTexrureWidth()
extern "C"  int32_t LoadTextureFromImagePicker_ImagePicker_getLoadedTexrureWidth_m3551196603 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LoadTextureFromImagePicker::ImagePicker_getLoadedTexrureHeight()
extern "C"  int32_t LoadTextureFromImagePicker_ImagePicker_getLoadedTexrureHeight_m3216726644 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadTextureFromImagePicker::ImagePicker_getLoadedTexrure(System.IntPtr&,System.Int32,System.Int32)
extern "C"  bool LoadTextureFromImagePicker_ImagePicker_getLoadedTexrure_m3833941611 (Il2CppObject * __this /* static, unused */, IntPtr_t* ___nativeBuffer0, int32_t ___width1, int32_t ___height2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::ImagePicker_releaseNativeBuffer()
extern "C"  void LoadTextureFromImagePicker_ImagePicker_releaseNativeBuffer_m4072131019 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::ImagePicker_releaseLoadedImage()
extern "C"  void LoadTextureFromImagePicker_ImagePicker_releaseLoadedImage_m1953645092 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::ImagePicker_release()
extern "C"  void LoadTextureFromImagePicker_ImagePicker_release_m861520052 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::ImagePicker_SetDefaultFrontCamera(System.Boolean)
extern "C"  void LoadTextureFromImagePicker_ImagePicker_SetDefaultFrontCamera_m543200179 (Il2CppObject * __this /* static, unused */, bool ___enable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LoadTextureFromImagePicker::ImagePicker_IsPopoverAutoClose()
extern "C"  bool LoadTextureFromImagePicker_ImagePicker_IsPopoverAutoClose_m2418125311 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::ImagePicker_SetPopoverAutoClose(System.Boolean)
extern "C"  void LoadTextureFromImagePicker_ImagePicker_SetPopoverAutoClose_m3053377514 (Il2CppObject * __this /* static, unused */, bool ___autoclose0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::ImagePicker_SetPopoverToCenter()
extern "C"  void LoadTextureFromImagePicker_ImagePicker_SetPopoverToCenter_m2940615464 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::ImagePicker_SetPopoverTargetRect(System.Single,System.Single,System.Single,System.Single)
extern "C"  void LoadTextureFromImagePicker_ImagePicker_SetPopoverTargetRect_m1246326573 (Il2CppObject * __this /* static, unused */, float ___x0, float ___y1, float ___width2, float ___height3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LoadTextureFromImagePicker::Lib_SaveToPhotoLibrary(UnityEngine.Color32[],System.Int32,System.Int32,System.String,System.String,System.Boolean,System.Boolean)
extern "C"  void LoadTextureFromImagePicker_Lib_SaveToPhotoLibrary_m587709923 (Il2CppObject * __this /* static, unused */, Color32U5BU5D_t2960766953* ___pixelBuffer0, int32_t ___width1, int32_t ___height2, String_t* ___callbackGameObjectName3, String_t* ___callbackMethodName4, bool ___asPng5, bool ___withTransparency6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D LoadTextureFromImagePicker::_GetLoadedTexture(System.String,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C"  Texture2D_t3884108195 * LoadTextureFromImagePicker__GetLoadedTexture_m3803043677 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___width1, int32_t ___height2, bool ___mipmap3, bool ___linear4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
