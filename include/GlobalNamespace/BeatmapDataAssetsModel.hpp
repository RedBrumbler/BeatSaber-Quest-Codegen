// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapDataAssetsModel
  class BeatmapDataAssetsModel : public ::Il2CppObject {
    public:
    // static public System.String BeatmapLevelDataAssetNameForBeatmapLevel(System.String levelID)
    // Offset: 0x1978754
    static ::Il2CppString* BeatmapLevelDataAssetNameForBeatmapLevel(::Il2CppString* levelID);
    // static public System.String AssetBundleNameForBeatmapLevel(System.String levelID)
    // Offset: 0x19787A8
    static ::Il2CppString* AssetBundleNameForBeatmapLevel(::Il2CppString* levelID);
  }; // BeatmapDataAssetsModel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataAssetsModel*, "", "BeatmapDataAssetsModel");
#pragma pack(pop)