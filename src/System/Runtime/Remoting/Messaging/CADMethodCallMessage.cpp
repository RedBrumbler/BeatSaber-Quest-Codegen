// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.CADMethodCallMessage
#include "System/Runtime/Remoting/Messaging/CADMethodCallMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodCallMessage.get_Uri
::Il2CppString* System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_Uri() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Uri"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodCallMessage.Create
System::Runtime::Remoting::Messaging::CADMethodCallMessage* System::Runtime::Remoting::Messaging::CADMethodCallMessage::Create(System::Runtime::Remoting::Messaging::IMessage* callMsg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::CADMethodCallMessage*>("System.Runtime.Remoting.Messaging", "CADMethodCallMessage", "Create", callMsg));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodCallMessage..ctor
System::Runtime::Remoting::Messaging::CADMethodCallMessage* System::Runtime::Remoting::Messaging::CADMethodCallMessage::New_ctor(System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg) {
  return (CADMethodCallMessage*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "CADMethodCallMessage", callMsg));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodCallMessage.GetArguments
System::Collections::ArrayList* System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArguments() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ArrayList*>(this, "GetArguments"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodCallMessage.GetArgs
::Array<::Il2CppObject*>* System::Runtime::Remoting::Messaging::CADMethodCallMessage::GetArgs(System::Collections::ArrayList* args) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>(this, "GetArgs", args));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.CADMethodCallMessage.get_PropertiesCount
int System::Runtime::Remoting::Messaging::CADMethodCallMessage::get_PropertiesCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_PropertiesCount"));
}