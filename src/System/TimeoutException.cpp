// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeoutException
#include "System/TimeoutException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.TimeoutException..ctor
System::TimeoutException* System::TimeoutException::New_ctor() {
  return (TimeoutException*)THROW_UNLESS(il2cpp_utils::New("System", "TimeoutException"));
}
// Autogenerated method: System.TimeoutException..ctor
System::TimeoutException* System::TimeoutException::New_ctor(::CsString* message) {
  return (TimeoutException*)THROW_UNLESS(il2cpp_utils::New("System", "TimeoutException", message));
}
// Autogenerated method: System.TimeoutException..ctor
System::TimeoutException* System::TimeoutException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (TimeoutException*)THROW_UNLESS(il2cpp_utils::New("System", "TimeoutException", info, context));
}
