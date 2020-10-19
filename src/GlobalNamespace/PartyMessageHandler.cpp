// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PartyMessageHandler
#include "GlobalNamespace/PartyMessageHandler.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: PartyMessageHandler/ServerStatusUpdatedDelegate
#include "GlobalNamespace/PartyMessageHandler_ServerStatusUpdatedDelegate.hpp"
// Including type: PartyMessageHandler/ConnectToMasterServerDelegate
#include "GlobalNamespace/PartyMessageHandler_ConnectToMasterServerDelegate.hpp"
// Including type: PartyMessageHandler/ServerStatusUpdateMessage
#include "GlobalNamespace/PartyMessageHandler_ServerStatusUpdateMessage.hpp"
// Including type: PartyMessageHandler/ConnectToMasterServerMessage
#include "GlobalNamespace/PartyMessageHandler_ConnectToMasterServerMessage.hpp"
// Including type: NetworkPacketSerializer`2
#include "GlobalNamespace/NetworkPacketSerializer_2.hpp"
// Including type: ConnectedPlayerManager
#include "GlobalNamespace/ConnectedPlayerManager.hpp"
// Including type: DiscoveryPolicy
#include "GlobalNamespace/DiscoveryPolicy.hpp"
// Including type: InvitePolicy
#include "GlobalNamespace/InvitePolicy.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: PartyMessageHandler..ctor
GlobalNamespace::PartyMessageHandler* GlobalNamespace::PartyMessageHandler::New_ctor(GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager) {
  return THROW_UNLESS(il2cpp_utils::New<PartyMessageHandler*>(connectedPlayerManager));
}
// Autogenerated method: PartyMessageHandler.add_serverStatusUpdatedEvent
void GlobalNamespace::PartyMessageHandler::add_serverStatusUpdatedEvent(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_serverStatusUpdatedEvent", value));
}
// Autogenerated method: PartyMessageHandler.remove_serverStatusUpdatedEvent
void GlobalNamespace::PartyMessageHandler::remove_serverStatusUpdatedEvent(GlobalNamespace::PartyMessageHandler::ServerStatusUpdatedDelegate* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_serverStatusUpdatedEvent", value));
}
// Autogenerated method: PartyMessageHandler.SetServerStatus
void GlobalNamespace::PartyMessageHandler::SetServerStatus(::Il2CppString* serverName, ::Il2CppString* password, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetServerStatus", serverName, password, discoveryPolicy, invitePolicy, maxPlayerCount, configuration));
}
// Autogenerated method: PartyMessageHandler.HandleServerStatusUpdate
void GlobalNamespace::PartyMessageHandler::HandleServerStatusUpdate(GlobalNamespace::PartyMessageHandler::ServerStatusUpdateMessage* packet) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleServerStatusUpdate", packet));
}
// Autogenerated method: PartyMessageHandler.add_connectToMasterServerEvent
void GlobalNamespace::PartyMessageHandler::add_connectToMasterServerEvent(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_connectToMasterServerEvent", value));
}
// Autogenerated method: PartyMessageHandler.remove_connectToMasterServerEvent
void GlobalNamespace::PartyMessageHandler::remove_connectToMasterServerEvent(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerDelegate* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_connectToMasterServerEvent", value));
}
// Autogenerated method: PartyMessageHandler.ConnectToMasterServer
void GlobalNamespace::PartyMessageHandler::ConnectToMasterServer(System::Net::IPEndPoint* endPoint, ::Il2CppString* serverName, ::Il2CppString* password, ::Il2CppString* secret, ::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, int maxPlayerCount, GlobalNamespace::GameplayServerConfiguration configuration) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ConnectToMasterServer", endPoint, serverName, password, secret, userId, userName, discoveryPolicy, invitePolicy, maxPlayerCount, configuration));
}
// Autogenerated method: PartyMessageHandler.HandleConnectToMasterServer
void GlobalNamespace::PartyMessageHandler::HandleConnectToMasterServer(GlobalNamespace::PartyMessageHandler::ConnectToMasterServerMessage* packet) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleConnectToMasterServer", packet));
}
// Autogenerated method: PartyMessageHandler.Dispose
void GlobalNamespace::PartyMessageHandler::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void GlobalNamespace::PartyMessageHandler::System_IDisposable_Dispose() {
  GlobalNamespace::PartyMessageHandler::Dispose();
}