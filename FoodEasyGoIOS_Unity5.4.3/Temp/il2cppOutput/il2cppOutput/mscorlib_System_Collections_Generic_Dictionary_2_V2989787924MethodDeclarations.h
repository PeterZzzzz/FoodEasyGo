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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>
struct ValueCollection_t2989787924;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Single>
struct Dictionary_2_t4289182211;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t1908816725;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Object
struct Il2CppObject;
// System.Single[]
struct SingleU5BU5D_t2316563989;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_V2221015619.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void ValueCollection__ctor_m3859467328_gshared (ValueCollection_t2989787924 * __this, Dictionary_2_t4289182211 * ___dictionary0, const MethodInfo* method);
#define ValueCollection__ctor_m3859467328(__this, ___dictionary0, method) ((  void (*) (ValueCollection_t2989787924 *, Dictionary_2_t4289182211 *, const MethodInfo*))ValueCollection__ctor_m3859467328_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m2487805938_gshared (ValueCollection_t2989787924 * __this, float ___item0, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m2487805938(__this, ___item0, method) ((  void (*) (ValueCollection_t2989787924 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m2487805938_gshared)(__this, ___item0, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C"  void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m172268987_gshared (ValueCollection_t2989787924 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m172268987(__this, method) ((  void (*) (ValueCollection_t2989787924 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m172268987_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m2860244792_gshared (ValueCollection_t2989787924 * __this, float ___item0, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m2860244792(__this, ___item0, method) ((  bool (*) (ValueCollection_t2989787924 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m2860244792_gshared)(__this, ___item0, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m3266536925_gshared (ValueCollection_t2989787924 * __this, float ___item0, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m3266536925(__this, ___item0, method) ((  bool (*) (ValueCollection_t2989787924 *, float, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m3266536925_gshared)(__this, ___item0, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C"  Il2CppObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2336674171_gshared (ValueCollection_t2989787924 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2336674171(__this, method) ((  Il2CppObject* (*) (ValueCollection_t2989787924 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2336674171_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void ValueCollection_System_Collections_ICollection_CopyTo_m1445564671_gshared (ValueCollection_t2989787924 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m1445564671(__this, ___array0, ___index1, method) ((  void (*) (ValueCollection_t2989787924 *, Il2CppArray *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m1445564671_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m3653619406_gshared (ValueCollection_t2989787924 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m3653619406(__this, method) ((  Il2CppObject * (*) (ValueCollection_t2989787924 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m3653619406_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C"  bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1135420651_gshared (ValueCollection_t2989787924 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1135420651(__this, method) ((  bool (*) (ValueCollection_t2989787924 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1135420651_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2221617995_gshared (ValueCollection_t2989787924 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2221617995(__this, method) ((  bool (*) (ValueCollection_t2989787924 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m2221617995_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * ValueCollection_System_Collections_ICollection_get_SyncRoot_m337580541_gshared (ValueCollection_t2989787924 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m337580541(__this, method) ((  Il2CppObject * (*) (ValueCollection_t2989787924 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m337580541_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::CopyTo(TValue[],System.Int32)
extern "C"  void ValueCollection_CopyTo_m3242754183_gshared (ValueCollection_t2989787924 * __this, SingleU5BU5D_t2316563989* ___array0, int32_t ___index1, const MethodInfo* method);
#define ValueCollection_CopyTo_m3242754183(__this, ___array0, ___index1, method) ((  void (*) (ValueCollection_t2989787924 *, SingleU5BU5D_t2316563989*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m3242754183_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::GetEnumerator()
extern "C"  Enumerator_t2221015619  ValueCollection_GetEnumerator_m1961748784_gshared (ValueCollection_t2989787924 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m1961748784(__this, method) ((  Enumerator_t2221015619  (*) (ValueCollection_t2989787924 *, const MethodInfo*))ValueCollection_GetEnumerator_m1961748784_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>::get_Count()
extern "C"  int32_t ValueCollection_get_Count_m550974853_gshared (ValueCollection_t2989787924 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m550974853(__this, method) ((  int32_t (*) (ValueCollection_t2989787924 *, const MethodInfo*))ValueCollection_get_Count_m550974853_gshared)(__this, method)
