// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IDifficultyBeatmapSet
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DifficultyBeatmapSet
  class DifficultyBeatmapSet : public ::Il2CppObject, public GlobalNamespace::IDifficultyBeatmapSet {
    public:
    // private BeatmapCharacteristicSO <beatmapCharacteristic>k__BackingField
    // Offset: 0x10
    GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
    // private IDifficultyBeatmap[] <difficultyBeatmaps>k__BackingField
    // Offset: 0x18
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps;
    // private System.Void set_beatmapCharacteristic(BeatmapCharacteristicSO value)
    // Offset: 0x2017890
    void set_beatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* value);
    // private System.Void set_difficultyBeatmaps(IDifficultyBeatmap[] value)
    // Offset: 0x20178A0
    void set_difficultyBeatmaps(::Array<GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void .ctor(BeatmapCharacteristicSO beatmapCharacteristic, IDifficultyBeatmap[] difficultyBeatmaps)
    // Offset: 0x20178A8
    static DifficultyBeatmapSet* New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::Array<GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps);
    // public BeatmapCharacteristicSO get_beatmapCharacteristic()
    // Offset: 0x2017888
    // Implemented from: IDifficultyBeatmapSet
    // Base method: BeatmapCharacteristicSO IDifficultyBeatmapSet::get_beatmapCharacteristic()
    GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();
    // public IDifficultyBeatmap[] get_difficultyBeatmaps()
    // Offset: 0x2017898
    // Implemented from: IDifficultyBeatmapSet
    // Base method: IDifficultyBeatmap[] IDifficultyBeatmapSet::get_difficultyBeatmaps()
    ::Array<GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();
  }; // DifficultyBeatmapSet
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DifficultyBeatmapSet*, "", "DifficultyBeatmapSet");
#pragma pack(pop)