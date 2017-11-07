#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MiniJSON
struct MiniJSON_t2999478751;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Char[]
struct CharU5BU5D_t3324145743;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"

// System.Void MiniJSON::.ctor()
extern "C"  void MiniJSON__ctor_m3723319888 (MiniJSON_t2999478751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON::.cctor()
extern "C"  void MiniJSON__cctor_m3271670621 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON::jsonDecode(System.String)
extern "C"  Il2CppObject * MiniJSON_jsonDecode_m2239788899 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON::jsonEncode(System.Object)
extern "C"  String_t* MiniJSON_jsonEncode_m3503903903 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON::lastDecodeSuccessful()
extern "C"  bool MiniJSON_lastDecodeSuccessful_m4224849614 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MiniJSON::getLastErrorIndex()
extern "C"  int32_t MiniJSON_getLastErrorIndex_m2071674926 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON::getLastErrorSnippet()
extern "C"  String_t* MiniJSON_getLastErrorSnippet_m3025045548 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable MiniJSON::parseObject(System.Char[],System.Int32&)
extern "C"  Hashtable_t1407064410 * MiniJSON_parseObject_m2461982797 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList MiniJSON::parseArray(System.Char[],System.Int32&)
extern "C"  ArrayList_t3948406897 * MiniJSON_parseArray_m46098480 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object MiniJSON::parseValue(System.Char[],System.Int32&,System.Boolean&)
extern "C"  Il2CppObject * MiniJSON_parseValue_m1751092568 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, bool* ___success2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJSON::parseString(System.Char[],System.Int32&)
extern "C"  String_t* MiniJSON_parseString_m561858817 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double MiniJSON::parseNumber(System.Char[],System.Int32&)
extern "C"  double MiniJSON_parseNumber_m2389640457 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MiniJSON::getLastIndexOfNumber(System.Char[],System.Int32)
extern "C"  int32_t MiniJSON_getLastIndexOfNumber_m804658316 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON::eatWhitespace(System.Char[],System.Int32&)
extern "C"  void MiniJSON_eatWhitespace_m240573997 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MiniJSON::lookAhead(System.Char[],System.Int32)
extern "C"  int32_t MiniJSON_lookAhead_m2447657014 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MiniJSON::nextToken(System.Char[],System.Int32&)
extern "C"  int32_t MiniJSON_nextToken_m3797447794 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t3324145743* ___json0, int32_t* ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON::serializeObjectOrArray(System.Object,System.Text.StringBuilder)
extern "C"  bool MiniJSON_serializeObjectOrArray_m1421528817 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___objectOrArray0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON::serializeObject(System.Collections.Hashtable,System.Text.StringBuilder)
extern "C"  bool MiniJSON_serializeObject_m2476982477 (Il2CppObject * __this /* static, unused */, Hashtable_t1407064410 * ___anObject0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON::serializeDictionary(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Text.StringBuilder)
extern "C"  bool MiniJSON_serializeDictionary_m2089695709 (Il2CppObject * __this /* static, unused */, Dictionary_2_t827649927 * ___dict0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON::serializeArray(System.Collections.ArrayList,System.Text.StringBuilder)
extern "C"  bool MiniJSON_serializeArray_m1996381038 (Il2CppObject * __this /* static, unused */, ArrayList_t3948406897 * ___anArray0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MiniJSON::serializeValue(System.Object,System.Text.StringBuilder)
extern "C"  bool MiniJSON_serializeValue_m1454356919 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON::serializeString(System.String,System.Text.StringBuilder)
extern "C"  void MiniJSON_serializeString_m2203421607 (Il2CppObject * __this /* static, unused */, String_t* ___aString0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MiniJSON::serializeNumber(System.Double,System.Text.StringBuilder)
extern "C"  void MiniJSON_serializeNumber_m3607534511 (Il2CppObject * __this /* static, unused */, double ___number0, StringBuilder_t243639308 * ___builder1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
