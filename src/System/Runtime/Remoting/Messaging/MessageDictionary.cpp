// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.MessageDictionary
#include "System/Runtime/Remoting/Messaging/MessageDictionary.hpp"
// Including type: System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator
#include "System/Runtime/Remoting/Messaging/MessageDictionary_DictionaryEnumerator.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMethodMessage
#include "System/Runtime/Remoting/Messaging/IMethodMessage.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary..ctor
System::Runtime::Remoting::Messaging::MessageDictionary* System::Runtime::Remoting::Messaging::MessageDictionary::New_ctor(System::Runtime::Remoting::Messaging::IMethodMessage* message) {
  return (MessageDictionary*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "MessageDictionary", message));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.HasUserData
bool System::Runtime::Remoting::Messaging::MessageDictionary::HasUserData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "HasUserData"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.get_InternalDictionary
System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MessageDictionary::get_InternalDictionary() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionary*>(this, "get_InternalDictionary"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.set_MethodKeys
void System::Runtime::Remoting::Messaging::MessageDictionary::set_MethodKeys(::Array<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_MethodKeys", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.AllocInternalProperties
System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MessageDictionary::AllocInternalProperties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionary*>(this, "AllocInternalProperties"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.GetInternalProperties
System::Collections::IDictionary* System::Runtime::Remoting::Messaging::MessageDictionary::GetInternalProperties() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionary*>(this, "GetInternalProperties"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.IsOverridenKey
bool System::Runtime::Remoting::Messaging::MessageDictionary::IsOverridenKey(::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsOverridenKey", key));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.GetMethodProperty
::Il2CppObject* System::Runtime::Remoting::Messaging::MessageDictionary::GetMethodProperty(::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "GetMethodProperty", key));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.SetMethodProperty
void System::Runtime::Remoting::Messaging::MessageDictionary::SetMethodProperty(::Il2CppString* key, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetMethodProperty", key, value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.get_Values
System::Collections::ICollection* System::Runtime::Remoting::Messaging::MessageDictionary::get_Values() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ICollection*>(this, "get_Values"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.Add
void System::Runtime::Remoting::Messaging::MessageDictionary::Add(::Il2CppObject* key, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", key, value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.get_Item
::Il2CppObject* System::Runtime::Remoting::Messaging::MessageDictionary::get_Item(::Il2CppObject* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_Item", key));
}
::Il2CppObject* System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_IDictionary_get_Item(::Il2CppObject* key) {
  return get_Item(key);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.set_Item
void System::Runtime::Remoting::Messaging::MessageDictionary::set_Item(::Il2CppObject* key, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Item", key, value));
}
void System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value) {
  set_Item(key, value);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.get_Keys
System::Collections::ICollection* System::Runtime::Remoting::Messaging::MessageDictionary::get_Keys() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ICollection*>(this, "get_Keys"));
}
System::Collections::ICollection* System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_IDictionary_get_Keys() {
  return get_Keys();
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.Contains
bool System::Runtime::Remoting::Messaging::MessageDictionary::Contains(::Il2CppObject* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", key));
}
bool System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_IDictionary_Contains(::Il2CppObject* key) {
  return Contains(key);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.get_Count
int System::Runtime::Remoting::Messaging::MessageDictionary::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
int System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_ICollection_get_Count() {
  return get_Count();
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.CopyTo
void System::Runtime::Remoting::Messaging::MessageDictionary::CopyTo(System::Array* array, int index) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", array, index));
}
void System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_ICollection_CopyTo(System::Array* array, int index) {
  CopyTo(array, index);
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.System.Collections.IEnumerable.GetEnumerator
System::Collections::IEnumerator* System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_IEnumerable_GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.MessageDictionary.GetEnumerator
System::Collections::IDictionaryEnumerator* System::Runtime::Remoting::Messaging::MessageDictionary::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionaryEnumerator*>(this, "GetEnumerator"));
}
System::Collections::IDictionaryEnumerator* System::Runtime::Remoting::Messaging::MessageDictionary::System_Collections_IDictionary_GetEnumerator() {
  return GetEnumerator();
}