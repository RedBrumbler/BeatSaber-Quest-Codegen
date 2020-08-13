// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameEnergyCounter
#include "GlobalNamespace/GameEnergyCounter.hpp"
// Including type: GameEnergyCounter/InitData
#include "GlobalNamespace/GameEnergyCounter_InitData.hpp"
// Including type: SaberClashChecker
#include "GlobalNamespace/SaberClashChecker.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: PlayerHeadAndObstacleInteraction
#include "GlobalNamespace/PlayerHeadAndObstacleInteraction.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: INoteController
#include "GlobalNamespace/INoteController.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: GameEnergyCounter.add_gameEnergyDidReach0Event
void GlobalNamespace::GameEnergyCounter::add_gameEnergyDidReach0Event(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_gameEnergyDidReach0Event", value));
}
// Autogenerated method: GameEnergyCounter.remove_gameEnergyDidReach0Event
void GlobalNamespace::GameEnergyCounter::remove_gameEnergyDidReach0Event(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_gameEnergyDidReach0Event", value));
}
// Autogenerated method: GameEnergyCounter.add_gameEnergyDidChangeEvent
void GlobalNamespace::GameEnergyCounter::add_gameEnergyDidChangeEvent(System::Action_1<float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_gameEnergyDidChangeEvent", value));
}
// Autogenerated method: GameEnergyCounter.remove_gameEnergyDidChangeEvent
void GlobalNamespace::GameEnergyCounter::remove_gameEnergyDidChangeEvent(System::Action_1<float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_gameEnergyDidChangeEvent", value));
}
// Autogenerated method: GameEnergyCounter.get_energy
float GlobalNamespace::GameEnergyCounter::get_energy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_energy"));
}
// Autogenerated method: GameEnergyCounter.set_energy
void GlobalNamespace::GameEnergyCounter::set_energy(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_energy", value));
}
// Autogenerated method: GameEnergyCounter.get_batteryEnergy
int GlobalNamespace::GameEnergyCounter::get_batteryEnergy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_batteryEnergy"));
}
// Autogenerated method: GameEnergyCounter.get_batteryLives
int GlobalNamespace::GameEnergyCounter::get_batteryLives() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_batteryLives"));
}
// Autogenerated method: GameEnergyCounter.get_energyType
GlobalNamespace::GameplayModifiers::EnergyType GlobalNamespace::GameEnergyCounter::get_energyType() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::GameplayModifiers::EnergyType>(this, "get_energyType"));
}
// Autogenerated method: GameEnergyCounter.set_energyType
void GlobalNamespace::GameEnergyCounter::set_energyType(GlobalNamespace::GameplayModifiers::EnergyType value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_energyType", value));
}
// Autogenerated method: GameEnergyCounter.get_noFail
bool GlobalNamespace::GameEnergyCounter::get_noFail() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_noFail"));
}
// Autogenerated method: GameEnergyCounter.set_noFail
void GlobalNamespace::GameEnergyCounter::set_noFail(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_noFail", value));
}
// Autogenerated method: GameEnergyCounter.get_instaFail
bool GlobalNamespace::GameEnergyCounter::get_instaFail() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_instaFail"));
}
// Autogenerated method: GameEnergyCounter.set_instaFail
void GlobalNamespace::GameEnergyCounter::set_instaFail(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_instaFail", value));
}
// Autogenerated method: GameEnergyCounter.get_failOnSaberClash
bool GlobalNamespace::GameEnergyCounter::get_failOnSaberClash() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_failOnSaberClash"));
}
// Autogenerated method: GameEnergyCounter.set_failOnSaberClash
void GlobalNamespace::GameEnergyCounter::set_failOnSaberClash(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_failOnSaberClash", value));
}
// Autogenerated method: GameEnergyCounter.Start
void GlobalNamespace::GameEnergyCounter::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: GameEnergyCounter.OnDestroy
void GlobalNamespace::GameEnergyCounter::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: GameEnergyCounter.Update
void GlobalNamespace::GameEnergyCounter::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: GameEnergyCounter.HandleNoteWasCutEvent
void GlobalNamespace::GameEnergyCounter::HandleNoteWasCutEvent(GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteWasCutEvent", noteController, noteCutInfo));
}
// Autogenerated method: GameEnergyCounter.HandleNoteWasMissedEvent
void GlobalNamespace::GameEnergyCounter::HandleNoteWasMissedEvent(GlobalNamespace::INoteController* noteController) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteWasMissedEvent", noteController));
}
// Autogenerated method: GameEnergyCounter.AddEnergy
void GlobalNamespace::GameEnergyCounter::AddEnergy(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddEnergy", value));
}
// Autogenerated method: GameEnergyCounter..ctor
GlobalNamespace::GameEnergyCounter* GlobalNamespace::GameEnergyCounter::New_ctor() {
  return (GameEnergyCounter*)THROW_UNLESS(il2cpp_utils::New("", "GameEnergyCounter"));
}
