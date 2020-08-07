// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.LayerMaskExtensions
#include "RootMotion/LayerMaskExtensions.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.LayerMaskExtensions.Contains
bool RootMotion::LayerMaskExtensions::Contains(UnityEngine::LayerMask mask, int layer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("RootMotion", "LayerMaskExtensions", "Contains", mask, layer));
}
// Autogenerated method: RootMotion.LayerMaskExtensions.Create
UnityEngine::LayerMask RootMotion::LayerMaskExtensions::Create(::Array<::Il2CppString*>* layerNames) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::LayerMask>("RootMotion", "LayerMaskExtensions", "Create", layerNames));
}
// Autogenerated method: RootMotion.LayerMaskExtensions.Create
UnityEngine::LayerMask RootMotion::LayerMaskExtensions::Create(::Array<int>* layerNumbers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::LayerMask>("RootMotion", "LayerMaskExtensions", "Create", layerNumbers));
}
// Autogenerated method: RootMotion.LayerMaskExtensions.NamesToMask
UnityEngine::LayerMask RootMotion::LayerMaskExtensions::NamesToMask(::Array<::Il2CppString*>* layerNames) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::LayerMask>("RootMotion", "LayerMaskExtensions", "NamesToMask", layerNames));
}
// Autogenerated method: RootMotion.LayerMaskExtensions.LayerNumbersToMask
UnityEngine::LayerMask RootMotion::LayerMaskExtensions::LayerNumbersToMask(::Array<int>* layerNumbers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::LayerMask>("RootMotion", "LayerMaskExtensions", "LayerNumbersToMask", layerNumbers));
}
// Autogenerated method: RootMotion.LayerMaskExtensions.Inverse
UnityEngine::LayerMask RootMotion::LayerMaskExtensions::Inverse(UnityEngine::LayerMask original) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::LayerMask>("RootMotion", "LayerMaskExtensions", "Inverse", original));
}
// Autogenerated method: RootMotion.LayerMaskExtensions.AddToMask
UnityEngine::LayerMask RootMotion::LayerMaskExtensions::AddToMask(UnityEngine::LayerMask original, ::Array<::Il2CppString*>* layerNames) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::LayerMask>("RootMotion", "LayerMaskExtensions", "AddToMask", original, layerNames));
}
// Autogenerated method: RootMotion.LayerMaskExtensions.RemoveFromMask
UnityEngine::LayerMask RootMotion::LayerMaskExtensions::RemoveFromMask(UnityEngine::LayerMask original, ::Array<::Il2CppString*>* layerNames) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::LayerMask>("RootMotion", "LayerMaskExtensions", "RemoveFromMask", original, layerNames));
}
// Autogenerated method: RootMotion.LayerMaskExtensions.MaskToNames
::Array<::Il2CppString*>* RootMotion::LayerMaskExtensions::MaskToNames(UnityEngine::LayerMask original) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>("RootMotion", "LayerMaskExtensions", "MaskToNames", original));
}
// Autogenerated method: RootMotion.LayerMaskExtensions.MaskToNumbers
::Array<int>* RootMotion::LayerMaskExtensions::MaskToNumbers(UnityEngine::LayerMask original) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<int>*>("RootMotion", "LayerMaskExtensions", "MaskToNumbers", original));
}
// Autogenerated method: RootMotion.LayerMaskExtensions.MaskToString
::Il2CppString* RootMotion::LayerMaskExtensions::MaskToString(UnityEngine::LayerMask original) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("RootMotion", "LayerMaskExtensions", "MaskToString", original));
}
// Autogenerated method: RootMotion.LayerMaskExtensions.MaskToString
::Il2CppString* RootMotion::LayerMaskExtensions::MaskToString(UnityEngine::LayerMask original, ::Il2CppString* delimiter) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("RootMotion", "LayerMaskExtensions", "MaskToString", original, delimiter));
}