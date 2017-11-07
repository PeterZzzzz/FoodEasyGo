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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void LDFWCommonLogController::Log(System.String,System.Int32)
extern "C"  void LDFWCommonLogController_Log_m502636118 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___logLevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFWCommonLogController::Warning(System.String,System.Int32)
extern "C"  void LDFWCommonLogController_Warning_m1206040750 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___warningLevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LDFWCommonLogController::Error(System.String,System.Int32)
extern "C"  void LDFWCommonLogController_Error_m2199592986 (Il2CppObject * __this /* static, unused */, String_t* ___message0, int32_t ___errorLevel1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
