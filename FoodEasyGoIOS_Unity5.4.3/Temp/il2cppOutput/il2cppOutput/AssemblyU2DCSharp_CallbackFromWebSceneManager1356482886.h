﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UniWebView
struct UniWebView_t424341801;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CallbackFromWebSceneManager
struct  CallbackFromWebSceneManager_t1356482886  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text CallbackFromWebSceneManager::result
	Text_t9039225 * ___result_2;
	// UniWebView CallbackFromWebSceneManager::_webView
	UniWebView_t424341801 * ____webView_3;
	// System.String CallbackFromWebSceneManager::_fileName
	String_t* ____fileName_4;

public:
	inline static int32_t get_offset_of_result_2() { return static_cast<int32_t>(offsetof(CallbackFromWebSceneManager_t1356482886, ___result_2)); }
	inline Text_t9039225 * get_result_2() const { return ___result_2; }
	inline Text_t9039225 ** get_address_of_result_2() { return &___result_2; }
	inline void set_result_2(Text_t9039225 * value)
	{
		___result_2 = value;
		Il2CppCodeGenWriteBarrier(&___result_2, value);
	}

	inline static int32_t get_offset_of__webView_3() { return static_cast<int32_t>(offsetof(CallbackFromWebSceneManager_t1356482886, ____webView_3)); }
	inline UniWebView_t424341801 * get__webView_3() const { return ____webView_3; }
	inline UniWebView_t424341801 ** get_address_of__webView_3() { return &____webView_3; }
	inline void set__webView_3(UniWebView_t424341801 * value)
	{
		____webView_3 = value;
		Il2CppCodeGenWriteBarrier(&____webView_3, value);
	}

	inline static int32_t get_offset_of__fileName_4() { return static_cast<int32_t>(offsetof(CallbackFromWebSceneManager_t1356482886, ____fileName_4)); }
	inline String_t* get__fileName_4() const { return ____fileName_4; }
	inline String_t** get_address_of__fileName_4() { return &____fileName_4; }
	inline void set__fileName_4(String_t* value)
	{
		____fileName_4 = value;
		Il2CppCodeGenWriteBarrier(&____fileName_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
