// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.RuntimeMethodHandle
#include "System/RuntimeMethodHandle.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Reflection.RuntimeMethodInfo
#include "System/Reflection/RuntimeMethodInfo.hpp"
// Including type: System.TypeNameFormatFlags
#include "System/TypeNameFormatFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.RuntimeMethodHandle..ctor
System::RuntimeMethodHandle* System::RuntimeMethodHandle::New_ctor(System::IntPtr v) {
  return (RuntimeMethodHandle*)THROW_UNLESS(il2cpp_utils::New("System", "RuntimeMethodHandle", v));
}
// Autogenerated method: System.RuntimeMethodHandle..ctor
System::RuntimeMethodHandle* System::RuntimeMethodHandle::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return (RuntimeMethodHandle*)THROW_UNLESS(il2cpp_utils::New("System", "RuntimeMethodHandle", info, context));
}
// Autogenerated method: System.RuntimeMethodHandle.get_Value
System::IntPtr System::RuntimeMethodHandle::get_Value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>(*this, "get_Value"));
}
// Autogenerated method: System.RuntimeMethodHandle.ConstructInstantiation
::Il2CppString* System::RuntimeMethodHandle::ConstructInstantiation(System::Reflection::RuntimeMethodInfo* method, System::TypeNameFormatFlags format) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System", "RuntimeMethodHandle", "ConstructInstantiation", method, format));
}
// Autogenerated method: System.RuntimeMethodHandle.IsNullHandle
bool System::RuntimeMethodHandle::IsNullHandle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "IsNullHandle"));
}
// Autogenerated method: System.RuntimeMethodHandle.GetObjectData
void System::RuntimeMethodHandle::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "GetObjectData", info, context));
}
void System::RuntimeMethodHandle::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  GetObjectData(info, context);
}
// Autogenerated method: System.RuntimeMethodHandle.Equals
bool System::RuntimeMethodHandle::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: System.RuntimeMethodHandle.GetHashCode
int System::RuntimeMethodHandle::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}