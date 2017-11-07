#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GrouponNetworkController
struct GrouponNetworkController_t4142648204;
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

// GrouponNetworkController
struct  GrouponNetworkController_t4142648204  : public ServerCallController_t539269853
{
public:
	// System.String GrouponNetworkController::groceryControllerURL
	String_t* ___groceryControllerURL_5;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper GrouponNetworkController::getGrouponRecommendedListCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getGrouponRecommendedListCall_6;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper GrouponNetworkController::getGrouponListCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getGrouponListCall_7;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper GrouponNetworkController::getGrouponDetailCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getGrouponDetailCall_8;

public:
	inline static int32_t get_offset_of_groceryControllerURL_5() { return static_cast<int32_t>(offsetof(GrouponNetworkController_t4142648204, ___groceryControllerURL_5)); }
	inline String_t* get_groceryControllerURL_5() const { return ___groceryControllerURL_5; }
	inline String_t** get_address_of_groceryControllerURL_5() { return &___groceryControllerURL_5; }
	inline void set_groceryControllerURL_5(String_t* value)
	{
		___groceryControllerURL_5 = value;
		Il2CppCodeGenWriteBarrier(&___groceryControllerURL_5, value);
	}

	inline static int32_t get_offset_of_getGrouponRecommendedListCall_6() { return static_cast<int32_t>(offsetof(GrouponNetworkController_t4142648204, ___getGrouponRecommendedListCall_6)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getGrouponRecommendedListCall_6() const { return ___getGrouponRecommendedListCall_6; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getGrouponRecommendedListCall_6() { return &___getGrouponRecommendedListCall_6; }
	inline void set_getGrouponRecommendedListCall_6(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getGrouponRecommendedListCall_6 = value;
		Il2CppCodeGenWriteBarrier(&___getGrouponRecommendedListCall_6, value);
	}

	inline static int32_t get_offset_of_getGrouponListCall_7() { return static_cast<int32_t>(offsetof(GrouponNetworkController_t4142648204, ___getGrouponListCall_7)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getGrouponListCall_7() const { return ___getGrouponListCall_7; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getGrouponListCall_7() { return &___getGrouponListCall_7; }
	inline void set_getGrouponListCall_7(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getGrouponListCall_7 = value;
		Il2CppCodeGenWriteBarrier(&___getGrouponListCall_7, value);
	}

	inline static int32_t get_offset_of_getGrouponDetailCall_8() { return static_cast<int32_t>(offsetof(GrouponNetworkController_t4142648204, ___getGrouponDetailCall_8)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getGrouponDetailCall_8() const { return ___getGrouponDetailCall_8; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getGrouponDetailCall_8() { return &___getGrouponDetailCall_8; }
	inline void set_getGrouponDetailCall_8(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getGrouponDetailCall_8 = value;
		Il2CppCodeGenWriteBarrier(&___getGrouponDetailCall_8, value);
	}
};

struct GrouponNetworkController_t4142648204_StaticFields
{
public:
	// GrouponNetworkController GrouponNetworkController::instance
	GrouponNetworkController_t4142648204 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GrouponNetworkController_t4142648204_StaticFields, ___instance_4)); }
	inline GrouponNetworkController_t4142648204 * get_instance_4() const { return ___instance_4; }
	inline GrouponNetworkController_t4142648204 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GrouponNetworkController_t4142648204 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
