// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo
#include "System/Runtime/Serialization/Formatters/Binary/BinaryAssemblyInfo.hpp"
// Including type: System.Reflection.Assembly
#include "System/Reflection/Assembly.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo..ctor
System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::New_ctor(::Il2CppString* assemblyString) {
  return (BinaryAssemblyInfo*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization.Formatters.Binary", "BinaryAssemblyInfo", assemblyString));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo..ctor
System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::New_ctor(::Il2CppString* assemblyString, System::Reflection::Assembly* assembly) {
  return (BinaryAssemblyInfo*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Serialization.Formatters.Binary", "BinaryAssemblyInfo", assemblyString, assembly));
}
// Autogenerated method: System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo.GetAssembly
System::Reflection::Assembly* System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo::GetAssembly() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::Assembly*>(this, "GetAssembly"));
}