#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WWW
struct WWW_t3134621005;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;
// System.Exception
struct Exception_t3991598821;
// LDFW.Network.LDFWServerResponseEvent
struct LDFWServerResponseEvent_t123101851;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ServerCallController/<CommonWWWCallCoroutine>c__IteratorF
struct  U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275  : public Il2CppObject
{
public:
	// UnityEngine.WWW ServerCallController/<CommonWWWCallCoroutine>c__IteratorF::www
	WWW_t3134621005 * ___www_0;
	// System.String ServerCallController/<CommonWWWCallCoroutine>c__IteratorF::<url>__0
	String_t* ___U3CurlU3E__0_1;
	// JSONObject ServerCallController/<CommonWWWCallCoroutine>c__IteratorF::<response>__1
	JSONObject_t1752376903 * ___U3CresponseU3E__1_2;
	// System.Exception ServerCallController/<CommonWWWCallCoroutine>c__IteratorF::<e>__2
	Exception_t3991598821 * ___U3CeU3E__2_3;
	// LDFW.Network.LDFWServerResponseEvent ServerCallController/<CommonWWWCallCoroutine>c__IteratorF::successCallBack
	LDFWServerResponseEvent_t123101851 * ___successCallBack_4;
	// LDFW.Network.LDFWServerResponseEvent ServerCallController/<CommonWWWCallCoroutine>c__IteratorF::failureCallBack
	LDFWServerResponseEvent_t123101851 * ___failureCallBack_5;
	// System.Int32 ServerCallController/<CommonWWWCallCoroutine>c__IteratorF::$PC
	int32_t ___U24PC_6;
	// System.Object ServerCallController/<CommonWWWCallCoroutine>c__IteratorF::$current
	Il2CppObject * ___U24current_7;
	// UnityEngine.WWW ServerCallController/<CommonWWWCallCoroutine>c__IteratorF::<$>www
	WWW_t3134621005 * ___U3CU24U3Ewww_8;
	// LDFW.Network.LDFWServerResponseEvent ServerCallController/<CommonWWWCallCoroutine>c__IteratorF::<$>successCallBack
	LDFWServerResponseEvent_t123101851 * ___U3CU24U3EsuccessCallBack_9;
	// LDFW.Network.LDFWServerResponseEvent ServerCallController/<CommonWWWCallCoroutine>c__IteratorF::<$>failureCallBack
	LDFWServerResponseEvent_t123101851 * ___U3CU24U3EfailureCallBack_10;

public:
	inline static int32_t get_offset_of_www_0() { return static_cast<int32_t>(offsetof(U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275, ___www_0)); }
	inline WWW_t3134621005 * get_www_0() const { return ___www_0; }
	inline WWW_t3134621005 ** get_address_of_www_0() { return &___www_0; }
	inline void set_www_0(WWW_t3134621005 * value)
	{
		___www_0 = value;
		Il2CppCodeGenWriteBarrier(&___www_0, value);
	}

	inline static int32_t get_offset_of_U3CurlU3E__0_1() { return static_cast<int32_t>(offsetof(U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275, ___U3CurlU3E__0_1)); }
	inline String_t* get_U3CurlU3E__0_1() const { return ___U3CurlU3E__0_1; }
	inline String_t** get_address_of_U3CurlU3E__0_1() { return &___U3CurlU3E__0_1; }
	inline void set_U3CurlU3E__0_1(String_t* value)
	{
		___U3CurlU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CurlU3E__0_1, value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E__1_2() { return static_cast<int32_t>(offsetof(U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275, ___U3CresponseU3E__1_2)); }
	inline JSONObject_t1752376903 * get_U3CresponseU3E__1_2() const { return ___U3CresponseU3E__1_2; }
	inline JSONObject_t1752376903 ** get_address_of_U3CresponseU3E__1_2() { return &___U3CresponseU3E__1_2; }
	inline void set_U3CresponseU3E__1_2(JSONObject_t1752376903 * value)
	{
		___U3CresponseU3E__1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CresponseU3E__1_2, value);
	}

