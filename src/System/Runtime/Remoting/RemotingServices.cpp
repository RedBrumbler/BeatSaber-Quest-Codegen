// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.RemotingServices
#include "System/Runtime/Remoting/RemotingServices.hpp"
// Including type: System.Runtime.Remoting.RemotingServices/CACD
#include "System/Runtime/Remoting/RemotingServices_CACD.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
#include "System/Runtime/Serialization/Formatters/Binary/BinaryFormatter.hpp"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodReturnMessage
#include "System/Runtime/Remoting/Messaging/IMethodReturnMessage.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
// Including type: System.Runtime.Remoting.ObjRef
#include "System/Runtime/Remoting/ObjRef.hpp"
// Including type: System.Runtime.Remoting.Proxies.RealProxy
#include "System/Runtime/Remoting/Proxies/RealProxy.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodMessage
#include "System/Runtime/Remoting/Messaging/IMethodMessage.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Runtime.Remoting.ActivatedClientTypeEntry
#include "System/Runtime/Remoting/ActivatedClientTypeEntry.hpp"
// Including type: System.Runtime.Remoting.WellKnownClientTypeEntry
#include "System/Runtime/Remoting/WellKnownClientTypeEntry.hpp"
// Including type: System.Runtime.Remoting.Identity
#include "System/Runtime/Remoting/Identity.hpp"
// Including type: System.Runtime.Remoting.ClientIdentity
#include "System/Runtime/Remoting/ClientIdentity.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
// Including type: System.Runtime.Remoting.ClientActivatedIdentity
#include "System/Runtime/Remoting/ClientActivatedIdentity.hpp"
// Including type: System.Runtime.Remoting.ServerIdentity
#include "System/Runtime/Remoting/ServerIdentity.hpp"
// Including type: System.Runtime.Remoting.WellKnownObjectMode
#include "System/Runtime/Remoting/WellKnownObjectMode.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
// Including type: System.Reflection.ParameterInfo
#include "System/Reflection/ParameterInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Hashtable uri_hash
System::Collections::Hashtable* System::Runtime::Remoting::RemotingServices::_get_uri_hash() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Hashtable*>("System.Runtime.Remoting", "RemotingServices", "uri_hash"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Hashtable uri_hash
void System::Runtime::Remoting::RemotingServices::_set_uri_hash(System::Collections::Hashtable* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting", "RemotingServices", "uri_hash", value));
}
// Autogenerated static field getter
// Get static field: static private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _serializationFormatter
System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* System::Runtime::Remoting::RemotingServices::_get__serializationFormatter() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*>("System.Runtime.Remoting", "RemotingServices", "_serializationFormatter"));
}
// Autogenerated static field setter
// Set static field: static private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _serializationFormatter
void System::Runtime::Remoting::RemotingServices::_set__serializationFormatter(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting", "RemotingServices", "_serializationFormatter", value));
}
// Autogenerated static field getter
// Get static field: static private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _deserializationFormatter
System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* System::Runtime::Remoting::RemotingServices::_get__deserializationFormatter() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*>("System.Runtime.Remoting", "RemotingServices", "_deserializationFormatter"));
}
// Autogenerated static field setter
// Set static field: static private System.Runtime.Serialization.Formatters.Binary.BinaryFormatter _deserializationFormatter
void System::Runtime::Remoting::RemotingServices::_set__deserializationFormatter(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting", "RemotingServices", "_deserializationFormatter", value));
}
// Autogenerated static field getter
// Get static field: static private System.String app_id
::Il2CppString* System::Runtime::Remoting::RemotingServices::_get_app_id() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("System.Runtime.Remoting", "RemotingServices", "app_id"));
}
// Autogenerated static field setter
// Set static field: static private System.String app_id
void System::Runtime::Remoting::RemotingServices::_set_app_id(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting", "RemotingServices", "app_id", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Object app_id_lock
::Il2CppObject* System::Runtime::Remoting::RemotingServices::_get_app_id_lock() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "app_id_lock"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Object app_id_lock
void System::Runtime::Remoting::RemotingServices::_set_app_id_lock(::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting", "RemotingServices", "app_id_lock", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 next_id
int System::Runtime::Remoting::RemotingServices::_get_next_id() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("System.Runtime.Remoting", "RemotingServices", "next_id"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 next_id
void System::Runtime::Remoting::RemotingServices::_set_next_id(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting", "RemotingServices", "next_id", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Reflection.MethodInfo FieldSetterMethod
System::Reflection::MethodInfo* System::Runtime::Remoting::RemotingServices::_get_FieldSetterMethod() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Reflection::MethodInfo*>("System.Runtime.Remoting", "RemotingServices", "FieldSetterMethod"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Reflection.MethodInfo FieldSetterMethod
void System::Runtime::Remoting::RemotingServices::_set_FieldSetterMethod(System::Reflection::MethodInfo* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting", "RemotingServices", "FieldSetterMethod", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Reflection.MethodInfo FieldGetterMethod
System::Reflection::MethodInfo* System::Runtime::Remoting::RemotingServices::_get_FieldGetterMethod() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Reflection::MethodInfo*>("System.Runtime.Remoting", "RemotingServices", "FieldGetterMethod"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Reflection.MethodInfo FieldGetterMethod
void System::Runtime::Remoting::RemotingServices::_set_FieldGetterMethod(System::Reflection::MethodInfo* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting", "RemotingServices", "FieldGetterMethod", value));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices..cctor
void System::Runtime::Remoting::RemotingServices::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting", "RemotingServices", ".cctor"));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.InternalExecute
::Il2CppObject* System::Runtime::Remoting::RemotingServices::InternalExecute(System::Reflection::MethodBase* method, ::Il2CppObject* obj, ::Array<::Il2CppObject*>* parameters, ::Array<::Il2CppObject*>*& out_args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "InternalExecute", method, obj, parameters, out_args));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetVirtualMethod
System::Reflection::MethodBase* System::Runtime::Remoting::RemotingServices::GetVirtualMethod(System::Type* type, System::Reflection::MethodBase* method) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>("System.Runtime.Remoting", "RemotingServices", "GetVirtualMethod", type, method));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.IsTransparentProxy
bool System::Runtime::Remoting::RemotingServices::IsTransparentProxy(::Il2CppObject* proxy) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Runtime.Remoting", "RemotingServices", "IsTransparentProxy", proxy));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.InternalExecuteMessage
System::Runtime::Remoting::Messaging::IMethodReturnMessage* System::Runtime::Remoting::RemotingServices::InternalExecuteMessage(System::MarshalByRefObject* target, System::Runtime::Remoting::Messaging::IMethodCallMessage* reqMsg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMethodReturnMessage*>("System.Runtime.Remoting", "RemotingServices", "InternalExecuteMessage", target, reqMsg));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.Connect
::Il2CppObject* System::Runtime::Remoting::RemotingServices::Connect(System::Type* classToProxy, ::Il2CppString* url) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "Connect", classToProxy, url));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.Connect
::Il2CppObject* System::Runtime::Remoting::RemotingServices::Connect(System::Type* classToProxy, ::Il2CppString* url, ::Il2CppObject* data) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "Connect", classToProxy, url, data));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetServerTypeForUri
System::Type* System::Runtime::Remoting::RemotingServices::GetServerTypeForUri(::Il2CppString* URI) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>("System.Runtime.Remoting", "RemotingServices", "GetServerTypeForUri", URI));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.Unmarshal
::Il2CppObject* System::Runtime::Remoting::RemotingServices::Unmarshal(System::Runtime::Remoting::ObjRef* objectRef) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "Unmarshal", objectRef));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.Unmarshal
::Il2CppObject* System::Runtime::Remoting::RemotingServices::Unmarshal(System::Runtime::Remoting::ObjRef* objectRef, bool fRefine) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "Unmarshal", objectRef, fRefine));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.Marshal
System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::RemotingServices::Marshal(System::MarshalByRefObject* Obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::ObjRef*>("System.Runtime.Remoting", "RemotingServices", "Marshal", Obj));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.Marshal
System::Runtime::Remoting::ObjRef* System::Runtime::Remoting::RemotingServices::Marshal(System::MarshalByRefObject* Obj, ::Il2CppString* ObjURI, System::Type* RequestedType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::ObjRef*>("System.Runtime.Remoting", "RemotingServices", "Marshal", Obj, ObjURI, RequestedType));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.NewUri
::Il2CppString* System::Runtime::Remoting::RemotingServices::NewUri() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Runtime.Remoting", "RemotingServices", "NewUri"));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetRealProxy
System::Runtime::Remoting::Proxies::RealProxy* System::Runtime::Remoting::RemotingServices::GetRealProxy(::Il2CppObject* proxy) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Proxies::RealProxy*>("System.Runtime.Remoting", "RemotingServices", "GetRealProxy", proxy));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetMethodBaseFromMethodMessage
System::Reflection::MethodBase* System::Runtime::Remoting::RemotingServices::GetMethodBaseFromMethodMessage(System::Runtime::Remoting::Messaging::IMethodMessage* msg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>("System.Runtime.Remoting", "RemotingServices", "GetMethodBaseFromMethodMessage", msg));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetMethodBaseFromName
System::Reflection::MethodBase* System::Runtime::Remoting::RemotingServices::GetMethodBaseFromName(System::Type* type, ::Il2CppString* methodName, ::Array<System::Type*>* signature) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>("System.Runtime.Remoting", "RemotingServices", "GetMethodBaseFromName", type, methodName, signature));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.FindInterfaceMethod
System::Reflection::MethodBase* System::Runtime::Remoting::RemotingServices::FindInterfaceMethod(System::Type* type, ::Il2CppString* methodName, ::Array<System::Type*>* signature) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>("System.Runtime.Remoting", "RemotingServices", "FindInterfaceMethod", type, methodName, signature));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetObjectData
void System::Runtime::Remoting::RemotingServices::GetObjectData(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting", "RemotingServices", "GetObjectData", obj, info, context));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.IsOneWay
bool System::Runtime::Remoting::RemotingServices::IsOneWay(System::Reflection::MethodBase* method) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Runtime.Remoting", "RemotingServices", "IsOneWay", method));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.CreateClientProxy
::Il2CppObject* System::Runtime::Remoting::RemotingServices::CreateClientProxy(System::Runtime::Remoting::ActivatedClientTypeEntry* entry, ::Array<::Il2CppObject*>* activationAttributes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "CreateClientProxy", entry, activationAttributes));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.CreateClientProxy
::Il2CppObject* System::Runtime::Remoting::RemotingServices::CreateClientProxy(System::Type* objectType, ::Il2CppString* url, ::Array<::Il2CppObject*>* activationAttributes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "CreateClientProxy", objectType, url, activationAttributes));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.CreateClientProxy
::Il2CppObject* System::Runtime::Remoting::RemotingServices::CreateClientProxy(System::Runtime::Remoting::WellKnownClientTypeEntry* entry) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "CreateClientProxy", entry));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.CreateClientProxyForContextBound
::Il2CppObject* System::Runtime::Remoting::RemotingServices::CreateClientProxyForContextBound(System::Type* type, ::Array<::Il2CppObject*>* activationAttributes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "CreateClientProxyForContextBound", type, activationAttributes));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetIdentityForUri
System::Runtime::Remoting::Identity* System::Runtime::Remoting::RemotingServices::GetIdentityForUri(::Il2CppString* uri) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Identity*>("System.Runtime.Remoting", "RemotingServices", "GetIdentityForUri", uri));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.RemoveAppNameFromUri
::Il2CppString* System::Runtime::Remoting::RemotingServices::RemoveAppNameFromUri(::Il2CppString* uri) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Runtime.Remoting", "RemotingServices", "RemoveAppNameFromUri", uri));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetOrCreateClientIdentity
System::Runtime::Remoting::ClientIdentity* System::Runtime::Remoting::RemotingServices::GetOrCreateClientIdentity(System::Runtime::Remoting::ObjRef* objRef, System::Type* proxyType, ::Il2CppObject*& clientProxy) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::ClientIdentity*>("System.Runtime.Remoting", "RemotingServices", "GetOrCreateClientIdentity", objRef, proxyType, clientProxy));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetClientChannelSinkChain
System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::RemotingServices::GetClientChannelSinkChain(::Il2CppString* url, ::Il2CppObject* channelData, ::Il2CppString*& objectUri) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageSink*>("System.Runtime.Remoting", "RemotingServices", "GetClientChannelSinkChain", url, channelData, objectUri));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.CreateContextBoundObjectIdentity
System::Runtime::Remoting::ClientActivatedIdentity* System::Runtime::Remoting::RemotingServices::CreateContextBoundObjectIdentity(System::Type* objectType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::ClientActivatedIdentity*>("System.Runtime.Remoting", "RemotingServices", "CreateContextBoundObjectIdentity", objectType));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.CreateClientActivatedServerIdentity
System::Runtime::Remoting::ClientActivatedIdentity* System::Runtime::Remoting::RemotingServices::CreateClientActivatedServerIdentity(System::MarshalByRefObject* realObject, System::Type* objectType, ::Il2CppString* objectUri) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::ClientActivatedIdentity*>("System.Runtime.Remoting", "RemotingServices", "CreateClientActivatedServerIdentity", realObject, objectType, objectUri));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.CreateWellKnownServerIdentity
System::Runtime::Remoting::ServerIdentity* System::Runtime::Remoting::RemotingServices::CreateWellKnownServerIdentity(System::Type* objectType, ::Il2CppString* objectUri, System::Runtime::Remoting::WellKnownObjectMode mode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::ServerIdentity*>("System.Runtime.Remoting", "RemotingServices", "CreateWellKnownServerIdentity", objectType, objectUri, mode));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.RegisterServerIdentity
void System::Runtime::Remoting::RemotingServices::RegisterServerIdentity(System::Runtime::Remoting::ServerIdentity* identity) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting", "RemotingServices", "RegisterServerIdentity", identity));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetProxyForRemoteObject
::Il2CppObject* System::Runtime::Remoting::RemotingServices::GetProxyForRemoteObject(System::Runtime::Remoting::ObjRef* objref, System::Type* classToProxy) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "GetProxyForRemoteObject", objref, classToProxy));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetRemoteObject
::Il2CppObject* System::Runtime::Remoting::RemotingServices::GetRemoteObject(System::Runtime::Remoting::ObjRef* objRef, System::Type* proxyType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "GetRemoteObject", objRef, proxyType));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.SerializeCallData
::Array<uint8_t>* System::Runtime::Remoting::RemotingServices::SerializeCallData(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System.Runtime.Remoting", "RemotingServices", "SerializeCallData", obj));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.DeserializeCallData
::Il2CppObject* System::Runtime::Remoting::RemotingServices::DeserializeCallData(::Array<uint8_t>* array) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>("System.Runtime.Remoting", "RemotingServices", "DeserializeCallData", array));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.SerializeExceptionData
::Array<uint8_t>* System::Runtime::Remoting::RemotingServices::SerializeExceptionData(System::Exception* ex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System.Runtime.Remoting", "RemotingServices", "SerializeExceptionData", ex));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.RegisterInternalChannels
void System::Runtime::Remoting::RemotingServices::RegisterInternalChannels() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting", "RemotingServices", "RegisterInternalChannels"));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.DisposeIdentity
void System::Runtime::Remoting::RemotingServices::DisposeIdentity(System::Runtime::Remoting::Identity* ident) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting", "RemotingServices", "DisposeIdentity", ident));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetMessageTargetIdentity
System::Runtime::Remoting::Identity* System::Runtime::Remoting::RemotingServices::GetMessageTargetIdentity(System::Runtime::Remoting::Messaging::IMessage* msg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Identity*>("System.Runtime.Remoting", "RemotingServices", "GetMessageTargetIdentity", msg));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.SetMessageTargetIdentity
void System::Runtime::Remoting::RemotingServices::SetMessageTargetIdentity(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Identity* ident) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting", "RemotingServices", "SetMessageTargetIdentity", msg, ident));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.UpdateOutArgObject
bool System::Runtime::Remoting::RemotingServices::UpdateOutArgObject(System::Reflection::ParameterInfo* pi, ::Il2CppObject* local, ::Il2CppObject* remote) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Runtime.Remoting", "RemotingServices", "UpdateOutArgObject", pi, local, remote));
}
// Autogenerated method: System.Runtime.Remoting.RemotingServices.GetNormalizedUri
::Il2CppString* System::Runtime::Remoting::RemotingServices::GetNormalizedUri(::Il2CppString* uri) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Runtime.Remoting", "RemotingServices", "GetNormalizedUri", uri));
}