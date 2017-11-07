#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.FileIO.LDFWAppConfigController
struct  LDFWAppConfigController_t3458531532  : public Il2CppObject
{
public:

public:
};

struct LDFWAppConfigController_t3458531532_StaticFields
{
public:
	// System.String LDFW.FileIO.LDFWAppConfigController::filePath
	String_t* ___filePath_0;

public:
	inline static int32_t get_offset_of_filePath_0() { return static_cast<int32_t>(offsetof(LDFWAppConfigController_t3458531532_StaticFields, ___filePath_0)); }
	inline String_t* get_filePath_0() const { return ___filePath_0; }
	inline String_t** get_address_of_filePath_0() { return &___filePath_0; }
	inline void set_filePath_0(String_t* value)
	{
		___filePath_0 = value;
		Il2CppCodeGenWriteBarrier(&___filePath_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
