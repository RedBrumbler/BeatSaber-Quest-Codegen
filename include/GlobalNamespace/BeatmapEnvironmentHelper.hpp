// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapEnvironmentHelper
  class BeatmapEnvironmentHelper : public ::Il2CppObject {
    public:
    // static public EnvironmentInfoSO GetEnvironmentInfo(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x197ABB8
    static GlobalNamespace::EnvironmentInfoSO* GetEnvironmentInfo(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
  }; // BeatmapEnvironmentHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEnvironmentHelper*, "", "BeatmapEnvironmentHelper");
#pragma pack(pop)