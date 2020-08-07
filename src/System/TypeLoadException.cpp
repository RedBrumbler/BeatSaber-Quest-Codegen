// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TypeLoadException
#include "System/TypeLoadException.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.TypeLoadException.SetMessageField
void System::TypeLoadException::SetMessageField() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetMessageField"));
}
// Autogenerated method: System.TypeLoadException..ctor
System::TypeLoadException* System::TypeLoadException::New_ctor(::Il2CppString* className, ::Il2CppString* assemblyName) {
  return (TypeLoadException*)THROW_UNLESS(il2cpp_utils::New("System", "TypeLoadException", className, assemblyName));
}
// Autogenerated method: System.TypeLoadException..ctor
System::TypeLoadException* System::TypeLoadException::New_ctor(::Il2CppString* className, ::Il2CppString* assemblyName, ::Il2CppString* messageArg, int resourceId) {
  return (TypeLoadException*)THROW_UNLESS(il2cpp_utils::New("System", "TypeLoadException", className, assemblyName, messageArg, resourceId));
}
// Autogenerated method: System.TypeLoadException..ctor
System::TypeLoadException* System::TypeLoadException::New_ctor() {
  return (TypeLoadException*)THROW_UNLESS(il2cpp_utils::New("System", "TypeLoadException"));
}
// Autogenerated method: System.TypeLoadException..ctor
System::TypeLoadException* System::TypeLoadException::New_ctor(::Il2CppString* message) {
  return (TypeLoadException*)THROW_UNLESS(il2cpp_utils::New("System", "TypeLoadException", message));
}
// Autogenerated method: System.TypeLoadException.get_Message
::Il2CppString* System::TypeLoadException::get_Message() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Message"));
}
// Autogenerated method: System.TypeLoadException..ctor
System::TypeLoadException* System::TypeLoadException::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (TypeLoadException*)THROW_UNLESS(il2cpp_utils::New("System", "TypeLoadException", info, context));
}
// Autogenerated method: System.TypeLoadException.GetObjectData
void System::TypeLoadException::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void System::TypeLoadException::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  GetObjectData(info, context);
}