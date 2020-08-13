// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileStreamAsyncResult
#include "System/IO/FileStreamAsyncResult.hpp"
// Including type: System.Threading.ManualResetEvent
#include "System/Threading/ManualResetEvent.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: System.Threading.WaitHandle
#include "System/Threading/WaitHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.FileStreamAsyncResult..ctor
System::IO::FileStreamAsyncResult* System::IO::FileStreamAsyncResult::New_ctor(System::AsyncCallback* cb, ::CsObject* state) {
  return (FileStreamAsyncResult*)THROW_UNLESS(il2cpp_utils::New("System.IO", "FileStreamAsyncResult", cb, state));
}
// Autogenerated method: System.IO.FileStreamAsyncResult.CBWrapper
void System::IO::FileStreamAsyncResult::CBWrapper(System::IAsyncResult* ares) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.IO", "FileStreamAsyncResult", "CBWrapper", ares));
}
// Autogenerated method: System.IO.FileStreamAsyncResult.get_AsyncState
::CsObject* System::IO::FileStreamAsyncResult::get_AsyncState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "get_AsyncState"));
}
// Autogenerated method: System.IO.FileStreamAsyncResult.get_AsyncWaitHandle
System::Threading::WaitHandle* System::IO::FileStreamAsyncResult::get_AsyncWaitHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::WaitHandle*>(this, "get_AsyncWaitHandle"));
}
System::Threading::WaitHandle* System::IO::FileStreamAsyncResult::System_IAsyncResult_get_AsyncWaitHandle() {
  return get_AsyncWaitHandle();
}
