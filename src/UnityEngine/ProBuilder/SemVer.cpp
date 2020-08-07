// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.SemVer
#include "UnityEngine/ProBuilder/SemVer.hpp"
// Including type: System.String
#include "System/String.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.String DefaultStringFormat
::Il2CppString* UnityEngine::ProBuilder::SemVer::_get_DefaultStringFormat() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("UnityEngine.ProBuilder", "SemVer", "DefaultStringFormat"));
}
// Autogenerated static field setter
// Set static field: static public System.String DefaultStringFormat
void UnityEngine::ProBuilder::SemVer::_set_DefaultStringFormat(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.ProBuilder", "SemVer", "DefaultStringFormat", value));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.get_major
int UnityEngine::ProBuilder::SemVer::get_major() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_major"));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.get_minor
int UnityEngine::ProBuilder::SemVer::get_minor() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_minor"));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.get_patch
int UnityEngine::ProBuilder::SemVer::get_patch() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_patch"));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.get_build
int UnityEngine::ProBuilder::SemVer::get_build() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_build"));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.get_type
::Il2CppString* UnityEngine::ProBuilder::SemVer::get_type() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_type"));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.get_metadata
::Il2CppString* UnityEngine::ProBuilder::SemVer::get_metadata() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_metadata"));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.get_date
::Il2CppString* UnityEngine::ProBuilder::SemVer::get_date() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_date"));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.get_MajorMinorPatch
UnityEngine::ProBuilder::SemVer* UnityEngine::ProBuilder::SemVer::get_MajorMinorPatch() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::SemVer*>(this, "get_MajorMinorPatch"));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer..ctor
UnityEngine::ProBuilder::SemVer* UnityEngine::ProBuilder::SemVer::New_ctor(::Il2CppString* formatted, ::Il2CppString* date) {
  return (SemVer*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "SemVer", formatted, date));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer..ctor
UnityEngine::ProBuilder::SemVer* UnityEngine::ProBuilder::SemVer::New_ctor(int major, int minor, int patch, int build, ::Il2CppString* type, ::Il2CppString* date, ::Il2CppString* metadata) {
  return (SemVer*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "SemVer", major, minor, patch, build, type, date, metadata));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.IsValid
bool UnityEngine::ProBuilder::SemVer::IsValid() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValid"));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.WrapNoValue
int UnityEngine::ProBuilder::SemVer::WrapNoValue(int value) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine.ProBuilder", "SemVer", "WrapNoValue", value));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.ToString
::Il2CppString* UnityEngine::ProBuilder::SemVer::ToString(::Il2CppString* format) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString", format));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.TryGetVersionInfo
bool UnityEngine::ProBuilder::SemVer::TryGetVersionInfo(::Il2CppString* input, UnityEngine::ProBuilder::SemVer*& version) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder", "SemVer", "TryGetVersionInfo", input, version));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.GetBuildNumber
int UnityEngine::ProBuilder::SemVer::GetBuildNumber(::Il2CppString* input) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine.ProBuilder", "SemVer", "GetBuildNumber", input));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer..ctor
UnityEngine::ProBuilder::SemVer* UnityEngine::ProBuilder::SemVer::New_ctor() {
  return (SemVer*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "SemVer"));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.Equals
bool UnityEngine::ProBuilder::SemVer::Equals(::Il2CppObject* o) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", o));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.GetHashCode
int UnityEngine::ProBuilder::SemVer::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.Equals
bool UnityEngine::ProBuilder::SemVer::Equals(UnityEngine::ProBuilder::SemVer* version) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", version));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.CompareTo
int UnityEngine::ProBuilder::SemVer::CompareTo(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "CompareTo", obj));
}
int UnityEngine::ProBuilder::SemVer::System_IComparable_CompareTo(::Il2CppObject* obj) {
  return CompareTo(obj);
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.CompareTo
int UnityEngine::ProBuilder::SemVer::CompareTo(UnityEngine::ProBuilder::SemVer* version) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "CompareTo", version));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.ToString
::Il2CppString* UnityEngine::ProBuilder::SemVer::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.op_Equality
bool UnityEngine::ProBuilder::operator ==(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder", "SemVer", "op_Equality", left, &right));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.op_Inequality
bool UnityEngine::ProBuilder::operator !=(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder", "SemVer", "op_Inequality", left, &right));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.op_LessThan
bool UnityEngine::ProBuilder::operator <(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder", "SemVer", "op_LessThan", left, &right));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.op_GreaterThan
bool UnityEngine::ProBuilder::operator >(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder", "SemVer", "op_GreaterThan", left, &right));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.op_LessThanOrEqual
bool UnityEngine::ProBuilder::operator <=(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder", "SemVer", "op_LessThanOrEqual", left, &right));
}
// Autogenerated method: UnityEngine.ProBuilder.SemVer.op_GreaterThanOrEqual
bool UnityEngine::ProBuilder::operator >=(UnityEngine::ProBuilder::SemVer* left, UnityEngine::ProBuilder::SemVer& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder", "SemVer", "op_GreaterThanOrEqual", left, &right));
}