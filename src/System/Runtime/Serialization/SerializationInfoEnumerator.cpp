// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.SerializationInfoEnumerator
#include "System/Runtime/Serialization/SerializationInfoEnumerator.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: System.Runtime.Serialization.SerializationEntry
#include "System/Runtime/Serialization/SerializationEntry.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.SerializationInfoEnumerator..ctor
System::Runtime::Serialization::SerializationInfoEnumerator* System::Runtime::Serialization::SerializationInfoEnumerator::New_ctor(::Array<::CsString*>* members, ::Array<::CsObject*>* info, ::Array<System::Type*>* types, int numItems) {
  return (SerializationInfoEnumerator*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization", "SerializationInfoEnumerator", members, info, types, numItems));
}
// Autogenerated method: System.Runtime.Serialization.SerializationInfoEnumerator.get_Current
System::Runtime::Serialization::SerializationEntry System::Runtime::Serialization::SerializationInfoEnumerator::get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Serialization::SerializationEntry>(this, "get_Current"));
}
// Autogenerated method: System.Runtime.Serialization.SerializationInfoEnumerator.get_Name
::CsString* System::Runtime::Serialization::SerializationInfoEnumerator::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Name"));
}
// Autogenerated method: System.Runtime.Serialization.SerializationInfoEnumerator.get_Value
::CsObject* System::Runtime::Serialization::SerializationInfoEnumerator::get_Value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "get_Value"));
}
// Autogenerated method: System.Runtime.Serialization.SerializationInfoEnumerator.get_ObjectType
System::Type* System::Runtime::Serialization::SerializationInfoEnumerator::get_ObjectType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_ObjectType"));
}
// Autogenerated method: System.Runtime.Serialization.SerializationInfoEnumerator.MoveNext
bool System::Runtime::Serialization::SerializationInfoEnumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
}
// Autogenerated method: System.Runtime.Serialization.SerializationInfoEnumerator.System.Collections.IEnumerator.get_Current
::CsObject* System::Runtime::Serialization::SerializationInfoEnumerator::System_Collections_IEnumerator_get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "System.Collections.IEnumerator.get_Current"));
}
// Autogenerated method: System.Runtime.Serialization.SerializationInfoEnumerator.Reset
void System::Runtime::Serialization::SerializationInfoEnumerator::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
void System::Runtime::Serialization::SerializationInfoEnumerator::System_Collections_IEnumerator_Reset() {
  Reset();
}
