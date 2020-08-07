// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.HashHelpers
#include "System/Collections/HashHelpers.hpp"
// Including type: System.Runtime.CompilerServices.ConditionalWeakTable`2
#include "System/Runtime/CompilerServices/ConditionalWeakTable_2.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Int32[] primes
::Array<int>* System::Collections::HashHelpers::_get_primes() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<int>*>("System.Collections", "HashHelpers", "primes"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Int32[] primes
void System::Collections::HashHelpers::_set_primes(::Array<int>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Collections", "HashHelpers", "primes", value));
}
// Autogenerated static field getter
// Get static field: static private System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> s_SerializationInfoTable
System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*>* System::Collections::HashHelpers::_get_s_SerializationInfoTable() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*>*>("System.Collections", "HashHelpers", "s_SerializationInfoTable")));
}
// Autogenerated static field setter
// Set static field: static private System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> s_SerializationInfoTable
void System::Collections::HashHelpers::_set_s_SerializationInfoTable(System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Collections", "HashHelpers", "s_SerializationInfoTable", value));
}
// Autogenerated method: System.Collections.HashHelpers.get_SerializationInfoTable
System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*>* System::Collections::HashHelpers::get_SerializationInfoTable() {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*>*>("System.Collections", "HashHelpers", "get_SerializationInfoTable")));
}
// Autogenerated method: System.Collections.HashHelpers.IsPrime
bool System::Collections::HashHelpers::IsPrime(int candidate) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Collections", "HashHelpers", "IsPrime", candidate));
}
// Autogenerated method: System.Collections.HashHelpers.GetPrime
int System::Collections::HashHelpers::GetPrime(int min) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Collections", "HashHelpers", "GetPrime", min));
}
// Autogenerated method: System.Collections.HashHelpers.ExpandPrime
int System::Collections::HashHelpers::ExpandPrime(int oldSize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Collections", "HashHelpers", "ExpandPrime", oldSize));
}
// Autogenerated method: System.Collections.HashHelpers..cctor
void System::Collections::HashHelpers::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Collections", "HashHelpers", ".cctor"));
}