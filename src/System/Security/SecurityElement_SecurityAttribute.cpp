// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.SecurityElement/SecurityAttribute
#include "System/Security/SecurityElement_SecurityAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.SecurityElement/SecurityAttribute..ctor
System::Security::SecurityElement::SecurityAttribute* System::Security::SecurityElement::SecurityAttribute::New_ctor(::CsString* name, ::CsString* value) {
  return (SecurityElement::SecurityAttribute*)THROW_UNLESS(il2cpp_utils::New("System.Security", "SecurityElement/SecurityAttribute", name, value));
}
// Autogenerated method: System.Security.SecurityElement/SecurityAttribute.get_Name
::CsString* System::Security::SecurityElement::SecurityAttribute::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Name"));
}
// Autogenerated method: System.Security.SecurityElement/SecurityAttribute.get_Value
::CsString* System::Security::SecurityElement::SecurityAttribute::get_Value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Value"));
}
