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
// UnityEngine.UI.RawImage
struct RawImage_t821930207;
// UnityEngine.WWW
struct WWW_t3134621005;
// UnityEngine.WWWForm
struct WWWForm_t461342257;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t1266085011;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.Network.LDFWImageDownloader
struct  LDFWImageDownloader_t2979035701  : public Il2CppObject
{
public:
	// System.String LDFW.Network.LDFWImageDownloader::wwwURL
	String_t* ___wwwURL_0;
	// UnityEngine.UI.RawImage LDFW.Network.LDFWImageDownloader::image
	RawImage_t821930207 * ___image_1;
	// UnityEngine.WWW LDFW.Network.LDFWImageDownloader::www
	WWW_t3134621005 * ___www_2;
	// UnityEngine.WWWForm LDFW.Network.LDFWImageDownloader::wwwForm
	WWWForm_t461342257 * ___wwwForm_3;
	// UnityEngine.Events.UnityEvent LDFW.Network.LDFWImageDownloader::successCallback
	UnityEvent_t1266085011 * ___successCallback_4;
	// UnityEngine.Events.UnityEvent LDFW.Network.LDFWImageDownloader::failureCallback
	UnityEvent_t1266085011 * ___failureCallback_5;

public:
	inline static int32_t get_offset_of_wwwURL_0() { return static_cast<int32_t>(offsetof(LDFWImageDownloader_t2979035701, ___wwwURL_0)); }
	inline String_t* get_wwwURL_0() const { return ___wwwURL_0; }
	inline String_t** get_address_of_wwwURL_0() { return &___wwwURL_0; }
	inline void set_wwwURL_0(String_t* value)
	{
		___wwwURL_0 = value;
		Il2CppCodeGenWriteBarrier(&___wwwURL_0, value);
	}

	inline static int32_t get_offset_of_image_1() { return static_cast<int32_t>(offsetof(LDFWImageDownloader_t2979035701, ___image_1)); }
	inline RawImage_t821930207 * get_image_1() const { return ___image_1; }
	inline RawImage_t821930207 ** get_address_of_image_1() { return &___image_1; }
	inline void set_image_1(RawImage_t821930207 * value)
	{
		___image_1 = value;
		Il2CppCodeGenWriteBarrier(&___image_1, value);
	}

	inline static int32_t get_offset_of_www_2() { return static_cast<int32_t>(offsetof(LDFWImageDownloader_t2979035701, ___www_2)); }
	inline WWW_t3134621005 * get_www_2() const { return ___www_2; }
	inline WWW_t3134621005 ** get_address_of_www_2() { return &___www_2; }
	inline void set_www_2(WWW_t3134621005 * value)
	{
		___www_2 = value;
		Il2CppCodeGenWriteBarrier(&___www_2, value);
	}

	inline static int32_t get_offset_of_wwwForm_3() { return static_cast<int32_t>(offsetof(LDFWImageDownloader_t2979035701, ___wwwForm_3)); }
	inline WWWForm_t461342257 * get_wwwForm_3() const { return ___wwwForm_3; }
	inline WWWForm_t461342257 ** get_address_of_wwwForm_3() { return &___wwwForm_3; }
	inline void set_wwwForm_3(WWWForm_t461342257 * value)
	{
		___wwwForm_3 = value;
		Il2CppCodeGenWriteBarrier(&___wwwForm_3, value);
	}

	inline static int32_t get_offset_of_successCallback_4() { return static_cast<int32_t>(offsetof(LDFWImageDownloader_t2979035701, ___successCallback_4)); }
	inline UnityEvent_t1266085011 * get_successCallback_4() const { return ___successCallback_4; }
	inline UnityEvent_t1266085011 ** get_address_of_successCallback_4() { return &___successCallback_4; }
	inline void set_successCallback_4(UnityEvent_t1266085011 * value)
	{
		___successCallback_4 = value;
		Il2CppCodeGenWriteBarrier(&___successCallback_4, value);
	}

	inline static int32_t get_offset_of_failureCallback_5() { return static_cast<int32_t>(offsetof(LDFWImageDownloader_t2979035701, ___failureCallback_5)); }
	inline UnityEvent_t1266085011 * get_failureCallback_5() const { return ___failureCallback_5; }
	inline UnityEvent_t1266085011 ** get_address_of_failureCallback_5() { return &___failureCallback_5; }
	inline void set_failureCallback_5(UnityEvent_t1266085011 * value)
	{
		___failureCallback_5 = value;
		Il2CppCodeGenWriteBarrier(&___failureCallback_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