	inline static int32_t get_offset_of_U3CeU3E__2_3() { return static_cast<int32_t>(offsetof(U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275, ___U3CeU3E__2_3)); }
	inline Exception_t3991598821 * get_U3CeU3E__2_3() const { return ___U3CeU3E__2_3; }
	inline Exception_t3991598821 ** get_address_of_U3CeU3E__2_3() { return &___U3CeU3E__2_3; }
	inline void set_U3CeU3E__2_3(Exception_t3991598821 * value)
	{
		___U3CeU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeU3E__2_3, value);
	}

	inline static int32_t get_offset_of_successCallBack_4() { return static_cast<int32_t>(offsetof(U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275, ___successCallBack_4)); }
	inline LDFWServerResponseEvent_t123101851 * get_successCallBack_4() const { return ___successCallBack_4; }
	inline LDFWServerResponseEvent_t123101851 ** get_address_of_successCallBack_4() { return &___successCallBack_4; }
	inline void set_successCallBack_4(LDFWServerResponseEvent_t123101851 * value)
	{
		___successCallBack_4 = value;
		Il2CppCodeGenWriteBarrier(&___successCallBack_4, value);
	}

	inline static int32_t get_offset_of_failureCallBack_5() { return static_cast<int32_t>(offsetof(U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275, ___failureCallBack_5)); }
	inline LDFWServerResponseEvent_t123101851 * get_failureCallBack_5() const { return ___failureCallBack_5; }
	inline LDFWServerResponseEvent_t123101851 ** get_address_of_failureCallBack_5() { return &___failureCallBack_5; }
	inline void set_failureCallBack_5(LDFWServerResponseEvent_t123101851 * value)
	{
		___failureCallBack_5 = value;
		Il2CppCodeGenWriteBarrier(&___failureCallBack_5, value);
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275, ___U24current_7)); }
	inline Il2CppObject * get_U24current_7() const { return ___U24current_7; }
	inline Il2CppObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(Il2CppObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_7, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ewww_8() { return static_cast<int32_t>(offsetof(U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275, ___U3CU24U3Ewww_8)); }
	inline WWW_t3134621005 * get_U3CU24U3Ewww_8() const { return ___U3CU24U3Ewww_8; }
	inline WWW_t3134621005 ** get_address_of_U3CU24U3Ewww_8() { return &___U3CU24U3Ewww_8; }
	inline void set_U3CU24U3Ewww_8(WWW_t3134621005 * value)
	{
		___U3CU24U3Ewww_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Ewww_8, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EsuccessCallBack_9() { return static_cast<int32_t>(offsetof(U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275, ___U3CU24U3EsuccessCallBack_9)); }
	inline LDFWServerResponseEvent_t123101851 * get_U3CU24U3EsuccessCallBack_9() const { return ___U3CU24U3EsuccessCallBack_9; }
	inline LDFWServerResponseEvent_t123101851 ** get_address_of_U3CU24U3EsuccessCallBack_9() { return &___U3CU24U3EsuccessCallBack_9; }
	inline void set_U3CU24U3EsuccessCallBack_9(LDFWServerResponseEvent_t123101851 * value)
	{
		___U3CU24U3EsuccessCallBack_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EsuccessCallBack_9, value);
	}

	inline static int32_t get_offset_of_U3CU24U3EfailureCallBack_10() { return static_cast<int32_t>(offsetof(U3CCommonWWWCallCoroutineU3Ec__IteratorF_t2694245275, ___U3CU24U3EfailureCallBack_10)); }
	inline LDFWServerResponseEvent_t123101851 * get_U3CU24U3EfailureCallBack_10() const { return ___U3CU24U3EfailureCallBack_10; }
	inline LDFWServerResponseEvent_t123101851 ** get_address_of_U3CU24U3EfailureCallBack_10() { return &___U3CU24U3EfailureCallBack_10; }
	inline void set_U3CU24U3EfailureCallBack_10(LDFWServerResponseEvent_t123101851 * value)
	{
		___U3CU24U3EfailureCallBack_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3EfailureCallBack_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
