// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.CannotUnloadAppDomainException
#include "System/CannotUnloadAppDomainException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.CannotUnloadAppDomainException..ctor
System::CannotUnloadAppDomainException* System::CannotUnloadAppDomainException::New_ctor() {
  return (CannotUnloadAppDomainException*)THROW_UNLESS(il2cpp_utils::New("System", "CannotUnloadAppDomainException"));
}
// Autogenerated method: System.CannotUnloadAppDomainException..ctor
System::CannotUnloadAppDomainException* System::CannotUnloadAppDomainException::New_ctor(::Il2CppString* message) {
  return (CannotUnloadAppDomainException*)THROW_UNLESS(il2cpp_utils::New("System", "CannotUnloadAppDomainException", message));
}
// Autogenerated method: System.CannotUnloadAppDomainException..ctor
System::CannotUnloadAppDomainException* System::CannotUnloadAppDomainException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (CannotUnloadAppDomainException*)THROW_UNLESS(il2cpp_utils::New("System", "CannotUnloadAppDomainException", info, context));
}