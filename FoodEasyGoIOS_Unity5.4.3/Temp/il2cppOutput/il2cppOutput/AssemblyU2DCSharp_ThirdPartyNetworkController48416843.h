#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ThirdPartyNetworkController
struct ThirdPartyNetworkController_t48416843;
// System.String
struct String_t;
// LDFW.Network.LDFWWWWCallCoroutineWrapper
struct LDFWWWWCallCoroutineWrapper_t3645557397;

#include "AssemblyU2DCSharp_ServerCallController539269853.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThirdPartyNetworkController
struct  ThirdPartyNetworkController_t48416843  : public ServerCallController_t539269853
{
public:
	// System.String ThirdPartyNetworkController::thirdPartyLoginURL
	String_t* ___thirdPartyLoginURL_5;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper ThirdPartyNetworkController::setBindingEmailCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___setBindingEmailCall_6;

public:
	inline static int32_t get_offset_of_thirdPartyLoginURL_5() { return static_cast<int32_t>(offsetof(ThirdPartyNetworkController_t48416843, ___thirdPartyLoginURL_5)); }
	inline String_t* get_thirdPartyLoginURL_5() const { return ___thirdPartyLoginURL_5; }
	inline String_t** get_address_of_thirdPartyLoginURL_5() { return &___thirdPartyLoginURL_5; }
	inline void set_thirdPartyLoginURL_5(String_t* value)
	{
		___thirdPartyLoginURL_5 = value;
		Il2CppCodeGenWriteBarrier(&___thirdPartyLoginURL_5, value);
	}

	inline static int32_t get_offset_of_setBindingEmailCall_6() { return static_cast<int32_t>(offsetof(ThirdPartyNetworkController_t48416843, ___setBindingEmailCall_6)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_setBindingEmailCall_6() const { return ___setBindingEmailCall_6; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_setBindingEmailCall_6() { return &___setBindingEmailCall_6; }
	inline void set_setBindingEmailCall_6(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___setBindingEmailCall_6 = value;
		Il2CppCodeGenWriteBarrier(&___setBindingEmailCall_6, value);
	}
};

struct ThirdPartyNetworkController_t48416843_StaticFields
{
public:
	// ThirdPartyNetworkController ThirdPartyNetworkController::instance
	ThirdPartyNetworkController_t48416843 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(ThirdPartyNetworkController_t48416843_StaticFields, ___instance_4)); }
	inline ThirdPartyNetworkController_t48416843 * get_instance_4() const { return ___instance_4; }
	inline ThirdPartyNetworkController_t48416843 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(ThirdPartyNetworkController_t48416843 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
