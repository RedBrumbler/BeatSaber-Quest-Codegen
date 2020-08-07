// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionMapAnimationController
#include "GlobalNamespace/MissionMapAnimationController.hpp"
// Including type: MissionMapAnimationController/<UpdateMissionMapCoroutine>d__12
#include "GlobalNamespace/MissionMapAnimationController_-UpdateMissionMapCoroutine-d__12.hpp"
// Including type: MissionMapAnimationController/<UpdateClearedNodeStateCoroutine>d__13
#include "GlobalNamespace/MissionMapAnimationController_-UpdateClearedNodeStateCoroutine-d__13.hpp"
// Including type: MissionMapAnimationController/<UpdateStageCoroutine>d__14
#include "GlobalNamespace/MissionMapAnimationController_-UpdateStageCoroutine-d__14.hpp"
// Including type: MissionMapAnimationController/<>c
#include "GlobalNamespace/MissionMapAnimationController_--c.hpp"
// Including type: MissionMapAnimationController/<UpdateNodesAndConnectionCoroutine>d__15
#include "GlobalNamespace/MissionMapAnimationController_-UpdateNodesAndConnectionCoroutine-d__15.hpp"
// Including type: MissionNodesManager
#include "GlobalNamespace/MissionNodesManager.hpp"
// Including type: HMUI.ScrollView
#include "HMUI/ScrollView.hpp"
// Including type: MenuShockwave
#include "GlobalNamespace/MenuShockwave.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: MissionNode
#include "GlobalNamespace/MissionNode.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MissionMapAnimationController.get_animatedUpdateIsRequired
bool GlobalNamespace::MissionMapAnimationController::get_animatedUpdateIsRequired() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_animatedUpdateIsRequired"));
}
// Autogenerated method: MissionMapAnimationController.ScrollToTopMostNotClearedMission
void GlobalNamespace::MissionMapAnimationController::ScrollToTopMostNotClearedMission() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ScrollToTopMostNotClearedMission"));
}
// Autogenerated method: MissionMapAnimationController.UpdateMissionMapAfterMissionWasCleared
void GlobalNamespace::MissionMapAnimationController::UpdateMissionMapAfterMissionWasCleared(bool animated, System::Action* finishCallback) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateMissionMapAfterMissionWasCleared", animated, finishCallback));
}
// Autogenerated method: MissionMapAnimationController.UpdateMissionMapCoroutine
System::Collections::IEnumerator* GlobalNamespace::MissionMapAnimationController::UpdateMissionMapCoroutine(GlobalNamespace::MissionNode* lastClearedMissionNode, System::Action* finishCallback) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "UpdateMissionMapCoroutine", lastClearedMissionNode, finishCallback));
}
// Autogenerated method: MissionMapAnimationController.UpdateClearedNodeStateCoroutine
System::Collections::IEnumerator* GlobalNamespace::MissionMapAnimationController::UpdateClearedNodeStateCoroutine(GlobalNamespace::MissionNode* lastClearedMissionNode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "UpdateClearedNodeStateCoroutine", lastClearedMissionNode));
}
// Autogenerated method: MissionMapAnimationController.UpdateStageCoroutine
System::Collections::IEnumerator* GlobalNamespace::MissionMapAnimationController::UpdateStageCoroutine() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "UpdateStageCoroutine"));
}
// Autogenerated method: MissionMapAnimationController.UpdateNodesAndConnectionCoroutine
System::Collections::IEnumerator* GlobalNamespace::MissionMapAnimationController::UpdateNodesAndConnectionCoroutine() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "UpdateNodesAndConnectionCoroutine"));
}
// Autogenerated method: MissionMapAnimationController..ctor
GlobalNamespace::MissionMapAnimationController* GlobalNamespace::MissionMapAnimationController::New_ctor() {
  return (MissionMapAnimationController*)THROW_UNLESS(il2cpp_utils::New("", "MissionMapAnimationController"));
}