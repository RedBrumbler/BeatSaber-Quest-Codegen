// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.SynchronizationContext
#include "System/Threading/SynchronizationContext.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.CompilerServices.AsyncVoidMethodBuilder.Create
System::Runtime::CompilerServices::AsyncVoidMethodBuilder System::Runtime::CompilerServices::AsyncVoidMethodBuilder::Create() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::CompilerServices::AsyncVoidMethodBuilder>("System.Runtime.CompilerServices", "AsyncVoidMethodBuilder", "Create"));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncVoidMethodBuilder.SetStateMachine
void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetStateMachine", stateMachine));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncVoidMethodBuilder.SetResult
void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetResult() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetResult"));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncVoidMethodBuilder.SetException
void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetException(System::Exception* exception) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetException", exception));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncVoidMethodBuilder.NotifySynchronizationContextOfCompletion
void System::Runtime::CompilerServices::AsyncVoidMethodBuilder::NotifySynchronizationContextOfCompletion() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "NotifySynchronizationContextOfCompletion"));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncVoidMethodBuilder.get_Task
System::Threading::Tasks::Task* System::Runtime::CompilerServices::AsyncVoidMethodBuilder::get_Task() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>(*this, "get_Task"));
}