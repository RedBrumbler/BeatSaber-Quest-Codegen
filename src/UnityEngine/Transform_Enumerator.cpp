// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Transform/Enumerator
#include "UnityEngine/Transform_Enumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Transform/Enumerator..ctor
UnityEngine::Transform::Enumerator* UnityEngine::Transform::Enumerator::New_ctor(UnityEngine::Transform* outer) {
  return (Transform::Enumerator*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "Transform/Enumerator", outer));
}
// Autogenerated method: UnityEngine.Transform/Enumerator.get_Current
::Il2CppObject* UnityEngine::Transform::Enumerator::get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_Current"));
}
::Il2CppObject* UnityEngine::Transform::Enumerator::System_Collections_IEnumerator_get_Current() {
  return get_Current();
}
// Autogenerated method: UnityEngine.Transform/Enumerator.MoveNext
bool UnityEngine::Transform::Enumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
}
// Autogenerated method: UnityEngine.Transform/Enumerator.Reset
void UnityEngine::Transform::Enumerator::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
void UnityEngine::Transform::Enumerator::System_Collections_IEnumerator_Reset() {
  Reset();
}