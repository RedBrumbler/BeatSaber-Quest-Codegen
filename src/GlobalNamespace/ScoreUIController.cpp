// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScoreUIController
#include "GlobalNamespace/ScoreUIController.hpp"
// Including type: ScoreUIController/InitData
#include "GlobalNamespace/ScoreUIController_InitData.hpp"
// Including type: ScoreUIController/ScoreDisplayType
#include "GlobalNamespace/ScoreUIController_ScoreDisplayType.hpp"
// Including type: TMPro.TextMeshProUGUI
#include "TMPro/TextMeshProUGUI.hpp"
// Including type: ScoreController
#include "GlobalNamespace/ScoreController.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 kMaxNumberOfDigits
int GlobalNamespace::ScoreUIController::_get_kMaxNumberOfDigits() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "ScoreUIController", "kMaxNumberOfDigits"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 kMaxNumberOfDigits
void GlobalNamespace::ScoreUIController::_set_kMaxNumberOfDigits(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ScoreUIController", "kMaxNumberOfDigits", value));
}
// Autogenerated method: ScoreUIController.Start
void GlobalNamespace::ScoreUIController::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: ScoreUIController.OnEnable
void GlobalNamespace::ScoreUIController::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: ScoreUIController.OnDisable
void GlobalNamespace::ScoreUIController::OnDisable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDisable"));
}
// Autogenerated method: ScoreUIController.RegisterForEvents
void GlobalNamespace::ScoreUIController::RegisterForEvents() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RegisterForEvents"));
}
// Autogenerated method: ScoreUIController.UnregisterFromEvents
void GlobalNamespace::ScoreUIController::UnregisterFromEvents() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UnregisterFromEvents"));
}
// Autogenerated method: ScoreUIController.HandleScoreDidChangeRealtime
void GlobalNamespace::ScoreUIController::HandleScoreDidChangeRealtime(int rawScore, int modifiedScore) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleScoreDidChangeRealtime", rawScore, modifiedScore));
}
// Autogenerated method: ScoreUIController.UpdateScore
void GlobalNamespace::ScoreUIController::UpdateScore(int rawScore, int modifiedScore) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateScore", rawScore, modifiedScore));
}
// Autogenerated method: ScoreUIController.Append000Number
void GlobalNamespace::ScoreUIController::Append000Number(System::Text::StringBuilder* stringBuilder, int number) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Append000Number", stringBuilder, number));
}
// Autogenerated method: ScoreUIController..ctor
GlobalNamespace::ScoreUIController* GlobalNamespace::ScoreUIController::New_ctor() {
  return (ScoreUIController*)THROW_UNLESS(il2cpp_utils::New("", "ScoreUIController"));
}