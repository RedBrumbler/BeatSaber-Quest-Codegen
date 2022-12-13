// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Including type: MultiplayerPlayerStartState
#include "GlobalNamespace/MultiplayerPlayerStartState.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerSongTimeSyncController
  class MultiplayerConnectedPlayerSongTimeSyncController;
  // Forward declaring type: MultiplayerConnectedPlayerBeatmapObjectEventManager
  class MultiplayerConnectedPlayerBeatmapObjectEventManager;
  // Forward declaring type: MultiplayerConnectedPlayerGameNoteController
  class MultiplayerConnectedPlayerGameNoteController;
  // Forward declaring type: MultiplayerConnectedPlayerBombNoteController
  class MultiplayerConnectedPlayerBombNoteController;
  // Forward declaring type: MultiplayerConnectedPlayerObstacleController
  class MultiplayerConnectedPlayerObstacleController;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
  // Forward declaring type: PlayersSpecificSettingsAtGameStartModel
  class PlayersSpecificSettingsAtGameStartModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerConnectedPlayerInstaller
  class MultiplayerConnectedPlayerInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerInstaller*, "", "MultiplayerConnectedPlayerInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerInstaller : public ::Zenject::MonoInstaller {
    public:
    public:
    // private MultiplayerConnectedPlayerSongTimeSyncController _connectedPlayerAudioTimeSyncControllerPrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController* connectedPlayerAudioTimeSyncControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*) == 0x8);
    // private MultiplayerConnectedPlayerBeatmapObjectEventManager _connectedPlayerBeatmapObjectEventManagerPrefab
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager* connectedPlayerBeatmapObjectEventManagerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*) == 0x8);
    // [SpaceAttribute] Offset: 0x1122980
    // private MultiplayerConnectedPlayerGameNoteController _multiplayerGameNoteControllerPrefab
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* multiplayerGameNoteControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*) == 0x8);
    // private MultiplayerConnectedPlayerGameNoteController _multiplayerBurstSliderHeadGameNoteControllerPrefab
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* multiplayerBurstSliderHeadGameNoteControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*) == 0x8);
    // private MultiplayerConnectedPlayerGameNoteController _multiplayerBurstSliderGameNoteControllerPrefab
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* multiplayerBurstSliderGameNoteControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*) == 0x8);
    // private MultiplayerConnectedPlayerGameNoteController _multiplayerBurstSliderFillControllerPrefab
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* multiplayerBurstSliderFillControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*) == 0x8);
    // private MultiplayerConnectedPlayerBombNoteController _multiplayerBombNoteControllerPrefab
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController* multiplayerBombNoteControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*) == 0x8);
    // private MultiplayerConnectedPlayerObstacleController _multiplayerObstacleControllerPrefab
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController* multiplayerObstacleControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*) == 0x8);
    // [InjectAttribute] Offset: 0x1122A08
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x60
    ::GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [InjectAttribute] Offset: 0x1122A18
    // private readonly MultiplayerPlayerStartState _localPlayerStartState
    // Size: 0x4
    // Offset: 0x68
    ::GlobalNamespace::MultiplayerPlayerStartState localPlayerStartState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerPlayerStartState) == 0x4);
    // Padding between fields: localPlayerStartState and: sceneSetupData
    char __padding9[0x4] = {};
    // [InjectAttribute] Offset: 0x1122A28
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x70
    ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0x1122A38
    // private readonly PlayersSpecificSettingsAtGameStartModel _playersSpecificSettingsAtGameStartModel
    // Size: 0x8
    // Offset: 0x78
    ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel* playersSpecificSettingsAtGameStartModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*) == 0x8);
    public:
    // Get instance field reference: private MultiplayerConnectedPlayerSongTimeSyncController _connectedPlayerAudioTimeSyncControllerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerConnectedPlayerSongTimeSyncController*& dyn__connectedPlayerAudioTimeSyncControllerPrefab();
    // Get instance field reference: private MultiplayerConnectedPlayerBeatmapObjectEventManager _connectedPlayerBeatmapObjectEventManagerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectEventManager*& dyn__connectedPlayerBeatmapObjectEventManagerPrefab();
    // Get instance field reference: private MultiplayerConnectedPlayerGameNoteController _multiplayerGameNoteControllerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& dyn__multiplayerGameNoteControllerPrefab();
    // Get instance field reference: private MultiplayerConnectedPlayerGameNoteController _multiplayerBurstSliderHeadGameNoteControllerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& dyn__multiplayerBurstSliderHeadGameNoteControllerPrefab();
    // Get instance field reference: private MultiplayerConnectedPlayerGameNoteController _multiplayerBurstSliderGameNoteControllerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& dyn__multiplayerBurstSliderGameNoteControllerPrefab();
    // Get instance field reference: private MultiplayerConnectedPlayerGameNoteController _multiplayerBurstSliderFillControllerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*& dyn__multiplayerBurstSliderFillControllerPrefab();
    // Get instance field reference: private MultiplayerConnectedPlayerBombNoteController _multiplayerBombNoteControllerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*& dyn__multiplayerBombNoteControllerPrefab();
    // Get instance field reference: private MultiplayerConnectedPlayerObstacleController _multiplayerObstacleControllerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerConnectedPlayerObstacleController*& dyn__multiplayerObstacleControllerPrefab();
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // Get instance field reference: private readonly MultiplayerPlayerStartState _localPlayerStartState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerPlayerStartState& dyn__localPlayerStartState();
    // Get instance field reference: private readonly GameplayCoreSceneSetupData _sceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayCoreSceneSetupData*& dyn__sceneSetupData();
    // Get instance field reference: private readonly PlayersSpecificSettingsAtGameStartModel _playersSpecificSettingsAtGameStartModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*& dyn__playersSpecificSettingsAtGameStartModel();
    // public System.Void .ctor()
    // Offset: 0x146AD68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerConnectedPlayerInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x146A204
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // MultiplayerConnectedPlayerInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerInstaller), 120 + sizeof(::GlobalNamespace::PlayersSpecificSettingsAtGameStartModel*)> __GlobalNamespace_MultiplayerConnectedPlayerInstallerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerInstaller) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerConnectedPlayerInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerConnectedPlayerInstaller::*)()>(&GlobalNamespace::MultiplayerConnectedPlayerInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerConnectedPlayerInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
