#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Object>
struct List_1_t1244034627;

#include "mscorlib_System_Collections_Generic_Dictionary_2_g2045888271.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFW.Utils.SerializableDictionary`2<System.Object,System.Object>
struct  SerializableDictionary_2_t1414621346  : public Dictionary_2_t2045888271
{
public:
	// System.Collections.Generic.List`1<TKey> LDFW.Utils.SerializableDictionary`2::keys
	List_1_t1244034627 * ___keys_16;
	// System.Collections.Generic.List`1<TValue> LDFW.Utils.SerializableDictionary`2::values
	List_1_t1244034627 * ___values_17;

public:
	inline static int32_t get_offset_of_keys_16() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t1414621346, ___keys_16)); }
	inline List_1_t1244034627 * get_keys_16() const { return ___keys_16; }
	inline List_1_t1244034627 ** get_address_of_keys_16() { return &___keys_16; }
	inline void set_keys_16(List_1_t1244034627 * value)
	{
		___keys_16 = value;
		Il2CppCodeGenWriteBarrier(&___keys_16, value);
	}

	inline static int32_t get_offset_of_values_17() { return static_cast<int32_t>(offsetof(SerializableDictionary_2_t1414621346, ___values_17)); }
	inline List_1_t1244034627 * get_values_17() const { return ___values_17; }
	inline List_1_t1244034627 ** get_address_of_values_17() { return &___values_17; }
	inline void set_values_17(List_1_t1244034627 * value)
	{
		___values_17 = value;
		Il2CppCodeGenWriteBarrier(&___values_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
