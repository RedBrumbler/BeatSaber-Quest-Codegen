// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapDifficulty
  struct BeatmapDifficulty : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public BeatmapDifficulty Easy
    static constexpr const int Easy = 0;
    // Get static field: static public BeatmapDifficulty Easy
    static GlobalNamespace::BeatmapDifficulty _get_Easy();
    // Set static field: static public BeatmapDifficulty Easy
    static void _set_Easy(GlobalNamespace::BeatmapDifficulty value);
    // static field const value: static public BeatmapDifficulty Normal
    static constexpr const int Normal = 1;
    // Get static field: static public BeatmapDifficulty Normal
    static GlobalNamespace::BeatmapDifficulty _get_Normal();
    // Set static field: static public BeatmapDifficulty Normal
    static void _set_Normal(GlobalNamespace::BeatmapDifficulty value);
    // static field const value: static public BeatmapDifficulty Hard
    static constexpr const int Hard = 2;
    // Get static field: static public BeatmapDifficulty Hard
    static GlobalNamespace::BeatmapDifficulty _get_Hard();
    // Set static field: static public BeatmapDifficulty Hard
    static void _set_Hard(GlobalNamespace::BeatmapDifficulty value);
    // static field const value: static public BeatmapDifficulty Expert
    static constexpr const int Expert = 3;
    // Get static field: static public BeatmapDifficulty Expert
    static GlobalNamespace::BeatmapDifficulty _get_Expert();
    // Set static field: static public BeatmapDifficulty Expert
    static void _set_Expert(GlobalNamespace::BeatmapDifficulty value);
    // static field const value: static public BeatmapDifficulty ExpertPlus
    static constexpr const int ExpertPlus = 4;
    // Get static field: static public BeatmapDifficulty ExpertPlus
    static GlobalNamespace::BeatmapDifficulty _get_ExpertPlus();
    // Set static field: static public BeatmapDifficulty ExpertPlus
    static void _set_ExpertPlus(GlobalNamespace::BeatmapDifficulty value);
    // Creating value type constructor for type: BeatmapDifficulty
    BeatmapDifficulty(int value_ = {}) : value{value_} {}
  }; // BeatmapDifficulty
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDifficulty, "", "BeatmapDifficulty");
#pragma pack(pop)