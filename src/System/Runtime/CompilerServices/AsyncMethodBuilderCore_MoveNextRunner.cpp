// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore_MoveNextRunner.hpp"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Threading.ContextCallback
#include "System/Threading/ContextCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Threading.ContextCallback s_invokeMoveNext
System::Threading::ContextCallback* System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::_get_s_invokeMoveNext() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::ContextCallback*>("System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner", "s_invokeMoveNext"));
}
// Autogenerated static field setter
// Set static field: static private System.Threading.ContextCallback s_invokeMoveNext
void System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::_set_s_invokeMoveNext(System::Threading::ContextCallback* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner", "s_invokeMoveNext", value));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner..ctor
System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner* System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::New_ctor(System::Threading::ExecutionContext* context, System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  return (AsyncMethodBuilderCore::MoveNextRunner*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner", context, stateMachine));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner.Run
void System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::Run() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Run"));
}
// Autogenerated method: System.Runtime.CompilerServices.AsyncMethodBuilderCore/MoveNextRunner.InvokeMoveNext
void System::Runtime::CompilerServices::AsyncMethodBuilderCore::MoveNextRunner::InvokeMoveNext(::Il2CppObject* stateMachine) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.CompilerServices", "AsyncMethodBuilderCore/MoveNextRunner", "InvokeMoveNext", stateMachine));
}