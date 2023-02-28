// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GameServersFilter
  class GameServersFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameServersFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServersFilter*, "", "GameServersFilter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2B
  #pragma pack(push, 1)
  // Autogenerated type: GameServersFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class GameServersFilter : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean filterByDifficulty
    // Size: 0x1
    // Offset: 0x10
    bool filterByDifficulty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public BeatmapDifficultyMask filteredDifficulty
    // Size: 0x1
    // Offset: 0x11
    ::GlobalNamespace::BeatmapDifficultyMask filteredDifficulty;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // public System.Boolean filterByModifiers
    // Size: 0x1
    // Offset: 0x12
    bool filterByModifiers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: filterByModifiers and: filteredModifiers
    char __padding2[0x1] = {};
    // public GameplayModifierMask filteredModifiers
    // Size: 0x2
    // Offset: 0x14
    ::GlobalNamespace::GameplayModifierMask filteredModifiers;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifierMask) == 0x2);
    // public System.Boolean filterBySongPacks
    // Size: 0x1
    // Offset: 0x16
    bool filterBySongPacks;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: filterBySongPacks and: filteredSongPacks
    char __padding4[0x1] = {};
    // public SongPackMask filteredSongPacks
    // Size: 0x10
    // Offset: 0x18
    ::GlobalNamespace::SongPackMask filteredSongPacks;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongPackMask) == 0x10);
    // public System.Boolean showFull
    // Size: 0x1
    // Offset: 0x28
    bool showFull;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean showProtected
    // Size: 0x1
    // Offset: 0x29
    bool showProtected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean showInternetGames
    // Size: 0x1
    // Offset: 0x2A
    bool showInternetGames;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Boolean filterByDifficulty
    [[deprecated("Use field access instead!")]] bool& dyn_filterByDifficulty();
    // Get instance field reference: public BeatmapDifficultyMask filteredDifficulty
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDifficultyMask& dyn_filteredDifficulty();
    // Get instance field reference: public System.Boolean filterByModifiers
    [[deprecated("Use field access instead!")]] bool& dyn_filterByModifiers();
    // Get instance field reference: public GameplayModifierMask filteredModifiers
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayModifierMask& dyn_filteredModifiers();
    // Get instance field reference: public System.Boolean filterBySongPacks
    [[deprecated("Use field access instead!")]] bool& dyn_filterBySongPacks();
    // Get instance field reference: public SongPackMask filteredSongPacks
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SongPackMask& dyn_filteredSongPacks();
    // Get instance field reference: public System.Boolean showFull
    [[deprecated("Use field access instead!")]] bool& dyn_showFull();
    // Get instance field reference: public System.Boolean showProtected
    [[deprecated("Use field access instead!")]] bool& dyn_showProtected();
    // Get instance field reference: public System.Boolean showInternetGames
    [[deprecated("Use field access instead!")]] bool& dyn_showInternetGames();
    // public System.Void .ctor()
    // Offset: 0x1478918
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServersFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameServersFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServersFilter*, creationType>()));
    }
  }; // GameServersFilter
  #pragma pack(pop)
  static check_size<sizeof(GameServersFilter), 42 + sizeof(bool)> __GlobalNamespace_GameServersFilterSizeCheck;
  static_assert(sizeof(GameServersFilter) == 0x2B);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameServersFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
