﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t609046876;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UseWithCodeSceneManager
struct  UseWithCodeSceneManager_t13242619  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.InputField UseWithCodeSceneManager::urlInput
	InputField_t609046876 * ___urlInput_2;

public:
	inline static int32_t get_offset_of_urlInput_2() { return static_cast<int32_t>(offsetof(UseWithCodeSceneManager_t13242619, ___urlInput_2)); }
	inline InputField_t609046876 * get_urlInput_2() const { return ___urlInput_2; }
	inline InputField_t609046876 ** get_address_of_urlInput_2() { return &___urlInput_2; }
	inline void set_urlInput_2(InputField_t609046876 * value)
	{
		___urlInput_2 = value;
		Il2CppCodeGenWriteBarrier(&___urlInput_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
