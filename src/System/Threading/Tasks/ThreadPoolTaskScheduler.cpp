// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.ThreadPoolTaskScheduler
#include "System/Threading/Tasks/ThreadPoolTaskScheduler.hpp"
// Including type: System.Threading.ParameterizedThreadStart
#include "System/Threading/ParameterizedThreadStart.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Threading.ParameterizedThreadStart s_longRunningThreadWork
System::Threading::ParameterizedThreadStart* System::Threading::Tasks::ThreadPoolTaskScheduler::_get_s_longRunningThreadWork() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::ParameterizedThreadStart*>("System.Threading.Tasks", "ThreadPoolTaskScheduler", "s_longRunningThreadWork"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Threading.ParameterizedThreadStart s_longRunningThreadWork
void System::Threading::Tasks::ThreadPoolTaskScheduler::_set_s_longRunningThreadWork(System::Threading::ParameterizedThreadStart* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading.Tasks", "ThreadPoolTaskScheduler", "s_longRunningThreadWork", value));
}
// Autogenerated method: System.Threading.Tasks.ThreadPoolTaskScheduler.LongRunningThreadWork
void System::Threading::Tasks::ThreadPoolTaskScheduler::LongRunningThreadWork(::CsObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading.Tasks", "ThreadPoolTaskScheduler", "LongRunningThreadWork", obj));
}
// Autogenerated method: System.Threading.Tasks.ThreadPoolTaskScheduler..ctor
System::Threading::Tasks::ThreadPoolTaskScheduler* System::Threading::Tasks::ThreadPoolTaskScheduler::New_ctor() {
  return (ThreadPoolTaskScheduler*)THROW_UNLESS(il2cpp_utils::New("System.Threading.Tasks", "ThreadPoolTaskScheduler"));
}
// Autogenerated method: System.Threading.Tasks.ThreadPoolTaskScheduler.QueueTask
void System::Threading::Tasks::ThreadPoolTaskScheduler::QueueTask(System::Threading::Tasks::Task* task) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "QueueTask", task));
}
// Autogenerated method: System.Threading.Tasks.ThreadPoolTaskScheduler.TryExecuteTaskInline
bool System::Threading::Tasks::ThreadPoolTaskScheduler::TryExecuteTaskInline(System::Threading::Tasks::Task* task, bool taskWasPreviouslyQueued) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryExecuteTaskInline", task, taskWasPreviouslyQueued));
}
// Autogenerated method: System.Threading.Tasks.ThreadPoolTaskScheduler.TryDequeue
bool System::Threading::Tasks::ThreadPoolTaskScheduler::TryDequeue(System::Threading::Tasks::Task* task) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryDequeue", task));
}
// Autogenerated method: System.Threading.Tasks.ThreadPoolTaskScheduler.NotifyWorkItemProgress
void System::Threading::Tasks::ThreadPoolTaskScheduler::NotifyWorkItemProgress() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NotifyWorkItemProgress"));
}
// Autogenerated method: System.Threading.Tasks.ThreadPoolTaskScheduler.get_RequiresAtomicStartTransition
bool System::Threading::Tasks::ThreadPoolTaskScheduler::get_RequiresAtomicStartTransition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_RequiresAtomicStartTransition"));
}
// Autogenerated method: System.Threading.Tasks.ThreadPoolTaskScheduler..cctor
void System::Threading::Tasks::ThreadPoolTaskScheduler::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading.Tasks", "ThreadPoolTaskScheduler", ".cctor"));
}
