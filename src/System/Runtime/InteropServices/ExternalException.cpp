// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.InteropServices.ExternalException
#include "System/Runtime/InteropServices/ExternalException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.InteropServices.ExternalException..ctor
System::Runtime::InteropServices::ExternalException* System::Runtime::InteropServices::ExternalException::New_ctor() {
  return (ExternalException*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.InteropServices", "ExternalException"));
}
// Autogenerated method: System.Runtime.InteropServices.ExternalException..ctor
System::Runtime::InteropServices::ExternalException* System::Runtime::InteropServices::ExternalException::New_ctor(::Il2CppString* message) {
  return (ExternalException*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.InteropServices", "ExternalException", message));
}
// Autogenerated method: System.Runtime.InteropServices.ExternalException..ctor
System::Runtime::InteropServices::ExternalException* System::Runtime::InteropServices::ExternalException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (ExternalException*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.InteropServices", "ExternalException", info, context));
}
// Autogenerated method: System.Runtime.InteropServices.ExternalException.ToString
::Il2CppString* System::Runtime::InteropServices::ExternalException::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}