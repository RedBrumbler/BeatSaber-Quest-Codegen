// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.AssemblyLoadEventHandler
#include "System/AssemblyLoadEventHandler.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.AssemblyLoadEventArgs
#include "System/AssemblyLoadEventArgs.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.AssemblyLoadEventHandler..ctor
System::AssemblyLoadEventHandler* System::AssemblyLoadEventHandler::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (AssemblyLoadEventHandler*)THROW_UNLESS(il2cpp_utils::New("System", "AssemblyLoadEventHandler", object, method));
}
// Autogenerated method: System.AssemblyLoadEventHandler.Invoke
void System::AssemblyLoadEventHandler::Invoke(::Il2CppObject* sender, System::AssemblyLoadEventArgs* args) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", sender, args));
}
// Autogenerated method: System.AssemblyLoadEventHandler.BeginInvoke
System::IAsyncResult* System::AssemblyLoadEventHandler::BeginInvoke(::Il2CppObject* sender, System::AssemblyLoadEventArgs* args, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", sender, args, callback, object));
}
// Autogenerated method: System.AssemblyLoadEventHandler.EndInvoke
void System::AssemblyLoadEventHandler::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}