// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_MaterialManager
#include "TMPro/TMP_MaterialManager.hpp"
// Including type: TMPro.TMP_MaterialManager/FallbackMaterial
#include "TMPro/TMP_MaterialManager_FallbackMaterial.hpp"
// Including type: TMPro.TMP_MaterialManager/MaskingMaterial
#include "TMPro/TMP_MaterialManager_MaskingMaterial.hpp"
// Including type: TMPro.TMP_MaterialManager/<>c__DisplayClass10_0
#include "TMPro/TMP_MaterialManager_--c__DisplayClass10_0.hpp"
// Including type: TMPro.TMP_MaterialManager/<>c__DisplayClass12_0
#include "TMPro/TMP_MaterialManager_--c__DisplayClass12_0.hpp"
// Including type: TMPro.TMP_MaterialManager/<>c__DisplayClass13_0
#include "TMPro/TMP_MaterialManager_--c__DisplayClass13_0.hpp"
// Including type: TMPro.TMP_MaterialManager/<>c__DisplayClass14_0
#include "TMPro/TMP_MaterialManager_--c__DisplayClass14_0.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: UnityEngine.Material
#include "UnityEngine/Material.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: UnityEngine.UI.MaskableGraphic
#include "UnityEngine/UI/MaskableGraphic.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/MaskingMaterial> m_materialList
System::Collections::Generic::List_1<TMPro::TMP_MaterialManager::MaskingMaterial*>* TMPro::TMP_MaterialManager::_get_m_materialList() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<TMPro::TMP_MaterialManager::MaskingMaterial*>*>("TMPro", "TMP_MaterialManager", "m_materialList"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/MaskingMaterial> m_materialList
void TMPro::TMP_MaterialManager::_set_m_materialList(System::Collections::Generic::List_1<TMPro::TMP_MaterialManager::MaskingMaterial*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_MaterialManager", "m_materialList", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<System.Int64,TMPro.TMP_MaterialManager/FallbackMaterial> m_fallbackMaterials
System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_MaterialManager::FallbackMaterial*>* TMPro::TMP_MaterialManager::_get_m_fallbackMaterials() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_MaterialManager::FallbackMaterial*>*>("TMPro", "TMP_MaterialManager", "m_fallbackMaterials")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<System.Int64,TMPro.TMP_MaterialManager/FallbackMaterial> m_fallbackMaterials
void TMPro::TMP_MaterialManager::_set_m_fallbackMaterials(System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_MaterialManager::FallbackMaterial*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_MaterialManager", "m_fallbackMaterials", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.Int64> m_fallbackMaterialLookup
System::Collections::Generic::Dictionary_2<int, int64_t>* TMPro::TMP_MaterialManager::_get_m_fallbackMaterialLookup() {
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<int, int64_t>*>("TMPro", "TMP_MaterialManager", "m_fallbackMaterialLookup")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.Int64> m_fallbackMaterialLookup
void TMPro::TMP_MaterialManager::_set_m_fallbackMaterialLookup(System::Collections::Generic::Dictionary_2<int, int64_t>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_MaterialManager", "m_fallbackMaterialLookup", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/FallbackMaterial> m_fallbackCleanupList
System::Collections::Generic::List_1<TMPro::TMP_MaterialManager::FallbackMaterial*>* TMPro::TMP_MaterialManager::_get_m_fallbackCleanupList() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<TMPro::TMP_MaterialManager::FallbackMaterial*>*>("TMPro", "TMP_MaterialManager", "m_fallbackCleanupList"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/FallbackMaterial> m_fallbackCleanupList
void TMPro::TMP_MaterialManager::_set_m_fallbackCleanupList(System::Collections::Generic::List_1<TMPro::TMP_MaterialManager::FallbackMaterial*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_MaterialManager", "m_fallbackCleanupList", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean isFallbackListDirty
bool TMPro::TMP_MaterialManager::_get_isFallbackListDirty() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("TMPro", "TMP_MaterialManager", "isFallbackListDirty"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean isFallbackListDirty
void TMPro::TMP_MaterialManager::_set_isFallbackListDirty(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("TMPro", "TMP_MaterialManager", "isFallbackListDirty", value));
}
// Autogenerated method: TMPro.TMP_MaterialManager..cctor
void TMPro::TMP_MaterialManager::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", ".cctor"));
}
// Autogenerated method: TMPro.TMP_MaterialManager.OnPreRender
void TMPro::TMP_MaterialManager::OnPreRender(UnityEngine::Camera* cam) {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", "OnPreRender", cam));
}
// Autogenerated method: TMPro.TMP_MaterialManager.OnPreRenderCanvas
void TMPro::TMP_MaterialManager::OnPreRenderCanvas() {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", "OnPreRenderCanvas"));
}
// Autogenerated method: TMPro.TMP_MaterialManager.GetStencilMaterial
UnityEngine::Material* TMPro::TMP_MaterialManager::GetStencilMaterial(UnityEngine::Material* baseMaterial, int stencilID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Material*>("TMPro", "TMP_MaterialManager", "GetStencilMaterial", baseMaterial, stencilID));
}
// Autogenerated method: TMPro.TMP_MaterialManager.ReleaseStencilMaterial
void TMPro::TMP_MaterialManager::ReleaseStencilMaterial(UnityEngine::Material* stencilMaterial) {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", "ReleaseStencilMaterial", stencilMaterial));
}
// Autogenerated method: TMPro.TMP_MaterialManager.GetBaseMaterial
UnityEngine::Material* TMPro::TMP_MaterialManager::GetBaseMaterial(UnityEngine::Material* stencilMaterial) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Material*>("TMPro", "TMP_MaterialManager", "GetBaseMaterial", stencilMaterial));
}
// Autogenerated method: TMPro.TMP_MaterialManager.SetStencil
UnityEngine::Material* TMPro::TMP_MaterialManager::SetStencil(UnityEngine::Material* material, int stencilID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Material*>("TMPro", "TMP_MaterialManager", "SetStencil", material, stencilID));
}
// Autogenerated method: TMPro.TMP_MaterialManager.AddMaskingMaterial
void TMPro::TMP_MaterialManager::AddMaskingMaterial(UnityEngine::Material* baseMaterial, UnityEngine::Material* stencilMaterial, int stencilID) {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", "AddMaskingMaterial", baseMaterial, stencilMaterial, stencilID));
}
// Autogenerated method: TMPro.TMP_MaterialManager.RemoveStencilMaterial
void TMPro::TMP_MaterialManager::RemoveStencilMaterial(UnityEngine::Material* stencilMaterial) {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", "RemoveStencilMaterial", stencilMaterial));
}
// Autogenerated method: TMPro.TMP_MaterialManager.ReleaseBaseMaterial
void TMPro::TMP_MaterialManager::ReleaseBaseMaterial(UnityEngine::Material* baseMaterial) {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", "ReleaseBaseMaterial", baseMaterial));
}
// Autogenerated method: TMPro.TMP_MaterialManager.ClearMaterials
void TMPro::TMP_MaterialManager::ClearMaterials() {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", "ClearMaterials"));
}
// Autogenerated method: TMPro.TMP_MaterialManager.GetStencilID
int TMPro::TMP_MaterialManager::GetStencilID(UnityEngine::GameObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("TMPro", "TMP_MaterialManager", "GetStencilID", obj));
}
// Autogenerated method: TMPro.TMP_MaterialManager.GetMaterialForRendering
UnityEngine::Material* TMPro::TMP_MaterialManager::GetMaterialForRendering(UnityEngine::UI::MaskableGraphic* graphic, UnityEngine::Material* baseMaterial) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Material*>("TMPro", "TMP_MaterialManager", "GetMaterialForRendering", graphic, baseMaterial));
}
// Autogenerated method: TMPro.TMP_MaterialManager.FindRootSortOverrideCanvas
UnityEngine::Transform* TMPro::TMP_MaterialManager::FindRootSortOverrideCanvas(UnityEngine::Transform* start) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Transform*>("TMPro", "TMP_MaterialManager", "FindRootSortOverrideCanvas", start));
}
// Autogenerated method: TMPro.TMP_MaterialManager.GetFallbackMaterial
UnityEngine::Material* TMPro::TMP_MaterialManager::GetFallbackMaterial(UnityEngine::Material* sourceMaterial, UnityEngine::Material* targetMaterial) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Material*>("TMPro", "TMP_MaterialManager", "GetFallbackMaterial", sourceMaterial, targetMaterial));
}
// Autogenerated method: TMPro.TMP_MaterialManager.AddFallbackMaterialReference
void TMPro::TMP_MaterialManager::AddFallbackMaterialReference(UnityEngine::Material* targetMaterial) {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", "AddFallbackMaterialReference", targetMaterial));
}
// Autogenerated method: TMPro.TMP_MaterialManager.RemoveFallbackMaterialReference
void TMPro::TMP_MaterialManager::RemoveFallbackMaterialReference(UnityEngine::Material* targetMaterial) {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", "RemoveFallbackMaterialReference", targetMaterial));
}
// Autogenerated method: TMPro.TMP_MaterialManager.CleanupFallbackMaterials
void TMPro::TMP_MaterialManager::CleanupFallbackMaterials() {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", "CleanupFallbackMaterials"));
}
// Autogenerated method: TMPro.TMP_MaterialManager.ReleaseFallbackMaterial
void TMPro::TMP_MaterialManager::ReleaseFallbackMaterial(UnityEngine::Material* fallackMaterial) {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", "ReleaseFallbackMaterial", fallackMaterial));
}
// Autogenerated method: TMPro.TMP_MaterialManager.CopyMaterialPresetProperties
void TMPro::TMP_MaterialManager::CopyMaterialPresetProperties(UnityEngine::Material* source, UnityEngine::Material* destination) {
  THROW_UNLESS(il2cpp_utils::RunMethod("TMPro", "TMP_MaterialManager", "CopyMaterialPresetProperties", source, destination));
}