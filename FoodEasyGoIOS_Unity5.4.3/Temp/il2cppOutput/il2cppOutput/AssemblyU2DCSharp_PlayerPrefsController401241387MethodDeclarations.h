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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void PlayerPrefsController::.cctor()
extern "C"  void PlayerPrefsController__cctor_m1346517773 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsController::SetAutoLogin(System.Boolean)
extern "C"  void PlayerPrefsController_SetAutoLogin_m730939603 (Il2CppObject * __this /* static, unused */, bool ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerPrefsController::GetAutoLoginStatus()
extern "C"  bool PlayerPrefsController_GetAutoLoginStatus_m2144897030 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsController::SetUserCredentials(System.String,System.String)
extern "C"  void PlayerPrefsController_SetUserCredentials_m1069448907 (Il2CppObject * __this /* static, unused */, String_t* ___email0, String_t* ___password1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerPrefsController::GetUserEmail()
extern "C"  String_t* PlayerPrefsController_GetUserEmail_m2847936124 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerPrefsController::GetPassword()
extern "C"  String_t* PlayerPrefsController_GetPassword_m3524863090 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsController::SetUserRegionAndServiceRegion(System.String,System.String,System.String,System.String)
extern "C"  void PlayerPrefsController_SetUserRegionAndServiceRegion_m4243724517 (Il2CppObject * __this /* static, unused */, String_t* ___userRegionID0, String_t* ___userRegionZip1, String_t* ___userServiceRegionID2, String_t* ___userServiceRegionZip3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerPrefsController::GetUserRegionData(System.String&,System.String&,System.String&,System.String&)
extern "C"  bool PlayerPrefsController_GetUserRegionData_m3404946837 (Il2CppObject * __this /* static, unused */, String_t** ___regionid0, String_t** ___regionzip1, String_t** ___serviceregionid2, String_t** ___serviceregionzip3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerPrefsController::SetHistoricalSearchIndex(System.Int32,System.String)
extern "C"  void PlayerPrefsController_SetHistoricalSearchIndex_m4070231183 (Il2CppObject * __this /* static, unused */, int32_t ___i0, String_t* ___searchValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerPrefsController::GetHistoricalSearchIndex(System.Int32)
extern "C"  String_t* PlayerPrefsController_GetHistoricalSearchIndex_m4088386268 (Il2CppObject * __this /* static, unused */, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
