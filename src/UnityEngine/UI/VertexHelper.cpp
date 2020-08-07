// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.VertexHelper
#include "UnityEngine/UI/VertexHelper.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.Mesh
#include "UnityEngine/Mesh.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
UnityEngine::Vector4 UnityEngine::UI::VertexHelper::_get_s_DefaultTangent() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Vector4>("UnityEngine.UI", "VertexHelper", "s_DefaultTangent"));
}
// Autogenerated static field setter
// Set static field: static private readonly UnityEngine.Vector4 s_DefaultTangent
void UnityEngine::UI::VertexHelper::_set_s_DefaultTangent(UnityEngine::Vector4 value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.UI", "VertexHelper", "s_DefaultTangent", value));
}
// Autogenerated static field getter
// Get static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
UnityEngine::Vector3 UnityEngine::UI::VertexHelper::_get_s_DefaultNormal() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Vector3>("UnityEngine.UI", "VertexHelper", "s_DefaultNormal"));
}
// Autogenerated static field setter
// Set static field: static private readonly UnityEngine.Vector3 s_DefaultNormal
void UnityEngine::UI::VertexHelper::_set_s_DefaultNormal(UnityEngine::Vector3 value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.UI", "VertexHelper", "s_DefaultNormal", value));
}
// Autogenerated method: UnityEngine.UI.VertexHelper..ctor
UnityEngine::UI::VertexHelper* UnityEngine::UI::VertexHelper::New_ctor(UnityEngine::Mesh* m) {
  return (VertexHelper*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.UI", "VertexHelper", m));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.InitializeListIfRequired
void UnityEngine::UI::VertexHelper::InitializeListIfRequired() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitializeListIfRequired"));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.Clear
void UnityEngine::UI::VertexHelper::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.get_currentVertCount
int UnityEngine::UI::VertexHelper::get_currentVertCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_currentVertCount"));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.get_currentIndexCount
int UnityEngine::UI::VertexHelper::get_currentIndexCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_currentIndexCount"));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.PopulateUIVertex
void UnityEngine::UI::VertexHelper::PopulateUIVertex(UnityEngine::UIVertex& vertex, int i) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PopulateUIVertex", vertex, i));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.SetUIVertex
void UnityEngine::UI::VertexHelper::SetUIVertex(UnityEngine::UIVertex vertex, int i) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetUIVertex", vertex, i));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.FillMesh
void UnityEngine::UI::VertexHelper::FillMesh(UnityEngine::Mesh* mesh) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FillMesh", mesh));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.AddVert
void UnityEngine::UI::VertexHelper::AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0, UnityEngine::Vector2 uv1, UnityEngine::Vector2 uv2, UnityEngine::Vector2 uv3, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddVert", position, color, uv0, uv1, uv2, uv3, normal, tangent));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.AddVert
void UnityEngine::UI::VertexHelper::AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0, UnityEngine::Vector2 uv1, UnityEngine::Vector3 normal, UnityEngine::Vector4 tangent) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddVert", position, color, uv0, uv1, normal, tangent));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.AddVert
void UnityEngine::UI::VertexHelper::AddVert(UnityEngine::Vector3 position, UnityEngine::Color32 color, UnityEngine::Vector2 uv0) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddVert", position, color, uv0));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.AddVert
void UnityEngine::UI::VertexHelper::AddVert(UnityEngine::UIVertex v) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddVert", v));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.AddTriangle
void UnityEngine::UI::VertexHelper::AddTriangle(int idx0, int idx1, int idx2) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddTriangle", idx0, idx1, idx2));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.AddUIVertexQuad
void UnityEngine::UI::VertexHelper::AddUIVertexQuad(::Array<UnityEngine::UIVertex>* verts) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddUIVertexQuad", verts));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.AddUIVertexStream
void UnityEngine::UI::VertexHelper::AddUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts, System::Collections::Generic::List_1<int>* indices) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddUIVertexStream", verts, indices));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.AddUIVertexTriangleStream
void UnityEngine::UI::VertexHelper::AddUIVertexTriangleStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* verts) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddUIVertexTriangleStream", verts));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.GetUIVertexStream
void UnityEngine::UI::VertexHelper::GetUIVertexStream(System::Collections::Generic::List_1<UnityEngine::UIVertex>* stream) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetUIVertexStream", stream));
}
// Autogenerated method: UnityEngine.UI.VertexHelper..cctor
void UnityEngine::UI::VertexHelper::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.UI", "VertexHelper", ".cctor"));
}
// Autogenerated method: UnityEngine.UI.VertexHelper..ctor
UnityEngine::UI::VertexHelper* UnityEngine::UI::VertexHelper::New_ctor() {
  return (VertexHelper*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.UI", "VertexHelper"));
}
// Autogenerated method: UnityEngine.UI.VertexHelper.Dispose
void UnityEngine::UI::VertexHelper::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void UnityEngine::UI::VertexHelper::System_IDisposable_Dispose() {
  Dispose();
}