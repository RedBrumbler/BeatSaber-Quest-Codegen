// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.UriFormatException
#include "System/UriFormatException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.UriFormatException..ctor
System::UriFormatException* System::UriFormatException::New_ctor() {
  return (UriFormatException*)THROW_UNLESS(il2cpp_utils::New("System", "UriFormatException"));
}
// Autogenerated method: System.UriFormatException..ctor
System::UriFormatException* System::UriFormatException::New_ctor(::Il2CppString* textString) {
  return (UriFormatException*)THROW_UNLESS(il2cpp_utils::New("System", "UriFormatException", textString));
}
// Autogenerated method: System.UriFormatException..ctor
System::UriFormatException* System::UriFormatException::New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
  return (UriFormatException*)THROW_UNLESS(il2cpp_utils::New("System", "UriFormatException", serializationInfo, streamingContext));
}
// Autogenerated method: System.UriFormatException.System.Runtime.Serialization.ISerializable.GetObjectData
void System::UriFormatException::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Runtime.Serialization.ISerializable.GetObjectData", serializationInfo, streamingContext));
}