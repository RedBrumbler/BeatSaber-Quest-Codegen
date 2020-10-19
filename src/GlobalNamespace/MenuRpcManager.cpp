// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MenuRpcManager
#include "GlobalNamespace/MenuRpcManager.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: MenuRpcManager/GetIsEntitledToLevelRpc
#include "GlobalNamespace/MenuRpcManager_GetIsEntitledToLevelRpc.hpp"
// Including type: MenuRpcManager/SetIsEntitledToLevelRpc
#include "GlobalNamespace/MenuRpcManager_SetIsEntitledToLevelRpc.hpp"
// Including type: MenuRpcManager/InvalidateLevelEntitlementStatusesRpc
#include "GlobalNamespace/MenuRpcManager_InvalidateLevelEntitlementStatusesRpc.hpp"
// Including type: MenuRpcManager/SelectLevelPackRpc
#include "GlobalNamespace/MenuRpcManager_SelectLevelPackRpc.hpp"
// Including type: MenuRpcManager/SelectBeatmapRpc
#include "GlobalNamespace/MenuRpcManager_SelectBeatmapRpc.hpp"
// Including type: MenuRpcManager/ClearSelectedBeatmapRpc
#include "GlobalNamespace/MenuRpcManager_ClearSelectedBeatmapRpc.hpp"
// Including type: MenuRpcManager/GetSelectedBeatmapRpc
#include "GlobalNamespace/MenuRpcManager_GetSelectedBeatmapRpc.hpp"
// Including type: MenuRpcManager/SelectGameplayModifiersRpc
#include "GlobalNamespace/MenuRpcManager_SelectGameplayModifiersRpc.hpp"
// Including type: MenuRpcManager/ClearSelectedGameplayModifiersRpc
#include "GlobalNamespace/MenuRpcManager_ClearSelectedGameplayModifiersRpc.hpp"
// Including type: MenuRpcManager/GetSelectedGameplayModifiersRpc
#include "GlobalNamespace/MenuRpcManager_GetSelectedGameplayModifiersRpc.hpp"
// Including type: MenuRpcManager/LevelLoadErrorRpc
#include "GlobalNamespace/MenuRpcManager_LevelLoadErrorRpc.hpp"
// Including type: MenuRpcManager/LevelLoadSuccessRpc
#include "GlobalNamespace/MenuRpcManager_LevelLoadSuccessRpc.hpp"
// Including type: MenuRpcManager/StartLevelRpc
#include "GlobalNamespace/MenuRpcManager_StartLevelRpc.hpp"
// Including type: MenuRpcManager/GetStartedLevelRpc
#include "GlobalNamespace/MenuRpcManager_GetStartedLevelRpc.hpp"
// Including type: MenuRpcManager/GetMultiplayerGameStateRpc
#include "GlobalNamespace/MenuRpcManager_GetMultiplayerGameStateRpc.hpp"
// Including type: MenuRpcManager/SetMultiplayerGameStateRpc
#include "GlobalNamespace/MenuRpcManager_SetMultiplayerGameStateRpc.hpp"
// Including type: MenuRpcManager/CancelCountdownRpc
#include "GlobalNamespace/MenuRpcManager_CancelCountdownRpc.hpp"
// Including type: MenuRpcManager/SetCountdownEndTimeRpc
#include "GlobalNamespace/MenuRpcManager_SetCountdownEndTimeRpc.hpp"
// Including type: MenuRpcManager/GetCountdownEndTimeRpc
#include "GlobalNamespace/MenuRpcManager_GetCountdownEndTimeRpc.hpp"
// Including type: MenuRpcManager/CancelLevelStartRpc
#include "GlobalNamespace/MenuRpcManager_CancelLevelStartRpc.hpp"
// Including type: MenuRpcManager/GetIsReadyRpc
#include "GlobalNamespace/MenuRpcManager_GetIsReadyRpc.hpp"
// Including type: MenuRpcManager/SetIsReadyRpc
#include "GlobalNamespace/MenuRpcManager_SetIsReadyRpc.hpp"
// Including type: MenuRpcManager/SetStartGameTimeRpc
#include "GlobalNamespace/MenuRpcManager_SetStartGameTimeRpc.hpp"
// Including type: MenuRpcManager/CancelStartGameTimeRpc
#include "GlobalNamespace/MenuRpcManager_CancelStartGameTimeRpc.hpp"
// Including type: MenuRpcManager/GetIsInLobbyRpc
#include "GlobalNamespace/MenuRpcManager_GetIsInLobbyRpc.hpp"
// Including type: MenuRpcManager/SetIsInLobbyRpc
#include "GlobalNamespace/MenuRpcManager_SetIsInLobbyRpc.hpp"
// Including type: MenuRpcManager/GetOwnedSongPacksRpc
#include "GlobalNamespace/MenuRpcManager_GetOwnedSongPacksRpc.hpp"
// Including type: MenuRpcManager/SetOwnedSongPacksRpc
#include "GlobalNamespace/MenuRpcManager_SetOwnedSongPacksRpc.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
// Including type: RpcHandler`1
#include "GlobalNamespace/RpcHandler_1.hpp"
// Including type: System.Action`3
#include "System/Action_3.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: BeatmapIdentifierNetSerializable
#include "GlobalNamespace/BeatmapIdentifierNetSerializable.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
// Including type: System.Action`4
#include "System/Action_4.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kMenuState
::Il2CppString* GlobalNamespace::MenuRpcManager::_get_kMenuState() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "MenuRpcManager", "kMenuState"));
}
// Autogenerated static field setter
// Set static field: static private System.String kMenuState
void GlobalNamespace::MenuRpcManager::_set_kMenuState(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "MenuRpcManager", "kMenuState", value));
}
// Autogenerated method: MenuRpcManager.get_multiplayerSessionManager
GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::MenuRpcManager::get_multiplayerSessionManager() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IMultiplayerSessionManager*>(this, "get_multiplayerSessionManager"));
}
// Autogenerated method: MenuRpcManager.get_enabled
bool GlobalNamespace::MenuRpcManager::get_enabled() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_enabled"));
}
// Autogenerated method: MenuRpcManager.set_enabled
void GlobalNamespace::MenuRpcManager::set_enabled(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_enabled", value));
}
// Autogenerated method: MenuRpcManager.get_enabledForAllPlayers
bool GlobalNamespace::MenuRpcManager::get_enabledForAllPlayers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_enabledForAllPlayers"));
}
// Autogenerated method: MenuRpcManager..ctor
GlobalNamespace::MenuRpcManager* GlobalNamespace::MenuRpcManager::New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
  return THROW_UNLESS(il2cpp_utils::New<MenuRpcManager*>(multiplayerSessionManager));
}
// Autogenerated method: MenuRpcManager.EnabledForPlayer
bool GlobalNamespace::MenuRpcManager::EnabledForPlayer(GlobalNamespace::IConnectedPlayer* player) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EnabledForPlayer", player));
}
// Autogenerated method: MenuRpcManager.InvokeGetIsEntitledToLevel
void GlobalNamespace::MenuRpcManager::InvokeGetIsEntitledToLevel(::Il2CppString* userId, ::Il2CppString* levelId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeGetIsEntitledToLevel", userId, levelId));
}
// Autogenerated method: MenuRpcManager.InvokeSetIsEntitledToLevel
void GlobalNamespace::MenuRpcManager::InvokeSetIsEntitledToLevel(::Il2CppString* userId, ::Il2CppString* levelId, int entitlementStatus) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSetIsEntitledToLevel", userId, levelId, entitlementStatus));
}
// Autogenerated method: MenuRpcManager.InvokeLevelEntitlementStatusesInvalidated
void GlobalNamespace::MenuRpcManager::InvokeLevelEntitlementStatusesInvalidated(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeLevelEntitlementStatusesInvalidated", userId));
}
// Autogenerated method: MenuRpcManager.add_selectedLevelPackEvent
void GlobalNamespace::MenuRpcManager::add_selectedLevelPackEvent(System::Action_2<::Il2CppString*, ::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_selectedLevelPackEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_selectedLevelPackEvent
void GlobalNamespace::MenuRpcManager::remove_selectedLevelPackEvent(System::Action_2<::Il2CppString*, ::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_selectedLevelPackEvent", value));
}
// Autogenerated method: MenuRpcManager.SelectLevelPack
void GlobalNamespace::MenuRpcManager::SelectLevelPack(::Il2CppString* levelPackId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectLevelPack", levelPackId));
}
// Autogenerated method: MenuRpcManager.InvokeOnSelectedLevelPackEvent
void GlobalNamespace::MenuRpcManager::InvokeOnSelectedLevelPackEvent(::Il2CppString* userId, ::Il2CppString* levelPackId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeOnSelectedLevelPackEvent", userId, levelPackId));
}
// Autogenerated method: MenuRpcManager.InvokeSelectedBeatmap
void GlobalNamespace::MenuRpcManager::InvokeSelectedBeatmap(::Il2CppString* userId, GlobalNamespace::BeatmapIdentifierNetSerializable* identifier) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSelectedBeatmap", userId, identifier));
}
// Autogenerated method: MenuRpcManager.InvokeClearSelectedBeatmap
void GlobalNamespace::MenuRpcManager::InvokeClearSelectedBeatmap(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeClearSelectedBeatmap", userId));
}
// Autogenerated method: MenuRpcManager.InvokeGetSelectedBeatmap
void GlobalNamespace::MenuRpcManager::InvokeGetSelectedBeatmap(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeGetSelectedBeatmap", userId));
}
// Autogenerated method: MenuRpcManager.InvokeOnSelectedGameplayModifiersEvent
void GlobalNamespace::MenuRpcManager::InvokeOnSelectedGameplayModifiersEvent(::Il2CppString* userId, GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeOnSelectedGameplayModifiersEvent", userId, gameplayModifiers));
}
// Autogenerated method: MenuRpcManager.InvokeClearSelectedGameplayModifiers
void GlobalNamespace::MenuRpcManager::InvokeClearSelectedGameplayModifiers(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeClearSelectedGameplayModifiers", userId));
}
// Autogenerated method: MenuRpcManager.InvokeGetSelectedGameplayModifiers
void GlobalNamespace::MenuRpcManager::InvokeGetSelectedGameplayModifiers(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeGetSelectedGameplayModifiers", userId));
}
// Autogenerated method: MenuRpcManager.add_levelLoadErrorEvent
void GlobalNamespace::MenuRpcManager::add_levelLoadErrorEvent(System::Action_2<::Il2CppString*, ::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_levelLoadErrorEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_levelLoadErrorEvent
void GlobalNamespace::MenuRpcManager::remove_levelLoadErrorEvent(System::Action_2<::Il2CppString*, ::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_levelLoadErrorEvent", value));
}
// Autogenerated method: MenuRpcManager.LevelLoadError
void GlobalNamespace::MenuRpcManager::LevelLoadError(::Il2CppString* levelId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LevelLoadError", levelId));
}
// Autogenerated method: MenuRpcManager.InvokeLevelLoadError
void GlobalNamespace::MenuRpcManager::InvokeLevelLoadError(::Il2CppString* userId, ::Il2CppString* levelId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeLevelLoadError", userId, levelId));
}
// Autogenerated method: MenuRpcManager.add_levelLoadSuccessEvent
void GlobalNamespace::MenuRpcManager::add_levelLoadSuccessEvent(System::Action_2<::Il2CppString*, ::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_levelLoadSuccessEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_levelLoadSuccessEvent
void GlobalNamespace::MenuRpcManager::remove_levelLoadSuccessEvent(System::Action_2<::Il2CppString*, ::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_levelLoadSuccessEvent", value));
}
// Autogenerated method: MenuRpcManager.LevelLoadSuccess
void GlobalNamespace::MenuRpcManager::LevelLoadSuccess(::Il2CppString* levelId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LevelLoadSuccess", levelId));
}
// Autogenerated method: MenuRpcManager.InvokeLevelLoadSuccess
void GlobalNamespace::MenuRpcManager::InvokeLevelLoadSuccess(::Il2CppString* userId, ::Il2CppString* levelId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeLevelLoadSuccess", userId, levelId));
}
// Autogenerated method: MenuRpcManager.InvokeStartLevel
void GlobalNamespace::MenuRpcManager::InvokeStartLevel(::Il2CppString* userId, GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, GlobalNamespace::GameplayModifiers* gameplayModifiers, float startTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeStartLevel", userId, beatmapId, gameplayModifiers, startTime));
}
// Autogenerated method: MenuRpcManager.InvokeGetStartedLevel
void GlobalNamespace::MenuRpcManager::InvokeGetStartedLevel(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeGetStartedLevel", userId));
}
// Autogenerated method: MenuRpcManager.InvokeGetMultiplayerGameState
void GlobalNamespace::MenuRpcManager::InvokeGetMultiplayerGameState(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeGetMultiplayerGameState", userId));
}
// Autogenerated method: MenuRpcManager.InvokeSetMultiplayerGameState
void GlobalNamespace::MenuRpcManager::InvokeSetMultiplayerGameState(::Il2CppString* userId, GlobalNamespace::MultiplayerGameState lobbyState) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSetMultiplayerGameState", userId, lobbyState));
}
// Autogenerated method: MenuRpcManager.CancelCountdown
void GlobalNamespace::MenuRpcManager::CancelCountdown() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CancelCountdown"));
}
// Autogenerated method: MenuRpcManager.InvokeCancelCountdown
void GlobalNamespace::MenuRpcManager::InvokeCancelCountdown(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeCancelCountdown", userId));
}
// Autogenerated method: MenuRpcManager.SetCountdownEndTime
void GlobalNamespace::MenuRpcManager::SetCountdownEndTime(float newTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCountdownEndTime", newTime));
}
// Autogenerated method: MenuRpcManager.InvokeSetCountdownEndTime
void GlobalNamespace::MenuRpcManager::InvokeSetCountdownEndTime(::Il2CppString* userId, float newTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSetCountdownEndTime", userId, newTime));
}
// Autogenerated method: MenuRpcManager.add_getCountdownEndTimeEvent
void GlobalNamespace::MenuRpcManager::add_getCountdownEndTimeEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_getCountdownEndTimeEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_getCountdownEndTimeEvent
void GlobalNamespace::MenuRpcManager::remove_getCountdownEndTimeEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_getCountdownEndTimeEvent", value));
}
// Autogenerated method: MenuRpcManager.InvokeGetCountdownEndTime
void GlobalNamespace::MenuRpcManager::InvokeGetCountdownEndTime(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeGetCountdownEndTime", userId));
}
// Autogenerated method: MenuRpcManager.InvokeCancelLevelStart
void GlobalNamespace::MenuRpcManager::InvokeCancelLevelStart(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeCancelLevelStart", userId));
}
// Autogenerated method: MenuRpcManager.InvokeGetIsReady
void GlobalNamespace::MenuRpcManager::InvokeGetIsReady(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeGetIsReady", userId));
}
// Autogenerated method: MenuRpcManager.InvokeSetIsReady
void GlobalNamespace::MenuRpcManager::InvokeSetIsReady(::Il2CppString* userId, bool isReady) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSetIsReady", userId, isReady));
}
// Autogenerated method: MenuRpcManager.InvokeSetStartGameCountdown
void GlobalNamespace::MenuRpcManager::InvokeSetStartGameCountdown(::Il2CppString* userId, float newTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSetStartGameCountdown", userId, newTime));
}
// Autogenerated method: MenuRpcManager.add_cancelStartGameTimeEvent
void GlobalNamespace::MenuRpcManager::add_cancelStartGameTimeEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_cancelStartGameTimeEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_cancelStartGameTimeEvent
void GlobalNamespace::MenuRpcManager::remove_cancelStartGameTimeEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_cancelStartGameTimeEvent", value));
}
// Autogenerated method: MenuRpcManager.CancelStartGameTime
void GlobalNamespace::MenuRpcManager::CancelStartGameTime() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CancelStartGameTime"));
}
// Autogenerated method: MenuRpcManager.InvokeCancelStartGameCountdown
void GlobalNamespace::MenuRpcManager::InvokeCancelStartGameCountdown(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeCancelStartGameCountdown", userId));
}
// Autogenerated method: MenuRpcManager.InvokeGetIsInLobby
void GlobalNamespace::MenuRpcManager::InvokeGetIsInLobby(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeGetIsInLobby", userId));
}
// Autogenerated method: MenuRpcManager.InvokeSetIsInLobby
void GlobalNamespace::MenuRpcManager::InvokeSetIsInLobby(::Il2CppString* userId, bool isBack) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSetIsInLobby", userId, isBack));
}
// Autogenerated method: MenuRpcManager.InvokeGetOwnedSongPacks
void GlobalNamespace::MenuRpcManager::InvokeGetOwnedSongPacks(::Il2CppString* userId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeGetOwnedSongPacks", userId));
}
// Autogenerated method: MenuRpcManager.InvokeSetOwnedSongPacks
void GlobalNamespace::MenuRpcManager::InvokeSetOwnedSongPacks(::Il2CppString* userId, GlobalNamespace::SongPackMask songPackMask) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvokeSetOwnedSongPacks", userId, songPackMask));
}
// Autogenerated method: MenuRpcManager.get_syncTime
float GlobalNamespace::MenuRpcManager::get_syncTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_syncTime"));
}
// Autogenerated method: MenuRpcManager.Dispose
void GlobalNamespace::MenuRpcManager::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void GlobalNamespace::MenuRpcManager::System_IDisposable_Dispose() {
  GlobalNamespace::MenuRpcManager::Dispose();
}
// Autogenerated method: MenuRpcManager.add_getIsEntitledToLevelEvent
void GlobalNamespace::MenuRpcManager::add_getIsEntitledToLevelEvent(System::Action_2<::Il2CppString*, ::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_getIsEntitledToLevelEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_getIsEntitledToLevelEvent
void GlobalNamespace::MenuRpcManager::remove_getIsEntitledToLevelEvent(System::Action_2<::Il2CppString*, ::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_getIsEntitledToLevelEvent", value));
}
// Autogenerated method: MenuRpcManager.GetIsEntitledToLevel
void GlobalNamespace::MenuRpcManager::GetIsEntitledToLevel(::Il2CppString* levelId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetIsEntitledToLevel", levelId));
}
// Autogenerated method: MenuRpcManager.add_setIsEntitledToLevelEvent
void GlobalNamespace::MenuRpcManager::add_setIsEntitledToLevelEvent(System::Action_3<::Il2CppString*, ::Il2CppString*, GlobalNamespace::EntitlementsStatus>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setIsEntitledToLevelEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_setIsEntitledToLevelEvent
void GlobalNamespace::MenuRpcManager::remove_setIsEntitledToLevelEvent(System::Action_3<::Il2CppString*, ::Il2CppString*, GlobalNamespace::EntitlementsStatus>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setIsEntitledToLevelEvent", value));
}
// Autogenerated method: MenuRpcManager.SetIsEntitledToLevel
void GlobalNamespace::MenuRpcManager::SetIsEntitledToLevel(::Il2CppString* levelId, GlobalNamespace::EntitlementsStatus entitlementStatus) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetIsEntitledToLevel", levelId, entitlementStatus));
}
// Autogenerated method: MenuRpcManager.add_levelEntitlementStatusesInvalidatedEvent
void GlobalNamespace::MenuRpcManager::add_levelEntitlementStatusesInvalidatedEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_levelEntitlementStatusesInvalidatedEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_levelEntitlementStatusesInvalidatedEvent
void GlobalNamespace::MenuRpcManager::remove_levelEntitlementStatusesInvalidatedEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_levelEntitlementStatusesInvalidatedEvent", value));
}
// Autogenerated method: MenuRpcManager.InvalidateLevelEntitlementStatuses
void GlobalNamespace::MenuRpcManager::InvalidateLevelEntitlementStatuses() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvalidateLevelEntitlementStatuses"));
}
// Autogenerated method: MenuRpcManager.add_selectedBeatmapEvent
void GlobalNamespace::MenuRpcManager::add_selectedBeatmapEvent(System::Action_2<::Il2CppString*, GlobalNamespace::BeatmapIdentifierNetSerializable*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_selectedBeatmapEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_selectedBeatmapEvent
void GlobalNamespace::MenuRpcManager::remove_selectedBeatmapEvent(System::Action_2<::Il2CppString*, GlobalNamespace::BeatmapIdentifierNetSerializable*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_selectedBeatmapEvent", value));
}
// Autogenerated method: MenuRpcManager.SelectBeatmap
void GlobalNamespace::MenuRpcManager::SelectBeatmap(GlobalNamespace::BeatmapIdentifierNetSerializable* identifier) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectBeatmap", identifier));
}
// Autogenerated method: MenuRpcManager.add_clearSelectedBeatmapEvent
void GlobalNamespace::MenuRpcManager::add_clearSelectedBeatmapEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_clearSelectedBeatmapEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_clearSelectedBeatmapEvent
void GlobalNamespace::MenuRpcManager::remove_clearSelectedBeatmapEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_clearSelectedBeatmapEvent", value));
}
// Autogenerated method: MenuRpcManager.ClearSelectedBeatmap
void GlobalNamespace::MenuRpcManager::ClearSelectedBeatmap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearSelectedBeatmap"));
}
// Autogenerated method: MenuRpcManager.add_getSelectedBeatmapEvent
void GlobalNamespace::MenuRpcManager::add_getSelectedBeatmapEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_getSelectedBeatmapEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_getSelectedBeatmapEvent
void GlobalNamespace::MenuRpcManager::remove_getSelectedBeatmapEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_getSelectedBeatmapEvent", value));
}
// Autogenerated method: MenuRpcManager.GetSelectedBeatmap
void GlobalNamespace::MenuRpcManager::GetSelectedBeatmap() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetSelectedBeatmap"));
}
// Autogenerated method: MenuRpcManager.add_selectedGameplayModifiersEvent
void GlobalNamespace::MenuRpcManager::add_selectedGameplayModifiersEvent(System::Action_2<::Il2CppString*, GlobalNamespace::GameplayModifiers*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_selectedGameplayModifiersEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_selectedGameplayModifiersEvent
void GlobalNamespace::MenuRpcManager::remove_selectedGameplayModifiersEvent(System::Action_2<::Il2CppString*, GlobalNamespace::GameplayModifiers*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_selectedGameplayModifiersEvent", value));
}
// Autogenerated method: MenuRpcManager.SelectGameplayModifiers
void GlobalNamespace::MenuRpcManager::SelectGameplayModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SelectGameplayModifiers", gameplayModifiers));
}
// Autogenerated method: MenuRpcManager.add_clearSelectedGameplayModifiersEvent
void GlobalNamespace::MenuRpcManager::add_clearSelectedGameplayModifiersEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_clearSelectedGameplayModifiersEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_clearSelectedGameplayModifiersEvent
void GlobalNamespace::MenuRpcManager::remove_clearSelectedGameplayModifiersEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_clearSelectedGameplayModifiersEvent", value));
}
// Autogenerated method: MenuRpcManager.ClearSelectedGameplayModifiers
void GlobalNamespace::MenuRpcManager::ClearSelectedGameplayModifiers() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearSelectedGameplayModifiers"));
}
// Autogenerated method: MenuRpcManager.add_getSelectedGameplayModifiersEvent
void GlobalNamespace::MenuRpcManager::add_getSelectedGameplayModifiersEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_getSelectedGameplayModifiersEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_getSelectedGameplayModifiersEvent
void GlobalNamespace::MenuRpcManager::remove_getSelectedGameplayModifiersEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_getSelectedGameplayModifiersEvent", value));
}
// Autogenerated method: MenuRpcManager.GetSelectedGameplayModifiers
void GlobalNamespace::MenuRpcManager::GetSelectedGameplayModifiers() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetSelectedGameplayModifiers"));
}
// Autogenerated method: MenuRpcManager.add_startedLevelEvent
void GlobalNamespace::MenuRpcManager::add_startedLevelEvent(System::Action_4<::Il2CppString*, GlobalNamespace::BeatmapIdentifierNetSerializable*, GlobalNamespace::GameplayModifiers*, float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_startedLevelEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_startedLevelEvent
void GlobalNamespace::MenuRpcManager::remove_startedLevelEvent(System::Action_4<::Il2CppString*, GlobalNamespace::BeatmapIdentifierNetSerializable*, GlobalNamespace::GameplayModifiers*, float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_startedLevelEvent", value));
}
// Autogenerated method: MenuRpcManager.StartLevel
void GlobalNamespace::MenuRpcManager::StartLevel(GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, GlobalNamespace::GameplayModifiers* gameplayModifiers, float startTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartLevel", beatmapId, gameplayModifiers, startTime));
}
// Autogenerated method: MenuRpcManager.add_getStartedLevelEvent
void GlobalNamespace::MenuRpcManager::add_getStartedLevelEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_getStartedLevelEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_getStartedLevelEvent
void GlobalNamespace::MenuRpcManager::remove_getStartedLevelEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_getStartedLevelEvent", value));
}
// Autogenerated method: MenuRpcManager.GetStartedLevel
void GlobalNamespace::MenuRpcManager::GetStartedLevel() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetStartedLevel"));
}
// Autogenerated method: MenuRpcManager.add_getMultiplayerGameStateEvent
void GlobalNamespace::MenuRpcManager::add_getMultiplayerGameStateEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_getMultiplayerGameStateEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_getMultiplayerGameStateEvent
void GlobalNamespace::MenuRpcManager::remove_getMultiplayerGameStateEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_getMultiplayerGameStateEvent", value));
}
// Autogenerated method: MenuRpcManager.GetMultiplayerGameState
void GlobalNamespace::MenuRpcManager::GetMultiplayerGameState() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetMultiplayerGameState"));
}
// Autogenerated method: MenuRpcManager.add_setMultiplayerGameStateEvent
void GlobalNamespace::MenuRpcManager::add_setMultiplayerGameStateEvent(System::Action_2<::Il2CppString*, GlobalNamespace::MultiplayerGameState>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setMultiplayerGameStateEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_setMultiplayerGameStateEvent
void GlobalNamespace::MenuRpcManager::remove_setMultiplayerGameStateEvent(System::Action_2<::Il2CppString*, GlobalNamespace::MultiplayerGameState>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setMultiplayerGameStateEvent", value));
}
// Autogenerated method: MenuRpcManager.SetMultiplayerGameState
void GlobalNamespace::MenuRpcManager::SetMultiplayerGameState(GlobalNamespace::MultiplayerGameState lobbyState) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetMultiplayerGameState", lobbyState));
}
// Autogenerated method: MenuRpcManager.add_cancelCountdownEvent
void GlobalNamespace::MenuRpcManager::add_cancelCountdownEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_cancelCountdownEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_cancelCountdownEvent
void GlobalNamespace::MenuRpcManager::remove_cancelCountdownEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_cancelCountdownEvent", value));
}
// Autogenerated method: MenuRpcManager.add_setCountdownEndTimeEvent
void GlobalNamespace::MenuRpcManager::add_setCountdownEndTimeEvent(System::Action_2<::Il2CppString*, float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setCountdownEndTimeEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_setCountdownEndTimeEvent
void GlobalNamespace::MenuRpcManager::remove_setCountdownEndTimeEvent(System::Action_2<::Il2CppString*, float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setCountdownEndTimeEvent", value));
}
// Autogenerated method: MenuRpcManager.GetCountdownEndTime
void GlobalNamespace::MenuRpcManager::GetCountdownEndTime() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetCountdownEndTime"));
}
// Autogenerated method: MenuRpcManager.add_cancelledLevelStartEvent
void GlobalNamespace::MenuRpcManager::add_cancelledLevelStartEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_cancelledLevelStartEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_cancelledLevelStartEvent
void GlobalNamespace::MenuRpcManager::remove_cancelledLevelStartEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_cancelledLevelStartEvent", value));
}
// Autogenerated method: MenuRpcManager.CancelLevelStart
void GlobalNamespace::MenuRpcManager::CancelLevelStart() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CancelLevelStart"));
}
// Autogenerated method: MenuRpcManager.add_getIsReadyEvent
void GlobalNamespace::MenuRpcManager::add_getIsReadyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_getIsReadyEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_getIsReadyEvent
void GlobalNamespace::MenuRpcManager::remove_getIsReadyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_getIsReadyEvent", value));
}
// Autogenerated method: MenuRpcManager.GetIsReady
void GlobalNamespace::MenuRpcManager::GetIsReady() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetIsReady"));
}
// Autogenerated method: MenuRpcManager.add_setIsReadyEvent
void GlobalNamespace::MenuRpcManager::add_setIsReadyEvent(System::Action_2<::Il2CppString*, bool>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setIsReadyEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_setIsReadyEvent
void GlobalNamespace::MenuRpcManager::remove_setIsReadyEvent(System::Action_2<::Il2CppString*, bool>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setIsReadyEvent", value));
}
// Autogenerated method: MenuRpcManager.SetIsReady
void GlobalNamespace::MenuRpcManager::SetIsReady(bool isReady) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetIsReady", isReady));
}
// Autogenerated method: MenuRpcManager.add_setStartGameTimeEvent
void GlobalNamespace::MenuRpcManager::add_setStartGameTimeEvent(System::Action_2<::Il2CppString*, float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setStartGameTimeEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_setStartGameTimeEvent
void GlobalNamespace::MenuRpcManager::remove_setStartGameTimeEvent(System::Action_2<::Il2CppString*, float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setStartGameTimeEvent", value));
}
// Autogenerated method: MenuRpcManager.SetStartGameTime
void GlobalNamespace::MenuRpcManager::SetStartGameTime(float newTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetStartGameTime", newTime));
}
// Autogenerated method: MenuRpcManager.add_getIsInLobbyEvent
void GlobalNamespace::MenuRpcManager::add_getIsInLobbyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_getIsInLobbyEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_getIsInLobbyEvent
void GlobalNamespace::MenuRpcManager::remove_getIsInLobbyEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_getIsInLobbyEvent", value));
}
// Autogenerated method: MenuRpcManager.GetIsInLobby
void GlobalNamespace::MenuRpcManager::GetIsInLobby() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetIsInLobby"));
}
// Autogenerated method: MenuRpcManager.add_setIsInLobbyEvent
void GlobalNamespace::MenuRpcManager::add_setIsInLobbyEvent(System::Action_2<::Il2CppString*, bool>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setIsInLobbyEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_setIsInLobbyEvent
void GlobalNamespace::MenuRpcManager::remove_setIsInLobbyEvent(System::Action_2<::Il2CppString*, bool>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setIsInLobbyEvent", value));
}
// Autogenerated method: MenuRpcManager.SetIsInLobby
void GlobalNamespace::MenuRpcManager::SetIsInLobby(bool isBack) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetIsInLobby", isBack));
}
// Autogenerated method: MenuRpcManager.add_getOwnedSongPacksEvent
void GlobalNamespace::MenuRpcManager::add_getOwnedSongPacksEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_getOwnedSongPacksEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_getOwnedSongPacksEvent
void GlobalNamespace::MenuRpcManager::remove_getOwnedSongPacksEvent(System::Action_1<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_getOwnedSongPacksEvent", value));
}
// Autogenerated method: MenuRpcManager.GetOwnedSongPacks
void GlobalNamespace::MenuRpcManager::GetOwnedSongPacks() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetOwnedSongPacks"));
}
// Autogenerated method: MenuRpcManager.add_setOwnedSongPacksEvent
void GlobalNamespace::MenuRpcManager::add_setOwnedSongPacksEvent(System::Action_2<::Il2CppString*, GlobalNamespace::SongPackMask>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_setOwnedSongPacksEvent", value));
}
// Autogenerated method: MenuRpcManager.remove_setOwnedSongPacksEvent
void GlobalNamespace::MenuRpcManager::remove_setOwnedSongPacksEvent(System::Action_2<::Il2CppString*, GlobalNamespace::SongPackMask>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_setOwnedSongPacksEvent", value));
}
// Autogenerated method: MenuRpcManager.SetOwnedSongPacks
void GlobalNamespace::MenuRpcManager::SetOwnedSongPacks(GlobalNamespace::SongPackMask songPackMask) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetOwnedSongPacks", songPackMask));
}