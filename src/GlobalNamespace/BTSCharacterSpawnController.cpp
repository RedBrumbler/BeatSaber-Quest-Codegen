// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BTSCharacterSpawnController
#include "GlobalNamespace/BTSCharacterSpawnController.hpp"
// Including type: BTSCharacterSpawnController/<TimelineStoppedDelayed>d__15
#include "GlobalNamespace/BTSCharacterSpawnController_-TimelineStoppedDelayed-d__15.hpp"
// Including type: BTSCharacterSpawnAnimationController
#include "GlobalNamespace/BTSCharacterSpawnAnimationController.hpp"
// Including type: BTSCharacterSpawnEventEffect
#include "GlobalNamespace/BTSCharacterSpawnEventEffect.hpp"
// Including type: IGamePause
#include "GlobalNamespace/IGamePause.hpp"
// Including type: ILevelEndActions
#include "GlobalNamespace/ILevelEndActions.hpp"
// Including type: UnityEngine.Coroutine
#include "UnityEngine/Coroutine.hpp"
// Including type: BTSCharacter
#include "GlobalNamespace/BTSCharacter.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BTSCharacterSpawnController.Start
void GlobalNamespace::BTSCharacterSpawnController::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BTSCharacterSpawnController").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Start", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BTSCharacterSpawnController.OnDestroy
void GlobalNamespace::BTSCharacterSpawnController::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BTSCharacterSpawnController").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BTSCharacterSpawnController.HandleStartCharacterAnimation
void GlobalNamespace::BTSCharacterSpawnController::HandleStartCharacterAnimation(GlobalNamespace::BTSCharacter* btsCharacter) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BTSCharacterSpawnController").WithContext("HandleStartCharacterAnimation");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleStartCharacterAnimation", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(btsCharacter)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, btsCharacter);
}
// Autogenerated method: BTSCharacterSpawnController.HandleGamePauseDidPause
void GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseDidPause() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BTSCharacterSpawnController").WithContext("HandleGamePauseDidPause");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleGamePauseDidPause", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BTSCharacterSpawnController.HandleGamePauseWillResume
void GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseWillResume() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BTSCharacterSpawnController").WithContext("HandleGamePauseWillResume");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleGamePauseWillResume", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BTSCharacterSpawnController.HandleGamePauseDidResume
void GlobalNamespace::BTSCharacterSpawnController::HandleGamePauseDidResume() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BTSCharacterSpawnController").WithContext("HandleGamePauseDidResume");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleGamePauseDidResume", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BTSCharacterSpawnController.HandleLevelEndActionsLevelFailed
void GlobalNamespace::BTSCharacterSpawnController::HandleLevelEndActionsLevelFailed() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BTSCharacterSpawnController").WithContext("HandleLevelEndActionsLevelFailed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleLevelEndActionsLevelFailed", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BTSCharacterSpawnController.TimelineStoppedDelayed
System::Collections::IEnumerator* GlobalNamespace::BTSCharacterSpawnController::TimelineStoppedDelayed() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BTSCharacterSpawnController").WithContext("TimelineStoppedDelayed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TimelineStoppedDelayed", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
}