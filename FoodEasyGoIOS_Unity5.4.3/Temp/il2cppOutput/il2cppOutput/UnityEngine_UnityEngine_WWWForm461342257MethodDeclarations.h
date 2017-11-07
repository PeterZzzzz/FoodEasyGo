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

// UnityEngine.WWWForm
struct WWWForm_t461342257;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t2012439129;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t827649927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Text_Encoding2012439129.h"

// System.Void UnityEngine.WWWForm::.ctor()
extern "C"  void WWWForm__ctor_m1417930174 (WWWForm_t461342257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C"  void WWWForm_AddField_m2890504319 (WWWForm_t461342257 * __this, String_t* ___fieldName0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C"  void WWWForm_AddField_m3426667506 (WWWForm_t461342257 * __this, String_t* ___fieldName0, String_t* ___value1, Encoding_t2012439129 * ___e2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C"  void WWWForm_AddField_m355604532 (WWWForm_t461342257 * __this, String_t* ___fieldName0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[])
extern "C"  void WWWForm_AddBinaryData_m788770781 (WWWForm_t461342257 * __this, String_t* ___fieldName0, ByteU5BU5D_t4260760469* ___contents1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
extern "C"  void WWWForm_AddBinaryData_m1424533973 (WWWForm_t461342257 * __this, String_t* ___fieldName0, ByteU5BU5D_t4260760469* ___contents1, String_t* ___fileName2, String_t* ___mimeType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C"  Dictionary_2_t827649927 * WWWForm_get_headers_m370408569 (WWWForm_t461342257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C"  ByteU5BU5D_t4260760469* WWWForm_get_data_m2893811951 (WWWForm_t461342257 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
