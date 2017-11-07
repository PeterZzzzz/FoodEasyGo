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

// JSONObject
struct JSONObject_t1752376903;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;
// System.Collections.Generic.Dictionary`2<System.String,JSONObject>
struct Dictionary_2_t2572795273;
// JSONObject/AddJSONContents
struct AddJSONContents_t1239414619;
// JSONObject[]
struct JSONObjectU5BU5D_t1578151102;
// System.String
struct String_t;
// JSONObject/FieldNotFound
struct FieldNotFound_t2426242465;
// JSONObject/GetFieldResponse
struct GetFieldResponse_t2312868493;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Collections.IEnumerable
struct IEnumerable_t3464557803;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3308144514;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// UnityEngine.WWWForm
struct WWWForm_t461342257;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_JSONObject_Type997917218.h"
#include "AssemblyU2DCSharp_JSONObject_AddJSONContents1239414619.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_JSONObject1752376903.h"
#include "AssemblyU2DCSharp_JSONObject_FieldNotFound2426242465.h"
#include "AssemblyU2DCSharp_JSONObject_GetFieldResponse2312868493.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void JSONObject::.ctor(JSONObject/Type)
extern "C"  void JSONObject__ctor_m196212956 (JSONObject_t1752376903 * __this, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Boolean)
extern "C"  void JSONObject__ctor_m867327147 (JSONObject_t1752376903 * __this, bool ___b0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Single)
extern "C"  void JSONObject__ctor_m2334893047 (JSONObject_t1752376903 * __this, float ___f0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Int32)
extern "C"  void JSONObject__ctor_m625056133 (JSONObject_t1752376903 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Int64)
extern "C"  void JSONObject__ctor_m625059078 (JSONObject_t1752376903 * __this, int64_t ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  void JSONObject__ctor_m3806100325 (JSONObject_t1752376903 * __this, Dictionary_2_t827649927 * ___dic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.Collections.Generic.Dictionary`2<System.String,JSONObject>)
extern "C"  void JSONObject__ctor_m665743720 (JSONObject_t1752376903 * __this, Dictionary_2_t2572795273 * ___dic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject/AddJSONContents)
extern "C"  void JSONObject__ctor_m1221181049 (JSONObject_t1752376903 * __this, AddJSONContents_t1239414619 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(JSONObject[])
extern "C"  void JSONObject__ctor_m3419183851 (JSONObject_t1752376903 * __this, JSONObjectU5BU5D_t1578151102* ___objs0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor()
extern "C"  void JSONObject__ctor_m2883686964 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.ctor(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  void JSONObject__ctor_m4073880297 (JSONObject_t1752376903 * __this, String_t* ___str0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::.cctor()
extern "C"  void JSONObject__cctor_m3012853753 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_isContainer()
extern "C"  bool JSONObject_get_isContainer_m3265258380 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 JSONObject::get_Count()
extern "C"  int32_t JSONObject_get_Count_m2181271146 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single JSONObject::get_f()
extern "C"  float JSONObject_get_f_m3938007459 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_nullJO()
extern "C"  JSONObject_t1752376903 * JSONObject_get_nullJO_m744661531 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_obj()
extern "C"  JSONObject_t1752376903 * JSONObject_get_obj_m3039048682 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_arr()
extern "C"  JSONObject_t1752376903 * JSONObject_get_arr_m3026603732 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::StringObject(System.String)
extern "C"  JSONObject_t1752376903 * JSONObject_StringObject_m1278083052 (Il2CppObject * __this /* static, unused */, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Absorb(JSONObject)
extern "C"  void JSONObject_Absorb_m3127658582 (JSONObject_t1752376903 * __this, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create()
extern "C"  JSONObject_t1752376903 * JSONObject_Create_m4162996706 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/Type)
extern "C"  JSONObject_t1752376903 * JSONObject_Create_m1311846254 (Il2CppObject * __this /* static, unused */, int32_t ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Boolean)
extern "C"  JSONObject_t1752376903 * JSONObject_Create_m4228451289 (Il2CppObject * __this /* static, unused */, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Single)
extern "C"  JSONObject_t1752376903 * JSONObject_Create_m919295753 (Il2CppObject * __this /* static, unused */, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Int32)
extern "C"  JSONObject_t1752376903 * JSONObject_Create_m3627433011 (Il2CppObject * __this /* static, unused */, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Int64)
extern "C"  JSONObject_t1752376903 * JSONObject_Create_m3627435956 (Il2CppObject * __this /* static, unused */, int64_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateStringObject(System.String)
extern "C"  JSONObject_t1752376903 * JSONObject_CreateStringObject_m3447038224 (Il2CppObject * __this /* static, unused */, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::CreateBakedObject(System.String)
extern "C"  JSONObject_t1752376903 * JSONObject_CreateBakedObject_m2786003864 (Il2CppObject * __this /* static, unused */, String_t* ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  JSONObject_t1752376903 * JSONObject_Create_m3693105303 (Il2CppObject * __this /* static, unused */, String_t* ___val0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(JSONObject/AddJSONContents)
extern "C"  JSONObject_t1752376903 * JSONObject_Create_m2904365223 (Il2CppObject * __this /* static, unused */, AddJSONContents_t1239414619 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Create(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C"  JSONObject_t1752376903 * JSONObject_Create_m1646345235 (Il2CppObject * __this /* static, unused */, Dictionary_2_t827649927 * ___dic0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Parse(System.String,System.Int32,System.Boolean,System.Boolean)
extern "C"  void JSONObject_Parse_m3981292282 (JSONObject_t1752376903 * __this, String_t* ___str0, int32_t ___maxDepth1, bool ___storeExcessLevels2, bool ___strict3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNumber()
extern "C"  bool JSONObject_get_IsNumber_m253170720 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsNull()
extern "C"  bool JSONObject_get_IsNull_m1971188830 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsString()
extern "C"  bool JSONObject_get_IsString_m3934619368 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsBool()
extern "C"  bool JSONObject_get_IsBool_m1622187265 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsArray()
extern "C"  bool JSONObject_get_IsArray_m2244069444 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::get_IsObject()
extern "C"  bool JSONObject_get_IsObject_m2230105750 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Boolean)
extern "C"  void JSONObject_Add_m1644854314 (JSONObject_t1752376903 * __this, bool ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Single)
extern "C"  void JSONObject_Add_m1805785240 (JSONObject_t1752376903 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.Int32)
extern "C"  void JSONObject_Add_m1439272132 (JSONObject_t1752376903 * __this, int32_t ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(System.String)
extern "C"  void JSONObject_Add_m2124461551 (JSONObject_t1752376903 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject/AddJSONContents)
extern "C"  void JSONObject_Add_m3823867768 (JSONObject_t1752376903 * __this, AddJSONContents_t1239414619 * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Add(JSONObject)
extern "C"  void JSONObject_Add_m1349655052 (JSONObject_t1752376903 * __this, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Boolean)
extern "C"  void JSONObject_AddField_m396898404 (JSONObject_t1752376903 * __this, String_t* ___name0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Single)
extern "C"  void JSONObject_AddField_m2042623262 (JSONObject_t1752376903 * __this, String_t* ___name0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Int32)
extern "C"  void JSONObject_AddField_m3386574718 (JSONObject_t1752376903 * __this, String_t* ___name0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.Int64)
extern "C"  void JSONObject_AddField_m3386577663 (JSONObject_t1752376903 * __this, String_t* ___name0, int64_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject/AddJSONContents)
extern "C"  void JSONObject_AddField_m1078641842 (JSONObject_t1752376903 * __this, String_t* ___name0, AddJSONContents_t1239414619 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,System.String)
extern "C"  void JSONObject_AddField_m2361299573 (JSONObject_t1752376903 * __this, String_t* ___name0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::AddField(System.String,JSONObject)
extern "C"  void JSONObject_AddField_m574028614 (JSONObject_t1752376903 * __this, String_t* ___name0, JSONObject_t1752376903 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.String)
extern "C"  void JSONObject_SetField_m3495339510 (JSONObject_t1752376903 * __this, String_t* ___name0, String_t* ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Boolean)
extern "C"  void JSONObject_SetField_m1192398083 (JSONObject_t1752376903 * __this, String_t* ___name0, bool ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Single)
extern "C"  void JSONObject_SetField_m3176663199 (JSONObject_t1752376903 * __this, String_t* ___name0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,System.Int32)
extern "C"  void JSONObject_SetField_m790757341 (JSONObject_t1752376903 * __this, String_t* ___name0, int32_t ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::SetField(System.String,JSONObject)
extern "C"  void JSONObject_SetField_m1867415397 (JSONObject_t1752376903 * __this, String_t* ___name0, JSONObject_t1752376903 * ___obj1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::RemoveField(System.String)
extern "C"  void JSONObject_RemoveField_m279507994 (JSONObject_t1752376903 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,System.Boolean)
extern "C"  bool JSONObject_GetField_m1040140724 (JSONObject_t1752376903 * __this, bool* ___field0, String_t* ___name1, bool ___fallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Boolean&,System.String,JSONObject/FieldNotFound)
extern "C"  bool JSONObject_GetField_m2797929852 (JSONObject_t1752376903 * __this, bool* ___field0, String_t* ___name1, FieldNotFound_t2426242465 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Single&,System.String,System.Single)
extern "C"  bool JSONObject_GetField_m3051258666 (JSONObject_t1752376903 * __this, float* ___field0, String_t* ___name1, float ___fallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Single&,System.String,JSONObject/FieldNotFound)
extern "C"  bool JSONObject_GetField_m4017210016 (JSONObject_t1752376903 * __this, float* ___field0, String_t* ___name1, FieldNotFound_t2426242465 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int32&,System.String,System.Int32)
extern "C"  bool JSONObject_GetField_m2578705320 (JSONObject_t1752376903 * __this, int32_t* ___field0, String_t* ___name1, int32_t ___fallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int32&,System.String,JSONObject/FieldNotFound)
extern "C"  bool JSONObject_GetField_m56837462 (JSONObject_t1752376903 * __this, int32_t* ___field0, String_t* ___name1, FieldNotFound_t2426242465 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int64&,System.String,System.Int64)
extern "C"  bool JSONObject_GetField_m3653740330 (JSONObject_t1752376903 * __this, int64_t* ___field0, String_t* ___name1, int64_t ___fallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.Int64&,System.String,JSONObject/FieldNotFound)
extern "C"  bool JSONObject_GetField_m3253861335 (JSONObject_t1752376903 * __this, int64_t* ___field0, String_t* ___name1, FieldNotFound_t2426242465 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,System.UInt32)
extern "C"  bool JSONObject_GetField_m3713128842 (JSONObject_t1752376903 * __this, uint32_t* ___field0, String_t* ___name1, uint32_t ___fallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.UInt32&,System.String,JSONObject/FieldNotFound)
extern "C"  bool JSONObject_GetField_m213546735 (JSONObject_t1752376903 * __this, uint32_t* ___field0, String_t* ___name1, FieldNotFound_t2426242465 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.String&,System.String,System.String)
extern "C"  bool JSONObject_GetField_m1586361994 (JSONObject_t1752376903 * __this, String_t** ___field0, String_t* ___name1, String_t* ___fallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::GetField(System.String&,System.String,JSONObject/FieldNotFound)
extern "C"  bool JSONObject_GetField_m2973629687 (JSONObject_t1752376903 * __this, String_t** ___field0, String_t* ___name1, FieldNotFound_t2426242465 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::GetField(System.String,JSONObject/GetFieldResponse,JSONObject/FieldNotFound)
extern "C"  void JSONObject_GetField_m2967078072 (JSONObject_t1752376903 * __this, String_t* ___name0, GetFieldResponse_t2312868493 * ___response1, FieldNotFound_t2426242465 * ___fail2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::GetField(System.String)
extern "C"  JSONObject_t1752376903 * JSONObject_GetField_m2116260440 (JSONObject_t1752376903 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasFields(System.String[])
extern "C"  bool JSONObject_HasFields_m57373359 (JSONObject_t1752376903 * __this, StringU5BU5D_t4054002952* ___names0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::HasField(System.String)
extern "C"  bool JSONObject_HasField_m1466444350 (JSONObject_t1752376903 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Clear()
extern "C"  void JSONObject_Clear_m289820255 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::Copy()
extern "C"  JSONObject_t1752376903 * JSONObject_Copy_m4158329691 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Merge(JSONObject)
extern "C"  void JSONObject_Merge_m683772643 (JSONObject_t1752376903 * __this, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::MergeRecur(JSONObject,JSONObject)
extern "C"  void JSONObject_MergeRecur_m1383547553 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___left0, JSONObject_t1752376903 * ___right1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Bake()
extern "C"  void JSONObject_Bake_m3018782761 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::BakeAsync()
extern "C"  Il2CppObject * JSONObject_BakeAsync_m1036293873 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::Print(System.Boolean)
extern "C"  String_t* JSONObject_Print_m93291571 (JSONObject_t1752376903 * __this, bool ___pretty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> JSONObject::PrintAsync(System.Boolean)
extern "C"  Il2CppObject* JSONObject_PrintAsync_m4207404562 (JSONObject_t1752376903 * __this, bool ___pretty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable JSONObject::StringifyAsync(System.Int32,System.Text.StringBuilder,System.Boolean)
extern "C"  Il2CppObject * JSONObject_StringifyAsync_m3909536131 (JSONObject_t1752376903 * __this, int32_t ___depth0, StringBuilder_t243639308 * ___builder1, bool ___pretty2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::Stringify(System.Int32,System.Text.StringBuilder,System.Boolean)
extern "C"  void JSONObject_Stringify_m2669947243 (JSONObject_t1752376903 * __this, int32_t ___depth0, StringBuilder_t243639308 * ___builder1, bool ___pretty2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.Int32)
extern "C"  JSONObject_t1752376903 * JSONObject_get_Item_m528566355 (JSONObject_t1752376903 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.Int32,JSONObject)
extern "C"  void JSONObject_set_Item_m2540949262 (JSONObject_t1752376903 * __this, int32_t ___index0, JSONObject_t1752376903 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// JSONObject JSONObject::get_Item(System.String)
extern "C"  JSONObject_t1752376903 * JSONObject_get_Item_m3957353536 (JSONObject_t1752376903 * __this, String_t* ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void JSONObject::set_Item(System.String,JSONObject)
extern "C"  void JSONObject_set_Item_m3795707005 (JSONObject_t1752376903 * __this, String_t* ___index0, JSONObject_t1752376903 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString()
extern "C"  String_t* JSONObject_ToString_m4285807199 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String JSONObject::ToString(System.Boolean)
extern "C"  String_t* JSONObject_ToString_m4116307350 (JSONObject_t1752376903 * __this, bool ___pretty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> JSONObject::ToDictionary()
extern "C"  Dictionary_2_t827649927 * JSONObject_ToDictionary_m660917039 (JSONObject_t1752376903 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWWForm JSONObject::op_Implicit(JSONObject)
extern "C"  WWWForm_t461342257 * JSONObject_op_Implicit_m1266288287 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean JSONObject::op_Implicit(JSONObject)
extern "C"  bool JSONObject_op_Implicit_m2520452346 (Il2CppObject * __this /* static, unused */, JSONObject_t1752376903 * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
