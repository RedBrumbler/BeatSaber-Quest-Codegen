// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore.hpp"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore_MoveNextRunner.hpp"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore/ContinuationWrapper
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore_ContinuationWrapper.hpp"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c__DisplayClass4_0
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore_--c__DisplayClass4_0.hpp"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore/<>c
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore_--c.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Threading.SynchronizationContext
#include "System/Threading/SynchronizationContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.CompilerServices.AsyncMethodBuilderCore.SetStateMachine
void System::Runtime::CompilerServices::AsyncMethodBuilderCore::SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetStateMachine", stateMachine));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncMethodBuilderCore.GetCompletionAction
System::Action* System::Runtime::CompilerServices::AsyncMethodBuilderCore::GetCompletionAction(System::Threading::Tasks::Task* taskForTracing, System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner*& runnerToInitialize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Action*>(*this, "GetCompletionAction", taskForTracing, runnerToInitialize));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncMethodBuilderCore.OutputAsyncCausalityEvents
System::Action* System::Runtime::CompilerServices::AsyncMethodBuilderCore::OutputAsyncCausalityEvents(System::Threading::Tasks::Task* innerTask, System::Action* continuation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Action*>(*this, "OutputAsyncCausalityEvents", innerTask, continuation));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncMethodBuilderCore.PostBoxInitialization
void System::Runtime::CompilerServices::AsyncMethodBuilderCore::PostBoxInitialization(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine, System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner* runner, System::Threading::Tasks::Task* builtTask) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "PostBoxInitialization", stateMachine, runner, builtTask));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncMethodBuilderCore.ThrowAsync
void System::Runtime::CompilerServices::AsyncMethodBuilderCore::ThrowAsync(System::Exception* exception, System::Threading::SynchronizationContext* targetContext) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.CompilerServices", "AsyncMethodBuilderCore", "ThrowAsync", exception, targetContext));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncMethodBuilderCore.CreateContinuationWrapper
System::Action* System::Runtime::CompilerServices::AsyncMethodBuilderCore::CreateContinuationWrapper(System::Action* continuation, System::Action* invokeAction, System::Threading::Tasks::Task* innerTask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Action*>("System.Runtime.CompilerServices", "AsyncMethodBuilderCore", "CreateContinuationWrapper", continuation, invokeAction, innerTask));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncMethodBuilderCore.TryGetContinuationTask
System::Threading::Tasks::Task* System::Runtime::CompilerServices::AsyncMethodBuilderCore::TryGetContinuationTask(System::Action* action) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task*>("System.Runtime.CompilerServices", "AsyncMethodBuilderCore", "TryGetContinuationTask", action));
}