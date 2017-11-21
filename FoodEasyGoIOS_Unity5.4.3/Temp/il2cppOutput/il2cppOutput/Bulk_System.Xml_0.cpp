#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1287616130;
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t1718403287;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Xml.XmlNodeList
struct XmlNodeList_t497326455;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t2811458520;
// System.Xml.IHasXmlChildNode
struct IHasXmlChildNode_t2048545686;
// System.Xml.XmlNodeListChildren/Enumerator
struct Enumerator_t569056069;
// System.InvalidOperationException
struct InvalidOperationException_t721527559;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t596158605;

extern RuntimeClass* EmptyNodeList_t1718403287_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNode_t616554813_il2cpp_TypeInfo_var;
extern const uint32_t XmlNode__cctor_m1662095515_MetadataUsageId;
extern RuntimeClass* IHasXmlChildNode_t2048545686_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNodeListChildren_t2811458520_il2cpp_TypeInfo_var;
extern const uint32_t XmlNode_get_ChildNodes_m3902468502_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern const uint32_t EmptyNodeList__cctor_m1873892799_MetadataUsageId;
extern const uint32_t EmptyNodeList_GetEnumerator_m1575084202_MetadataUsageId;
extern RuntimeClass* Enumerator_t569056069_il2cpp_TypeInfo_var;
extern const uint32_t XmlNodeListChildren_GetEnumerator_m1518971293_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t721527559_il2cpp_TypeInfo_var;
extern const uint32_t Enumerator_get_Current_m297827515_MetadataUsageId;
extern const uint32_t Enumerator_MoveNext_m1618395642_MetadataUsageId;

struct ObjectU5BU5D_t3614634134;


