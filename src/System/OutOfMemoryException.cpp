// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.OutOfMemoryException
#include "System/OutOfMemoryException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.OutOfMemoryException..ctor
System::OutOfMemoryException* System::OutOfMemoryException::New_ctor() {
  return (OutOfMemoryException*)THROW_UNLESS(il2cpp_utils::New("System", "OutOfMemoryException"));
}
// Autogenerated method: System.OutOfMemoryException..ctor
System::OutOfMemoryException* System::OutOfMemoryException::New_ctor(::CsString* message) {
  return (OutOfMemoryException*)THROW_UNLESS(il2cpp_utils::New("System", "OutOfMemoryException", message));
}
// Autogenerated method: System.OutOfMemoryException..ctor
System::OutOfMemoryException* System::OutOfMemoryException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (OutOfMemoryException*)THROW_UNLESS(il2cpp_utils::New("System", "OutOfMemoryException", info, context));
}
