// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MemberAccessException
#include "System/MemberAccessException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.MemberAccessException..ctor
System::MemberAccessException* System::MemberAccessException::New_ctor() {
  return (MemberAccessException*)THROW_UNLESS(il2cpp_utils::New("System", "MemberAccessException"));
}
// Autogenerated method: System.MemberAccessException..ctor
System::MemberAccessException* System::MemberAccessException::New_ctor(::Il2CppString* message) {
  return (MemberAccessException*)THROW_UNLESS(il2cpp_utils::New("System", "MemberAccessException", message));
}
// Autogenerated method: System.MemberAccessException..ctor
System::MemberAccessException* System::MemberAccessException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (MemberAccessException*)THROW_UNLESS(il2cpp_utils::New("System", "MemberAccessException", info, context));
}