#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GroceryNetworkController
struct GroceryNetworkController_t4219088637;
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

// GroceryNetworkController
struct  GroceryNetworkController_t4219088637  : public ServerCallController_t539269853
{
public:
	// System.String GroceryNetworkController::groceryControllerURL
	String_t* ___groceryControllerURL_5;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper GroceryNetworkController::getGroceryRecommendedListCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getGroceryRecommendedListCall_6;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper GroceryNetworkController::getGroceryCategoryListCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getGroceryCategoryListCall_7;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper GroceryNetworkController::getGroceryListCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getGroceryListCall_8;
	// LDFW.Network.LDFWWWWCallCoroutineWrapper GroceryNetworkController::getGroceryDetailsCall
	LDFWWWWCallCoroutineWrapper_t3645557397 * ___getGroceryDetailsCall_9;

public:
	inline static int32_t get_offset_of_groceryControllerURL_5() { return static_cast<int32_t>(offsetof(GroceryNetworkController_t4219088637, ___groceryControllerURL_5)); }
	inline String_t* get_groceryControllerURL_5() const { return ___groceryControllerURL_5; }
	inline String_t** get_address_of_groceryControllerURL_5() { return &___groceryControllerURL_5; }
	inline void set_groceryControllerURL_5(String_t* value)
	{
		___groceryControllerURL_5 = value;
		Il2CppCodeGenWriteBarrier(&___groceryControllerURL_5, value);
	}

	inline static int32_t get_offset_of_getGroceryRecommendedListCall_6() { return static_cast<int32_t>(offsetof(GroceryNetworkController_t4219088637, ___getGroceryRecommendedListCall_6)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getGroceryRecommendedListCall_6() const { return ___getGroceryRecommendedListCall_6; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getGroceryRecommendedListCall_6() { return &___getGroceryRecommendedListCall_6; }
	inline void set_getGroceryRecommendedListCall_6(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getGroceryRecommendedListCall_6 = value;
		Il2CppCodeGenWriteBarrier(&___getGroceryRecommendedListCall_6, value);
	}

	inline static int32_t get_offset_of_getGroceryCategoryListCall_7() { return static_cast<int32_t>(offsetof(GroceryNetworkController_t4219088637, ___getGroceryCategoryListCall_7)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getGroceryCategoryListCall_7() const { return ___getGroceryCategoryListCall_7; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getGroceryCategoryListCall_7() { return &___getGroceryCategoryListCall_7; }
	inline void set_getGroceryCategoryListCall_7(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getGroceryCategoryListCall_7 = value;
		Il2CppCodeGenWriteBarrier(&___getGroceryCategoryListCall_7, value);
	}

	inline static int32_t get_offset_of_getGroceryListCall_8() { return static_cast<int32_t>(offsetof(GroceryNetworkController_t4219088637, ___getGroceryListCall_8)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getGroceryListCall_8() const { return ___getGroceryListCall_8; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getGroceryListCall_8() { return &___getGroceryListCall_8; }
	inline void set_getGroceryListCall_8(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getGroceryListCall_8 = value;
		Il2CppCodeGenWriteBarrier(&___getGroceryListCall_8, value);
	}

	inline static int32_t get_offset_of_getGroceryDetailsCall_9() { return static_cast<int32_t>(offsetof(GroceryNetworkController_t4219088637, ___getGroceryDetailsCall_9)); }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 * get_getGroceryDetailsCall_9() const { return ___getGroceryDetailsCall_9; }
	inline LDFWWWWCallCoroutineWrapper_t3645557397 ** get_address_of_getGroceryDetailsCall_9() { return &___getGroceryDetailsCall_9; }
	inline void set_getGroceryDetailsCall_9(LDFWWWWCallCoroutineWrapper_t3645557397 * value)
	{
		___getGroceryDetailsCall_9 = value;
		Il2CppCodeGenWriteBarrier(&___getGroceryDetailsCall_9, value);
	}
};

struct GroceryNetworkController_t4219088637_StaticFields
{
public:
	// GroceryNetworkController GroceryNetworkController::instance
	GroceryNetworkController_t4219088637 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GroceryNetworkController_t4219088637_StaticFields, ___instance_4)); }
	inline GroceryNetworkController_t4219088637 * get_instance_4() const { return ___instance_4; }
	inline GroceryNetworkController_t4219088637 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GroceryNetworkController_t4219088637 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
