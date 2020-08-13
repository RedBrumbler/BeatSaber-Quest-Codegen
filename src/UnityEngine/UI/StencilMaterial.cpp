// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.StencilMaterial
#include "UnityEngine/UI/StencilMaterial.hpp"
// Including type: UnityEngine.UI.StencilMaterial/MatEntry
#include "UnityEngine/UI/StencilMaterial_MatEntry.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.Material
#include "UnityEngine/Material.hpp"
// Including type: UnityEngine.Rendering.StencilOp
#include "UnityEngine/Rendering/StencilOp.hpp"
// Including type: UnityEngine.Rendering.CompareFunction
#include "UnityEngine/Rendering/CompareFunction.hpp"
// Including type: UnityEngine.Rendering.ColorWriteMask
#include "UnityEngine/Rendering/ColorWriteMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry> m_List
System::Collections::Generic::List_1<UnityEngine::UI::StencilMaterial::MatEntry*>* UnityEngine::UI::StencilMaterial::_get_m_List() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<UnityEngine::UI::StencilMaterial::MatEntry*>*>("UnityEngine.UI", "StencilMaterial", "m_List"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry> m_List
void UnityEngine::UI::StencilMaterial::_set_m_List(System::Collections::Generic::List_1<UnityEngine::UI::StencilMaterial::MatEntry*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.UI", "StencilMaterial", "m_List", value));
}
// Autogenerated method: UnityEngine.UI.StencilMaterial.Add
UnityEngine::Material* UnityEngine::UI::StencilMaterial::Add(UnityEngine::Material* baseMat, int stencilID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Material*>("UnityEngine.UI", "StencilMaterial", "Add", baseMat, stencilID));
}
// Autogenerated method: UnityEngine.UI.StencilMaterial.Add
UnityEngine::Material* UnityEngine::UI::StencilMaterial::Add(UnityEngine::Material* baseMat, int stencilID, UnityEngine::Rendering::StencilOp operation, UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine::Rendering::ColorWriteMask colorWriteMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Material*>("UnityEngine.UI", "StencilMaterial", "Add", baseMat, stencilID, operation, compareFunction, colorWriteMask));
}
// Autogenerated method: UnityEngine.UI.StencilMaterial.Add
UnityEngine::Material* UnityEngine::UI::StencilMaterial::Add(UnityEngine::Material* baseMat, int stencilID, UnityEngine::Rendering::StencilOp operation, UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine::Rendering::ColorWriteMask colorWriteMask, int readMask, int writeMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Material*>("UnityEngine.UI", "StencilMaterial", "Add", baseMat, stencilID, operation, compareFunction, colorWriteMask, readMask, writeMask));
}
// Autogenerated method: UnityEngine.UI.StencilMaterial.Remove
void UnityEngine::UI::StencilMaterial::Remove(UnityEngine::Material* customMat) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.UI", "StencilMaterial", "Remove", customMat));
}
// Autogenerated method: UnityEngine.UI.StencilMaterial.ClearAll
void UnityEngine::UI::StencilMaterial::ClearAll() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.UI", "StencilMaterial", "ClearAll"));
}
// Autogenerated method: UnityEngine.UI.StencilMaterial..cctor
void UnityEngine::UI::StencilMaterial::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.UI", "StencilMaterial", ".cctor"));
}
