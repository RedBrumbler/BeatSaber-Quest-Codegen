// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerConnectedPlayerBeatmapObjectManager
#include "GlobalNamespace/MultiplayerConnectedPlayerBeatmapObjectManager.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerConnectedPlayerBeatmapObjectManager/InitData
  class MultiplayerConnectedPlayerBeatmapObjectManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean disappearingArrows
    // Offset: 0x10
    bool disappearingArrows;
    // public readonly System.Boolean ghostNotes
    // Offset: 0x11
    bool ghostNotes;
    // public System.Void .ctor(System.Boolean disappearingArrows, System.Boolean ghostNotes)
    // Offset: 0x205FA34
    static MultiplayerConnectedPlayerBeatmapObjectManager::InitData* New_ctor(bool disappearingArrows, bool ghostNotes);
  }; // MultiplayerConnectedPlayerBeatmapObjectManager/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::InitData*, "", "MultiplayerConnectedPlayerBeatmapObjectManager/InitData");
#pragma pack(pop)