// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SaberTrailRenderer
#include "GlobalNamespace/SaberTrailRenderer.hpp"
// Including type: UnityEngine.MeshRenderer
#include "UnityEngine/MeshRenderer.hpp"
// Including type: UnityEngine.MeshFilter
#include "UnityEngine/MeshFilter.hpp"
// Including type: UnityEngine.Mesh
#include "UnityEngine/Mesh.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: TrailElementCollection
#include "GlobalNamespace/TrailElementCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly UnityEngine.Bounds _bounds
UnityEngine::Bounds GlobalNamespace::SaberTrailRenderer::_get__bounds() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Bounds>("", "SaberTrailRenderer", "_bounds"));
}
// Autogenerated static field setter
// Set static field: static private readonly UnityEngine.Bounds _bounds
void GlobalNamespace::SaberTrailRenderer::_set__bounds(UnityEngine::Bounds value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SaberTrailRenderer", "_bounds", value));
}
// Autogenerated method: SaberTrailRenderer.Init
void GlobalNamespace::SaberTrailRenderer::Init(float trailWidth, float trailDuration, int granularity, float whiteSectionMaxDuration) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", trailWidth, trailDuration, granularity, whiteSectionMaxDuration));
}
// Autogenerated method: SaberTrailRenderer.OnDestroy
void GlobalNamespace::SaberTrailRenderer::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: SaberTrailRenderer.OnValidate
void GlobalNamespace::SaberTrailRenderer::OnValidate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnValidate"));
}
// Autogenerated method: SaberTrailRenderer.OnEnable
void GlobalNamespace::SaberTrailRenderer::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: SaberTrailRenderer.OnDisable
void GlobalNamespace::SaberTrailRenderer::OnDisable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDisable"));
}
// Autogenerated method: SaberTrailRenderer.SetTrailWidth
void GlobalNamespace::SaberTrailRenderer::SetTrailWidth(float width) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetTrailWidth", width));
}
// Autogenerated method: SaberTrailRenderer.UpdateMesh
void GlobalNamespace::SaberTrailRenderer::UpdateMesh(GlobalNamespace::TrailElementCollection* trailElementCollection, UnityEngine::Color color) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateMesh", trailElementCollection, color));
}
// Autogenerated method: SaberTrailRenderer.UpdateVertices
void GlobalNamespace::SaberTrailRenderer::UpdateVertices(GlobalNamespace::TrailElementCollection* trailElementCollection, UnityEngine::Color color) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateVertices", trailElementCollection, color));
}
// Autogenerated method: SaberTrailRenderer.UpdateIndices
void GlobalNamespace::SaberTrailRenderer::UpdateIndices() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateIndices"));
}
// Autogenerated method: SaberTrailRenderer..ctor
GlobalNamespace::SaberTrailRenderer* GlobalNamespace::SaberTrailRenderer::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SaberTrailRenderer*>());
}
// Autogenerated method: SaberTrailRenderer..cctor
void GlobalNamespace::SaberTrailRenderer::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "SaberTrailRenderer", ".cctor"));
}