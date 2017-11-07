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

// JSONObject/FieldNotFound
struct FieldNotFound_t2426242465;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void JSONObject/FieldNotFound::.ctor(System.Object,System.IntPtr)
extern "C"  void FieldNotFound__ctor_m3702607304 (FieldNotFound_t2426242465 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/FieldNotFound::Invoke(System.String)
extern "C"  void FieldNotFound_Invoke_m1255490080 (FieldNotFound_t2426242465 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult JSONObject/FieldNotFound::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * FieldNotFound_BeginInvoke_m2796968613 (FieldNotFound_t2426242465 * __this, String_t* ___name0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject/FieldNotFound::EndInvoke(System.IAsyncResult)
extern "C"  void FieldNotFound_EndInvoke_m2166547416 (FieldNotFound_t2426242465 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
