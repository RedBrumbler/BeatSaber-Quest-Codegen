// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerGameState
#include "GlobalNamespace/MultiplayerGameState.hpp"
// Including type: EntitlementsStatus
#include "GlobalNamespace/EntitlementsStatus.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Action_4;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapIdentifierNetSerializable
  class BeatmapIdentifierNetSerializable;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IMenuRpcManager
  class IMenuRpcManager {
    public:
    // public System.Single get_syncTime()
    // Offset: 0xFFFFFFFF
    float get_syncTime();
    // public System.Void add_getIsReadyEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_getIsReadyEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_getIsReadyEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_getIsReadyEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_setIsReadyEvent(System.Action`2<System.String,System.Boolean> value)
    // Offset: 0xFFFFFFFF
    void add_setIsReadyEvent(System::Action_2<::Il2CppString*, bool>* value);
    // public System.Void remove_setIsReadyEvent(System.Action`2<System.String,System.Boolean> value)
    // Offset: 0xFFFFFFFF
    void remove_setIsReadyEvent(System::Action_2<::Il2CppString*, bool>* value);
    // public System.Void add_setStartGameTimeEvent(System.Action`2<System.String,System.Single> value)
    // Offset: 0xFFFFFFFF
    void add_setStartGameTimeEvent(System::Action_2<::Il2CppString*, float>* value);
    // public System.Void remove_setStartGameTimeEvent(System.Action`2<System.String,System.Single> value)
    // Offset: 0xFFFFFFFF
    void remove_setStartGameTimeEvent(System::Action_2<::Il2CppString*, float>* value);
    // public System.Void add_cancelledLevelStartEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_cancelledLevelStartEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_cancelledLevelStartEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_cancelledLevelStartEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_selectedBeatmapEvent(System.Action`2<System.String,BeatmapIdentifierNetSerializable> value)
    // Offset: 0xFFFFFFFF
    void add_selectedBeatmapEvent(System::Action_2<::Il2CppString*, GlobalNamespace::BeatmapIdentifierNetSerializable*>* value);
    // public System.Void remove_selectedBeatmapEvent(System.Action`2<System.String,BeatmapIdentifierNetSerializable> value)
    // Offset: 0xFFFFFFFF
    void remove_selectedBeatmapEvent(System::Action_2<::Il2CppString*, GlobalNamespace::BeatmapIdentifierNetSerializable*>* value);
    // public System.Void add_clearSelectedBeatmapEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_clearSelectedBeatmapEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_clearSelectedBeatmapEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_clearSelectedBeatmapEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_getSelectedBeatmapEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_getSelectedBeatmapEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_getSelectedBeatmapEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_getSelectedBeatmapEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_selectedGameplayModifiersEvent(System.Action`2<System.String,GameplayModifiers> value)
    // Offset: 0xFFFFFFFF
    void add_selectedGameplayModifiersEvent(System::Action_2<::Il2CppString*, GlobalNamespace::GameplayModifiers*>* value);
    // public System.Void remove_selectedGameplayModifiersEvent(System.Action`2<System.String,GameplayModifiers> value)
    // Offset: 0xFFFFFFFF
    void remove_selectedGameplayModifiersEvent(System::Action_2<::Il2CppString*, GlobalNamespace::GameplayModifiers*>* value);
    // public System.Void add_clearSelectedGameplayModifiersEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_clearSelectedGameplayModifiersEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_clearSelectedGameplayModifiersEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_clearSelectedGameplayModifiersEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_getSelectedGameplayModifiersEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_getSelectedGameplayModifiersEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_getSelectedGameplayModifiersEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_getSelectedGameplayModifiersEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_startedLevelEvent(System.Action`4<System.String,BeatmapIdentifierNetSerializable,GameplayModifiers,System.Single> value)
    // Offset: 0xFFFFFFFF
    void add_startedLevelEvent(System::Action_4<::Il2CppString*, GlobalNamespace::BeatmapIdentifierNetSerializable*, GlobalNamespace::GameplayModifiers*, float>* value);
    // public System.Void remove_startedLevelEvent(System.Action`4<System.String,BeatmapIdentifierNetSerializable,GameplayModifiers,System.Single> value)
    // Offset: 0xFFFFFFFF
    void remove_startedLevelEvent(System::Action_4<::Il2CppString*, GlobalNamespace::BeatmapIdentifierNetSerializable*, GlobalNamespace::GameplayModifiers*, float>* value);
    // public System.Void add_getStartedLevelEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_getStartedLevelEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_getStartedLevelEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_getStartedLevelEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_getMultiplayerGameStateEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_getMultiplayerGameStateEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_getMultiplayerGameStateEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_getMultiplayerGameStateEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_setMultiplayerGameStateEvent(System.Action`2<System.String,MultiplayerGameState> value)
    // Offset: 0xFFFFFFFF
    void add_setMultiplayerGameStateEvent(System::Action_2<::Il2CppString*, GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void remove_setMultiplayerGameStateEvent(System.Action`2<System.String,MultiplayerGameState> value)
    // Offset: 0xFFFFFFFF
    void remove_setMultiplayerGameStateEvent(System::Action_2<::Il2CppString*, GlobalNamespace::MultiplayerGameState>* value);
    // public System.Void add_getIsEntitledToLevelEvent(System.Action`2<System.String,System.String> value)
    // Offset: 0xFFFFFFFF
    void add_getIsEntitledToLevelEvent(System::Action_2<::Il2CppString*, ::Il2CppString*>* value);
    // public System.Void remove_getIsEntitledToLevelEvent(System.Action`2<System.String,System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_getIsEntitledToLevelEvent(System::Action_2<::Il2CppString*, ::Il2CppString*>* value);
    // public System.Void add_setIsEntitledToLevelEvent(System.Action`3<System.String,System.String,EntitlementsStatus> value)
    // Offset: 0xFFFFFFFF
    void add_setIsEntitledToLevelEvent(System::Action_3<::Il2CppString*, ::Il2CppString*, GlobalNamespace::EntitlementsStatus>* value);
    // public System.Void remove_setIsEntitledToLevelEvent(System.Action`3<System.String,System.String,EntitlementsStatus> value)
    // Offset: 0xFFFFFFFF
    void remove_setIsEntitledToLevelEvent(System::Action_3<::Il2CppString*, ::Il2CppString*, GlobalNamespace::EntitlementsStatus>* value);
    // public System.Void add_levelEntitlementStatusesInvalidatedEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_levelEntitlementStatusesInvalidatedEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_levelEntitlementStatusesInvalidatedEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_levelEntitlementStatusesInvalidatedEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_getIsInLobbyEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_getIsInLobbyEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_getIsInLobbyEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_getIsInLobbyEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_setIsInLobbyEvent(System.Action`2<System.String,System.Boolean> value)
    // Offset: 0xFFFFFFFF
    void add_setIsInLobbyEvent(System::Action_2<::Il2CppString*, bool>* value);
    // public System.Void remove_setIsInLobbyEvent(System.Action`2<System.String,System.Boolean> value)
    // Offset: 0xFFFFFFFF
    void remove_setIsInLobbyEvent(System::Action_2<::Il2CppString*, bool>* value);
    // public System.Void add_cancelCountdownEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_cancelCountdownEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_cancelCountdownEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_cancelCountdownEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void add_setCountdownEndTimeEvent(System.Action`2<System.String,System.Single> value)
    // Offset: 0xFFFFFFFF
    void add_setCountdownEndTimeEvent(System::Action_2<::Il2CppString*, float>* value);
    // public System.Void remove_setCountdownEndTimeEvent(System.Action`2<System.String,System.Single> value)
    // Offset: 0xFFFFFFFF
    void remove_setCountdownEndTimeEvent(System::Action_2<::Il2CppString*, float>* value);
    // public System.Void add_setOwnedSongPacksEvent(System.Action`2<System.String,SongPackMask> value)
    // Offset: 0xFFFFFFFF
    void add_setOwnedSongPacksEvent(System::Action_2<::Il2CppString*, GlobalNamespace::SongPackMask>* value);
    // public System.Void remove_setOwnedSongPacksEvent(System.Action`2<System.String,SongPackMask> value)
    // Offset: 0xFFFFFFFF
    void remove_setOwnedSongPacksEvent(System::Action_2<::Il2CppString*, GlobalNamespace::SongPackMask>* value);
    // public System.Void add_getOwnedSongPacksEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void add_getOwnedSongPacksEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void remove_getOwnedSongPacksEvent(System.Action`1<System.String> value)
    // Offset: 0xFFFFFFFF
    void remove_getOwnedSongPacksEvent(System::Action_1<::Il2CppString*>* value);
    // public System.Void SelectBeatmap(BeatmapIdentifierNetSerializable identifier)
    // Offset: 0xFFFFFFFF
    void SelectBeatmap(GlobalNamespace::BeatmapIdentifierNetSerializable* identifier);
    // public System.Void ClearSelectedBeatmap()
    // Offset: 0xFFFFFFFF
    void ClearSelectedBeatmap();
    // public System.Void GetSelectedBeatmap()
    // Offset: 0xFFFFFFFF
    void GetSelectedBeatmap();
    // public System.Void SelectGameplayModifiers(GameplayModifiers gameplayModifiers)
    // Offset: 0xFFFFFFFF
    void SelectGameplayModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Void ClearSelectedGameplayModifiers()
    // Offset: 0xFFFFFFFF
    void ClearSelectedGameplayModifiers();
    // public System.Void GetSelectedGameplayModifiers()
    // Offset: 0xFFFFFFFF
    void GetSelectedGameplayModifiers();
    // public System.Void GetIsReady()
    // Offset: 0xFFFFFFFF
    void GetIsReady();
    // public System.Void SetIsReady(System.Boolean isReady)
    // Offset: 0xFFFFFFFF
    void SetIsReady(bool isReady);
    // public System.Void StartLevel(BeatmapIdentifierNetSerializable beatmapId, GameplayModifiers gameplayModifiers, System.Single startTime)
    // Offset: 0xFFFFFFFF
    void StartLevel(GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, GlobalNamespace::GameplayModifiers* gameplayModifiers, float startTime);
    // public System.Void GetStartedLevel()
    // Offset: 0xFFFFFFFF
    void GetStartedLevel();
    // public System.Void GetMultiplayerGameState()
    // Offset: 0xFFFFFFFF
    void GetMultiplayerGameState();
    // public System.Void SetMultiplayerGameState(MultiplayerGameState lobbyState)
    // Offset: 0xFFFFFFFF
    void SetMultiplayerGameState(GlobalNamespace::MultiplayerGameState lobbyState);
    // public System.Void CancelLevelStart()
    // Offset: 0xFFFFFFFF
    void CancelLevelStart();
    // public System.Void SetStartGameTime(System.Single newTime)
    // Offset: 0xFFFFFFFF
    void SetStartGameTime(float newTime);
    // public System.Void InvalidateLevelEntitlementStatuses()
    // Offset: 0xFFFFFFFF
    void InvalidateLevelEntitlementStatuses();
    // public System.Void SetIsEntitledToLevel(System.String levelId, EntitlementsStatus entitlementStatus)
    // Offset: 0xFFFFFFFF
    void SetIsEntitledToLevel(::Il2CppString* levelId, GlobalNamespace::EntitlementsStatus entitlementStatus);
    // public System.Void GetIsEntitledToLevel(System.String levelId)
    // Offset: 0xFFFFFFFF
    void GetIsEntitledToLevel(::Il2CppString* levelId);
    // public System.Void GetIsInLobby()
    // Offset: 0xFFFFFFFF
    void GetIsInLobby();
    // public System.Void SetIsInLobby(System.Boolean isBack)
    // Offset: 0xFFFFFFFF
    void SetIsInLobby(bool isBack);
    // public System.Void GetCountdownEndTime()
    // Offset: 0xFFFFFFFF
    void GetCountdownEndTime();
    // public System.Void GetOwnedSongPacks()
    // Offset: 0xFFFFFFFF
    void GetOwnedSongPacks();
    // public System.Void SetOwnedSongPacks(SongPackMask songPackMask)
    // Offset: 0xFFFFFFFF
    void SetOwnedSongPacks(GlobalNamespace::SongPackMask songPackMask);
  }; // IMenuRpcManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IMenuRpcManager*, "", "IMenuRpcManager");
#pragma pack(pop)