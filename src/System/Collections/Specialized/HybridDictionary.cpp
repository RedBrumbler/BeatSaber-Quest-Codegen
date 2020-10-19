// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.HybridDictionary
#include "System/Collections/Specialized/HybridDictionary.hpp"
// Including type: System.Collections.Specialized.ListDictionary
#include "System/Collections/Specialized/ListDictionary.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Collections.Specialized.HybridDictionary.get_List
System::Collections::Specialized::ListDictionary* System::Collections::Specialized::HybridDictionary::get_List() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Specialized::ListDictionary*>(this, "get_List"));
}
// Autogenerated method: System.Collections.Specialized.HybridDictionary.ChangeOver
void System::Collections::Specialized::HybridDictionary::ChangeOver() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ChangeOver"));
}
// Autogenerated method: System.Collections.Specialized.HybridDictionary.get_Values
System::Collections::ICollection* System::Collections::Specialized::HybridDictionary::get_Values() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ICollection*>(this, "get_Values"));
}
// Autogenerated method: System.Collections.Specialized.HybridDictionary..ctor
System::Collections::Specialized::HybridDictionary* System::Collections::Specialized::HybridDictionary::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<HybridDictionary*>());
}
// Autogenerated method: System.Collections.Specialized.HybridDictionary.get_Item
::Il2CppObject* System::Collections::Specialized::HybridDictionary::get_Item(::Il2CppObject* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_Item", key));
}
::Il2CppObject* System::Collections::Specialized::HybridDictionary::System_Collections_IDictionary_get_Item(::Il2CppObject* key) {
  return System::Collections::Specialized::HybridDictionary::get_Item(key);
}
// Autogenerated method: System.Collections.Specialized.HybridDictionary.set_Item
void System::Collections::Specialized::HybridDictionary::set_Item(::Il2CppObject* key, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Item", key, value));
}
void System::Collections::Specialized::HybridDictionary::System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value) {
  System::Collections::Specialized::HybridDictionary::set_Item(key, value);
}
// Autogenerated method: System.Collections.Specialized.HybridDictionary.get_Count
int System::Collections::Specialized::HybridDictionary::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
int System::Collections::Specialized::HybridDictionary::System_Collections_ICollection_get_Count() {
  return System::Collections::Specialized::HybridDictionary::get_Count();
}
// Autogenerated method: System.Collections.Specialized.HybridDictionary.get_Keys
System::Collections::ICollection* System::Collections::Specialized::HybridDictionary::get_Keys() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ICollection*>(this, "get_Keys"));
}
System::Collections::ICollection* System::Collections::Specialized::HybridDictionary::System_Collections_IDictionary_get_Keys() {
  return System::Collections::Specialized::HybridDictionary::get_Keys();
}
// Autogenerated method: System.Collections.Specialized.HybridDictionary.Add
void System::Collections::Specialized::HybridDictionary::Add(::Il2CppObject* key, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", key, value));
}
void System::Collections::Specialized::HybridDictionary::System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value) {
  System::Collections::Specialized::HybridDictionary::Add(key, value);
}
// Autogenerated method: System.Collections.Specialized.HybridDictionary.Contains
bool System::Collections::Specialized::HybridDictionary::Contains(::Il2CppObject* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", key));
}
bool System::Collections::Specialized::HybridDictionary::System_Collections_IDictionary_Contains(::Il2CppObject* key) {
  return System::Collections::Specialized::HybridDictionary::Contains(key);
}
// Autogenerated method: System.Collections.Specialized.HybridDictionary.CopyTo
void System::Collections::Specialized::HybridDictionary::CopyTo(System::Array* array, int index) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", array, index));
}
void System::Collections::Specialized::HybridDictionary::System_Collections_ICollection_CopyTo(System::Array* array, int index) {
  System::Collections::Specialized::HybridDictionary::CopyTo(array, index);
}
// Autogenerated method: System.Collections.Specialized.HybridDictionary.GetEnumerator
System::Collections::IDictionaryEnumerator* System::Collections::Specialized::HybridDictionary::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionaryEnumerator*>(this, "GetEnumerator"));
}
System::Collections::IDictionaryEnumerator* System::Collections::Specialized::HybridDictionary::System_Collections_IDictionary_GetEnumerator() {
  return System::Collections::Specialized::HybridDictionary::GetEnumerator();
}
// Autogenerated method: System.Collections.Specialized.HybridDictionary.System.Collections.IEnumerable.GetEnumerator
System::Collections::IEnumerator* System::Collections::Specialized::HybridDictionary::System_Collections_IEnumerable_GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
}