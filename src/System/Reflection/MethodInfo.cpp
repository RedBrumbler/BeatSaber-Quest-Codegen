// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Reflection.MemberTypes
#include "System/Reflection/MemberTypes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Reflection.MethodInfo.get_ReturnType
System::Type* System::Reflection::MethodInfo::get_ReturnType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_ReturnType"));
}
// Autogenerated method: System.Reflection.MethodInfo.GetBaseDefinition
System::Reflection::MethodInfo* System::Reflection::MethodInfo::GetBaseDefinition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "GetBaseDefinition"));
}
// Autogenerated method: System.Reflection.MethodInfo.GetGenericMethodDefinition
System::Reflection::MethodInfo* System::Reflection::MethodInfo::GetGenericMethodDefinition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "GetGenericMethodDefinition"));
}
// Autogenerated method: System.Reflection.MethodInfo.MakeGenericMethod
System::Reflection::MethodInfo* System::Reflection::MethodInfo::MakeGenericMethod(::Array<System::Type*>* typeArguments) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "MakeGenericMethod", typeArguments));
}
// Autogenerated method: System.Reflection.MethodInfo.GetBaseMethod
System::Reflection::MethodInfo* System::Reflection::MethodInfo::GetBaseMethod() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "GetBaseMethod"));
}
// Autogenerated method: System.Reflection.MethodInfo..ctor
System::Reflection::MethodInfo* System::Reflection::MethodInfo::New_ctor() {
  return (MethodInfo*)THROW_UNLESS(il2cpp_utils::New("System.Reflection", "MethodInfo"));
}
// Autogenerated method: System.Reflection.MethodInfo.Equals
bool System::Reflection::MethodInfo::Equals(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: System.Reflection.MethodInfo.GetHashCode
int System::Reflection::MethodInfo::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: System.Reflection.MethodInfo.get_MemberType
System::Reflection::MemberTypes System::Reflection::MethodInfo::get_MemberType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MemberTypes>(this, "get_MemberType"));
}
// Autogenerated method: System.Reflection.MethodInfo.GetGenericArguments
::Array<System::Type*>* System::Reflection::MethodInfo::GetGenericArguments() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Type*>*>(this, "GetGenericArguments"));
}
// Autogenerated method: System.Reflection.MethodInfo.op_Equality
bool System::Reflection::operator ==(System::Reflection::MethodInfo* left, System::Reflection::MethodInfo& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Reflection", "MethodInfo", "op_Equality", left, &right));
}
// Autogenerated method: System.Reflection.MethodInfo.op_Inequality
bool System::Reflection::operator !=(System::Reflection::MethodInfo* left, System::Reflection::MethodInfo& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Reflection", "MethodInfo", "op_Inequality", left, &right));
}
