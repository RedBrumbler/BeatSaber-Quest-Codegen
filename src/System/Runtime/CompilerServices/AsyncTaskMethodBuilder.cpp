// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> s_cachedCompleted
System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>* System::Runtime::CompilerServices::AsyncTaskMethodBuilder::_get_s_cachedCompleted() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>*>("System.Runtime.CompilerServices", "AsyncTaskMethodBuilder", "s_cachedCompleted"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> s_cachedCompleted
void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::_set_s_cachedCompleted(System::Threading::Tasks::Task_1<System::Threading::Tasks::VoidTaskResult>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.CompilerServices", "AsyncTaskMethodBuilder", "s_cachedCompleted", value));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncTaskMethodBuilder.Create
System::Runtime::CompilerServices::AsyncTaskMethodBuilder System::Runtime::CompilerServices::AsyncTaskMethodBuilder::Create() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::CompilerServices::AsyncTaskMethodBuilder>("System.Runtime.CompilerServices", "AsyncTaskMethodBuilder", "Create"));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncTaskMethodBuilder.SetStateMachine
void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetStateMachine", stateMachine));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncTaskMethodBuilder.get_Task
System::Threading::Tasks::Task* System::Runtime::CompilerServices::AsyncTaskMethodBuilder::get_Task() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(*this, "get_Task"));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncTaskMethodBuilder.SetResult
void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetResult() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetResult"));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncTaskMethodBuilder.SetException
void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::SetException(System::Exception* exception) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetException", exception));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncTaskMethodBuilder..cctor
void System::Runtime::CompilerServices::AsyncTaskMethodBuilder::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.CompilerServices", "AsyncTaskMethodBuilder", ".cctor"));
}
