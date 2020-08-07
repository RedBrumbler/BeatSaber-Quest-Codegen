// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.CancellationCallbackInfo
#include "System/Threading/CancellationCallbackInfo.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Threading.SynchronizationContext
#include "System/Threading/SynchronizationContext.hpp"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Including type: System.Threading.CancellationTokenSource
#include "System/Threading/CancellationTokenSource.hpp"
// Including type: System.Threading.ContextCallback
#include "System/Threading/ContextCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Threading.ContextCallback s_executionContextCallback
System::Threading::ContextCallback* System::Threading::CancellationCallbackInfo::_get_s_executionContextCallback() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::ContextCallback*>("System.Threading", "CancellationCallbackInfo", "s_executionContextCallback"));
}
// Autogenerated static field setter
// Set static field: static private System.Threading.ContextCallback s_executionContextCallback
void System::Threading::CancellationCallbackInfo::_set_s_executionContextCallback(System::Threading::ContextCallback* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "CancellationCallbackInfo", "s_executionContextCallback", value));
}
// Autogenerated method: System.Threading.CancellationCallbackInfo..ctor
System::Threading::CancellationCallbackInfo* System::Threading::CancellationCallbackInfo::New_ctor(System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* stateForCallback, System::Threading::SynchronizationContext* targetSyncContext, System::Threading::ExecutionContext* targetExecutionContext, System::Threading::CancellationTokenSource* cancellationTokenSource) {
  return (CancellationCallbackInfo*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "CancellationCallbackInfo", callback, stateForCallback, targetSyncContext, targetExecutionContext, cancellationTokenSource));
}
// Autogenerated method: System.Threading.CancellationCallbackInfo.ExecuteCallback
void System::Threading::CancellationCallbackInfo::ExecuteCallback() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ExecuteCallback"));
}
// Autogenerated method: System.Threading.CancellationCallbackInfo.ExecutionContextCallback
void System::Threading::CancellationCallbackInfo::ExecutionContextCallback(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "CancellationCallbackInfo", "ExecutionContextCallback", obj));
}