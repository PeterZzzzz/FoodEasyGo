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
// System.Collections.Generic.Dictionary`2<System.String,CartDetailData>
struct Dictionary_2_t3411689021;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.List`1<CartDetailData>
struct List_1_t3959456203;
// UnityEngine.Events.UnityAction`2<JSONObject,System.String>
struct UnityAction_2_t3241238934;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CartData
struct  CartData_t70693642  : public Il2CppObject
{
public:
	// System.String CartData::_id
	String_t* ____id_0;
	// System.Single CartData::_tipPrice
	float ____tipPrice_1;
	// System.Collections.Generic.Dictionary`2<System.String,CartDetailData> CartData::_cartDetailDic
	Dictionary_2_t3411689021 * ____cartDetailDic_2;
	// System.Collections.Generic.List`1<System.String> CartData::_keys
	List_1_t1375417109 * ____keys_3;
	// System.Collections.Generic.List`1<CartDetailData> CartData::_values
	List_1_t3959456203 * ____values_4;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(CartData_t70693642, ____id_0)); }
	inline String_t* get__id_0() const { return ____id_0; }
	inline String_t** get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(String_t* value)
	{
		____id_0 = value;
		Il2CppCodeGenWriteBarrier(&____id_0, value);
	}

	inline static int32_t get_offset_of__tipPrice_1() { return static_cast<int32_t>(offsetof(CartData_t70693642, ____tipPrice_1)); }
	inline float get__tipPrice_1() const { return ____tipPrice_1; }
	inline float* get_address_of__tipPrice_1() { return &____tipPrice_1; }
	inline void set__tipPrice_1(float value)
	{
		____tipPrice_1 = value;
	}

	inline static int32_t get_offset_of__cartDetailDic_2() { return static_cast<int32_t>(offsetof(CartData_t70693642, ____cartDetailDic_2)); }
	inline Dictionary_2_t3411689021 * get__cartDetailDic_2() const { return ____cartDetailDic_2; }
	inline Dictionary_2_t3411689021 ** get_address_of__cartDetailDic_2() { return &____cartDetailDic_2; }
	inline void set__cartDetailDic_2(Dictionary_2_t3411689021 * value)
	{
		____cartDetailDic_2 = value;
		Il2CppCodeGenWriteBarrier(&____cartDetailDic_2, value);
	}

	inline static int32_t get_offset_of__keys_3() { return static_cast<int32_t>(offsetof(CartData_t70693642, ____keys_3)); }
	inline List_1_t1375417109 * get__keys_3() const { return ____keys_3; }
	inline List_1_t1375417109 ** get_address_of__keys_3() { return &____keys_3; }
	inline void set__keys_3(List_1_t1375417109 * value)
	{
		____keys_3 = value;
		Il2CppCodeGenWriteBarrier(&____keys_3, value);
	}

	inline static int32_t get_offset_of__values_4() { return static_cast<int32_t>(offsetof(CartData_t70693642, ____values_4)); }
	inline List_1_t3959456203 * get__values_4() const { return ____values_4; }
	inline List_1_t3959456203 ** get_address_of__values_4() { return &____values_4; }
	inline void set__values_4(List_1_t3959456203 * value)
	{
		____values_4 = value;
		Il2CppCodeGenWriteBarrier(&____values_4, value);
	}
};

struct CartData_t70693642_StaticFields
{
public:
	// UnityEngine.Events.UnityAction`2<JSONObject,System.String> CartData::<>f__am$cache5
	UnityAction_2_t3241238934 * ___U3CU3Ef__amU24cache5_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_5() { return static_cast<int32_t>(offsetof(CartData_t70693642_StaticFields, ___U3CU3Ef__amU24cache5_5)); }
	inline UnityAction_2_t3241238934 * get_U3CU3Ef__amU24cache5_5() const { return ___U3CU3Ef__amU24cache5_5; }
	inline UnityAction_2_t3241238934 ** get_address_of_U3CU3Ef__amU24cache5_5() { return &___U3CU3Ef__amU24cache5_5; }
	inline void set_U3CU3Ef__amU24cache5_5(UnityAction_2_t3241238934 * value)
	{
		___U3CU3Ef__amU24cache5_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
