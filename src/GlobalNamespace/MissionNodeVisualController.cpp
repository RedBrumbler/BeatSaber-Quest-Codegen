// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionNodeVisualController
#include "GlobalNamespace/MissionNodeVisualController.hpp"
// Including type: MissionToggle
#include "GlobalNamespace/MissionToggle.hpp"
// Including type: MissionNode
#include "GlobalNamespace/MissionNode.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MissionNodeVisualController.add_nodeWasSelectEvent
void GlobalNamespace::MissionNodeVisualController::add_nodeWasSelectEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_nodeWasSelectEvent", value));
}
// Autogenerated method: MissionNodeVisualController.remove_nodeWasSelectEvent
void GlobalNamespace::MissionNodeVisualController::remove_nodeWasSelectEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_nodeWasSelectEvent", value));
}
// Autogenerated method: MissionNodeVisualController.add_nodeWasDisplayedEvent
void GlobalNamespace::MissionNodeVisualController::add_nodeWasDisplayedEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_nodeWasDisplayedEvent", value));
}
// Autogenerated method: MissionNodeVisualController.remove_nodeWasDisplayedEvent
void GlobalNamespace::MissionNodeVisualController::remove_nodeWasDisplayedEvent(System::Action_1<GlobalNamespace::MissionNodeVisualController*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_nodeWasDisplayedEvent", value));
}
// Autogenerated method: MissionNodeVisualController.get_missionNode
GlobalNamespace::MissionNode* GlobalNamespace::MissionNodeVisualController::get_missionNode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::MissionNode*>(this, "get_missionNode"));
}
// Autogenerated method: MissionNodeVisualController.get_selected
bool GlobalNamespace::MissionNodeVisualController::get_selected() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_selected"));
}
// Autogenerated method: MissionNodeVisualController.get_isInitialized
bool GlobalNamespace::MissionNodeVisualController::get_isInitialized() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isInitialized"));
}
// Autogenerated method: MissionNodeVisualController.get_cleared
bool GlobalNamespace::MissionNodeVisualController::get_cleared() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_cleared"));
}
// Autogenerated method: MissionNodeVisualController.get_interactable
bool GlobalNamespace::MissionNodeVisualController::get_interactable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_interactable"));
}
// Autogenerated method: MissionNodeVisualController.SetSelected
void GlobalNamespace::MissionNodeVisualController::SetSelected(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetSelected", value));
}
// Autogenerated method: MissionNodeVisualController.OnEnable
void GlobalNamespace::MissionNodeVisualController::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: MissionNodeVisualController.Awake
void GlobalNamespace::MissionNodeVisualController::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: MissionNodeVisualController.Start
void GlobalNamespace::MissionNodeVisualController::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: MissionNodeVisualController.Reset
void GlobalNamespace::MissionNodeVisualController::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: MissionNodeVisualController.OnDestroy
void GlobalNamespace::MissionNodeVisualController::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: MissionNodeVisualController.Init
void GlobalNamespace::MissionNodeVisualController::Init() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init"));
}
// Autogenerated method: MissionNodeVisualController.Setup
void GlobalNamespace::MissionNodeVisualController::Setup(bool cleared, bool interactable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Setup", cleared, interactable));
}
// Autogenerated method: MissionNodeVisualController.SetupToggle
void GlobalNamespace::MissionNodeVisualController::SetupToggle() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetupToggle"));
}
// Autogenerated method: MissionNodeVisualController.SetMissionCleared
void GlobalNamespace::MissionNodeVisualController::SetMissionCleared() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetMissionCleared"));
}
// Autogenerated method: MissionNodeVisualController.SetInteractable
void GlobalNamespace::MissionNodeVisualController::SetInteractable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetInteractable"));
}
// Autogenerated method: MissionNodeVisualController.ChangeNodeSelection
void GlobalNamespace::MissionNodeVisualController::ChangeNodeSelection(bool selected) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ChangeNodeSelection", selected));
}
// Autogenerated method: MissionNodeVisualController.HandleMissionToggleSelectionDidChange
void GlobalNamespace::MissionNodeVisualController::HandleMissionToggleSelectionDidChange(GlobalNamespace::MissionToggle* toggle) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleMissionToggleSelectionDidChange", toggle));
}
// Autogenerated method: MissionNodeVisualController..ctor
GlobalNamespace::MissionNodeVisualController* GlobalNamespace::MissionNodeVisualController::New_ctor() {
  return (MissionNodeVisualController*)THROW_UNLESS(il2cpp_utils::New("", "MissionNodeVisualController"));
}