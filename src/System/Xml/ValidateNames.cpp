// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.ValidateNames
#include "System/Xml/ValidateNames.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Xml.XmlCharType xmlCharType
System::Xml::XmlCharType System::Xml::ValidateNames::_get_xmlCharType() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Xml::XmlCharType>("System.Xml", "ValidateNames", "xmlCharType"));
}
// Autogenerated static field setter
// Set static field: static private System.Xml.XmlCharType xmlCharType
void System::Xml::ValidateNames::_set_xmlCharType(System::Xml::XmlCharType value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Xml", "ValidateNames", "xmlCharType", value));
}
// Autogenerated method: System.Xml.ValidateNames.ParseNCName
int System::Xml::ValidateNames::ParseNCName(::CsString* s, int offset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Xml", "ValidateNames", "ParseNCName", s, offset));
}
// Autogenerated method: System.Xml.ValidateNames.ParseQName
int System::Xml::ValidateNames::ParseQName(::CsString* s, int offset, int& colonOffset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Xml", "ValidateNames", "ParseQName", s, offset, colonOffset));
}
// Autogenerated method: System.Xml.ValidateNames..cctor
void System::Xml::ValidateNames::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Xml", "ValidateNames", ".cctor"));
}
