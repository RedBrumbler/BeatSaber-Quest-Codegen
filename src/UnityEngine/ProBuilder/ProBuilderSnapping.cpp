// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.ProBuilder.ProBuilderSnapping
#include "UnityEngine/ProBuilder/ProBuilderSnapping.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ProBuilder.ProBuilderMesh
#include "UnityEngine/ProBuilder/ProBuilderMesh.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.Ray
#include "UnityEngine/Ray.hpp"
// Including type: UnityEngine.ProBuilder.Vector3Mask
#include "UnityEngine/ProBuilder/Vector3Mask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single k_MaxRaySnapDistance
float UnityEngine::ProBuilder::ProBuilderSnapping::_get_k_MaxRaySnapDistance() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("UnityEngine.ProBuilder", "ProBuilderSnapping", "k_MaxRaySnapDistance"));
}
// Autogenerated static field setter
// Set static field: static private System.Single k_MaxRaySnapDistance
void UnityEngine::ProBuilder::ProBuilderSnapping::_set_k_MaxRaySnapDistance(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.ProBuilder", "ProBuilderSnapping", "k_MaxRaySnapDistance", value));
}
// Autogenerated method: UnityEngine.ProBuilder.ProBuilderSnapping.SnapValue
UnityEngine::Vector3 UnityEngine::ProBuilder::ProBuilderSnapping::SnapValue(UnityEngine::Vector3 vertex, float snpVal) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine.ProBuilder", "ProBuilderSnapping", "SnapValue", vertex, snpVal));
}
// Autogenerated method: UnityEngine.ProBuilder.ProBuilderSnapping.SnapValue
float UnityEngine::ProBuilder::ProBuilderSnapping::SnapValue(float val, float snpVal) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("UnityEngine.ProBuilder", "ProBuilderSnapping", "SnapValue", val, snpVal));
}
// Autogenerated method: UnityEngine.ProBuilder.ProBuilderSnapping.SnapValue
UnityEngine::Vector3 UnityEngine::ProBuilder::ProBuilderSnapping::SnapValue(UnityEngine::Vector3 vertex, UnityEngine::Vector3 snap) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine.ProBuilder", "ProBuilderSnapping", "SnapValue", vertex, snap));
}
// Autogenerated method: UnityEngine.ProBuilder.ProBuilderSnapping.SnapVertices
void UnityEngine::ProBuilder::ProBuilderSnapping::SnapVertices(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<int>* indexes, UnityEngine::Vector3 snap) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder", "ProBuilderSnapping", "SnapVertices", mesh, indexes, snap));
}
// Autogenerated method: UnityEngine.ProBuilder.ProBuilderSnapping.GetSnappingMaskBasedOnNormalVector
UnityEngine::Vector3 UnityEngine::ProBuilder::ProBuilderSnapping::GetSnappingMaskBasedOnNormalVector(UnityEngine::Vector3 normal) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine.ProBuilder", "ProBuilderSnapping", "GetSnappingMaskBasedOnNormalVector", normal));
}
// Autogenerated method: UnityEngine.ProBuilder.ProBuilderSnapping.SnapValueOnRay
UnityEngine::Vector3 UnityEngine::ProBuilder::ProBuilderSnapping::SnapValueOnRay(UnityEngine::Ray ray, float distance, float snap, UnityEngine::ProBuilder::Vector3Mask mask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine.ProBuilder", "ProBuilderSnapping", "SnapValueOnRay", ray, distance, snap, mask));
}