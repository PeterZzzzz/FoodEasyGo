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

// UnityEngine.LocationService
struct LocationService_t3853025142;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LocationServiceStatus1153071304.h"
#include "UnityEngine_UnityEngine_LocationInfo3215517959.h"

// System.Void UnityEngine.LocationService::.ctor()
extern "C"  void LocationService__ctor_m2888923929 (LocationService_t3853025142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
extern "C"  bool LocationService_get_isEnabledByUser_m185518765 (LocationService_t3853025142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
extern "C"  int32_t LocationService_get_status_m435232686 (LocationService_t3853025142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
extern "C"  LocationInfo_t3215517959  LocationService_get_lastData_m2812407679 (LocationService_t3853025142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocationService::Start(System.Single,System.Single)
extern "C"  void LocationService_Start_m4263831959 (LocationService_t3853025142 * __this, float ___desiredAccuracyInMeters0, float ___updateDistanceInMeters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.LocationService::Start()
extern "C"  void LocationService_Start_m1836061721 (LocationService_t3853025142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
