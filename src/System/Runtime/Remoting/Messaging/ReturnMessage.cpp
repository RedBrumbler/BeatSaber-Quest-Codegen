// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.ReturnMessage
#include "System/Runtime/Remoting/Messaging/ReturnMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.LogicalCallContext
#include "System/Runtime/Remoting/Messaging/LogicalCallContext.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Runtime.Remoting.Messaging.MethodReturnDictionary
#include "System/Runtime/Remoting/Messaging/MethodReturnDictionary.hpp"
// Including type: System.Runtime.Remoting.Identity
#include "System/Runtime/Remoting/Identity.hpp"
// Including type: System.Runtime.Remoting.Messaging.ArgInfo
#include "System/Runtime/Remoting/Messaging/ArgInfo.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage..ctor
System::Runtime::Remoting::Messaging::ReturnMessage* System::Runtime::Remoting::Messaging::ReturnMessage::New_ctor(::Il2CppObject* ret, ::Array<::Il2CppObject*>* outArgs, int outArgsCount, System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm) {
  return (ReturnMessage*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "ReturnMessage", ret, outArgs, outArgsCount, callCtx, mcm));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage..ctor
System::Runtime::Remoting::Messaging::ReturnMessage* System::Runtime::Remoting::Messaging::ReturnMessage::New_ctor(System::Exception* e, System::Runtime::Remoting::Messaging::IMethodCallMessage* mcm) {
  return (ReturnMessage*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "ReturnMessage", e, mcm));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.set_Uri
void System::Runtime::Remoting::Messaging::ReturnMessage::set_Uri(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Uri", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.get_ArgCount
int System::Runtime::Remoting::Messaging::ReturnMessage::get_ArgCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_ArgCount"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.get_Args
::Array<::Il2CppObject*>* System::Runtime::Remoting::Messaging::ReturnMessage::get_Args() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>(this, "get_Args"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.get_LogicalCallContext
System::Runtime::Remoting::Messaging::LogicalCallContext* System::Runtime::Remoting::Messaging::ReturnMessage::get_LogicalCallContext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::LogicalCallContext*>(this, "get_LogicalCallContext"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.get_MethodBase
System::Reflection::MethodBase* System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodBase() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodBase*>(this, "get_MethodBase"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.get_MethodName
::Il2CppString* System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_MethodName"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.get_MethodSignature
::Il2CppObject* System::Runtime::Remoting::Messaging::ReturnMessage::get_MethodSignature() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_MethodSignature"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.get_Properties
System::Collections::IDictionary* System::Runtime::Remoting::Messaging::ReturnMessage::get_Properties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionary*>(this, "get_Properties"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.get_TypeName
::Il2CppString* System::Runtime::Remoting::Messaging::ReturnMessage::get_TypeName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_TypeName"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.get_Uri
::Il2CppString* System::Runtime::Remoting::Messaging::ReturnMessage::get_Uri() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Uri"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri
::Il2CppString* System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri
void System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.GetArg
::Il2CppObject* System::Runtime::Remoting::Messaging::ReturnMessage::GetArg(int argNum) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "GetArg", argNum));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.get_Exception
System::Exception* System::Runtime::Remoting::Messaging::ReturnMessage::get_Exception() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Exception*>(this, "get_Exception"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.get_OutArgs
::Array<::Il2CppObject*>* System::Runtime::Remoting::Messaging::ReturnMessage::get_OutArgs() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>(this, "get_OutArgs"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.get_ReturnValue
::Il2CppObject* System::Runtime::Remoting::Messaging::ReturnMessage::get_ReturnValue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_ReturnValue"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity
System::Runtime::Remoting::Identity* System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Identity*>(this, "System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ReturnMessage.System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity
void System::Runtime::Remoting::Messaging::ReturnMessage::System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity", value));
}