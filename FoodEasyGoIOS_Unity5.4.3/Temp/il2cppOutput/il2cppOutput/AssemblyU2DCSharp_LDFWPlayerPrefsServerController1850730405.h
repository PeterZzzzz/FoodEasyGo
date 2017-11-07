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

#include "AssemblyU2DCSharp_LDFWPlayerPrefsBaseController1107494707.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFWPlayerPrefsServerController
struct  LDFWPlayerPrefsServerController_t1850730405  : public LDFWPlayerPrefsBaseController_t1107494707
{
public:

public:
};

struct LDFWPlayerPrefsServerController_t1850730405_StaticFields
{
public:
	// System.String LDFWPlayerPrefsServerController::AutoLogInUsernameKey
	String_t* ___AutoLogInUsernameKey_1;
	// System.String LDFWPlayerPrefsServerController::AutoLogInPasswordKey
	String_t* ___AutoLogInPasswordKey_2;

public:
	inline static int32_t get_offset_of_AutoLogInUsernameKey_1() { return static_cast<int32_t>(offsetof(LDFWPlayerPrefsServerController_t1850730405_StaticFields, ___AutoLogInUsernameKey_1)); }
	inline String_t* get_AutoLogInUsernameKey_1() const { return ___AutoLogInUsernameKey_1; }
	inline String_t** get_address_of_AutoLogInUsernameKey_1() { return &___AutoLogInUsernameKey_1; }
	inline void set_AutoLogInUsernameKey_1(String_t* value)
	{
		___AutoLogInUsernameKey_1 = value;
		Il2CppCodeGenWriteBarrier(&___AutoLogInUsernameKey_1, value);
	}

	inline static int32_t get_offset_of_AutoLogInPasswordKey_2() { return static_cast<int32_t>(offsetof(LDFWPlayerPrefsServerController_t1850730405_StaticFields, ___AutoLogInPasswordKey_2)); }
	inline String_t* get_AutoLogInPasswordKey_2() const { return ___AutoLogInPasswordKey_2; }
	inline String_t** get_address_of_AutoLogInPasswordKey_2() { return &___AutoLogInPasswordKey_2; }
	inline void set_AutoLogInPasswordKey_2(String_t* value)
	{
		___AutoLogInPasswordKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___AutoLogInPasswordKey_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
