// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileLoadException
#include "System/IO/FileLoadException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.FileLoadException.SetMessageField
void System::IO::FileLoadException::SetMessageField() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetMessageField"));
}
// Autogenerated method: System.IO.FileLoadException.get_FusionLog
::Il2CppString* System::IO::FileLoadException::get_FusionLog() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_FusionLog"));
}
// Autogenerated method: System.IO.FileLoadException.FormatFileLoadExceptionMessage
::Il2CppString* System::IO::FileLoadException::FormatFileLoadExceptionMessage(::Il2CppString* fileName, int hResult) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.IO", "FileLoadException", "FormatFileLoadExceptionMessage", fileName, hResult));
}
// Autogenerated method: System.IO.FileLoadException..ctor
System::IO::FileLoadException* System::IO::FileLoadException::New_ctor() {
  return (FileLoadException*)THROW_UNLESS(il2cpp_utils::New("System.IO", "FileLoadException"));
}
// Autogenerated method: System.IO.FileLoadException..ctor
System::IO::FileLoadException* System::IO::FileLoadException::New_ctor(::Il2CppString* message) {
  return (FileLoadException*)THROW_UNLESS(il2cpp_utils::New("System.IO", "FileLoadException", message));
}
// Autogenerated method: System.IO.FileLoadException.get_Message
::Il2CppString* System::IO::FileLoadException::get_Message() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Message"));
}
// Autogenerated method: System.IO.FileLoadException.ToString
::Il2CppString* System::IO::FileLoadException::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
// Autogenerated method: System.IO.FileLoadException..ctor
System::IO::FileLoadException* System::IO::FileLoadException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (FileLoadException*)THROW_UNLESS(il2cpp_utils::New("System.IO", "FileLoadException", info, context));
}
// Autogenerated method: System.IO.FileLoadException.GetObjectData
void System::IO::FileLoadException::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void System::IO::FileLoadException::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  GetObjectData(info, context);
}