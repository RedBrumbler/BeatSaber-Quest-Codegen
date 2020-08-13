// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.QueueUserWorkItemCallback
#include "System/Threading/QueueUserWorkItemCallback.hpp"
// Including type: System.Threading.WaitCallback
#include "System/Threading/WaitCallback.hpp"
// Including type: System.Threading.ExecutionContext
#include "System/Threading/ExecutionContext.hpp"
// Including type: System.Threading.ContextCallback
#include "System/Threading/ContextCallback.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
// Including type: System.Threading.ThreadAbortException
#include "System/Threading/ThreadAbortException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static System.Threading.ContextCallback ccb
System::Threading::ContextCallback* System::Threading::QueueUserWorkItemCallback::_get_ccb() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::ContextCallback*>("System.Threading", "QueueUserWorkItemCallback", "ccb"));
}
// Autogenerated static field setter
// Set static field: static System.Threading.ContextCallback ccb
void System::Threading::QueueUserWorkItemCallback::_set_ccb(System::Threading::ContextCallback* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Threading", "QueueUserWorkItemCallback", "ccb", value));
}
// Autogenerated method: System.Threading.QueueUserWorkItemCallback..cctor
void System::Threading::QueueUserWorkItemCallback::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "QueueUserWorkItemCallback", ".cctor"));
}
// Autogenerated method: System.Threading.QueueUserWorkItemCallback..ctor
System::Threading::QueueUserWorkItemCallback* System::Threading::QueueUserWorkItemCallback::New_ctor(System::Threading::WaitCallback* waitCallback, ::CsObject* stateObj, bool compressStack, System::Threading::StackCrawlMark& stackMark) {
  return (QueueUserWorkItemCallback*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "QueueUserWorkItemCallback", waitCallback, stateObj, compressStack, stackMark));
}
// Autogenerated method: System.Threading.QueueUserWorkItemCallback.WaitCallback_Context
void System::Threading::QueueUserWorkItemCallback::WaitCallback_Context(::CsObject* state) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Threading", "QueueUserWorkItemCallback", "WaitCallback_Context", state));
}
// Autogenerated method: System.Threading.QueueUserWorkItemCallback.System.Threading.IThreadPoolWorkItem.ExecuteWorkItem
void System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem"));
}
// Autogenerated method: System.Threading.QueueUserWorkItemCallback.System.Threading.IThreadPoolWorkItem.MarkAborted
void System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Threading.IThreadPoolWorkItem.MarkAborted", tae));
}
