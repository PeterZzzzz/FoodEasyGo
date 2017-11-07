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
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Collections.Generic.List`1<JSONObject>
struct List_1_t3120562455;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Diagnostics.Stopwatch
struct Stopwatch_t3420517611;

#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_JSONObject_Type997917218.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JSONObject
struct  JSONObject_t1752376903  : public Il2CppObject
{
public:
	// JSONObject/Type JSONObject::type
	int32_t ___type_7;
	// System.Collections.Generic.List`1<JSONObject> JSONObject::list
	List_1_t3120562455 * ___list_8;
	// System.Collections.Generic.List`1<System.String> JSONObject::keys
	List_1_t1375417109 * ___keys_9;
	// System.String JSONObject::str
	String_t* ___str_10;
	// System.Single JSONObject::n
	float ___n_11;
	// System.Boolean JSONObject::useInt
	bool ___useInt_12;
	// System.Int64 JSONObject::i
	int64_t ___i_13;
	// System.Boolean JSONObject::b
	bool ___b_14;

public:
	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___type_7)); }
	inline int32_t get_type_7() const { return ___type_7; }
	inline int32_t* get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(int32_t value)
	{
		___type_7 = value;
	}

	inline static int32_t get_offset_of_list_8() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___list_8)); }
	inline List_1_t3120562455 * get_list_8() const { return ___list_8; }
	inline List_1_t3120562455 ** get_address_of_list_8() { return &___list_8; }
	inline void set_list_8(List_1_t3120562455 * value)
	{
		___list_8 = value;
		Il2CppCodeGenWriteBarrier(&___list_8, value);
	}

	inline static int32_t get_offset_of_keys_9() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___keys_9)); }
	inline List_1_t1375417109 * get_keys_9() const { return ___keys_9; }
	inline List_1_t1375417109 ** get_address_of_keys_9() { return &___keys_9; }
	inline void set_keys_9(List_1_t1375417109 * value)
	{
		___keys_9 = value;
		Il2CppCodeGenWriteBarrier(&___keys_9, value);
	}

	inline static int32_t get_offset_of_str_10() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___str_10)); }
	inline String_t* get_str_10() const { return ___str_10; }
	inline String_t** get_address_of_str_10() { return &___str_10; }
	inline void set_str_10(String_t* value)
	{
		___str_10 = value;
		Il2CppCodeGenWriteBarrier(&___str_10, value);
	}

	inline static int32_t get_offset_of_n_11() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___n_11)); }
	inline float get_n_11() const { return ___n_11; }
	inline float* get_address_of_n_11() { return &___n_11; }
	inline void set_n_11(float value)
	{
		___n_11 = value;
	}

	inline static int32_t get_offset_of_useInt_12() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___useInt_12)); }
	inline bool get_useInt_12() const { return ___useInt_12; }
	inline bool* get_address_of_useInt_12() { return &___useInt_12; }
	inline void set_useInt_12(bool value)
	{
		___useInt_12 = value;
	}

	inline static int32_t get_offset_of_i_13() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___i_13)); }
	inline int64_t get_i_13() const { return ___i_13; }
	inline int64_t* get_address_of_i_13() { return &___i_13; }
	inline void set_i_13(int64_t value)
	{
		___i_13 = value;
	}

	inline static int32_t get_offset_of_b_14() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903, ___b_14)); }
	inline bool get_b_14() const { return ___b_14; }
	inline bool* get_address_of_b_14() { return &___b_14; }
	inline void set_b_14(bool value)
	{
		___b_14 = value;
	}
};

struct JSONObject_t1752376903_StaticFields
{
public:
	// System.Char[] JSONObject::WHITESPACE
	CharU5BU5D_t3324145743* ___WHITESPACE_6;
	// System.Diagnostics.Stopwatch JSONObject::printWatch
	Stopwatch_t3420517611 * ___printWatch_15;

public:
	inline static int32_t get_offset_of_WHITESPACE_6() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903_StaticFields, ___WHITESPACE_6)); }
	inline CharU5BU5D_t3324145743* get_WHITESPACE_6() const { return ___WHITESPACE_6; }
	inline CharU5BU5D_t3324145743** get_address_of_WHITESPACE_6() { return &___WHITESPACE_6; }
	inline void set_WHITESPACE_6(CharU5BU5D_t3324145743* value)
	{
		___WHITESPACE_6 = value;
		Il2CppCodeGenWriteBarrier(&___WHITESPACE_6, value);
	}

	inline static int32_t get_offset_of_printWatch_15() { return static_cast<int32_t>(offsetof(JSONObject_t1752376903_StaticFields, ___printWatch_15)); }
	inline Stopwatch_t3420517611 * get_printWatch_15() const { return ___printWatch_15; }
	inline Stopwatch_t3420517611 ** get_address_of_printWatch_15() { return &___printWatch_15; }
	inline void set_printWatch_15(Stopwatch_t3420517611 * value)
	{
		___printWatch_15 = value;
		Il2CppCodeGenWriteBarrier(&___printWatch_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
