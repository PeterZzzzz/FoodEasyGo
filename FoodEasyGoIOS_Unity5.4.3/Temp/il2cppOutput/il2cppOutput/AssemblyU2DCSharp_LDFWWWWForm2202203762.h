#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WWWForm
struct WWWForm_t461342257;
// System.Collections.Generic.List`1<LDFWWWWForm/LDFWWWWFormField>
struct List_1_t3333818997;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LDFWWWWForm
struct  LDFWWWWForm_t2202203762  : public Il2CppObject
{
public:
	// UnityEngine.WWWForm LDFWWWWForm::wwwForm
	WWWForm_t461342257 * ___wwwForm_0;
	// System.Collections.Generic.List`1<LDFWWWWForm/LDFWWWWFormField> LDFWWWWForm::fieldList
	List_1_t3333818997 * ___fieldList_1;

public:
	inline static int32_t get_offset_of_wwwForm_0() { return static_cast<int32_t>(offsetof(LDFWWWWForm_t2202203762, ___wwwForm_0)); }
	inline WWWForm_t461342257 * get_wwwForm_0() const { return ___wwwForm_0; }
	inline WWWForm_t461342257 ** get_address_of_wwwForm_0() { return &___wwwForm_0; }
	inline void set_wwwForm_0(WWWForm_t461342257 * value)
	{
		___wwwForm_0 = value;
		Il2CppCodeGenWriteBarrier(&___wwwForm_0, value);
	}

	inline static int32_t get_offset_of_fieldList_1() { return static_cast<int32_t>(offsetof(LDFWWWWForm_t2202203762, ___fieldList_1)); }
	inline List_1_t3333818997 * get_fieldList_1() const { return ___fieldList_1; }
	inline List_1_t3333818997 ** get_address_of_fieldList_1() { return &___fieldList_1; }
	inline void set_fieldList_1(List_1_t3333818997 * value)
	{
		___fieldList_1 = value;
		Il2CppCodeGenWriteBarrier(&___fieldList_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
