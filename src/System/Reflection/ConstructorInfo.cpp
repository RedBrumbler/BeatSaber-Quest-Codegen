// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.ConstructorInfo
#include "System/Reflection/ConstructorInfo.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
// Including type: System.Reflection.Binder
#include "System/Reflection/Binder.hpp"
// Including type: System.Globalization.CultureInfo
#include "System/Globalization/CultureInfo.hpp"
// Including type: System.Reflection.MemberTypes
#include "System/Reflection/MemberTypes.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.String ConstructorName
::Il2CppString* System::Reflection::ConstructorInfo::_get_ConstructorName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("System.Reflection", "ConstructorInfo", "ConstructorName"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.String ConstructorName
void System::Reflection::ConstructorInfo::_set_ConstructorName(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Reflection", "ConstructorInfo", "ConstructorName", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.String TypeConstructorName
::Il2CppString* System::Reflection::ConstructorInfo::_get_TypeConstructorName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("System.Reflection", "ConstructorInfo", "TypeConstructorName"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.String TypeConstructorName
void System::Reflection::ConstructorInfo::_set_TypeConstructorName(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Reflection", "ConstructorInfo", "TypeConstructorName", value));
}
// Autogenerated method: System.Reflection.ConstructorInfo.Invoke
::Il2CppObject* System::Reflection::ConstructorInfo::Invoke(::Array<::Il2CppObject*>* parameters) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Invoke", parameters));
}
// Autogenerated method: System.Reflection.ConstructorInfo.Invoke
::Il2CppObject* System::Reflection::ConstructorInfo::Invoke(System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* parameters, System::Globalization::CultureInfo* culture) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Invoke", invokeAttr, binder, parameters, culture));
}
// Autogenerated method: System.Reflection.ConstructorInfo..cctor
void System::Reflection::ConstructorInfo::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Reflection", "ConstructorInfo", ".cctor"));
}
// Autogenerated method: System.Reflection.ConstructorInfo..ctor
System::Reflection::ConstructorInfo* System::Reflection::ConstructorInfo::New_ctor() {
  return (ConstructorInfo*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "ConstructorInfo"));
}
// Autogenerated method: System.Reflection.ConstructorInfo.get_MemberType
System::Reflection::MemberTypes System::Reflection::ConstructorInfo::get_MemberType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MemberTypes>(this, "get_MemberType"));
}
// Autogenerated method: System.Reflection.ConstructorInfo.Equals
bool System::Reflection::ConstructorInfo::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: System.Reflection.ConstructorInfo.GetHashCode
int System::Reflection::ConstructorInfo::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: System.Reflection.ConstructorInfo.op_Equality
bool System::Reflection::operator ==(System::Reflection::ConstructorInfo* left, System::Reflection::ConstructorInfo& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Reflection", "ConstructorInfo", "op_Equality", left, &right));
}
// Autogenerated method: System.Reflection.ConstructorInfo.op_Inequality
bool System::Reflection::operator !=(System::Reflection::ConstructorInfo* left, System::Reflection::ConstructorInfo& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Reflection", "ConstructorInfo", "op_Inequality", left, &right));
}