// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.SerializationEntry
#include "System/Runtime/Serialization/SerializationEntry.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.SerializationEntry.get_Value
::CsObject* System::Runtime::Serialization::SerializationEntry::get_Value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(*this, "get_Value"));
}
// Autogenerated method: System.Runtime.Serialization.SerializationEntry.get_Name
::CsString* System::Runtime::Serialization::SerializationEntry::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(*this, "get_Name"));
}
// Autogenerated method: System.Runtime.Serialization.SerializationEntry..ctor
System::Runtime::Serialization::SerializationEntry* System::Runtime::Serialization::SerializationEntry::New_ctor(::CsString* entryName, ::CsObject* entryValue, System::Type* entryType) {
  return (SerializationEntry*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization", "SerializationEntry", entryName, entryValue, entryType));
}
