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

// System.IO.FileInfo
struct FileInfo_t3233670074;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.IO.DirectoryInfo
struct DirectoryInfo_t89154617;
// System.IO.StreamWriter
struct StreamWriter_t2705123075;
// System.IO.FileStream
struct FileStream_t2141505868;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_IO_FileMode3233790127.h"
#include "mscorlib_System_IO_FileAccess1610034992.h"
#include "mscorlib_System_IO_FileShare783541953.h"

// System.Void System.IO.FileInfo::.ctor(System.String)
extern "C"  void FileInfo__ctor_m2163658659 (FileInfo_t3233670074 * __this, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void FileInfo__ctor_m2147459712 (FileInfo_t3233670074 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::InternalRefresh()
extern "C"  void FileInfo_InternalRefresh_m3736798651 (FileInfo_t3233670074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileInfo::get_Exists()
extern "C"  bool FileInfo_get_Exists_m54740940 (FileInfo_t3233670074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_Name()
extern "C"  String_t* FileInfo_get_Name_m3553897244 (FileInfo_t3233670074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.FileInfo::get_Length()
extern "C"  int64_t FileInfo_get_Length_m1498099825 (FileInfo_t3233670074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::get_DirectoryName()
extern "C"  String_t* FileInfo_get_DirectoryName_m2000766281 (FileInfo_t3233670074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.FileInfo::get_Directory()
extern "C"  DirectoryInfo_t89154617 * FileInfo_get_Directory_m37520064 (FileInfo_t3233670074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamWriter System.IO.FileInfo::CreateText()
extern "C"  StreamWriter_t2705123075 * FileInfo_CreateText_m2045785373 (FileInfo_t3233670074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StreamWriter System.IO.FileInfo::AppendText()
extern "C"  StreamWriter_t2705123075 * FileInfo_AppendText_m1825559739 (FileInfo_t3233670074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.FileInfo::Open(System.IO.FileMode,System.IO.FileAccess)
extern "C"  FileStream_t2141505868 * FileInfo_Open_m638641808 (FileInfo_t3233670074 * __this, int32_t ___mode0, int32_t ___access1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileStream System.IO.FileInfo::Open(System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C"  FileStream_t2141505868 * FileInfo_Open_m748101730 (FileInfo_t3233670074 * __this, int32_t ___mode0, int32_t ___access1, int32_t ___share2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileInfo::Delete()
extern "C"  void FileInfo_Delete_m6080912 (FileInfo_t3233670074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileInfo::ToString()
extern "C"  String_t* FileInfo_ToString_m2915622324 (FileInfo_t3233670074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
