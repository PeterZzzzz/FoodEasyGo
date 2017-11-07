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
// DishData
struct DishData_t341145732;
// System.Collections.Generic.Dictionary`2<System.String,AttributeData>
struct Dictionary_2_t169813896;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.List`1<AttributeData>
struct List_1_t717581078;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CartDetailData
struct  CartDetailData_t2591270651  : public Il2CppObject
{
public:
	// System.String CartDetailData::_id
	String_t* ____id_0;
	// System.String CartDetailData::_categoryID
	String_t* ____categoryID_1;
	// System.String CartDetailData::_deliverTimeID
	String_t* ____deliverTimeID_2;
	// System.String CartDetailData::_grouponID
	String_t* ____grouponID_3;
	// System.String CartDetailData::_grouponGoodsID
	String_t* ____grouponGoodsID_4;
	// System.String CartDetailData::_goodsID
	String_t* ____goodsID_5;
	// System.String CartDetailData::_goodsTypeID
	String_t* ____goodsTypeID_6;
	// System.String CartDetailData::_restaurantID
	String_t* ____restaurantID_7;
	// System.String CartDetailData::_restaurantNameZH
	String_t* ____restaurantNameZH_8;
	// System.String CartDetailData::_restaurantNameEN
	String_t* ____restaurantNameEN_9;
	// System.String CartDetailData::_attributeIDList
	String_t* ____attributeIDList_10;
	// System.String CartDetailData::_attributeNumberList
	String_t* ____attributeNumberList_11;
	// System.String CartDetailData::_notes
	String_t* ____notes_12;
	// System.Int32 CartDetailData::_number
	int32_t ____number_13;
	// System.Boolean CartDetailData::isSyncedWithServer
	bool ___isSyncedWithServer_14;
	// DishData CartDetailData::_dishData
	DishData_t341145732 * ____dishData_15;
	// System.Collections.Generic.Dictionary`2<System.String,AttributeData> CartDetailData::_attributeDic
	Dictionary_2_t169813896 * ____attributeDic_16;
	// System.Collections.Generic.List`1<System.String> CartDetailData::keys
	List_1_t1375417109 * ___keys_17;
	// System.Collections.Generic.List`1<AttributeData> CartDetailData::values
	List_1_t717581078 * ___values_18;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____id_0)); }
	inline String_t* get__id_0() const { return ____id_0; }
	inline String_t** get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(String_t* value)
	{
		____id_0 = value;
		Il2CppCodeGenWriteBarrier(&____id_0, value);
	}

	inline static int32_t get_offset_of__categoryID_1() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____categoryID_1)); }
	inline String_t* get__categoryID_1() const { return ____categoryID_1; }
	inline String_t** get_address_of__categoryID_1() { return &____categoryID_1; }
	inline void set__categoryID_1(String_t* value)
	{
		____categoryID_1 = value;
		Il2CppCodeGenWriteBarrier(&____categoryID_1, value);
	}

	inline static int32_t get_offset_of__deliverTimeID_2() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____deliverTimeID_2)); }
	inline String_t* get__deliverTimeID_2() const { return ____deliverTimeID_2; }
	inline String_t** get_address_of__deliverTimeID_2() { return &____deliverTimeID_2; }
	inline void set__deliverTimeID_2(String_t* value)
	{
		____deliverTimeID_2 = value;
		Il2CppCodeGenWriteBarrier(&____deliverTimeID_2, value);
	}

	inline static int32_t get_offset_of__grouponID_3() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____grouponID_3)); }
	inline String_t* get__grouponID_3() const { return ____grouponID_3; }
	inline String_t** get_address_of__grouponID_3() { return &____grouponID_3; }
	inline void set__grouponID_3(String_t* value)
	{
		____grouponID_3 = value;
		Il2CppCodeGenWriteBarrier(&____grouponID_3, value);
	}

	inline static int32_t get_offset_of__grouponGoodsID_4() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____grouponGoodsID_4)); }
	inline String_t* get__grouponGoodsID_4() const { return ____grouponGoodsID_4; }
	inline String_t** get_address_of__grouponGoodsID_4() { return &____grouponGoodsID_4; }
	inline void set__grouponGoodsID_4(String_t* value)
	{
		____grouponGoodsID_4 = value;
		Il2CppCodeGenWriteBarrier(&____grouponGoodsID_4, value);
	}

	inline static int32_t get_offset_of__goodsID_5() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____goodsID_5)); }
	inline String_t* get__goodsID_5() const { return ____goodsID_5; }
	inline String_t** get_address_of__goodsID_5() { return &____goodsID_5; }
	inline void set__goodsID_5(String_t* value)
	{
		____goodsID_5 = value;
		Il2CppCodeGenWriteBarrier(&____goodsID_5, value);
	}

	inline static int32_t get_offset_of__goodsTypeID_6() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____goodsTypeID_6)); }
	inline String_t* get__goodsTypeID_6() const { return ____goodsTypeID_6; }
	inline String_t** get_address_of__goodsTypeID_6() { return &____goodsTypeID_6; }
	inline void set__goodsTypeID_6(String_t* value)
	{
		____goodsTypeID_6 = value;
		Il2CppCodeGenWriteBarrier(&____goodsTypeID_6, value);
	}

	inline static int32_t get_offset_of__restaurantID_7() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____restaurantID_7)); }
	inline String_t* get__restaurantID_7() const { return ____restaurantID_7; }
	inline String_t** get_address_of__restaurantID_7() { return &____restaurantID_7; }
	inline void set__restaurantID_7(String_t* value)
	{
		____restaurantID_7 = value;
		Il2CppCodeGenWriteBarrier(&____restaurantID_7, value);
	}

	inline static int32_t get_offset_of__restaurantNameZH_8() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____restaurantNameZH_8)); }
	inline String_t* get__restaurantNameZH_8() const { return ____restaurantNameZH_8; }
	inline String_t** get_address_of__restaurantNameZH_8() { return &____restaurantNameZH_8; }
	inline void set__restaurantNameZH_8(String_t* value)
	{
		____restaurantNameZH_8 = value;
		Il2CppCodeGenWriteBarrier(&____restaurantNameZH_8, value);
	}

	inline static int32_t get_offset_of__restaurantNameEN_9() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____restaurantNameEN_9)); }
	inline String_t* get__restaurantNameEN_9() const { return ____restaurantNameEN_9; }
	inline String_t** get_address_of__restaurantNameEN_9() { return &____restaurantNameEN_9; }
	inline void set__restaurantNameEN_9(String_t* value)
	{
		____restaurantNameEN_9 = value;
		Il2CppCodeGenWriteBarrier(&____restaurantNameEN_9, value);
	}

	inline static int32_t get_offset_of__attributeIDList_10() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____attributeIDList_10)); }
	inline String_t* get__attributeIDList_10() const { return ____attributeIDList_10; }
	inline String_t** get_address_of__attributeIDList_10() { return &____attributeIDList_10; }
	inline void set__attributeIDList_10(String_t* value)
	{
		____attributeIDList_10 = value;
		Il2CppCodeGenWriteBarrier(&____attributeIDList_10, value);
	}

	inline static int32_t get_offset_of__attributeNumberList_11() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____attributeNumberList_11)); }
	inline String_t* get__attributeNumberList_11() const { return ____attributeNumberList_11; }
	inline String_t** get_address_of__attributeNumberList_11() { return &____attributeNumberList_11; }
	inline void set__attributeNumberList_11(String_t* value)
	{
		____attributeNumberList_11 = value;
		Il2CppCodeGenWriteBarrier(&____attributeNumberList_11, value);
	}

	inline static int32_t get_offset_of__notes_12() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____notes_12)); }
	inline String_t* get__notes_12() const { return ____notes_12; }
	inline String_t** get_address_of__notes_12() { return &____notes_12; }
	inline void set__notes_12(String_t* value)
	{
		____notes_12 = value;
		Il2CppCodeGenWriteBarrier(&____notes_12, value);
	}

	inline static int32_t get_offset_of__number_13() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____number_13)); }
	inline int32_t get__number_13() const { return ____number_13; }
	inline int32_t* get_address_of__number_13() { return &____number_13; }
	inline void set__number_13(int32_t value)
	{
		____number_13 = value;
	}

	inline static int32_t get_offset_of_isSyncedWithServer_14() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ___isSyncedWithServer_14)); }
	inline bool get_isSyncedWithServer_14() const { return ___isSyncedWithServer_14; }
	inline bool* get_address_of_isSyncedWithServer_14() { return &___isSyncedWithServer_14; }
	inline void set_isSyncedWithServer_14(bool value)
	{
		___isSyncedWithServer_14 = value;
	}

	inline static int32_t get_offset_of__dishData_15() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____dishData_15)); }
	inline DishData_t341145732 * get__dishData_15() const { return ____dishData_15; }
	inline DishData_t341145732 ** get_address_of__dishData_15() { return &____dishData_15; }
	inline void set__dishData_15(DishData_t341145732 * value)
	{
		____dishData_15 = value;
		Il2CppCodeGenWriteBarrier(&____dishData_15, value);
	}

	inline static int32_t get_offset_of__attributeDic_16() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ____attributeDic_16)); }
	inline Dictionary_2_t169813896 * get__attributeDic_16() const { return ____attributeDic_16; }
	inline Dictionary_2_t169813896 ** get_address_of__attributeDic_16() { return &____attributeDic_16; }
	inline void set__attributeDic_16(Dictionary_2_t169813896 * value)
	{
		____attributeDic_16 = value;
		Il2CppCodeGenWriteBarrier(&____attributeDic_16, value);
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ___keys_17)); }
	inline List_1_t1375417109 * get_keys_17() const { return ___keys_17; }
	inline List_1_t1375417109 ** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(List_1_t1375417109 * value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier(&___keys_17, value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(CartDetailData_t2591270651, ___values_18)); }
	inline List_1_t717581078 * get_values_18() const { return ___values_18; }
	inline List_1_t717581078 ** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(List_1_t717581078 * value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier(&___values_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
