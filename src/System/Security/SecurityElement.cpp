// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.SecurityElement
#include "System/Security/SecurityElement.hpp"
// Including type: System.Security.SecurityElement/SecurityAttribute
#include "System/Security/SecurityElement_SecurityAttribute.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Char[] invalid_tag_chars
::Array<::Il2CppChar>* System::Security::SecurityElement::_get_invalid_tag_chars() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppChar>*>("System.Security", "SecurityElement", "invalid_tag_chars"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Char[] invalid_tag_chars
void System::Security::SecurityElement::_set_invalid_tag_chars(::Array<::Il2CppChar>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security", "SecurityElement", "invalid_tag_chars", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Char[] invalid_text_chars
::Array<::Il2CppChar>* System::Security::SecurityElement::_get_invalid_text_chars() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppChar>*>("System.Security", "SecurityElement", "invalid_text_chars"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Char[] invalid_text_chars
void System::Security::SecurityElement::_set_invalid_text_chars(::Array<::Il2CppChar>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security", "SecurityElement", "invalid_text_chars", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Char[] invalid_attr_name_chars
::Array<::Il2CppChar>* System::Security::SecurityElement::_get_invalid_attr_name_chars() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppChar>*>("System.Security", "SecurityElement", "invalid_attr_name_chars"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Char[] invalid_attr_name_chars
void System::Security::SecurityElement::_set_invalid_attr_name_chars(::Array<::Il2CppChar>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security", "SecurityElement", "invalid_attr_name_chars", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Char[] invalid_attr_value_chars
::Array<::Il2CppChar>* System::Security::SecurityElement::_get_invalid_attr_value_chars() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppChar>*>("System.Security", "SecurityElement", "invalid_attr_value_chars"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Char[] invalid_attr_value_chars
void System::Security::SecurityElement::_set_invalid_attr_value_chars(::Array<::Il2CppChar>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security", "SecurityElement", "invalid_attr_value_chars", value));
}
// Autogenerated static field getter
// Get static field: static private readonly System.Char[] invalid_chars
::Array<::Il2CppChar>* System::Security::SecurityElement::_get_invalid_chars() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<::Il2CppChar>*>("System.Security", "SecurityElement", "invalid_chars"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Char[] invalid_chars
void System::Security::SecurityElement::_set_invalid_chars(::Array<::Il2CppChar>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security", "SecurityElement", "invalid_chars", value));
}
// Autogenerated method: System.Security.SecurityElement..ctor
System::Security::SecurityElement* System::Security::SecurityElement::New_ctor(::Il2CppString* tag) {
  return (SecurityElement*)THROW_UNLESS(il2cpp_utils::New("System.Security", "SecurityElement", tag));
}
// Autogenerated method: System.Security.SecurityElement..ctor
System::Security::SecurityElement* System::Security::SecurityElement::New_ctor(::Il2CppString* tag, ::Il2CppString* text) {
  return (SecurityElement*)THROW_UNLESS(il2cpp_utils::New("System.Security", "SecurityElement", tag, text));
}
// Autogenerated method: System.Security.SecurityElement.get_Attributes
System::Collections::Hashtable* System::Security::SecurityElement::get_Attributes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Hashtable*>(this, "get_Attributes"));
}
// Autogenerated method: System.Security.SecurityElement.get_Children
System::Collections::ArrayList* System::Security::SecurityElement::get_Children() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ArrayList*>(this, "get_Children"));
}
// Autogenerated method: System.Security.SecurityElement.get_Tag
::Il2CppString* System::Security::SecurityElement::get_Tag() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Tag"));
}
// Autogenerated method: System.Security.SecurityElement.get_Text
::Il2CppString* System::Security::SecurityElement::get_Text() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Text"));
}
// Autogenerated method: System.Security.SecurityElement.set_Text
void System::Security::SecurityElement::set_Text(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Text", value));
}
// Autogenerated method: System.Security.SecurityElement.AddAttribute
void System::Security::SecurityElement::AddAttribute(::Il2CppString* name, ::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddAttribute", name, value));
}
// Autogenerated method: System.Security.SecurityElement.AddChild
void System::Security::SecurityElement::AddChild(System::Security::SecurityElement* child) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddChild", child));
}
// Autogenerated method: System.Security.SecurityElement.Escape
::Il2CppString* System::Security::SecurityElement::Escape(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Security", "SecurityElement", "Escape", str));
}
// Autogenerated method: System.Security.SecurityElement.Unescape
::Il2CppString* System::Security::SecurityElement::Unescape(::Il2CppString* str) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Security", "SecurityElement", "Unescape", str));
}
// Autogenerated method: System.Security.SecurityElement.FromString
System::Security::SecurityElement* System::Security::SecurityElement::FromString(::Il2CppString* xml) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::SecurityElement*>("System.Security", "SecurityElement", "FromString", xml));
}
// Autogenerated method: System.Security.SecurityElement.IsValidAttributeName
bool System::Security::SecurityElement::IsValidAttributeName(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Security", "SecurityElement", "IsValidAttributeName", name));
}
// Autogenerated method: System.Security.SecurityElement.IsValidAttributeValue
bool System::Security::SecurityElement::IsValidAttributeValue(::Il2CppString* value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Security", "SecurityElement", "IsValidAttributeValue", value));
}
// Autogenerated method: System.Security.SecurityElement.IsValidTag
bool System::Security::SecurityElement::IsValidTag(::Il2CppString* tag) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Security", "SecurityElement", "IsValidTag", tag));
}
// Autogenerated method: System.Security.SecurityElement.IsValidText
bool System::Security::SecurityElement::IsValidText(::Il2CppString* text) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Security", "SecurityElement", "IsValidText", text));
}
// Autogenerated method: System.Security.SecurityElement.ToXml
void System::Security::SecurityElement::ToXml(System::Text::StringBuilder*& s, int level) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ToXml", s, level));
}
// Autogenerated method: System.Security.SecurityElement.GetAttribute
System::Security::SecurityElement::SecurityAttribute* System::Security::SecurityElement::GetAttribute(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::SecurityElement::SecurityAttribute*>(this, "GetAttribute", name));
}
// Autogenerated method: System.Security.SecurityElement..cctor
void System::Security::SecurityElement::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Security", "SecurityElement", ".cctor"));
}
// Autogenerated method: System.Security.SecurityElement.ToString
::Il2CppString* System::Security::SecurityElement::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}