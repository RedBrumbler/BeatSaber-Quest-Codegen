// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.GameObjectCreationParameters
#include "Zenject/GameObjectCreationParameters.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: System.Func`2
#include "System/Func_2.hpp"
// Including type: Zenject.InjectContext
#include "Zenject/InjectContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly Zenject.GameObjectCreationParameters Default
Zenject::GameObjectCreationParameters* Zenject::GameObjectCreationParameters::_get_Default() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Zenject::GameObjectCreationParameters*>("Zenject", "GameObjectCreationParameters", "Default"));
}
// Autogenerated static field setter
// Set static field: static public readonly Zenject.GameObjectCreationParameters Default
void Zenject::GameObjectCreationParameters::_set_Default(Zenject::GameObjectCreationParameters* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Zenject", "GameObjectCreationParameters", "Default", value));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.get_Name
::CsString* Zenject::GameObjectCreationParameters::get_Name() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_Name"));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.set_Name
void Zenject::GameObjectCreationParameters::set_Name(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Name", value));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.get_GroupName
::CsString* Zenject::GameObjectCreationParameters::get_GroupName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_GroupName"));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.set_GroupName
void Zenject::GameObjectCreationParameters::set_GroupName(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_GroupName", value));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.get_ParentTransform
UnityEngine::Transform* Zenject::GameObjectCreationParameters::get_ParentTransform() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Transform*>(this, "get_ParentTransform"));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.set_ParentTransform
void Zenject::GameObjectCreationParameters::set_ParentTransform(UnityEngine::Transform* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ParentTransform", value));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.get_ParentTransformGetter
System::Func_2<Zenject::InjectContext*, UnityEngine::Transform*>* Zenject::GameObjectCreationParameters::get_ParentTransformGetter() {
  return THROW_UNLESS((il2cpp_utils::RunMethod<System::Func_2<Zenject::InjectContext*, UnityEngine::Transform*>*>(this, "get_ParentTransformGetter")));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.set_ParentTransformGetter
void Zenject::GameObjectCreationParameters::set_ParentTransformGetter(System::Func_2<Zenject::InjectContext*, UnityEngine::Transform*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ParentTransformGetter", value));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.get_Position
System::Nullable_1<UnityEngine::Vector3> Zenject::GameObjectCreationParameters::get_Position() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Nullable_1<UnityEngine::Vector3>>(this, "get_Position"));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.set_Position
void Zenject::GameObjectCreationParameters::set_Position(System::Nullable_1<UnityEngine::Vector3> value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Position", value));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.get_Rotation
System::Nullable_1<UnityEngine::Quaternion> Zenject::GameObjectCreationParameters::get_Rotation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Nullable_1<UnityEngine::Quaternion>>(this, "get_Rotation"));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.set_Rotation
void Zenject::GameObjectCreationParameters::set_Rotation(System::Nullable_1<UnityEngine::Quaternion> value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Rotation", value));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.Equals
bool Zenject::GameObjectCreationParameters::Equals(Zenject::GameObjectCreationParameters* that) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", that));
}
// Autogenerated method: Zenject.GameObjectCreationParameters..cctor
void Zenject::GameObjectCreationParameters::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Zenject", "GameObjectCreationParameters", ".cctor"));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.GetHashCode
int Zenject::GameObjectCreationParameters::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.Equals
bool Zenject::GameObjectCreationParameters::Equals(::CsObject* other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", other));
}
// Autogenerated method: Zenject.GameObjectCreationParameters..ctor
Zenject::GameObjectCreationParameters* Zenject::GameObjectCreationParameters::New_ctor() {
  return (GameObjectCreationParameters*)THROW_UNLESS(il2cpp_utils::New("Zenject", "GameObjectCreationParameters"));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.op_Equality
bool Zenject::operator ==(Zenject::GameObjectCreationParameters* left, Zenject::GameObjectCreationParameters& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Zenject", "GameObjectCreationParameters", "op_Equality", left, &right));
}
// Autogenerated method: Zenject.GameObjectCreationParameters.op_Inequality
bool Zenject::operator !=(Zenject::GameObjectCreationParameters* left, Zenject::GameObjectCreationParameters& right) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("Zenject", "GameObjectCreationParameters", "op_Inequality", left, &right));
}
