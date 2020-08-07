// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapCharacteristicsViewController
#include "GlobalNamespace/BeatmapCharacteristicsViewController.hpp"
// Including type: BeatmapCharacteristicsTableView
#include "GlobalNamespace/BeatmapCharacteristicsTableView.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Including type: BeatmapCharacteristicCollectionSO
#include "GlobalNamespace/BeatmapCharacteristicCollectionSO.hpp"
// Including type: HMUI.ViewController/ActivationType
#include "HMUI/ViewController_ActivationType.hpp"
// Including type: HMUI.ViewController/DeactivationType
#include "HMUI/ViewController_DeactivationType.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapCharacteristicsViewController.add_didSelectBeatmapCharacteristicEvent
void GlobalNamespace::BeatmapCharacteristicsViewController::add_didSelectBeatmapCharacteristicEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didSelectBeatmapCharacteristicEvent", value));
}
// Autogenerated method: BeatmapCharacteristicsViewController.remove_didSelectBeatmapCharacteristicEvent
void GlobalNamespace::BeatmapCharacteristicsViewController::remove_didSelectBeatmapCharacteristicEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didSelectBeatmapCharacteristicEvent", value));
}
// Autogenerated method: BeatmapCharacteristicsViewController.get_beatmapCharacteristicCollection
GlobalNamespace::BeatmapCharacteristicCollectionSO* GlobalNamespace::BeatmapCharacteristicsViewController::get_beatmapCharacteristicCollection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapCharacteristicCollectionSO*>(this, "get_beatmapCharacteristicCollection"));
}
// Autogenerated method: BeatmapCharacteristicsViewController.get_selectedBeatmapCharacteristic
GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::BeatmapCharacteristicsViewController::get_selectedBeatmapCharacteristic() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapCharacteristicSO*>(this, "get_selectedBeatmapCharacteristic"));
}
// Autogenerated method: BeatmapCharacteristicsViewController.SetData
void GlobalNamespace::BeatmapCharacteristicsViewController::SetData(GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, int selectedCharacteristicNum) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetData", beatmapCharacteristicCollection, selectedCharacteristicNum));
}
// Autogenerated method: BeatmapCharacteristicsViewController.HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic
void GlobalNamespace::BeatmapCharacteristicsViewController::HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleBeatmapCharacteristicsTableViewDidSelecteCharacteristic", beatmapCharacteristic));
}
// Autogenerated method: BeatmapCharacteristicsViewController.DidActivate
void GlobalNamespace::BeatmapCharacteristicsViewController::DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidActivate", firstActivation, activationType));
}
// Autogenerated method: BeatmapCharacteristicsViewController.DidDeactivate
void GlobalNamespace::BeatmapCharacteristicsViewController::DidDeactivate(HMUI::ViewController::DeactivationType deactivationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidDeactivate", deactivationType));
}
// Autogenerated method: BeatmapCharacteristicsViewController..ctor
GlobalNamespace::BeatmapCharacteristicsViewController* GlobalNamespace::BeatmapCharacteristicsViewController::New_ctor() {
  return (BeatmapCharacteristicsViewController*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapCharacteristicsViewController"));
}