// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.FastResourceComparer
#include "System/Resources/FastResourceComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly System.Resources.FastResourceComparer Default
System::Resources::FastResourceComparer* System::Resources::FastResourceComparer::_get_Default() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Resources::FastResourceComparer*>("System.Resources", "FastResourceComparer", "Default"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Resources.FastResourceComparer Default
void System::Resources::FastResourceComparer::_set_Default(System::Resources::FastResourceComparer* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Resources", "FastResourceComparer", "Default", value));
}
// Autogenerated method: System.Resources.FastResourceComparer.HashFunction
int System::Resources::FastResourceComparer::HashFunction(::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Resources", "FastResourceComparer", "HashFunction", key));
}
// Autogenerated method: System.Resources.FastResourceComparer.CompareOrdinal
int System::Resources::FastResourceComparer::CompareOrdinal(::Il2CppString* a, ::Array<uint8_t>* bytes, int bCharLength) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Resources", "FastResourceComparer", "CompareOrdinal", a, bytes, bCharLength));
}
// Autogenerated method: System.Resources.FastResourceComparer.CompareOrdinal
int System::Resources::FastResourceComparer::CompareOrdinal(::Array<uint8_t>* bytes, int aCharLength, ::Il2CppString* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Resources", "FastResourceComparer", "CompareOrdinal", bytes, aCharLength, b));
}
// Autogenerated method: System.Resources.FastResourceComparer.CompareOrdinal
int System::Resources::FastResourceComparer::CompareOrdinal(uint8_t* a, int byteLen, ::Il2CppString* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Resources", "FastResourceComparer", "CompareOrdinal", a, byteLen, b));
}
// Autogenerated method: System.Resources.FastResourceComparer..cctor
void System::Resources::FastResourceComparer::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Resources", "FastResourceComparer", ".cctor"));
}
// Autogenerated method: System.Resources.FastResourceComparer.GetHashCode
int System::Resources::FastResourceComparer::GetHashCode(::Il2CppObject* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", key));
}
int System::Resources::FastResourceComparer::System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* key) {
  return GetHashCode(key);
}
// Autogenerated method: System.Resources.FastResourceComparer.GetHashCode
int System::Resources::FastResourceComparer::GetHashCode(::Il2CppString* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", key));
}
// Autogenerated method: System.Resources.FastResourceComparer.Compare
int System::Resources::FastResourceComparer::Compare(::Il2CppObject* a, ::Il2CppObject* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", a, b));
}
int System::Resources::FastResourceComparer::System_Collections_IComparer_Compare(::Il2CppObject* a, ::Il2CppObject* b) {
  return Compare(a, b);
}
// Autogenerated method: System.Resources.FastResourceComparer.Compare
int System::Resources::FastResourceComparer::Compare(::Il2CppString* a, ::Il2CppString* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", a, b));
}
// Autogenerated method: System.Resources.FastResourceComparer.Equals
bool System::Resources::FastResourceComparer::Equals(::Il2CppString* a, ::Il2CppString* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", a, b));
}
// Autogenerated method: System.Resources.FastResourceComparer.Equals
bool System::Resources::FastResourceComparer::Equals(::Il2CppObject* a, ::Il2CppObject* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", a, b));
}
bool System::Resources::FastResourceComparer::System_Collections_IEqualityComparer_Equals(::Il2CppObject* a, ::Il2CppObject* b) {
  return Equals(a, b);
}
// Autogenerated method: System.Resources.FastResourceComparer..ctor
System::Resources::FastResourceComparer* System::Resources::FastResourceComparer::New_ctor() {
  return (FastResourceComparer*)THROW_UNLESS(il2cpp_utils::New("System.Resources", "FastResourceComparer"));
}