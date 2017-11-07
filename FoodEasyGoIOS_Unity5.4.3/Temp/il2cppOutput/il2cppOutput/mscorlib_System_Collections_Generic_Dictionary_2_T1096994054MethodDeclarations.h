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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Single,System.Single>
struct Transform_1_t1096994054;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Single,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3553439248_gshared (Transform_1_t1096994054 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3553439248(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1096994054 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3553439248_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Single,System.Single>::Invoke(TKey,TValue)
extern "C"  float Transform_1_Invoke_m384425192_gshared (Transform_1_t1096994054 * __this, int32_t ___key0, float ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m384425192(__this, ___key0, ___value1, method) ((  float (*) (Transform_1_t1096994054 *, int32_t, float, const MethodInfo*))Transform_1_Invoke_m384425192_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Single,System.Single>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3640107539_gshared (Transform_1_t1096994054 * __this, int32_t ___key0, float ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3640107539(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1096994054 *, int32_t, float, AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3640107539_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Single,System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  float Transform_1_EndInvoke_m1530733218_gshared (Transform_1_t1096994054 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1530733218(__this, ___result0, method) ((  float (*) (Transform_1_t1096994054 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1530733218_gshared)(__this, ___result0, method)
