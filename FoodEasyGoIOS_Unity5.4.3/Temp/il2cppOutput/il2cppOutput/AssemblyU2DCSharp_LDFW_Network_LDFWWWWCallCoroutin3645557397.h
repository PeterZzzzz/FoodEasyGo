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
// LDFW.Network.LDFWServerCallController
struct LDFWServerCallController_t3174857822;
// UnityEngine.WWW
struct WWW_t3134621005;
// UnityEngine.Coroutine
struct Coroutine_t3621161934;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.Network.LDFWWWWCallCoroutineWrapper
struct  LDFWWWWCallCoroutineWrapper_t3645557397  : public Il2CppObject
{
public:
	// System.String LDFW.Network.LDFWWWWCallCoroutineWrapper::wwwURL
	String_t* ___wwwURL_0;
	// LDFW.Network.LDFWServerCallController LDFW.Network.LDFWWWWCallCoroutineWrapper::caller
	LDFWServerCallController_t3174857822 * ___caller_1;
	// UnityEngine.WWW LDFW.Network.LDFWWWWCallCoroutineWrapper::www
	WWW_t3134621005 * ___www_2;
	// UnityEngine.Coroutine LDFW.Network.LDFWWWWCallCoroutineWrapper::coroutine
	Coroutine_t3621161934 * ___coroutine_3;
	// System.Collections.IEnumerator LDFW.Network.LDFWWWWCallCoroutineWrapper::coroutineIEnumerator
	Il2CppObject * ___coroutineIEnumerator_4;
	// System.Single LDFW.Network.LDFWWWWCallCoroutineWrapper::startTime
	float ___startTime_5;
	// System.Int32 LDFW.Network.LDFWWWWCallCoroutineWrapper::callingTime
	int32_t ___callingTime_6;

public:
	inline static int32_t get_offset_of_wwwURL_0() { return static_cast<int32_t>(offsetof(LDFWWWWCallCoroutineWrapper_t3645557397, ___wwwURL_0)); }
	inline String_t* get_wwwURL_0() const { return ___wwwURL_0; }
	inline String_t** get_address_of_wwwURL_0() { return &___wwwURL_0; }
	inline void set_wwwURL_0(String_t* value)
	{
		___wwwURL_0 = value;
		Il2CppCodeGenWriteBarrier(&___wwwURL_0, value);
	}

	inline static int32_t get_offset_of_caller_1() { return static_cast<int32_t>(offsetof(LDFWWWWCallCoroutineWrapper_t3645557397, ___caller_1)); }
	inline LDFWServerCallController_t3174857822 * get_caller_1() const { return ___caller_1; }
	inline LDFWServerCallController_t3174857822 ** get_address_of_caller_1() { return &___caller_1; }
	inline void set_caller_1(LDFWServerCallController_t3174857822 * value)
	{
		___caller_1 = value;
		Il2CppCodeGenWriteBarrier(&___caller_1, value);
	}

	inline static int32_t get_offset_of_www_2() { return static_cast<int32_t>(offsetof(LDFWWWWCallCoroutineWrapper_t3645557397, ___www_2)); }
	inline WWW_t3134621005 * get_www_2() const { return ___www_2; }
	inline WWW_t3134621005 ** get_address_of_www_2() { return &___www_2; }
	inline void set_www_2(WWW_t3134621005 * value)
	{
		___www_2 = value;
		Il2CppCodeGenWriteBarrier(&___www_2, value);
	}

	inline static int32_t get_offset_of_coroutine_3() { return static_cast<int32_t>(offsetof(LDFWWWWCallCoroutineWrapper_t3645557397, ___coroutine_3)); }
	inline Coroutine_t3621161934 * get_coroutine_3() const { return ___coroutine_3; }
	inline Coroutine_t3621161934 ** get_address_of_coroutine_3() { return &___coroutine_3; }
	inline void set_coroutine_3(Coroutine_t3621161934 * value)
	{
		___coroutine_3 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_3, value);
	}

	inline static int32_t get_offset_of_coroutineIEnumerator_4() { return static_cast<int32_t>(offsetof(LDFWWWWCallCoroutineWrapper_t3645557397, ___coroutineIEnumerator_4)); }
	inline Il2CppObject * get_coroutineIEnumerator_4() const { return ___coroutineIEnumerator_4; }
	inline Il2CppObject ** get_address_of_coroutineIEnumerator_4() { return &___coroutineIEnumerator_4; }
	inline void set_coroutineIEnumerator_4(Il2CppObject * value)
	{
		___coroutineIEnumerator_4 = value;
		Il2CppCodeGenWriteBarrier(&___coroutineIEnumerator_4, value);
	}

	inline static int32_t get_offset_of_startTime_5() { return static_cast<int32_t>(offsetof(LDFWWWWCallCoroutineWrapper_t3645557397, ___startTime_5)); }
	inline float get_startTime_5() const { return ___startTime_5; }
	inline float* get_address_of_startTime_5() { return &___startTime_5; }
	inline void set_startTime_5(float value)
	{
		___startTime_5 = value;
	}

	inline static int32_t get_offset_of_callingTime_6() { return static_cast<int32_t>(offsetof(LDFWWWWCallCoroutineWrapper_t3645557397, ___callingTime_6)); }
	inline int32_t get_callingTime_6() const { return ___callingTime_6; }
	inline int32_t* get_address_of_callingTime_6() { return &___callingTime_6; }
	inline void set_callingTime_6(int32_t value)
	{
		___callingTime_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
