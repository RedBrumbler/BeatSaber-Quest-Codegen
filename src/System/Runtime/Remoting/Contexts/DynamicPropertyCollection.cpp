// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Contexts.DynamicPropertyCollection
#include "System/Runtime/Remoting/Contexts/DynamicPropertyCollection.hpp"
// Including type: System.Runtime.Remoting.Contexts.DynamicPropertyCollection/DynamicPropertyReg
#include "System/Runtime/Remoting/Contexts/DynamicPropertyCollection_DynamicPropertyReg.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: System.Runtime.Remoting.Contexts.IDynamicProperty
#include "System/Runtime/Remoting/Contexts/IDynamicProperty.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Contexts.DynamicPropertyCollection.get_HasProperties
bool System::Runtime::Remoting::Contexts::DynamicPropertyCollection::get_HasProperties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_HasProperties"));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.DynamicPropertyCollection.RegisterDynamicProperty
bool System::Runtime::Remoting::Contexts::DynamicPropertyCollection::RegisterDynamicProperty(System::Runtime::Remoting::Contexts::IDynamicProperty* prop) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "RegisterDynamicProperty", prop));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.DynamicPropertyCollection.UnregisterDynamicProperty
bool System::Runtime::Remoting::Contexts::DynamicPropertyCollection::UnregisterDynamicProperty(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "UnregisterDynamicProperty", name));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.DynamicPropertyCollection.NotifyMessage
void System::Runtime::Remoting::Contexts::DynamicPropertyCollection::NotifyMessage(bool start, System::Runtime::Remoting::Messaging::IMessage* msg, bool client_site, bool async) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NotifyMessage", start, msg, client_site, async));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.DynamicPropertyCollection.FindProperty
int System::Runtime::Remoting::Contexts::DynamicPropertyCollection::FindProperty(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "FindProperty", name));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.DynamicPropertyCollection..ctor
System::Runtime::Remoting::Contexts::DynamicPropertyCollection* System::Runtime::Remoting::Contexts::DynamicPropertyCollection::New_ctor() {
  return (DynamicPropertyCollection*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Contexts", "DynamicPropertyCollection"));
}