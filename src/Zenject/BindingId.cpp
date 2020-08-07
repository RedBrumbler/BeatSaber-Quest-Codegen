// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Zenject.BindingId..ctor
Zenject::BindingId* Zenject::BindingId::New_ctor(System::Type* type, ::Il2CppObject* identifier) {
  return (BindingId*)THROW_UNLESS(il2cpp_utils::New("Zenject", "BindingId", type, identifier));
}
// Autogenerated method: Zenject.BindingId.get_Type
System::Type* Zenject::BindingId::get_Type() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Type*>(*this, "get_Type"));
}
// Autogenerated method: Zenject.BindingId.set_Type
void Zenject::BindingId::set_Type(System::Type* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_Type", value));
}
// Autogenerated method: Zenject.BindingId.get_Identifier
::Il2CppObject* Zenject::BindingId::get_Identifier() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(*this, "get_Identifier"));
}
// Autogenerated method: Zenject.BindingId.set_Identifier
void Zenject::BindingId::set_Identifier(::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_Identifier", value));
}
// Autogenerated method: Zenject.BindingId.ToString
::Il2CppString* Zenject::BindingId::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString"));
}
// Autogenerated method: Zenject.BindingId.GetHashCode
int Zenject::BindingId::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
// Autogenerated method: Zenject.BindingId.Equals
bool Zenject::BindingId::Equals(::Il2CppObject* other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}
// Autogenerated method: Zenject.BindingId.Equals
bool Zenject::BindingId::Equals(Zenject::BindingId that) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", that));
}
// Autogenerated method: Zenject.BindingId.op_Equality
bool Zenject::operator ==(const Zenject::BindingId& left, const Zenject::BindingId& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Zenject", "BindingId", "op_Equality", left, right));
}
// Autogenerated method: Zenject.BindingId.op_Inequality
bool Zenject::operator !=(const Zenject::BindingId& left, const Zenject::BindingId& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Zenject", "BindingId", "op_Inequality", left, right));
}