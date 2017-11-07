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

// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "mscorlib_System_String7231557.h"

// System.String MiniJsonExtensions::toJson(System.Collections.Hashtable)
extern "C"  String_t* MiniJsonExtensions_toJson_m1205538118 (Il2CppObject * __this /* static, unused */, Hashtable_t1407064410 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MiniJsonExtensions::toJson(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  String_t* MiniJsonExtensions_toJson_m2635768255 (Il2CppObject * __this /* static, unused */, Dictionary_2_t827649927 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList MiniJsonExtensions::arrayListFromJson(System.String)
extern "C"  ArrayList_t3948406897 * MiniJsonExtensions_arrayListFromJson_m2234629349 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable MiniJsonExtensions::hashtableFromJson(System.String)
extern "C"  Hashtable_t1407064410 * MiniJsonExtensions_hashtableFromJson_m1478403219 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
