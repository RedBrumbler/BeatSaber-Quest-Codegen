// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.NameObjectCollectionBase
#include "System/Collections/Specialized/NameObjectCollectionBase.hpp"
// Including type: System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
#include "System/Collections/Specialized/NameObjectCollectionBase_NameObjectEntry.hpp"
// Including type: System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
#include "System/Collections/Specialized/NameObjectCollectionBase_NameObjectKeysEnumerator.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.StringComparer
#include "System/StringComparer.hpp"
// Including type: System.DBNull
#include "System/DBNull.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.Array
#include "System/Array.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.StringComparer defaultComparer
System::StringComparer* System::Collections::Specialized::NameObjectCollectionBase::_get_defaultComparer() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::StringComparer*>("System.Collections.Specialized", "NameObjectCollectionBase", "defaultComparer"));
}
// Autogenerated static field setter
// Set static field: static private System.StringComparer defaultComparer
void System::Collections::Specialized::NameObjectCollectionBase::_set_defaultComparer(System::StringComparer* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Collections.Specialized", "NameObjectCollectionBase", "defaultComparer", value));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase..ctor
System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(il2cpp_utils::New<NameObjectCollectionBase*>(equalityComparer));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase..ctor
System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(int capacity, System::Collections::IEqualityComparer* equalityComparer) {
  return THROW_UNLESS(il2cpp_utils::New<NameObjectCollectionBase*>(capacity, equalityComparer));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase..ctor
System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(int capacity) {
  return THROW_UNLESS(il2cpp_utils::New<NameObjectCollectionBase*>(capacity));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase..ctor
System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(System::DBNull* dummy) {
  return THROW_UNLESS(il2cpp_utils::New<NameObjectCollectionBase*>(dummy));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase..ctor
System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(il2cpp_utils::New<NameObjectCollectionBase*>(info, context));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.Reset
void System::Collections::Specialized::NameObjectCollectionBase::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.Reset
void System::Collections::Specialized::NameObjectCollectionBase::Reset(int capacity) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset", capacity));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.FindEntry
System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry* System::Collections::Specialized::NameObjectCollectionBase::FindEntry(::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry*>(this, "FindEntry", key));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.get_IsReadOnly
bool System::Collections::Specialized::NameObjectCollectionBase::get_IsReadOnly() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsReadOnly"));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.BaseAdd
void System::Collections::Specialized::NameObjectCollectionBase::BaseAdd(::Il2CppString* name, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BaseAdd", name, value));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.BaseRemove
void System::Collections::Specialized::NameObjectCollectionBase::BaseRemove(::Il2CppString* name) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BaseRemove", name));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.BaseGet
::Il2CppObject* System::Collections::Specialized::NameObjectCollectionBase::BaseGet(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "BaseGet", name));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.BaseSet
void System::Collections::Specialized::NameObjectCollectionBase::BaseSet(::Il2CppString* name, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BaseSet", name, value));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.BaseGet
::Il2CppObject* System::Collections::Specialized::NameObjectCollectionBase::BaseGet(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "BaseGet", index));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.BaseGetKey
::Il2CppString* System::Collections::Specialized::NameObjectCollectionBase::BaseGetKey(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "BaseGetKey", index));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase..cctor
void System::Collections::Specialized::NameObjectCollectionBase::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Collections.Specialized", "NameObjectCollectionBase", ".cctor"));
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase..ctor
System::Collections::Specialized::NameObjectCollectionBase* System::Collections::Specialized::NameObjectCollectionBase::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<NameObjectCollectionBase*>());
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.GetObjectData
void System::Collections::Specialized::NameObjectCollectionBase::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void System::Collections::Specialized::NameObjectCollectionBase::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  System::Collections::Specialized::NameObjectCollectionBase::GetObjectData(info, context);
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.OnDeserialization
void System::Collections::Specialized::NameObjectCollectionBase::OnDeserialization(::Il2CppObject* sender) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDeserialization", sender));
}
void System::Collections::Specialized::NameObjectCollectionBase::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender) {
  System::Collections::Specialized::NameObjectCollectionBase::OnDeserialization(sender);
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.GetEnumerator
System::Collections::IEnumerator* System::Collections::Specialized::NameObjectCollectionBase::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "GetEnumerator"));
}
System::Collections::IEnumerator* System::Collections::Specialized::NameObjectCollectionBase::System_Collections_IEnumerable_GetEnumerator() {
  return System::Collections::Specialized::NameObjectCollectionBase::GetEnumerator();
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.get_Count
int System::Collections::Specialized::NameObjectCollectionBase::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
int System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_get_Count() {
  return System::Collections::Specialized::NameObjectCollectionBase::get_Count();
}
// Autogenerated method: System.Collections.Specialized.NameObjectCollectionBase.System.Collections.ICollection.CopyTo
void System::Collections::Specialized::NameObjectCollectionBase::System_Collections_ICollection_CopyTo(System::Array* array, int index) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.ICollection.CopyTo", array, index));
}