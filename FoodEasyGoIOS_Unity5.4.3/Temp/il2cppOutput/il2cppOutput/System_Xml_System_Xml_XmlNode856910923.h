#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t1675009921;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t3993110696;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t856910923  : public Il2CppObject
{
public:
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t3993110696 * ___childNodes_1;

public:
	inline static int32_t get_offset_of_childNodes_1() { return static_cast<int32_t>(offsetof(XmlNode_t856910923, ___childNodes_1)); }
	inline XmlNodeListChildren_t3993110696 * get_childNodes_1() const { return ___childNodes_1; }
	inline XmlNodeListChildren_t3993110696 ** get_address_of_childNodes_1() { return &___childNodes_1; }
	inline void set_childNodes_1(XmlNodeListChildren_t3993110696 * value)
	{
		___childNodes_1 = value;
		Il2CppCodeGenWriteBarrier(&___childNodes_1, value);
	}
};

struct XmlNode_t856910923_StaticFields
{
public:
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t1675009921 * ___emptyList_0;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t856910923_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_t1675009921 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_t1675009921 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_t1675009921 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier(&___emptyList_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
