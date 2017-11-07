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

// RestaurantDetailPanelController
struct RestaurantDetailPanelController_t2815147218;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void RestaurantDetailPanelController::.ctor()
extern "C"  void RestaurantDetailPanelController__ctor_m902006489 (RestaurantDetailPanelController_t2815147218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::Awake()
extern "C"  void RestaurantDetailPanelController_Awake_m1139611708 (RestaurantDetailPanelController_t2815147218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::Start()
extern "C"  void RestaurantDetailPanelController_Start_m4144111577 (RestaurantDetailPanelController_t2815147218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::ResetPanel()
extern "C"  void RestaurantDetailPanelController_ResetPanel_m19092608 (RestaurantDetailPanelController_t2815147218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::ReloadPanel()
extern "C"  void RestaurantDetailPanelController_ReloadPanel_m527154338 (RestaurantDetailPanelController_t2815147218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::OpenPanel()
extern "C"  void RestaurantDetailPanelController_OpenPanel_m3900752977 (RestaurantDetailPanelController_t2815147218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::OpenPanel(System.String)
extern "C"  void RestaurantDetailPanelController_OpenPanel_m57419345 (RestaurantDetailPanelController_t2815147218 * __this, String_t* ___restaurant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::OpenPanelForGroupon(System.String)
extern "C"  void RestaurantDetailPanelController_OpenPanelForGroupon_m841156092 (RestaurantDetailPanelController_t2815147218 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::SwitchToDishMode()
extern "C"  void RestaurantDetailPanelController_SwitchToDishMode_m2392305047 (RestaurantDetailPanelController_t2815147218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RestaurantDetailPanelController::LoadDishDetailPanelCoroutine()
extern "C"  Il2CppObject * RestaurantDetailPanelController_LoadDishDetailPanelCoroutine_m3662156904 (RestaurantDetailPanelController_t2815147218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::DestroyAllCategoryContents()
extern "C"  void RestaurantDetailPanelController_DestroyAllCategoryContents_m1752032170 (RestaurantDetailPanelController_t2815147218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RestaurantDetailPanelController::LoadContentAndDishData(JSONObject)
extern "C"  Il2CppObject * RestaurantDetailPanelController_LoadContentAndDishData_m3304031812 (RestaurantDetailPanelController_t2815147218 * __this, JSONObject_t1752376903 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator RestaurantDetailPanelController::LoadGrouponData(JSONObject)
extern "C"  Il2CppObject * RestaurantDetailPanelController_LoadGrouponData_m3946268026 (RestaurantDetailPanelController_t2815147218 * __this, JSONObject_t1752376903 * ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::LoadCategoryDishData(System.String)
extern "C"  void RestaurantDetailPanelController_LoadCategoryDishData_m1787004943 (RestaurantDetailPanelController_t2815147218 * __this, String_t* ___categoryID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::LoadGrouponListData(System.String)
extern "C"  void RestaurantDetailPanelController_LoadGrouponListData_m708427915 (RestaurantDetailPanelController_t2815147218 * __this, String_t* ___restaurantID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::SwitchToCommentMode()
extern "C"  void RestaurantDetailPanelController_SwitchToCommentMode_m3567856906 (RestaurantDetailPanelController_t2815147218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::LoadCommentData()
extern "C"  void RestaurantDetailPanelController_LoadCommentData_m742606234 (RestaurantDetailPanelController_t2815147218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::<LoadCommentData>m__50(JSONObject,System.String)
extern "C"  void RestaurantDetailPanelController_U3CLoadCommentDataU3Em__50_m3034951281 (RestaurantDetailPanelController_t2815147218 * __this, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantDetailPanelController::<LoadCommentData>m__51(JSONObject,System.String)
extern "C"  void RestaurantDetailPanelController_U3CLoadCommentDataU3Em__51_m3996565298 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___data0, String_t* ___m1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
