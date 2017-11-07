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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// UniWebViewMessage
struct UniWebViewMessage_t4192712350;
struct UniWebViewMessage_t4192712350_marshaled_pinvoke;
struct UniWebViewMessage_t4192712350_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_UniWebViewMessage4192712350.h"
#include "mscorlib_System_String7231557.h"

// System.Void UniWebViewMessage::.ctor(System.String)
extern "C"  void UniWebViewMessage__ctor_m2795119509 (UniWebViewMessage_t4192712350 * __this, String_t* ___rawMessage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UniWebViewMessage::get_rawMessage()
extern "C"  String_t* UniWebViewMessage_get_rawMessage_m3859732412 (UniWebViewMessage_t4192712350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewMessage::set_rawMessage(System.String)
extern "C"  void UniWebViewMessage_set_rawMessage_m2357012143 (UniWebViewMessage_t4192712350 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UniWebViewMessage::get_scheme()
extern "C"  String_t* UniWebViewMessage_get_scheme_m4101261090 (UniWebViewMessage_t4192712350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewMessage::set_scheme(System.String)
extern "C"  void UniWebViewMessage_set_scheme_m4218407305 (UniWebViewMessage_t4192712350 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UniWebViewMessage::get_path()
extern "C"  String_t* UniWebViewMessage_get_path_m4193981602 (UniWebViewMessage_t4192712350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewMessage::set_path(System.String)
extern "C"  void UniWebViewMessage_set_path_m4004803145 (UniWebViewMessage_t4192712350 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UniWebViewMessage::get_args()
extern "C"  Dictionary_2_t827649927 * UniWebViewMessage_get_args_m1700370287 (UniWebViewMessage_t4192712350 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewMessage::set_args(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void UniWebViewMessage_set_args_m1864421058 (UniWebViewMessage_t4192712350 * __this, Dictionary_2_t827649927 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct UniWebViewMessage_t4192712350;
struct UniWebViewMessage_t4192712350_marshaled_pinvoke;

extern "C" void UniWebViewMessage_t4192712350_marshal_pinvoke(const UniWebViewMessage_t4192712350& unmarshaled, UniWebViewMessage_t4192712350_marshaled_pinvoke& marshaled);
extern "C" void UniWebViewMessage_t4192712350_marshal_pinvoke_back(const UniWebViewMessage_t4192712350_marshaled_pinvoke& marshaled, UniWebViewMessage_t4192712350& unmarshaled);
extern "C" void UniWebViewMessage_t4192712350_marshal_pinvoke_cleanup(UniWebViewMessage_t4192712350_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct UniWebViewMessage_t4192712350;
struct UniWebViewMessage_t4192712350_marshaled_com;

extern "C" void UniWebViewMessage_t4192712350_marshal_com(const UniWebViewMessage_t4192712350& unmarshaled, UniWebViewMessage_t4192712350_marshaled_com& marshaled);
extern "C" void UniWebViewMessage_t4192712350_marshal_com_back(const UniWebViewMessage_t4192712350_marshaled_com& marshaled, UniWebViewMessage_t4192712350& unmarshaled);
extern "C" void UniWebViewMessage_t4192712350_marshal_com_cleanup(UniWebViewMessage_t4192712350_marshaled_com& marshaled);
