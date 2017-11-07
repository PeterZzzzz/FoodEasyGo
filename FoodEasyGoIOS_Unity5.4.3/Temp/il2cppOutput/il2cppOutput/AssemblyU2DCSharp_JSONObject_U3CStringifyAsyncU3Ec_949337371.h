#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.String
struct String_t;
// JSONObject
struct JSONObject_t1752376903;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.IEnumerable
struct IEnumerable_t3464557803;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JSONObject/<StringifyAsync>c__Iterator3
struct  U3CStringifyAsyncU3Ec__Iterator3_t949337371  : public Il2CppObject
{
public:
	// System.Int32 JSONObject/<StringifyAsync>c__Iterator3::depth
	int32_t ___depth_0;
	// System.Text.StringBuilder JSONObject/<StringifyAsync>c__Iterator3::builder
	StringBuilder_t243639308 * ___builder_1;
	// System.Boolean JSONObject/<StringifyAsync>c__Iterator3::pretty
	bool ___pretty_2;
	// System.Int32 JSONObject/<StringifyAsync>c__Iterator3::<i>__0
	int32_t ___U3CiU3E__0_3;
	// System.String JSONObject/<StringifyAsync>c__Iterator3::<key>__1
	String_t* ___U3CkeyU3E__1_4;
	// JSONObject JSONObject/<StringifyAsync>c__Iterator3::<obj>__2
	JSONObject_t1752376903 * ___U3CobjU3E__2_5;
	// System.Int32 JSONObject/<StringifyAsync>c__Iterator3::<j>__3
	int32_t ___U3CjU3E__3_6;
	// System.Collections.IEnumerator JSONObject/<StringifyAsync>c__Iterator3::<$s_12>__4
	Il2CppObject * ___U3CU24s_12U3E__4_7;
	// System.Collections.IEnumerable JSONObject/<StringifyAsync>c__Iterator3::<e>__5
	Il2CppObject * ___U3CeU3E__5_8;
	// System.Int32 JSONObject/<StringifyAsync>c__Iterator3::<j>__6
	int32_t ___U3CjU3E__6_9;
	// System.Int32 JSONObject/<StringifyAsync>c__Iterator3::<i>__7
	int32_t ___U3CiU3E__7_10;
	// System.Int32 JSONObject/<StringifyAsync>c__Iterator3::<j>__8
	int32_t ___U3CjU3E__8_11;
	// System.Collections.IEnumerator JSONObject/<StringifyAsync>c__Iterator3::<$s_13>__9
	Il2CppObject * ___U3CU24s_13U3E__9_12;
	// System.Collections.IEnumerable JSONObject/<StringifyAsync>c__Iterator3::<e>__10
	Il2CppObject * ___U3CeU3E__10_13;
	// System.Int32 JSONObject/<StringifyAsync>c__Iterator3::<j>__11
	int32_t ___U3CjU3E__11_14;
	// System.Int32 JSONObject/<StringifyAsync>c__Iterator3::$PC
	int32_t ___U24PC_15;
	// System.Object JSONObject/<StringifyAsync>c__Iterator3::$current
	Il2CppObject * ___U24current_16;
	// System.Int32 JSONObject/<StringifyAsync>c__Iterator3::<$>depth
	int32_t ___U3CU24U3Edepth_17;
	// System.Text.StringBuilder JSONObject/<StringifyAsync>c__Iterator3::<$>builder
	StringBuilder_t243639308 * ___U3CU24U3Ebuilder_18;
	// System.Boolean JSONObject/<StringifyAsync>c__Iterator3::<$>pretty
	bool ___U3CU24U3Epretty_19;
	// JSONObject JSONObject/<StringifyAsync>c__Iterator3::<>f__this
	JSONObject_t1752376903 * ___U3CU3Ef__this_20;

public:
	inline static int32_t get_offset_of_depth_0() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___depth_0)); }
	inline int32_t get_depth_0() const { return ___depth_0; }
	inline int32_t* get_address_of_depth_0() { return &___depth_0; }
	inline void set_depth_0(int32_t value)
	{
		___depth_0 = value;
	}

	inline static int32_t get_offset_of_builder_1() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___builder_1)); }
	inline StringBuilder_t243639308 * get_builder_1() const { return ___builder_1; }
	inline StringBuilder_t243639308 ** get_address_of_builder_1() { return &___builder_1; }
	inline void set_builder_1(StringBuilder_t243639308 * value)
	{
		___builder_1 = value;
		Il2CppCodeGenWriteBarrier(&___builder_1, value);
	}

	inline static int32_t get_offset_of_pretty_2() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___pretty_2)); }
	inline bool get_pretty_2() const { return ___pretty_2; }
	inline bool* get_address_of_pretty_2() { return &___pretty_2; }
	inline void set_pretty_2(bool value)
	{
		___pretty_2 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__0_3() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CiU3E__0_3)); }
	inline int32_t get_U3CiU3E__0_3() const { return ___U3CiU3E__0_3; }
	inline int32_t* get_address_of_U3CiU3E__0_3() { return &___U3CiU3E__0_3; }
	inline void set_U3CiU3E__0_3(int32_t value)
	{
		___U3CiU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3CkeyU3E__1_4() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CkeyU3E__1_4)); }
	inline String_t* get_U3CkeyU3E__1_4() const { return ___U3CkeyU3E__1_4; }
	inline String_t** get_address_of_U3CkeyU3E__1_4() { return &___U3CkeyU3E__1_4; }
	inline void set_U3CkeyU3E__1_4(String_t* value)
	{
		___U3CkeyU3E__1_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CkeyU3E__1_4, value);
	}

	inline static int32_t get_offset_of_U3CobjU3E__2_5() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CobjU3E__2_5)); }
	inline JSONObject_t1752376903 * get_U3CobjU3E__2_5() const { return ___U3CobjU3E__2_5; }
	inline JSONObject_t1752376903 ** get_address_of_U3CobjU3E__2_5() { return &___U3CobjU3E__2_5; }
	inline void set_U3CobjU3E__2_5(JSONObject_t1752376903 * value)
	{
		___U3CobjU3E__2_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CobjU3E__2_5, value);
	}

	inline static int32_t get_offset_of_U3CjU3E__3_6() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CjU3E__3_6)); }
	inline int32_t get_U3CjU3E__3_6() const { return ___U3CjU3E__3_6; }
	inline int32_t* get_address_of_U3CjU3E__3_6() { return &___U3CjU3E__3_6; }
	inline void set_U3CjU3E__3_6(int32_t value)
	{
		___U3CjU3E__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CU24s_12U3E__4_7() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CU24s_12U3E__4_7)); }
	inline Il2CppObject * get_U3CU24s_12U3E__4_7() const { return ___U3CU24s_12U3E__4_7; }
	inline Il2CppObject ** get_address_of_U3CU24s_12U3E__4_7() { return &___U3CU24s_12U3E__4_7; }
	inline void set_U3CU24s_12U3E__4_7(Il2CppObject * value)
	{
		___U3CU24s_12U3E__4_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24s_12U3E__4_7, value);
	}

	inline static int32_t get_offset_of_U3CeU3E__5_8() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CeU3E__5_8)); }
	inline Il2CppObject * get_U3CeU3E__5_8() const { return ___U3CeU3E__5_8; }
	inline Il2CppObject ** get_address_of_U3CeU3E__5_8() { return &___U3CeU3E__5_8; }
	inline void set_U3CeU3E__5_8(Il2CppObject * value)
	{
		___U3CeU3E__5_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeU3E__5_8, value);
	}

	inline static int32_t get_offset_of_U3CjU3E__6_9() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CjU3E__6_9)); }
	inline int32_t get_U3CjU3E__6_9() const { return ___U3CjU3E__6_9; }
	inline int32_t* get_address_of_U3CjU3E__6_9() { return &___U3CjU3E__6_9; }
	inline void set_U3CjU3E__6_9(int32_t value)
	{
		___U3CjU3E__6_9 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__7_10() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CiU3E__7_10)); }
	inline int32_t get_U3CiU3E__7_10() const { return ___U3CiU3E__7_10; }
	inline int32_t* get_address_of_U3CiU3E__7_10() { return &___U3CiU3E__7_10; }
	inline void set_U3CiU3E__7_10(int32_t value)
	{
		___U3CiU3E__7_10 = value;
	}

	inline static int32_t get_offset_of_U3CjU3E__8_11() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CjU3E__8_11)); }
	inline int32_t get_U3CjU3E__8_11() const { return ___U3CjU3E__8_11; }
	inline int32_t* get_address_of_U3CjU3E__8_11() { return &___U3CjU3E__8_11; }
	inline void set_U3CjU3E__8_11(int32_t value)
	{
		___U3CjU3E__8_11 = value;
	}

	inline static int32_t get_offset_of_U3CU24s_13U3E__9_12() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CU24s_13U3E__9_12)); }
	inline Il2CppObject * get_U3CU24s_13U3E__9_12() const { return ___U3CU24s_13U3E__9_12; }
	inline Il2CppObject ** get_address_of_U3CU24s_13U3E__9_12() { return &___U3CU24s_13U3E__9_12; }
	inline void set_U3CU24s_13U3E__9_12(Il2CppObject * value)
	{
		___U3CU24s_13U3E__9_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24s_13U3E__9_12, value);
	}

	inline static int32_t get_offset_of_U3CeU3E__10_13() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CeU3E__10_13)); }
	inline Il2CppObject * get_U3CeU3E__10_13() const { return ___U3CeU3E__10_13; }
	inline Il2CppObject ** get_address_of_U3CeU3E__10_13() { return &___U3CeU3E__10_13; }
	inline void set_U3CeU3E__10_13(Il2CppObject * value)
	{
		___U3CeU3E__10_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeU3E__10_13, value);
	}

	inline static int32_t get_offset_of_U3CjU3E__11_14() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CjU3E__11_14)); }
	inline int32_t get_U3CjU3E__11_14() const { return ___U3CjU3E__11_14; }
	inline int32_t* get_address_of_U3CjU3E__11_14() { return &___U3CjU3E__11_14; }
	inline void set_U3CjU3E__11_14(int32_t value)
	{
		___U3CjU3E__11_14 = value;
	}

	inline static int32_t get_offset_of_U24PC_15() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U24PC_15)); }
	inline int32_t get_U24PC_15() const { return ___U24PC_15; }
	inline int32_t* get_address_of_U24PC_15() { return &___U24PC_15; }
	inline void set_U24PC_15(int32_t value)
	{
		___U24PC_15 = value;
	}

	inline static int32_t get_offset_of_U24current_16() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U24current_16)); }
	inline Il2CppObject * get_U24current_16() const { return ___U24current_16; }
	inline Il2CppObject ** get_address_of_U24current_16() { return &___U24current_16; }
	inline void set_U24current_16(Il2CppObject * value)
	{
		___U24current_16 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_16, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Edepth_17() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CU24U3Edepth_17)); }
	inline int32_t get_U3CU24U3Edepth_17() const { return ___U3CU24U3Edepth_17; }
	inline int32_t* get_address_of_U3CU24U3Edepth_17() { return &___U3CU24U3Edepth_17; }
	inline void set_U3CU24U3Edepth_17(int32_t value)
	{
		___U3CU24U3Edepth_17 = value;
	}

	inline static int32_t get_offset_of_U3CU24U3Ebuilder_18() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CU24U3Ebuilder_18)); }
	inline StringBuilder_t243639308 * get_U3CU24U3Ebuilder_18() const { return ___U3CU24U3Ebuilder_18; }
	inline StringBuilder_t243639308 ** get_address_of_U3CU24U3Ebuilder_18() { return &___U3CU24U3Ebuilder_18; }
	inline void set_U3CU24U3Ebuilder_18(StringBuilder_t243639308 * value)
	{
		___U3CU24U3Ebuilder_18 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24U3Ebuilder_18, value);
	}

	inline static int32_t get_offset_of_U3CU24U3Epretty_19() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CU24U3Epretty_19)); }
	inline bool get_U3CU24U3Epretty_19() const { return ___U3CU24U3Epretty_19; }
	inline bool* get_address_of_U3CU24U3Epretty_19() { return &___U3CU24U3Epretty_19; }
	inline void set_U3CU24U3Epretty_19(bool value)
	{
		___U3CU24U3Epretty_19 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_20() { return static_cast<int32_t>(offsetof(U3CStringifyAsyncU3Ec__Iterator3_t949337371, ___U3CU3Ef__this_20)); }
	inline JSONObject_t1752376903 * get_U3CU3Ef__this_20() const { return ___U3CU3Ef__this_20; }
	inline JSONObject_t1752376903 ** get_address_of_U3CU3Ef__this_20() { return &___U3CU3Ef__this_20; }
	inline void set_U3CU3Ef__this_20(JSONObject_t1752376903 * value)
	{
		___U3CU3Ef__this_20 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
