// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.DriveNotFoundException
#include "System/IO/DriveNotFoundException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.DriveNotFoundException..ctor
System::IO::DriveNotFoundException* System::IO::DriveNotFoundException::New_ctor() {
  return (DriveNotFoundException*)THROW_UNLESS(il2cpp_utils::New("System.IO", "DriveNotFoundException"));
}
// Autogenerated method: System.IO.DriveNotFoundException..ctor
System::IO::DriveNotFoundException* System::IO::DriveNotFoundException::New_ctor(::Il2CppString* message) {
  return (DriveNotFoundException*)THROW_UNLESS(il2cpp_utils::New("System.IO", "DriveNotFoundException", message));
}
// Autogenerated method: System.IO.DriveNotFoundException..ctor
System::IO::DriveNotFoundException* System::IO::DriveNotFoundException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (DriveNotFoundException*)THROW_UNLESS(il2cpp_utils::New("System.IO", "DriveNotFoundException", info, context));
}