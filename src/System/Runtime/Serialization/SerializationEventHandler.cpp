// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.SerializationEventHandler
#include "System/Runtime/Serialization/SerializationEventHandler.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.SerializationEventHandler..ctor
System::Runtime::Serialization::SerializationEventHandler* System::Runtime::Serialization::SerializationEventHandler::New_ctor(::CsObject* object, System::IntPtr method) {
  return (SerializationEventHandler*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization", "SerializationEventHandler", object, method));
}
// Autogenerated method: System.Runtime.Serialization.SerializationEventHandler.Invoke
void System::Runtime::Serialization::SerializationEventHandler::Invoke(System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", context));
}
// Autogenerated method: System.Runtime.Serialization.SerializationEventHandler.BeginInvoke
System::IAsyncResult* System::Runtime::Serialization::SerializationEventHandler::BeginInvoke(System::Runtime::Serialization::StreamingContext context, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", context, callback, object));
}
// Autogenerated method: System.Runtime.Serialization.SerializationEventHandler.EndInvoke
void System::Runtime::Serialization::SerializationEventHandler::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}
