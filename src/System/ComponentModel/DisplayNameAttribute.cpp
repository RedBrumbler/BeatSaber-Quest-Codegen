// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ComponentModel.DisplayNameAttribute
#include "System/ComponentModel/DisplayNameAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.ComponentModel.DisplayNameAttribute Default
System::ComponentModel::DisplayNameAttribute* System::ComponentModel::DisplayNameAttribute::_get_Default() {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::ComponentModel").WithContext("DisplayNameAttribute").WithContext("_get_Default");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::ComponentModel::DisplayNameAttribute*>("System.ComponentModel", "DisplayNameAttribute", "Default"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.ComponentModel.DisplayNameAttribute Default
void System::ComponentModel::DisplayNameAttribute::_set_Default(System::ComponentModel::DisplayNameAttribute* value) {
  static auto ___internal__logger = Logger::get().WithContext("codegen").WithContext("System::ComponentModel").WithContext("DisplayNameAttribute").WithContext("_set_Default");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.ComponentModel", "DisplayNameAttribute", "Default", value));
}
// Autogenerated method: System.ComponentModel.DisplayNameAttribute.get_DisplayName
::Il2CppString* System::ComponentModel::DisplayNameAttribute::get_DisplayName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::ComponentModel").WithContext("DisplayNameAttribute").WithContext("get_DisplayName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_DisplayName", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: System.ComponentModel.DisplayNameAttribute.get_DisplayNameValue
::Il2CppString* System::ComponentModel::DisplayNameAttribute::get_DisplayNameValue() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::ComponentModel").WithContext("DisplayNameAttribute").WithContext("get_DisplayNameValue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_DisplayNameValue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: System.ComponentModel.DisplayNameAttribute..cctor
void System::ComponentModel::DisplayNameAttribute::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::ComponentModel").WithContext("DisplayNameAttribute").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.ComponentModel", "DisplayNameAttribute", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: System.ComponentModel.DisplayNameAttribute.Equals
bool System::ComponentModel::DisplayNameAttribute::Equals(::Il2CppObject* obj) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::ComponentModel").WithContext("DisplayNameAttribute").WithContext("Equals");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
}
// Autogenerated method: System.ComponentModel.DisplayNameAttribute.GetHashCode
int System::ComponentModel::DisplayNameAttribute::GetHashCode() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::ComponentModel").WithContext("DisplayNameAttribute").WithContext("GetHashCode");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}