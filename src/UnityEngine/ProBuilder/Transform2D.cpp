// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Transform2D
#include "UnityEngine/ProBuilder/Transform2D.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.Transform2D..ctor
UnityEngine::ProBuilder::Transform2D* UnityEngine::ProBuilder::Transform2D::New_ctor(UnityEngine::Vector2 position, float rotation, UnityEngine::Vector2 scale) {
  return (Transform2D*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder", "Transform2D", position, rotation, scale));
}
// Autogenerated method: UnityEngine.ProBuilder.Transform2D.TransformPoint
UnityEngine::Vector2 UnityEngine::ProBuilder::Transform2D::TransformPoint(UnityEngine::Vector2 p) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>(this, "TransformPoint", p));
}
// Autogenerated method: UnityEngine.ProBuilder.Transform2D.ToString
::CsString* UnityEngine::ProBuilder::Transform2D::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "ToString"));
}
