// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IllogicalCallContext
#include "System/Runtime/Remoting/Messaging/IllogicalCallContext.hpp"
// Including type: System.Runtime.Remoting.Messaging.IllogicalCallContext/Reader
#include "System/Runtime/Remoting/Messaging/IllogicalCallContext_Reader.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.IllogicalCallContext.get_Datastore
System::Collections::Hashtable* System::Runtime::Remoting::Messaging::IllogicalCallContext::get_Datastore() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Hashtable*>(this, "get_Datastore"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.IllogicalCallContext.get_HostContext
::CsObject* System::Runtime::Remoting::Messaging::IllogicalCallContext::get_HostContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "get_HostContext"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.IllogicalCallContext.set_HostContext
void System::Runtime::Remoting::Messaging::IllogicalCallContext::set_HostContext(::CsObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_HostContext", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.IllogicalCallContext.get_HasUserData
bool System::Runtime::Remoting::Messaging::IllogicalCallContext::get_HasUserData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasUserData"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.IllogicalCallContext.FreeNamedDataSlot
void System::Runtime::Remoting::Messaging::IllogicalCallContext::FreeNamedDataSlot(::CsString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FreeNamedDataSlot", name));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.IllogicalCallContext.GetData
::CsObject* System::Runtime::Remoting::Messaging::IllogicalCallContext::GetData(::CsString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "GetData", name));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.IllogicalCallContext.SetData
void System::Runtime::Remoting::Messaging::IllogicalCallContext::SetData(::CsString* name, ::CsObject* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetData", name, data));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.IllogicalCallContext.CreateCopy
System::Runtime::Remoting::Messaging::IllogicalCallContext* System::Runtime::Remoting::Messaging::IllogicalCallContext::CreateCopy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IllogicalCallContext*>(this, "CreateCopy"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.IllogicalCallContext..ctor
System::Runtime::Remoting::Messaging::IllogicalCallContext* System::Runtime::Remoting::Messaging::IllogicalCallContext::New_ctor() {
  return (IllogicalCallContext*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "IllogicalCallContext"));
}
