// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.InteropServices.COMException
#include "System/Runtime/InteropServices/COMException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.InteropServices.COMException..ctor
System::Runtime::InteropServices::COMException* System::Runtime::InteropServices::COMException::New_ctor() {
  return (COMException*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.InteropServices", "COMException"));
}
// Autogenerated method: System.Runtime.InteropServices.COMException..ctor
System::Runtime::InteropServices::COMException* System::Runtime::InteropServices::COMException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (COMException*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.InteropServices", "COMException", info, context));
}
// Autogenerated method: System.Runtime.InteropServices.COMException.ToString
::Il2CppString* System::Runtime::InteropServices::COMException::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}