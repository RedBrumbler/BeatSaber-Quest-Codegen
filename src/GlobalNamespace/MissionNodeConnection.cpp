// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionNodeConnection
#include "GlobalNamespace/MissionNodeConnection.hpp"
// Including type: UnityEngine.RectTransform
#include "UnityEngine/RectTransform.hpp"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
// Including type: MissionNodeVisualController
#include "GlobalNamespace/MissionNodeVisualController.hpp"
// Including type: UnityEngine.Animator
#include "UnityEngine/Animator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MissionNodeConnection.get_parentMissionNode
GlobalNamespace::MissionNodeVisualController* GlobalNamespace::MissionNodeConnection::get_parentMissionNode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::MissionNodeVisualController*>(this, "get_parentMissionNode"));
}
// Autogenerated method: MissionNodeConnection.get_childMissionNode
GlobalNamespace::MissionNodeVisualController* GlobalNamespace::MissionNodeConnection::get_childMissionNode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::MissionNodeVisualController*>(this, "get_childMissionNode"));
}
// Autogenerated method: MissionNodeConnection.get_isActive
bool GlobalNamespace::MissionNodeConnection::get_isActive() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isActive"));
}
// Autogenerated method: MissionNodeConnection.Setup
void GlobalNamespace::MissionNodeConnection::Setup(GlobalNamespace::MissionNodeVisualController* parentMissionNode, GlobalNamespace::MissionNodeVisualController* childMissionNode) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Setup", parentMissionNode, childMissionNode));
}
// Autogenerated method: MissionNodeConnection.UpdateConnectionRectTransform
void GlobalNamespace::MissionNodeConnection::UpdateConnectionRectTransform() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateConnectionRectTransform"));
}
// Autogenerated method: MissionNodeConnection.SetActive
void GlobalNamespace::MissionNodeConnection::SetActive(bool animated) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetActive", animated));
}
// Autogenerated method: MissionNodeConnection.MissionConnectionEnabledDidFinish
void GlobalNamespace::MissionNodeConnection::MissionConnectionEnabledDidFinish() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MissionConnectionEnabledDidFinish"));
}
// Autogenerated method: MissionNodeConnection..ctor
GlobalNamespace::MissionNodeConnection* GlobalNamespace::MissionNodeConnection::New_ctor() {
  return (MissionNodeConnection*)THROW_UNLESS(il2cpp_utils::New("", "MissionNodeConnection"));
}
