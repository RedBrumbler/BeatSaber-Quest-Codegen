// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PracticeViewController
#include "GlobalNamespace/PracticeViewController.hpp"
// Including type: HMUI.TimeSlider
#include "HMUI/TimeSlider.hpp"
// Including type: HMUI.PercentSlider
#include "HMUI/PercentSlider.hpp"
// Including type: TMPro.TextMeshProUGUI
#include "TMPro/TextMeshProUGUI.hpp"
// Including type: UnityEngine.UI.Button
#include "UnityEngine/UI/Button.hpp"
// Including type: PlayerDataModel
#include "GlobalNamespace/PlayerDataModel.hpp"
// Including type: SongPreviewPlayer
#include "GlobalNamespace/SongPreviewPlayer.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: PracticeSettings
#include "GlobalNamespace/PracticeSettings.hpp"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
// Including type: HMUI.RangeValuesTextSlider
#include "HMUI/RangeValuesTextSlider.hpp"
// Including type: HMUI.ViewController/ActivationType
#include "HMUI/ViewController_ActivationType.hpp"
// Including type: HMUI.ViewController/DeactivationType
#include "HMUI/ViewController_DeactivationType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kWaitBeforePlayPreviewAfterPreviewStartValueChanged
float GlobalNamespace::PracticeViewController::_get_kWaitBeforePlayPreviewAfterPreviewStartValueChanged() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "PracticeViewController", "kWaitBeforePlayPreviewAfterPreviewStartValueChanged"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kWaitBeforePlayPreviewAfterPreviewStartValueChanged
void GlobalNamespace::PracticeViewController::_set_kWaitBeforePlayPreviewAfterPreviewStartValueChanged(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "PracticeViewController", "kWaitBeforePlayPreviewAfterPreviewStartValueChanged", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kMinValueChangeToInstantPlayPreview
float GlobalNamespace::PracticeViewController::_get_kMinValueChangeToInstantPlayPreview() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "PracticeViewController", "kMinValueChangeToInstantPlayPreview"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kMinValueChangeToInstantPlayPreview
void GlobalNamespace::PracticeViewController::_set_kMinValueChangeToInstantPlayPreview(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "PracticeViewController", "kMinValueChangeToInstantPlayPreview", value));
}
// Autogenerated method: PracticeViewController.add_didPressPlayButtonEvent
void GlobalNamespace::PracticeViewController::add_didPressPlayButtonEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_didPressPlayButtonEvent", value));
}
// Autogenerated method: PracticeViewController.remove_didPressPlayButtonEvent
void GlobalNamespace::PracticeViewController::remove_didPressPlayButtonEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_didPressPlayButtonEvent", value));
}
// Autogenerated method: PracticeViewController.get_practiceSettings
GlobalNamespace::PracticeSettings* GlobalNamespace::PracticeViewController::get_practiceSettings() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::PracticeSettings*>(this, "get_practiceSettings"));
}
// Autogenerated method: PracticeViewController.Init
void GlobalNamespace::PracticeViewController::Init(GlobalNamespace::IBeatmapLevel* level) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", level));
}
// Autogenerated method: PracticeViewController.PlayPreview
void GlobalNamespace::PracticeViewController::PlayPreview() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PlayPreview"));
}
// Autogenerated method: PracticeViewController.RefreshUI
void GlobalNamespace::PracticeViewController::RefreshUI() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RefreshUI"));
}
// Autogenerated method: PracticeViewController.HandleSpeedSliderValueDidChange
void GlobalNamespace::PracticeViewController::HandleSpeedSliderValueDidChange(HMUI::RangeValuesTextSlider* slider, float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleSpeedSliderValueDidChange", slider, value));
}
// Autogenerated method: PracticeViewController.HandleSongStartSliderValueDidChange
void GlobalNamespace::PracticeViewController::HandleSongStartSliderValueDidChange(HMUI::RangeValuesTextSlider* slider, float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleSongStartSliderValueDidChange", slider, value));
}
// Autogenerated method: PracticeViewController.PlayButtonPressed
void GlobalNamespace::PracticeViewController::PlayButtonPressed() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PlayButtonPressed"));
}
// Autogenerated method: PracticeViewController.DidActivate
void GlobalNamespace::PracticeViewController::DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidActivate", firstActivation, activationType));
}
// Autogenerated method: PracticeViewController.DidDeactivate
void GlobalNamespace::PracticeViewController::DidDeactivate(HMUI::ViewController::DeactivationType deactivationType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidDeactivate", deactivationType));
}
// Autogenerated method: PracticeViewController..ctor
GlobalNamespace::PracticeViewController* GlobalNamespace::PracticeViewController::New_ctor() {
  return (PracticeViewController*)THROW_UNLESS(il2cpp_utils::New("", "PracticeViewController"));
}
