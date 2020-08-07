// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.AsyncCausalityTracer
#include "System/Threading/Tasks/AsyncCausalityTracer.hpp"
// Including type: System.Threading.Tasks.CausalityTraceLevel
#include "System/Threading/Tasks/CausalityTraceLevel.hpp"
// Including type: System.Threading.Tasks.AsyncCausalityStatus
#include "System/Threading/Tasks/AsyncCausalityStatus.hpp"
// Including type: System.Threading.Tasks.CausalityRelation
#include "System/Threading/Tasks/CausalityRelation.hpp"
// Including type: System.Threading.Tasks.CausalitySynchronousWork
#include "System/Threading/Tasks/CausalitySynchronousWork.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.Tasks.AsyncCausalityTracer.get_LoggingOn
bool System::Threading::Tasks::AsyncCausalityTracer::get_LoggingOn() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Threading.Tasks", "AsyncCausalityTracer", "get_LoggingOn"));
}
// Autogenerated method: System.Threading.Tasks.AsyncCausalityTracer.TraceOperationCreation
void System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCreation(System::Threading::Tasks::CausalityTraceLevel traceLevel, int taskId, ::Il2CppString* operationName, uint64_t relatedContext) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading.Tasks", "AsyncCausalityTracer", "TraceOperationCreation", traceLevel, taskId, operationName, relatedContext));
}
// Autogenerated method: System.Threading.Tasks.AsyncCausalityTracer.TraceOperationCompletion
void System::Threading::Tasks::AsyncCausalityTracer::TraceOperationCompletion(System::Threading::Tasks::CausalityTraceLevel traceLevel, int taskId, System::Threading::Tasks::AsyncCausalityStatus status) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading.Tasks", "AsyncCausalityTracer", "TraceOperationCompletion", traceLevel, taskId, status));
}
// Autogenerated method: System.Threading.Tasks.AsyncCausalityTracer.TraceOperationRelation
void System::Threading::Tasks::AsyncCausalityTracer::TraceOperationRelation(System::Threading::Tasks::CausalityTraceLevel traceLevel, int taskId, System::Threading::Tasks::CausalityRelation relation) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading.Tasks", "AsyncCausalityTracer", "TraceOperationRelation", traceLevel, taskId, relation));
}
// Autogenerated method: System.Threading.Tasks.AsyncCausalityTracer.TraceSynchronousWorkStart
void System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkStart(System::Threading::Tasks::CausalityTraceLevel traceLevel, int taskId, System::Threading::Tasks::CausalitySynchronousWork work) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading.Tasks", "AsyncCausalityTracer", "TraceSynchronousWorkStart", traceLevel, taskId, work));
}
// Autogenerated method: System.Threading.Tasks.AsyncCausalityTracer.TraceSynchronousWorkCompletion
void System::Threading::Tasks::AsyncCausalityTracer::TraceSynchronousWorkCompletion(System::Threading::Tasks::CausalityTraceLevel traceLevel, System::Threading::Tasks::CausalitySynchronousWork work) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading.Tasks", "AsyncCausalityTracer", "TraceSynchronousWorkCompletion", traceLevel, work));
}