// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Avatar
#include "UnityEngine/Avatar.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Avatar.get_isValid
bool UnityEngine::Avatar::get_isValid() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isValid"));
}
// Autogenerated method: UnityEngine.Avatar.get_isHuman
bool UnityEngine::Avatar::get_isHuman() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isHuman"));
}
// Autogenerated method: UnityEngine.Avatar.GetAxisLength
float UnityEngine::Avatar::GetAxisLength(int humanId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetAxisLength", humanId));
}
// Autogenerated method: UnityEngine.Avatar.GetPostRotation
UnityEngine::Quaternion UnityEngine::Avatar::GetPostRotation(int humanId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "GetPostRotation", humanId));
}
// Autogenerated method: UnityEngine.Avatar.Internal_GetAxisLength
float UnityEngine::Avatar::Internal_GetAxisLength(int humanId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "Internal_GetAxisLength", humanId));
}
// Autogenerated method: UnityEngine.Avatar.Internal_GetPostRotation
UnityEngine::Quaternion UnityEngine::Avatar::Internal_GetPostRotation(int humanId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "Internal_GetPostRotation", humanId));
}
// Autogenerated method: UnityEngine.Avatar.Internal_GetPostRotation_Injected
void UnityEngine::Avatar::Internal_GetPostRotation_Injected(int humanId, UnityEngine::Quaternion& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Internal_GetPostRotation_Injected", humanId, ret));
}
// Autogenerated method: UnityEngine.Avatar..ctor
UnityEngine::Avatar* UnityEngine::Avatar::New_ctor() {
  return (Avatar*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "Avatar"));
}
