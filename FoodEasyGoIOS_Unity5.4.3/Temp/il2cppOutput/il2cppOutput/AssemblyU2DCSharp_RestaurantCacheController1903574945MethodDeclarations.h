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

// RestaurantCacheController
struct RestaurantCacheController_t1903574945;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"

// System.Void RestaurantCacheController::.ctor()
extern "C"  void RestaurantCacheController__ctor_m2764376810 (RestaurantCacheController_t1903574945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantCacheController::Awake()
extern "C"  void RestaurantCacheController_Awake_m3001982029 (RestaurantCacheController_t1903574945 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RestaurantCacheController::IsRestaurantCached(System.String)
extern "C"  bool RestaurantCacheController_IsRestaurantCached_m933143923 (RestaurantCacheController_t1903574945 * __this, String_t* ___restaurantID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantCacheController::CacheRestaurant(System.String,JSONObject)
extern "C"  void RestaurantCacheController_CacheRestaurant_m1754672516 (RestaurantCacheController_t1903574945 * __this, String_t* ___id0, JSONObject_t1752376903 * ___restaurant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject RestaurantCacheController::RetrieveCachedRestaurant(System.String)
extern "C"  JSONObject_t1752376903 * RestaurantCacheController_RetrieveCachedRestaurant_m3853247363 (RestaurantCacheController_t1903574945 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RestaurantCacheController::IsDishCached(System.String)
extern "C"  bool RestaurantCacheController_IsDishCached_m2449987574 (RestaurantCacheController_t1903574945 * __this, String_t* ___dishID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RestaurantCacheController::CacheDish(System.String,JSONObject)
extern "C"  void RestaurantCacheController_CacheDish_m3066751073 (RestaurantCacheController_t1903574945 * __this, String_t* ___id0, JSONObject_t1752376903 * ___dish1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject RestaurantCacheController::RetrieveCachedDish(System.String)
extern "C"  JSONObject_t1752376903 * RestaurantCacheController_RetrieveCachedDish_m3226252998 (RestaurantCacheController_t1903574945 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
