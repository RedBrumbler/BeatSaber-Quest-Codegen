// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.ConstructionCall
#include "System/Runtime/Remoting/Messaging/ConstructionCall.hpp"
// Including type: System.Runtime.Remoting.Activation.IActivator
#include "System/Runtime/Remoting/Activation/IActivator.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Runtime.Remoting.Proxies.RemotingProxy
#include "System/Runtime/Remoting/Proxies/RemotingProxy.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall..ctor
System::Runtime::Remoting::Messaging::ConstructionCall* System::Runtime::Remoting::Messaging::ConstructionCall::New_ctor(System::Type* type) {
  return (ConstructionCall*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "ConstructionCall", type));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.get_IsContextOk
bool System::Runtime::Remoting::Messaging::ConstructionCall::get_IsContextOk() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsContextOk"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.set_IsContextOk
void System::Runtime::Remoting::Messaging::ConstructionCall::set_IsContextOk(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IsContextOk", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.SetActivationAttributes
void System::Runtime::Remoting::Messaging::ConstructionCall::SetActivationAttributes(::Array<::Il2CppObject*>* attributes) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetActivationAttributes", attributes));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.get_SourceProxy
System::Runtime::Remoting::Proxies::RemotingProxy* System::Runtime::Remoting::Messaging::ConstructionCall::get_SourceProxy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Proxies::RemotingProxy*>(this, "get_SourceProxy"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.set_SourceProxy
void System::Runtime::Remoting::Messaging::ConstructionCall::set_SourceProxy(System::Runtime::Remoting::Proxies::RemotingProxy* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_SourceProxy", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall..ctor
System::Runtime::Remoting::Messaging::ConstructionCall* System::Runtime::Remoting::Messaging::ConstructionCall::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (ConstructionCall*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "ConstructionCall", info, context));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.InitDictionary
void System::Runtime::Remoting::Messaging::ConstructionCall::InitDictionary() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitDictionary"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.get_ActivationType
System::Type* System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_ActivationType"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.get_ActivationTypeName
::Il2CppString* System::Runtime::Remoting::Messaging::ConstructionCall::get_ActivationTypeName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_ActivationTypeName"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.get_Activator
System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Messaging::ConstructionCall::get_Activator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Activation::IActivator*>(this, "get_Activator"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.set_Activator
void System::Runtime::Remoting::Messaging::ConstructionCall::set_Activator(System::Runtime::Remoting::Activation::IActivator* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Activator", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.get_CallSiteActivationAttributes
::Array<::Il2CppObject*>* System::Runtime::Remoting::Messaging::ConstructionCall::get_CallSiteActivationAttributes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>(this, "get_CallSiteActivationAttributes"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.get_ContextProperties
System::Collections::IList* System::Runtime::Remoting::Messaging::ConstructionCall::get_ContextProperties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IList*>(this, "get_ContextProperties"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.InitMethodProperty
void System::Runtime::Remoting::Messaging::ConstructionCall::InitMethodProperty(::Il2CppString* key, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitMethodProperty", key, value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.GetObjectData
void System::Runtime::Remoting::Messaging::ConstructionCall::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void System::Runtime::Remoting::Messaging::ConstructionCall::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  GetObjectData(info, context);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ConstructionCall.get_Properties
System::Collections::IDictionary* System::Runtime::Remoting::Messaging::ConstructionCall::get_Properties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionary*>(this, "get_Properties"));
}