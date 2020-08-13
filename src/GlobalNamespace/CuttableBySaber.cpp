// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CuttableBySaber
#include "GlobalNamespace/CuttableBySaber.hpp"
// Including type: CuttableBySaber/WasCutBySaberDelegate
#include "GlobalNamespace/CuttableBySaber_WasCutBySaberDelegate.hpp"
// Including type: Saber
#include "GlobalNamespace/Saber.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: CuttableBySaber.add_wasCutBySaberEvent
void GlobalNamespace::CuttableBySaber::add_wasCutBySaberEvent(GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_wasCutBySaberEvent", value));
}
// Autogenerated method: CuttableBySaber.remove_wasCutBySaberEvent
void GlobalNamespace::CuttableBySaber::remove_wasCutBySaberEvent(GlobalNamespace::CuttableBySaber::WasCutBySaberDelegate* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_wasCutBySaberEvent", value));
}
// Autogenerated method: CuttableBySaber.CallWasCutBySaberEvent
void GlobalNamespace::CuttableBySaber::CallWasCutBySaberEvent(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CallWasCutBySaberEvent", saber, cutPoint, orientation, cutDirVec));
}
// Autogenerated method: CuttableBySaber.get_canBeCut
bool GlobalNamespace::CuttableBySaber::get_canBeCut() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_canBeCut"));
}
// Autogenerated method: CuttableBySaber.set_canBeCut
void GlobalNamespace::CuttableBySaber::set_canBeCut(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_canBeCut", value));
}
// Autogenerated method: CuttableBySaber.get_radius
float GlobalNamespace::CuttableBySaber::get_radius() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_radius"));
}
// Autogenerated method: CuttableBySaber.Cut
void GlobalNamespace::CuttableBySaber::Cut(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Cut", saber, cutPoint, orientation, cutDirVec));
}
// Autogenerated method: CuttableBySaber..ctor
GlobalNamespace::CuttableBySaber* GlobalNamespace::CuttableBySaber::New_ctor() {
  return (CuttableBySaber*)THROW_UNLESS(il2cpp_utils::New("", "CuttableBySaber"));
}