#ifndef U3CMODULEU3E_T3783534234_H
#define U3CMODULEU3E_T3783534234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534234 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534234_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef ENUMERATOR_T569056069_H
#define ENUMERATOR_T569056069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeListChildren/Enumerator
struct  Enumerator_t569056069  : public RuntimeObject
{
public:
	// System.Xml.IHasXmlChildNode System.Xml.XmlNodeListChildren/Enumerator::parent
	RuntimeObject* ___parent_0;
	// System.Xml.XmlLinkedNode System.Xml.XmlNodeListChildren/Enumerator::currentChild
	XmlLinkedNode_t1287616130 * ___currentChild_1;
	// System.Boolean System.Xml.XmlNodeListChildren/Enumerator::passedLastNode
	bool ___passedLastNode_2;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(Enumerator_t569056069, ___parent_0)); }
	inline RuntimeObject* get_parent_0() const { return ___parent_0; }
	inline RuntimeObject** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(RuntimeObject* value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_currentChild_1() { return static_cast<int32_t>(offsetof(Enumerator_t569056069, ___currentChild_1)); }
	inline XmlLinkedNode_t1287616130 * get_currentChild_1() const { return ___currentChild_1; }
	inline XmlLinkedNode_t1287616130 ** get_address_of_currentChild_1() { return &___currentChild_1; }
	inline void set_currentChild_1(XmlLinkedNode_t1287616130 * value)
	{
		___currentChild_1 = value;
		Il2CppCodeGenWriteBarrier((&___currentChild_1), value);
	}

	inline static int32_t get_offset_of_passedLastNode_2() { return static_cast<int32_t>(offsetof(Enumerator_t569056069, ___passedLastNode_2)); }
	inline bool get_passedLastNode_2() const { return ___passedLastNode_2; }
	inline bool* get_address_of_passedLastNode_2() { return &___passedLastNode_2; }
	inline void set_passedLastNode_2(bool value)
	{
		___passedLastNode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T569056069_H
#ifndef XMLNODELIST_T497326455_H
#define XMLNODELIST_T497326455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeList
struct  XmlNodeList_t497326455  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODELIST_T497326455_H
#ifndef XMLNODE_T616554813_H
#define XMLNODE_T616554813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t616554813  : public RuntimeObject
{
public:
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t2811458520 * ___childNodes_1;

public:
	inline static int32_t get_offset_of_childNodes_1() { return static_cast<int32_t>(offsetof(XmlNode_t616554813, ___childNodes_1)); }
	inline XmlNodeListChildren_t2811458520 * get_childNodes_1() const { return ___childNodes_1; }
	inline XmlNodeListChildren_t2811458520 ** get_address_of_childNodes_1() { return &___childNodes_1; }
	inline void set_childNodes_1(XmlNodeListChildren_t2811458520 * value)
	{
		___childNodes_1 = value;
		Il2CppCodeGenWriteBarrier((&___childNodes_1), value);
	}
};

struct XmlNode_t616554813_StaticFields
{
public:
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t1718403287 * ___emptyList_0;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t616554813_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_t1718403287 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_t1718403287 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_t1718403287 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyList_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODE_T616554813_H
#ifndef EXCEPTION_T1927440687_H
#define EXCEPTION_T1927440687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1927440687  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t169632028* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1927440687 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t169632028* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t169632028** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t169632028* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___inner_exception_1)); }
	inline Exception_t1927440687 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1927440687 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1927440687 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1927440687_H
#ifndef XMLNODELISTCHILDREN_T2811458520_H
#define XMLNODELISTCHILDREN_T2811458520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeListChildren
struct  XmlNodeListChildren_t2811458520  : public XmlNodeList_t497326455
{
public:
	// System.Xml.IHasXmlChildNode System.Xml.XmlNodeListChildren::parent
	RuntimeObject* ___parent_0;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(XmlNodeListChildren_t2811458520, ___parent_0)); }
	inline RuntimeObject* get_parent_0() const { return ___parent_0; }
	inline RuntimeObject** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(RuntimeObject* value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODELISTCHILDREN_T2811458520_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef EMPTYNODELIST_T1718403287_H
#define EMPTYNODELIST_T1718403287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode/EmptyNodeList
struct  EmptyNodeList_t1718403287  : public XmlNodeList_t497326455
{
public:

public:
};

struct EmptyNodeList_t1718403287_StaticFields
{
public:
	// System.Collections.IEnumerator System.Xml.XmlNode/EmptyNodeList::emptyEnumerator
	RuntimeObject* ___emptyEnumerator_0;

public:
	inline static int32_t get_offset_of_emptyEnumerator_0() { return static_cast<int32_t>(offsetof(EmptyNodeList_t1718403287_StaticFields, ___emptyEnumerator_0)); }
	inline RuntimeObject* get_emptyEnumerator_0() const { return ___emptyEnumerator_0; }
	inline RuntimeObject** get_address_of_emptyEnumerator_0() { return &___emptyEnumerator_0; }
	inline void set_emptyEnumerator_0(RuntimeObject* value)
	{
		___emptyEnumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyEnumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYNODELIST_T1718403287_H
#ifndef XMLLINKEDNODE_T1287616130_H
#define XMLLINKEDNODE_T1287616130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlLinkedNode
struct  XmlLinkedNode_t1287616130  : public XmlNode_t616554813
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::nextSibling
	XmlLinkedNode_t1287616130 * ___nextSibling_2;

public:
	inline static int32_t get_offset_of_nextSibling_2() { return static_cast<int32_t>(offsetof(XmlLinkedNode_t1287616130, ___nextSibling_2)); }
	inline XmlLinkedNode_t1287616130 * get_nextSibling_2() const { return ___nextSibling_2; }
	inline XmlLinkedNode_t1287616130 ** get_address_of_nextSibling_2() { return &___nextSibling_2; }
	inline void set_nextSibling_2(XmlLinkedNode_t1287616130 * value)
	{
		___nextSibling_2 = value;
		Il2CppCodeGenWriteBarrier((&___nextSibling_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLLINKEDNODE_T1287616130_H
#ifndef SYSTEMEXCEPTION_T3877406272_H
#define SYSTEMEXCEPTION_T3877406272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3877406272  : public Exception_t1927440687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3877406272_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
#ifndef INVALIDOPERATIONEXCEPTION_T721527559_H
#define INVALIDOPERATIONEXCEPTION_T721527559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t721527559  : public SystemException_t3877406272
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T721527559_H
// System.Object[]
struct ObjectU5BU5D_t3614634134  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void System.Xml.XmlNode/EmptyNodeList::.ctor()
extern "C"  void EmptyNodeList__ctor_m701383444 (EmptyNodeList_t1718403287 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
extern "C"  RuntimeObject* XmlNode_GetEnumerator_m2088716184 (XmlNode_t616554813 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeListChildren::.ctor(System.Xml.IHasXmlChildNode)
extern "C"  void XmlNodeListChildren__ctor_m2476046961 (XmlNodeListChildren_t2811458520 * __this, RuntimeObject* ___parent0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeList::.ctor()
extern "C"  void XmlNodeList__ctor_m2250103234 (XmlNodeList_t497326455 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C"  RuntimeObject* Array_GetEnumerator_m2284404958 (RuntimeArray * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNodeListChildren/Enumerator::.ctor(System.Xml.IHasXmlChildNode)
extern "C"  void Enumerator__ctor_m1864413588 (Enumerator_t569056069 * __this, RuntimeObject* ___parent0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor()
extern "C"  void InvalidOperationException__ctor_m102359810 (InvalidOperationException_t721527559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C"  XmlLinkedNode_t1287616130 * XmlLinkedNode_get_NextLinkedSibling_m2219349313 (XmlLinkedNode_t1287616130 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::ReferenceEquals(System.Object,System.Object)
extern "C"  bool Object_ReferenceEquals_m3900584722 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C"  XmlLinkedNode_t1287616130 * XmlLinkedNode_get_NextLinkedSibling_m2219349313 (XmlLinkedNode_t1287616130 * __this, const RuntimeMethod* method)
{
	{
		XmlLinkedNode_t1287616130 * L_0 = __this->get_nextSibling_2();
		return L_0;
	}
}
// System.Void System.Xml.XmlNode::.cctor()
extern "C"  void XmlNode__cctor_m1662095515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlNode__cctor_m1662095515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EmptyNodeList_t1718403287 * L_0 = (EmptyNodeList_t1718403287 *)il2cpp_codegen_object_new(EmptyNodeList_t1718403287_il2cpp_TypeInfo_var);
		EmptyNodeList__ctor_m701383444(L_0, /*hidden argument*/NULL);
		((XmlNode_t616554813_StaticFields*)il2cpp_codegen_static_fields_for(XmlNode_t616554813_il2cpp_TypeInfo_var))->set_emptyList_0(L_0);
		return;
	}
}
// System.Object System.Xml.XmlNode::System.ICloneable.Clone()
extern "C"  RuntimeObject * XmlNode_System_ICloneable_Clone_m102805311 (XmlNode_t616554813 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t616554813 * L_0 = VirtFuncInvoker0< XmlNode_t616554813 * >::Invoke(7 /* System.Xml.XmlNode System.Xml.XmlNode::Clone() */, __this);
		return L_0;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* XmlNode_System_Collections_IEnumerable_GetEnumerator_m4193915221 (XmlNode_t616554813 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = XmlNode_GetEnumerator_m2088716184(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes()
extern "C"  XmlNodeList_t497326455 * XmlNode_get_ChildNodes_m3902468502 (XmlNode_t616554813 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlNode_get_ChildNodes_m3902468502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)__this, IHasXmlChildNode_t2048545686_il2cpp_TypeInfo_var));
		RuntimeObject* L_0 = V_0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XmlNode_t616554813_il2cpp_TypeInfo_var);
		EmptyNodeList_t1718403287 * L_1 = ((XmlNode_t616554813_StaticFields*)il2cpp_codegen_static_fields_for(XmlNode_t616554813_il2cpp_TypeInfo_var))->get_emptyList_0();
		return L_1;
	}

IL_0013:
	{
		XmlNodeListChildren_t2811458520 * L_2 = __this->get_childNodes_1();
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		XmlNodeListChildren_t2811458520 * L_4 = (XmlNodeListChildren_t2811458520 *)il2cpp_codegen_object_new(XmlNodeListChildren_t2811458520_il2cpp_TypeInfo_var);
		XmlNodeListChildren__ctor_m2476046961(L_4, L_3, /*hidden argument*/NULL);
		__this->set_childNodes_1(L_4);
	}

IL_002a:
	{
		XmlNodeListChildren_t2811458520 * L_5 = __this->get_childNodes_1();
		return L_5;
	}
}
// System.Xml.XmlNode System.Xml.XmlNode::Clone()
extern "C"  XmlNode_t616554813 * XmlNode_Clone_m393058397 (XmlNode_t616554813 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t616554813 * L_0 = VirtFuncInvoker1< XmlNode_t616554813 *, bool >::Invoke(8 /* System.Xml.XmlNode System.Xml.XmlNode::CloneNode(System.Boolean) */, __this, (bool)1);
		return L_0;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
extern "C"  RuntimeObject* XmlNode_GetEnumerator_m2088716184 (XmlNode_t616554813 * __this, const RuntimeMethod* method)
{
	{
		XmlNodeList_t497326455 * L_0 = VirtFuncInvoker0< XmlNodeList_t497326455 * >::Invoke(6 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, __this);
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Void System.Xml.XmlNode/EmptyNodeList::.ctor()
extern "C"  void EmptyNodeList__ctor_m701383444 (EmptyNodeList_t1718403287 * __this, const RuntimeMethod* method)
{
	{
		XmlNodeList__ctor_m2250103234(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlNode/EmptyNodeList::.cctor()
extern "C"  void EmptyNodeList__cctor_m1873892799 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EmptyNodeList__cctor_m1873892799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((RuntimeArray *)(RuntimeArray *)((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)0)));
		RuntimeObject* L_0 = Array_GetEnumerator_m2284404958((RuntimeArray *)(RuntimeArray *)((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		((EmptyNodeList_t1718403287_StaticFields*)il2cpp_codegen_static_fields_for(EmptyNodeList_t1718403287_il2cpp_TypeInfo_var))->set_emptyEnumerator_0(L_0);
		return;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNode/EmptyNodeList::GetEnumerator()
extern "C"  RuntimeObject* EmptyNodeList_GetEnumerator_m1575084202 (EmptyNodeList_t1718403287 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EmptyNodeList_GetEnumerator_m1575084202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EmptyNodeList_t1718403287_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((EmptyNodeList_t1718403287_StaticFields*)il2cpp_codegen_static_fields_for(EmptyNodeList_t1718403287_il2cpp_TypeInfo_var))->get_emptyEnumerator_0();
		return L_0;
	}
}
// System.Void System.Xml.XmlNodeList::.ctor()
extern "C"  void XmlNodeList__ctor_m2250103234 (XmlNodeList_t497326455 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.XmlNodeListChildren::.ctor(System.Xml.IHasXmlChildNode)
extern "C"  void XmlNodeListChildren__ctor_m2476046961 (XmlNodeListChildren_t2811458520 * __this, RuntimeObject* ___parent0, const RuntimeMethod* method)
{
	{
		XmlNodeList__ctor_m2250103234(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___parent0;
		__this->set_parent_0(L_0);
		return;
	}
}
// System.Collections.IEnumerator System.Xml.XmlNodeListChildren::GetEnumerator()
extern "C"  RuntimeObject* XmlNodeListChildren_GetEnumerator_m1518971293 (XmlNodeListChildren_t2811458520 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlNodeListChildren_GetEnumerator_m1518971293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_parent_0();
		Enumerator_t569056069 * L_1 = (Enumerator_t569056069 *)il2cpp_codegen_object_new(Enumerator_t569056069_il2cpp_TypeInfo_var);
		Enumerator__ctor_m1864413588(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.XmlNodeListChildren/Enumerator::.ctor(System.Xml.IHasXmlChildNode)
extern "C"  void Enumerator__ctor_m1864413588 (Enumerator_t569056069 * __this, RuntimeObject* ___parent0, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		__this->set_currentChild_1((XmlLinkedNode_t1287616130 *)NULL);
		RuntimeObject* L_0 = ___parent0;
		__this->set_parent_0(L_0);
		__this->set_passedLastNode_2((bool)0);
		return;
	}
}
// System.Object System.Xml.XmlNodeListChildren/Enumerator::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m297827515 (Enumerator_t569056069 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_get_Current_m297827515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlLinkedNode_t1287616130 * L_0 = __this->get_currentChild_1();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_parent_0();
		NullCheck(L_1);
		XmlLinkedNode_t1287616130 * L_2 = InterfaceFuncInvoker0< XmlLinkedNode_t1287616130 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2048545686_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		bool L_3 = __this->get_passedLastNode_2();
		if (!L_3)
		{
			goto IL_002c;
		}
	}

IL_0026:
	{
		InvalidOperationException_t721527559 * L_4 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m102359810(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_002c:
	{
		XmlLinkedNode_t1287616130 * L_5 = __this->get_currentChild_1();
		return L_5;
	}
}
// System.Boolean System.Xml.XmlNodeListChildren/Enumerator::MoveNext()
extern "C"  bool Enumerator_MoveNext_m1618395642 (Enumerator_t569056069 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enumerator_MoveNext_m1618395642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		V_0 = (bool)1;
		RuntimeObject* L_0 = __this->get_parent_0();
		NullCheck(L_0);
		XmlLinkedNode_t1287616130 * L_1 = InterfaceFuncInvoker0< XmlLinkedNode_t1287616130 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2048545686_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0079;
	}

IL_0019:
	{
		XmlLinkedNode_t1287616130 * L_2 = __this->get_currentChild_1();
		if (L_2)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_parent_0();
		NullCheck(L_3);
		XmlLinkedNode_t1287616130 * L_4 = InterfaceFuncInvoker0< XmlLinkedNode_t1287616130 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2048545686_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_4);
		XmlLinkedNode_t1287616130 * L_5 = XmlLinkedNode_get_NextLinkedSibling_m2219349313(L_4, /*hidden argument*/NULL);
		__this->set_currentChild_1(L_5);
		goto IL_0079;
	}

IL_003f:
	{
		XmlLinkedNode_t1287616130 * L_6 = __this->get_currentChild_1();
		RuntimeObject* L_7 = __this->get_parent_0();
		NullCheck(L_7);
		XmlLinkedNode_t1287616130 * L_8 = InterfaceFuncInvoker0< XmlLinkedNode_t1287616130 * >::Invoke(0 /* System.Xml.XmlLinkedNode System.Xml.IHasXmlChildNode::get_LastLinkedChild() */, IHasXmlChildNode_t2048545686_il2cpp_TypeInfo_var, L_7);
		bool L_9 = Object_ReferenceEquals_m3900584722(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0068;
		}
	}
	{
		V_0 = (bool)0;
		__this->set_passedLastNode_2((bool)1);
		goto IL_0079;
	}

IL_0068:
	{
		XmlLinkedNode_t1287616130 * L_10 = __this->get_currentChild_1();
		NullCheck(L_10);
		XmlLinkedNode_t1287616130 * L_11 = XmlLinkedNode_get_NextLinkedSibling_m2219349313(L_10, /*hidden argument*/NULL);
		__this->set_currentChild_1(L_11);
	}

IL_0079:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void System.Xml.XmlNodeListChildren/Enumerator::Reset()
extern "C"  void Enumerator_Reset_m2287624379 (Enumerator_t569056069 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currentChild_1((XmlLinkedNode_t1287616130 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
