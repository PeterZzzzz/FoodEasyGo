#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIHelper
struct  UIHelper_t336185186  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] UIHelper::hide
	GameObjectU5BU5D_t2662109048* ___hide_2;
	// UnityEngine.GameObject[] UIHelper::show
	GameObjectU5BU5D_t2662109048* ___show_3;

public:
	inline static int32_t get_offset_of_hide_2() { return static_cast<int32_t>(offsetof(UIHelper_t336185186, ___hide_2)); }
	inline GameObjectU5BU5D_t2662109048* get_hide_2() const { return ___hide_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_hide_2() { return &___hide_2; }
	inline void set_hide_2(GameObjectU5BU5D_t2662109048* value)
	{
		___hide_2 = value;
		Il2CppCodeGenWriteBarrier(&___hide_2, value);
	}

	inline static int32_t get_offset_of_show_3() { return static_cast<int32_t>(offsetof(UIHelper_t336185186, ___show_3)); }
	inline GameObjectU5BU5D_t2662109048* get_show_3() const { return ___show_3; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_show_3() { return &___show_3; }
	inline void set_show_3(GameObjectU5BU5D_t2662109048* value)
	{
		___show_3 = value;
		Il2CppCodeGenWriteBarrier(&___show_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
