// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.AsyncCallback..ctor
System::AsyncCallback* System::AsyncCallback::New_ctor(::CsObject* object, System::IntPtr method) {
  return (AsyncCallback*)THROW_UNLESS(il2cpp_utils::New("System", "AsyncCallback", object, method));
}
// Autogenerated method: System.AsyncCallback.Invoke
void System::AsyncCallback::Invoke(System::IAsyncResult* ar) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", ar));
}
// Autogenerated method: System.AsyncCallback.BeginInvoke
System::IAsyncResult* System::AsyncCallback::BeginInvoke(System::IAsyncResult* ar, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", ar, callback, object));
}
// Autogenerated method: System.AsyncCallback.EndInvoke
void System::AsyncCallback::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
