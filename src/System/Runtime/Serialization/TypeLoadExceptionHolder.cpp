// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.TypeLoadExceptionHolder
#include "System/Runtime/Serialization/TypeLoadExceptionHolder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.TypeLoadExceptionHolder..ctor
System::Runtime::Serialization::TypeLoadExceptionHolder* System::Runtime::Serialization::TypeLoadExceptionHolder::New_ctor(::CsString* typeName) {
  return (TypeLoadExceptionHolder*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization", "TypeLoadExceptionHolder", typeName));
}
// Autogenerated method: System.Runtime.Serialization.TypeLoadExceptionHolder.get_TypeName
::CsString* System::Runtime::Serialization::TypeLoadExceptionHolder::get_TypeName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_TypeName"));
}
