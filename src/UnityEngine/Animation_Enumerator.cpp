// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Animation/Enumerator
#include "UnityEngine/Animation_Enumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Animation/Enumerator..ctor
UnityEngine::Animation::Enumerator* UnityEngine::Animation::Enumerator::New_ctor(UnityEngine::Animation* outer) {
  return (Animation::Enumerator*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "Animation/Enumerator", outer));
}
// Autogenerated method: UnityEngine.Animation/Enumerator.get_Current
::CsObject* UnityEngine::Animation::Enumerator::get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsObject*>(this, "get_Current"));
}
::CsObject* UnityEngine::Animation::Enumerator::System_Collections_IEnumerator_get_Current() {
  return get_Current();
}
// Autogenerated method: UnityEngine.Animation/Enumerator.MoveNext
bool UnityEngine::Animation::Enumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
}
// Autogenerated method: UnityEngine.Animation/Enumerator.Reset
void UnityEngine::Animation::Enumerator::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
void UnityEngine::Animation::Enumerator::System_Collections_IEnumerator_Reset() {
  Reset();
}
