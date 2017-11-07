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

// UnityEngine.LocationInfo
struct LocationInfo_t3215517959;
struct LocationInfo_t3215517959_marshaled_pinvoke;
struct LocationInfo_t3215517959_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_LocationInfo3215517959.h"

// System.Single UnityEngine.LocationInfo::get_latitude()
extern "C"  float LocationInfo_get_latitude_m1803811355 (LocationInfo_t3215517959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.LocationInfo::get_longitude()
extern "C"  float LocationInfo_get_longitude_m3505987842 (LocationInfo_t3215517959 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct LocationInfo_t3215517959;
struct LocationInfo_t3215517959_marshaled_pinvoke;

extern "C" void LocationInfo_t3215517959_marshal_pinvoke(const LocationInfo_t3215517959& unmarshaled, LocationInfo_t3215517959_marshaled_pinvoke& marshaled);
extern "C" void LocationInfo_t3215517959_marshal_pinvoke_back(const LocationInfo_t3215517959_marshaled_pinvoke& marshaled, LocationInfo_t3215517959& unmarshaled);
extern "C" void LocationInfo_t3215517959_marshal_pinvoke_cleanup(LocationInfo_t3215517959_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct LocationInfo_t3215517959;
struct LocationInfo_t3215517959_marshaled_com;

extern "C" void LocationInfo_t3215517959_marshal_com(const LocationInfo_t3215517959& unmarshaled, LocationInfo_t3215517959_marshaled_com& marshaled);
extern "C" void LocationInfo_t3215517959_marshal_com_back(const LocationInfo_t3215517959_marshaled_com& marshaled, LocationInfo_t3215517959& unmarshaled);
extern "C" void LocationInfo_t3215517959_marshal_com_cleanup(LocationInfo_t3215517959_marshaled_com& marshaled);
