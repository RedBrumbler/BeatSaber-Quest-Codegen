// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONString
#include "OVRSimpleJSON/JSONString.hpp"
// Including type: OVRSimpleJSON.JSONNodeType
#include "OVRSimpleJSON/JSONNodeType.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: OVRSimpleJSON.JSONTextMode
#include "OVRSimpleJSON/JSONTextMode.hpp"
// Including type: OVRSimpleJSON.JSONNode/Enumerator
#include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVRSimpleJSON.JSONString..ctor
OVRSimpleJSON::JSONString* OVRSimpleJSON::JSONString::New_ctor(::Il2CppString* aData) {
  return (JSONString*)THROW_UNLESS(il2cpp_utils::New("OVRSimpleJSON", "JSONString", aData));
}
// Autogenerated method: OVRSimpleJSON.JSONString.get_Tag
OVRSimpleJSON::JSONNodeType OVRSimpleJSON::JSONString::get_Tag() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVRSimpleJSON::JSONNodeType>(this, "get_Tag"));
}
// Autogenerated method: OVRSimpleJSON.JSONString.get_IsString
bool OVRSimpleJSON::JSONString::get_IsString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsString"));
}
// Autogenerated method: OVRSimpleJSON.JSONString.GetEnumerator
OVRSimpleJSON::JSONNode::Enumerator OVRSimpleJSON::JSONString::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVRSimpleJSON::JSONNode::Enumerator>(this, "GetEnumerator"));
}
// Autogenerated method: OVRSimpleJSON.JSONString.get_Value
::Il2CppString* OVRSimpleJSON::JSONString::get_Value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Value"));
}
// Autogenerated method: OVRSimpleJSON.JSONString.set_Value
void OVRSimpleJSON::JSONString::set_Value(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Value", value));
}
// Autogenerated method: OVRSimpleJSON.JSONString.WriteToStringBuilder
void OVRSimpleJSON::JSONString::WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WriteToStringBuilder", aSB, aIndent, aIndentInc, aMode));
}
// Autogenerated method: OVRSimpleJSON.JSONString.Equals
bool OVRSimpleJSON::JSONString::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: OVRSimpleJSON.JSONString.GetHashCode
int OVRSimpleJSON::JSONString::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}