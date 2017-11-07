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
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlaceOrderPanelUniwebview
struct  PlaceOrderPanelUniwebview_t2415642758  : public MonoBehaviour_t667441552
{
public:
	// System.String PlaceOrderPanelUniwebview::url
	String_t* ___url_2;

public:
	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(PlaceOrderPanelUniwebview_t2415642758, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier(&___url_2, value);
	}
};

struct PlaceOrderPanelUniwebview_t2415642758_StaticFields
{
public:
	// UnityEngine.GameObject PlaceOrderPanelUniwebview::webViewGameObject
	GameObject_t3674682005 * ___webViewGameObject_3;

public:
	inline static int32_t get_offset_of_webViewGameObject_3() { return static_cast<int32_t>(offsetof(PlaceOrderPanelUniwebview_t2415642758_StaticFields, ___webViewGameObject_3)); }
	inline GameObject_t3674682005 * get_webViewGameObject_3() const { return ___webViewGameObject_3; }
	inline GameObject_t3674682005 ** get_address_of_webViewGameObject_3() { return &___webViewGameObject_3; }
	inline void set_webViewGameObject_3(GameObject_t3674682005 * value)
	{
		___webViewGameObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___webViewGameObject_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
