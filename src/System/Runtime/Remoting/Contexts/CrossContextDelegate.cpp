// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Contexts.CrossContextDelegate
#include "System/Runtime/Remoting/Contexts/CrossContextDelegate.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Contexts.CrossContextDelegate..ctor
System::Runtime::Remoting::Contexts::CrossContextDelegate* System::Runtime::Remoting::Contexts::CrossContextDelegate::New_ctor(::CsObject* object, System::IntPtr method) {
  return (CrossContextDelegate*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Contexts", "CrossContextDelegate", object, method));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.CrossContextDelegate.Invoke
void System::Runtime::Remoting::Contexts::CrossContextDelegate::Invoke() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.CrossContextDelegate.BeginInvoke
System::IAsyncResult* System::Runtime::Remoting::Contexts::CrossContextDelegate::BeginInvoke(System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", callback, object));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.CrossContextDelegate.EndInvoke
void System::Runtime::Remoting::Contexts::CrossContextDelegate::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
