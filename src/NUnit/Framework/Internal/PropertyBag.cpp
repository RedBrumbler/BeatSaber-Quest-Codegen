// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.PropertyBag
#include "NUnit/Framework/Internal/PropertyBag.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
// Including type: NUnit.Framework.Interfaces.TNode
#include "NUnit/Framework/Interfaces/TNode.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NUnit.Framework.Internal.PropertyBag.Add
void NUnit::Framework::Internal::PropertyBag::Add(::Il2CppString* key, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", key, value));
}
// Autogenerated method: NUnit.Framework.Internal.PropertyBag.Set
void NUnit::Framework::Internal::PropertyBag::Set(::Il2CppString* key, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Set", key, value));
}
// Autogenerated method: NUnit.Framework.Internal.PropertyBag.Get
::Il2CppObject* NUnit::Framework::Internal::PropertyBag::Get(::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Get", key));
}
// Autogenerated method: NUnit.Framework.Internal.PropertyBag.ContainsKey
bool NUnit::Framework::Internal::PropertyBag::ContainsKey(::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ContainsKey", key));
}
// Autogenerated method: NUnit.Framework.Internal.PropertyBag.get_Keys
System::Collections::Generic::ICollection_1<::Il2CppString*>* NUnit::Framework::Internal::PropertyBag::get_Keys() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::ICollection_1<::Il2CppString*>*>(this, "get_Keys"));
}
// Autogenerated method: NUnit.Framework.Internal.PropertyBag.get_Item
System::Collections::IList* NUnit::Framework::Internal::PropertyBag::get_Item(::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IList*>(this, "get_Item", key));
}
// Autogenerated method: NUnit.Framework.Internal.PropertyBag.ToXml
NUnit::Framework::Interfaces::TNode* NUnit::Framework::Internal::PropertyBag::ToXml(bool recursive) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::TNode*>(this, "ToXml", recursive));
}
// Autogenerated method: NUnit.Framework.Internal.PropertyBag.AddToXml
NUnit::Framework::Interfaces::TNode* NUnit::Framework::Internal::PropertyBag::AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<NUnit::Framework::Interfaces::TNode*>(this, "AddToXml", parentNode, recursive));
}
// Autogenerated method: NUnit.Framework.Internal.PropertyBag..ctor
NUnit::Framework::Internal::PropertyBag* NUnit::Framework::Internal::PropertyBag::New_ctor() {
  return (PropertyBag*)THROW_UNLESS(il2cpp_utils::New("NUnit.Framework.Internal", "PropertyBag"));
}