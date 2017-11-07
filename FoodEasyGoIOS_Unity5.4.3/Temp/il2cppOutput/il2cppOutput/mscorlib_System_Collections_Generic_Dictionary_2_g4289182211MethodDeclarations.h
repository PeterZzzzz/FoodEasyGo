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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Single>
struct Dictionary_2_t4289182211;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1944872904;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Single>[]
struct KeyValuePair_2U5BU5D_t212833192;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Single>>
struct IEnumerator_1_t1804860670;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Single>
struct KeyCollection_t1620974366;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Single>
struct ValueCollection_t2989787924;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24187962917.h"
#include "mscorlib_System_Array1146569071.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1311538307.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::.ctor()
extern "C"  void Dictionary_2__ctor_m462643356_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m462643356(__this, method) ((  void (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2__ctor_m462643356_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3144420508_gshared (Dictionary_2_t4289182211 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m3144420508(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t4289182211 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3144420508_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m2861266038_gshared (Dictionary_2_t4289182211 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m2861266038(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t4289182211 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m2861266038_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2521655623_gshared (Dictionary_2_t4289182211 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m2521655623(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t4289182211 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2521655623_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1891167846_gshared (Dictionary_2_t4289182211 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m1891167846(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t4289182211 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2__ctor_m1891167846_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m3485902009_gshared (Dictionary_2_t4289182211 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3485902009(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t4289182211 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m3485902009_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2867395752_gshared (Dictionary_2_t4289182211 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2867395752(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4289182211 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2867395752_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1368127657_gshared (Dictionary_2_t4289182211 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1368127657(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4289182211 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1368127657_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3090794214_gshared (Dictionary_2_t4289182211 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3090794214(__this, ___key0, method) ((  void (*) (Dictionary_2_t4289182211 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3090794214_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2633910795_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2633910795(__this, method) ((  bool (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2633910795_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4223401661_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4223401661(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4223401661_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3479277199_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3479277199(__this, method) ((  bool (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3479277199_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2018527356_gshared (Dictionary_2_t4289182211 * __this, KeyValuePair_2_t4187962917  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2018527356(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t4289182211 *, KeyValuePair_2_t4187962917 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2018527356_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4265973002_gshared (Dictionary_2_t4289182211 * __this, KeyValuePair_2_t4187962917  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4265973002(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t4289182211 *, KeyValuePair_2_t4187962917 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m4265973002_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1534234976_gshared (Dictionary_2_t4289182211 * __this, KeyValuePair_2U5BU5D_t212833192* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1534234976(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4289182211 *, KeyValuePair_2U5BU5D_t212833192*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1534234976_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2070509231_gshared (Dictionary_2_t4289182211 * __this, KeyValuePair_2_t4187962917  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2070509231(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t4289182211 *, KeyValuePair_2_t4187962917 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2070509231_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m258029119_gshared (Dictionary_2_t4289182211 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m258029119(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4289182211 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m258029119_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1062262798_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1062262798(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1062262798_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2483169093_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2483169093(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2483169093_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3785422034_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3785422034(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3785422034_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3274276933_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m3274276933(__this, method) ((  int32_t (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2_get_Count_m3274276933_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::get_Item(TKey)
extern "C"  float Dictionary_2_get_Item_m227802440_gshared (Dictionary_2_t4289182211 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m227802440(__this, ___key0, method) ((  float (*) (Dictionary_2_t4289182211 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m227802440_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1803468709_gshared (Dictionary_2_t4289182211 * __this, int32_t ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m1803468709(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4289182211 *, int32_t, float, const MethodInfo*))Dictionary_2_set_Item_m1803468709_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m396148253_gshared (Dictionary_2_t4289182211 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m396148253(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t4289182211 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m396148253_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m358550330_gshared (Dictionary_2_t4289182211 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m358550330(__this, ___size0, method) ((  void (*) (Dictionary_2_t4289182211 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m358550330_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1474869686_gshared (Dictionary_2_t4289182211 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1474869686(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4289182211 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1474869686_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t4187962917  Dictionary_2_make_pair_m1387845194_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m1387845194(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t4187962917  (*) (Il2CppObject * /* static, unused */, int32_t, float, const MethodInfo*))Dictionary_2_make_pair_m1387845194_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::pick_key(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_key_m4273590068_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m4273590068(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, float, const MethodInfo*))Dictionary_2_pick_key_m4273590068_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::pick_value(TKey,TValue)
extern "C"  float Dictionary_2_pick_value_m1885696912_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m1885696912(__this /* static, unused */, ___key0, ___value1, method) ((  float (*) (Il2CppObject * /* static, unused */, int32_t, float, const MethodInfo*))Dictionary_2_pick_value_m1885696912_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2672572761_gshared (Dictionary_2_t4289182211 * __this, KeyValuePair_2U5BU5D_t212833192* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2672572761(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4289182211 *, KeyValuePair_2U5BU5D_t212833192*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2672572761_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::Resize()
extern "C"  void Dictionary_2_Resize_m4143197747_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m4143197747(__this, method) ((  void (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2_Resize_m4143197747_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m92025354_gshared (Dictionary_2_t4289182211 * __this, int32_t ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m92025354(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4289182211 *, int32_t, float, const MethodInfo*))Dictionary_2_Add_m92025354_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::Clear()
extern "C"  void Dictionary_2_Clear_m3218361040_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3218361040(__this, method) ((  void (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2_Clear_m3218361040_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m948288735_gshared (Dictionary_2_t4289182211 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m948288735(__this, ___key0, method) ((  bool (*) (Dictionary_2_t4289182211 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m948288735_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3333166458_gshared (Dictionary_2_t4289182211 * __this, float ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3333166458(__this, ___value0, method) ((  bool (*) (Dictionary_2_t4289182211 *, float, const MethodInfo*))Dictionary_2_ContainsValue_m3333166458_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1802530755_gshared (Dictionary_2_t4289182211 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1802530755(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t4289182211 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2_GetObjectData_m1802530755_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1235396225_gshared (Dictionary_2_t4289182211 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1235396225(__this, ___sender0, method) ((  void (*) (Dictionary_2_t4289182211 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1235396225_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m4042982966_gshared (Dictionary_2_t4289182211 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m4042982966(__this, ___key0, method) ((  bool (*) (Dictionary_2_t4289182211 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m4042982966_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m3763064019_gshared (Dictionary_2_t4289182211 * __this, int32_t ___key0, float* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m3763064019(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t4289182211 *, int32_t, float*, const MethodInfo*))Dictionary_2_TryGetValue_m3763064019_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::get_Keys()
extern "C"  KeyCollection_t1620974366 * Dictionary_2_get_Keys_m3126671824_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3126671824(__this, method) ((  KeyCollection_t1620974366 * (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2_get_Keys_m3126671824_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::get_Values()
extern "C"  ValueCollection_t2989787924 * Dictionary_2_get_Values_m1379586116_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1379586116(__this, method) ((  ValueCollection_t2989787924 * (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2_get_Values_m1379586116_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m3723448975_gshared (Dictionary_2_t4289182211 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3723448975(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t4289182211 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3723448975_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::ToTValue(System.Object)
extern "C"  float Dictionary_2_ToTValue_m198011051_gshared (Dictionary_2_t4289182211 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m198011051(__this, ___value0, method) ((  float (*) (Dictionary_2_t4289182211 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m198011051_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3192882201_gshared (Dictionary_2_t4289182211 * __this, KeyValuePair_2_t4187962917  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3192882201(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t4289182211 *, KeyValuePair_2_t4187962917 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3192882201_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::GetEnumerator()
extern "C"  Enumerator_t1311538307  Dictionary_2_GetEnumerator_m539548336_gshared (Dictionary_2_t4289182211 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m539548336(__this, method) ((  Enumerator_t1311538307  (*) (Dictionary_2_t4289182211 *, const MethodInfo*))Dictionary_2_GetEnumerator_m539548336_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Single>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t1751606614  Dictionary_2_U3CCopyToU3Em__0_m4184608807_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, float ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m4184608807(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t1751606614  (*) (Il2CppObject * /* static, unused */, int32_t, float, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m4184608807_gshared)(__this /* static, unused */, ___key0, ___value1, method)
