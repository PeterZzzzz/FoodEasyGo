#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.LocationService
struct LocationService_t3853025142;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t4200062272  : public Il2CppObject
{
public:

public:
};

struct Input_t4200062272_StaticFields
{
public:
	// UnityEngine.LocationService UnityEngine.Input::locationServiceInstance
	LocationService_t3853025142 * ___locationServiceInstance_0;

public:
	inline static int32_t get_offset_of_locationServiceInstance_0() { return static_cast<int32_t>(offsetof(Input_t4200062272_StaticFields, ___locationServiceInstance_0)); }
	inline LocationService_t3853025142 * get_locationServiceInstance_0() const { return ___locationServiceInstance_0; }
	inline LocationService_t3853025142 ** get_address_of_locationServiceInstance_0() { return &___locationServiceInstance_0; }
	inline void set_locationServiceInstance_0(LocationService_t3853025142 * value)
	{
		___locationServiceInstance_0 = value;
		Il2CppCodeGenWriteBarrier(&___locationServiceInstance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
