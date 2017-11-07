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

// UniWebViewEventProcessor
struct UniWebViewEventProcessor_t3203745953;
// System.Action
struct Action_t3771233898;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3771233898.h"

// System.Void UniWebViewEventProcessor::.ctor()
extern "C"  void UniWebViewEventProcessor__ctor_m826203598 (UniWebViewEventProcessor_t3203745953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewEventProcessor::.cctor()
extern "C"  void UniWebViewEventProcessor__cctor_m3655378847 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UniWebViewEventProcessor UniWebViewEventProcessor::get_instance()
extern "C"  UniWebViewEventProcessor_t3203745953 * UniWebViewEventProcessor_get_instance_m1553030296 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewEventProcessor::QueueEvent(System.Action)
extern "C"  void UniWebViewEventProcessor_QueueEvent_m3870999582 (UniWebViewEventProcessor_t3203745953 * __this, Action_t3771233898 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewEventProcessor::Update()
extern "C"  void UniWebViewEventProcessor_Update_m1569369855 (UniWebViewEventProcessor_t3203745953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UniWebViewEventProcessor::MoveQueuedEventsToExecuting()
extern "C"  void UniWebViewEventProcessor_MoveQueuedEventsToExecuting_m2891579846 (UniWebViewEventProcessor_t3203745953 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
