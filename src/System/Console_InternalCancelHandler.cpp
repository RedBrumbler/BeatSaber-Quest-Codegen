// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Console/InternalCancelHandler
#include "System/Console_InternalCancelHandler.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Console/InternalCancelHandler..ctor
System::Console::InternalCancelHandler* System::Console::InternalCancelHandler::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (Console::InternalCancelHandler*)THROW_UNLESS(il2cpp_utils::New("System", "Console/InternalCancelHandler", object, method));
}
// Autogenerated method: System.Console/InternalCancelHandler.Invoke
void System::Console::InternalCancelHandler::Invoke() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke"));
}
// Autogenerated method: System.Console/InternalCancelHandler.BeginInvoke
System::IAsyncResult* System::Console::InternalCancelHandler::BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: System.Console/InternalCancelHandler.EndInvoke
void System::Console::InternalCancelHandler::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}