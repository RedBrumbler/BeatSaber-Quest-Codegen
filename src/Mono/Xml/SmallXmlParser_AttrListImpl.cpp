// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Xml.SmallXmlParser/AttrListImpl
#include "Mono/Xml/SmallXmlParser_AttrListImpl.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Mono.Xml.SmallXmlParser/AttrListImpl.Clear
void Mono::Xml::SmallXmlParser::AttrListImpl::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser/AttrListImpl.Add
void Mono::Xml::SmallXmlParser::AttrListImpl::Add(::Il2CppString* name, ::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", name, value));
}
// Autogenerated method: Mono.Xml.SmallXmlParser/AttrListImpl.get_Length
int Mono::Xml::SmallXmlParser::AttrListImpl::get_Length() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Length"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser/AttrListImpl.GetName
::Il2CppString* Mono::Xml::SmallXmlParser::AttrListImpl::GetName(int i) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetName", i));
}
// Autogenerated method: Mono.Xml.SmallXmlParser/AttrListImpl.GetValue
::Il2CppString* Mono::Xml::SmallXmlParser::AttrListImpl::GetValue(int i) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetValue", i));
}
// Autogenerated method: Mono.Xml.SmallXmlParser/AttrListImpl.GetValue
::Il2CppString* Mono::Xml::SmallXmlParser::AttrListImpl::GetValue(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetValue", name));
}
// Autogenerated method: Mono.Xml.SmallXmlParser/AttrListImpl.get_Names
::Array<::Il2CppString*>* Mono::Xml::SmallXmlParser::AttrListImpl::get_Names() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "get_Names"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser/AttrListImpl.get_Values
::Array<::Il2CppString*>* Mono::Xml::SmallXmlParser::AttrListImpl::get_Values() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "get_Values"));
}
// Autogenerated method: Mono.Xml.SmallXmlParser/AttrListImpl..ctor
Mono::Xml::SmallXmlParser::AttrListImpl* Mono::Xml::SmallXmlParser::AttrListImpl::New_ctor() {
  return (SmallXmlParser::AttrListImpl*)THROW_UNLESS(il2cpp_utils::New("Mono.Xml", "SmallXmlParser/AttrListImpl"));
}