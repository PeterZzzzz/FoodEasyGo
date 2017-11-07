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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AttributeData
struct  AttributeData_t3644362822  : public Il2CppObject
{
public:
	// System.String AttributeData::_id
	String_t* ____id_0;
	// System.Single AttributeData::_price
	float ____price_1;
	// System.Int32 AttributeData::_quantity
	int32_t ____quantity_2;
	// System.String AttributeData::_nameZH
	String_t* ____nameZH_3;
	// System.String AttributeData::_nameEN
	String_t* ____nameEN_4;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(AttributeData_t3644362822, ____id_0)); }
	inline String_t* get__id_0() const { return ____id_0; }
	inline String_t** get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(String_t* value)
	{
		____id_0 = value;
		Il2CppCodeGenWriteBarrier(&____id_0, value);
	}

	inline static int32_t get_offset_of__price_1() { return static_cast<int32_t>(offsetof(AttributeData_t3644362822, ____price_1)); }
	inline float get__price_1() const { return ____price_1; }
	inline float* get_address_of__price_1() { return &____price_1; }
	inline void set__price_1(float value)
	{
		____price_1 = value;
	}

	inline static int32_t get_offset_of__quantity_2() { return static_cast<int32_t>(offsetof(AttributeData_t3644362822, ____quantity_2)); }
	inline int32_t get__quantity_2() const { return ____quantity_2; }
	inline int32_t* get_address_of__quantity_2() { return &____quantity_2; }
	inline void set__quantity_2(int32_t value)
	{
		____quantity_2 = value;
	}

	inline static int32_t get_offset_of__nameZH_3() { return static_cast<int32_t>(offsetof(AttributeData_t3644362822, ____nameZH_3)); }
	inline String_t* get__nameZH_3() const { return ____nameZH_3; }
	inline String_t** get_address_of__nameZH_3() { return &____nameZH_3; }
	inline void set__nameZH_3(String_t* value)
	{
		____nameZH_3 = value;
		Il2CppCodeGenWriteBarrier(&____nameZH_3, value);
	}

	inline static int32_t get_offset_of__nameEN_4() { return static_cast<int32_t>(offsetof(AttributeData_t3644362822, ____nameEN_4)); }
	inline String_t* get__nameEN_4() const { return ____nameEN_4; }
	inline String_t** get_address_of__nameEN_4() { return &____nameEN_4; }
	inline void set__nameEN_4(String_t* value)
	{
		____nameEN_4 = value;
		Il2CppCodeGenWriteBarrier(&____nameEN_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
