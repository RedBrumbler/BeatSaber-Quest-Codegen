// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.RenamedEventHandler
#include "System/IO/RenamedEventHandler.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IO.RenamedEventArgs
#include "System/IO/RenamedEventArgs.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.RenamedEventHandler..ctor
System::IO::RenamedEventHandler* System::IO::RenamedEventHandler::New_ctor(::CsObject* object, System::IntPtr method) {
  return (RenamedEventHandler*)THROW_UNLESS(il2cpp_utils::New("System.IO", "RenamedEventHandler", object, method));
}
// Autogenerated method: System.IO.RenamedEventHandler.Invoke
void System::IO::RenamedEventHandler::Invoke(::CsObject* sender, System::IO::RenamedEventArgs* e) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", sender, e));
}
// Autogenerated method: System.IO.RenamedEventHandler.BeginInvoke
System::IAsyncResult* System::IO::RenamedEventHandler::BeginInvoke(::CsObject* sender, System::IO::RenamedEventArgs* e, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", sender, e, callback, object));
}
// Autogenerated method: System.IO.RenamedEventHandler.EndInvoke
void System::IO::RenamedEventHandler::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
