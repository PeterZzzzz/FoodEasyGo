﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t2262335274;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_t2640361832;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1559630662;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Reflection_MethodInfo318736065.h"

// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::.ctor()
extern "C"  void UnityEvent_2__ctor_m1950601551_gshared (UnityEvent_2_t2262335274 * __this, const MethodInfo* method);
#define UnityEvent_2__ctor_m1950601551(__this, method) ((  void (*) (UnityEvent_2_t2262335274 *, const MethodInfo*))UnityEvent_2__ctor_m1950601551_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
extern "C"  void UnityEvent_2_AddListener_m3895966050_gshared (UnityEvent_2_t2262335274 * __this, UnityAction_2_t2640361832 * ___call0, const MethodInfo* method);
#define UnityEvent_2_AddListener_m3895966050(__this, ___call0, method) ((  void (*) (UnityEvent_2_t2262335274 *, UnityAction_2_t2640361832 *, const MethodInfo*))UnityEvent_2_AddListener_m3895966050_gshared)(__this, ___call0, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C"  MethodInfo_t * UnityEvent_2_FindMethod_Impl_m3911325978_gshared (UnityEvent_2_t2262335274 * __this, String_t* ___name0, Il2CppObject * ___targetObj1, const MethodInfo* method);
#define UnityEvent_2_FindMethod_Impl_m3911325978(__this, ___name0, ___targetObj1, method) ((  MethodInfo_t * (*) (UnityEvent_2_t2262335274 *, String_t*, Il2CppObject *, const MethodInfo*))UnityEvent_2_FindMethod_Impl_m3911325978_gshared)(__this, ___name0, ___targetObj1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C"  BaseInvokableCall_t1559630662 * UnityEvent_2_GetDelegate_m3055054414_gshared (UnityEvent_2_t2262335274 * __this, Il2CppObject * ___target0, MethodInfo_t * ___theFunction1, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m3055054414(__this, ___target0, ___theFunction1, method) ((  BaseInvokableCall_t1559630662 * (*) (UnityEvent_2_t2262335274 *, Il2CppObject *, MethodInfo_t *, const MethodInfo*))UnityEvent_2_GetDelegate_m3055054414_gshared)(__this, ___target0, ___theFunction1, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::GetDelegate(UnityEngine.Events.UnityAction`2<T0,T1>)
extern "C"  BaseInvokableCall_t1559630662 * UnityEvent_2_GetDelegate_m4028737589_gshared (Il2CppObject * __this /* static, unused */, UnityAction_2_t2640361832 * ___action0, const MethodInfo* method);
#define UnityEvent_2_GetDelegate_m4028737589(__this /* static, unused */, ___action0, method) ((  BaseInvokableCall_t1559630662 * (*) (Il2CppObject * /* static, unused */, UnityAction_2_t2640361832 *, const MethodInfo*))UnityEvent_2_GetDelegate_m4028737589_gshared)(__this /* static, unused */, ___action0, method)
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::Invoke(T0,T1)
extern "C"  void UnityEvent_2_Invoke_m4120884536_gshared (UnityEvent_2_t2262335274 * __this, Il2CppObject * ___arg00, Il2CppObject * ___arg11, const MethodInfo* method);
#define UnityEvent_2_Invoke_m4120884536(__this, ___arg00, ___arg11, method) ((  void (*) (UnityEvent_2_t2262335274 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))UnityEvent_2_Invoke_m4120884536_gshared)(__this, ___arg00, ___arg11, method)
