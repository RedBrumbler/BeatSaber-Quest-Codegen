// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetworkPlayersViewController
#include "GlobalNamespace/NetworkPlayersViewController.hpp"
// Including type: NetworkPlayersTableView
#include "GlobalNamespace/NetworkPlayersTableView.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: INetworkPlayer
#include "GlobalNamespace/INetworkPlayer.hpp"
// Including type: INetworkPlayerModel
#include "GlobalNamespace/INetworkPlayerModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NetworkPlayersViewController.get_myPartyTitle
::Il2CppString* GlobalNamespace::NetworkPlayersViewController::get_myPartyTitle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_myPartyTitle"));
}
// Autogenerated method: NetworkPlayersViewController.get_otherPlayersTitle
::Il2CppString* GlobalNamespace::NetworkPlayersViewController::get_otherPlayersTitle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_otherPlayersTitle"));
}
// Autogenerated method: NetworkPlayersViewController.get_networkPlayerModel
GlobalNamespace::INetworkPlayerModel* GlobalNamespace::NetworkPlayersViewController::get_networkPlayerModel() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::INetworkPlayerModel*>(this, "get_networkPlayerModel"));
}
// Autogenerated method: NetworkPlayersViewController.add_onJoinRequestEvent
void GlobalNamespace::NetworkPlayersViewController::add_onJoinRequestEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_onJoinRequestEvent", value));
}
// Autogenerated method: NetworkPlayersViewController.remove_onJoinRequestEvent
void GlobalNamespace::NetworkPlayersViewController::remove_onJoinRequestEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_onJoinRequestEvent", value));
}
// Autogenerated method: NetworkPlayersViewController.add_onInviteRequestEvent
void GlobalNamespace::NetworkPlayersViewController::add_onInviteRequestEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_onInviteRequestEvent", value));
}
// Autogenerated method: NetworkPlayersViewController.remove_onInviteRequestEvent
void GlobalNamespace::NetworkPlayersViewController::remove_onInviteRequestEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_onInviteRequestEvent", value));
}
// Autogenerated method: NetworkPlayersViewController.NetworkPlayersViewControllerDidActivate
void GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewControllerDidActivate(bool firstActivation, bool addedToHierarchy) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NetworkPlayersViewControllerDidActivate", firstActivation, addedToHierarchy));
}
// Autogenerated method: NetworkPlayersViewController.NetworkPlayersViewControllerDidDeactivate
void GlobalNamespace::NetworkPlayersViewController::NetworkPlayersViewControllerDidDeactivate(bool removedFromHierarchy) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "NetworkPlayersViewControllerDidDeactivate", removedFromHierarchy));
}
// Autogenerated method: NetworkPlayersViewController.HandlePartyChanged
void GlobalNamespace::NetworkPlayersViewController::HandlePartyChanged(GlobalNamespace::INetworkPlayerModel* playerModel) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePartyChanged", playerModel));
}
// Autogenerated method: NetworkPlayersViewController.HandleJoinRequest
void GlobalNamespace::NetworkPlayersViewController::HandleJoinRequest(GlobalNamespace::INetworkPlayer* player) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleJoinRequest", player));
}
// Autogenerated method: NetworkPlayersViewController.HandleInviteRequest
void GlobalNamespace::NetworkPlayersViewController::HandleInviteRequest(GlobalNamespace::INetworkPlayer* player) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleInviteRequest", player));
}
// Autogenerated method: NetworkPlayersViewController.Refresh
void GlobalNamespace::NetworkPlayersViewController::Refresh() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Refresh"));
}
// Autogenerated method: NetworkPlayersViewController.DidActivate
void GlobalNamespace::NetworkPlayersViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidActivate", firstActivation, addedToHierarchy, screenSystemEnabling));
}
// Autogenerated method: NetworkPlayersViewController.DidDeactivate
void GlobalNamespace::NetworkPlayersViewController::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DidDeactivate", removedFromHierarchy, screenSystemDisabling));
}
// Autogenerated method: NetworkPlayersViewController.OnDestroy
void GlobalNamespace::NetworkPlayersViewController::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: NetworkPlayersViewController..ctor
GlobalNamespace::NetworkPlayersViewController* GlobalNamespace::NetworkPlayersViewController::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<NetworkPlayersViewController*>());
}