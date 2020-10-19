// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: IEquatableByReference`1
#include "GlobalNamespace/IEquatableByReference_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayServerConfiguration
  struct GameplayServerConfiguration;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayServerFilter
  struct GameplayServerFilter : public System::ValueType, public GlobalNamespace::IEquatableByReference_1<GlobalNamespace::GameplayServerFilter>, public System::IEquatable_1<GlobalNamespace::GameplayServerFilter>, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::GameplayServerFilter> {
    public:
    // public readonly System.Boolean includePasswordProtected
    // Offset: 0x0
    bool includePasswordProtected;
    // public readonly System.Boolean includeEmpty
    // Offset: 0x1
    bool includeEmpty;
    // public readonly System.Boolean includeFull
    // Offset: 0x2
    bool includeFull;
    // public readonly System.Boolean filterNames
    // Offset: 0x3
    bool filterNames;
    // public readonly System.String nameFilter
    // Offset: 0x8
    ::Il2CppString* nameFilter;
    // public readonly System.Boolean filterDifficulties
    // Offset: 0x10
    bool filterDifficulties;
    // public readonly BeatmapDifficultyMask difficultyFilter
    // Offset: 0x11
    GlobalNamespace::BeatmapDifficultyMask difficultyFilter;
    // public readonly System.Boolean filterModifiers
    // Offset: 0x12
    bool filterModifiers;
    // public readonly GameplayModifierMask modifierFilter
    // Offset: 0x14
    GlobalNamespace::GameplayModifierMask modifierFilter;
    // public readonly System.Boolean filterSongPacks
    // Offset: 0x16
    bool filterSongPacks;
    // public readonly SongPackMask songPackFilter
    // Offset: 0x18
    GlobalNamespace::SongPackMask songPackFilter;
    // Creating value type constructor for type: GameplayServerFilter
    constexpr GameplayServerFilter(bool includePasswordProtected_ = {}, bool includeEmpty_ = {}, bool includeFull_ = {}, bool filterNames_ = {}, ::Il2CppString* nameFilter_ = {}, bool filterDifficulties_ = {}, GlobalNamespace::BeatmapDifficultyMask difficultyFilter_ = {}, bool filterModifiers_ = {}, GlobalNamespace::GameplayModifierMask modifierFilter_ = {}, bool filterSongPacks_ = {}, GlobalNamespace::SongPackMask songPackFilter_ = {}) noexcept : includePasswordProtected{includePasswordProtected_}, includeEmpty{includeEmpty_}, includeFull{includeFull_}, filterNames{filterNames_}, nameFilter{nameFilter_}, filterDifficulties{filterDifficulties_}, difficultyFilter{difficultyFilter_}, filterModifiers{filterModifiers_}, modifierFilter{modifierFilter_}, filterSongPacks{filterSongPacks_}, songPackFilter{songPackFilter_} {}
    // public System.Void .ctor(System.Boolean includePasswordProtected, System.Boolean includeEmpty, System.Boolean includeFull, System.Boolean filterNames, System.String nameFilter, System.Boolean filterDifficulties, BeatmapDifficultyMask difficultyFilter, System.Boolean filterModifiers, GameplayModifierMask modifierFilter, System.Boolean filterSongPacks, SongPackMask songPackFilter)
    // Offset: 0xE4F068
    // ABORTED: conflicts with another method.  GameplayServerFilter(bool includePasswordProtected, bool includeEmpty, bool includeFull, bool filterNames, ::Il2CppString* nameFilter, bool filterDifficulties, GlobalNamespace::BeatmapDifficultyMask difficultyFilter, bool filterModifiers, GlobalNamespace::GameplayModifierMask modifierFilter, bool filterSongPacks, GlobalNamespace::SongPackMask songPackFilter);
    // static public GameplayServerFilter get_defaultFilter()
    // Offset: 0x215FAF4
    static GlobalNamespace::GameplayServerFilter get_defaultFilter();
    // public System.Boolean Equals(ref GameplayServerFilter other)
    // Offset: 0xE4F0AC
    bool Equals(GlobalNamespace::GameplayServerFilter& other);
    // static public GameplayServerFilter Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x215FE88
    static GlobalNamespace::GameplayServerFilter Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean IncludesServerName(System.String lowerInvariantName)
    // Offset: 0xE4F10C
    bool IncludesServerName(::Il2CppString* lowerInvariantName);
    // public System.Boolean IncludesPassword(System.String password)
    // Offset: 0xE4F13C
    bool IncludesPassword(::Il2CppString* password);
    // public System.Boolean IncludesPlayerCount(System.Int32 currentPlayerCount, System.Int32 maxPlayerCount)
    // Offset: 0xE4F158
    bool IncludesPlayerCount(int currentPlayerCount, int maxPlayerCount);
    // public System.Boolean IncludesConfiguration(GameplayServerConfiguration configuration)
    // Offset: 0xE4F18C
    bool IncludesConfiguration(GlobalNamespace::GameplayServerConfiguration configuration);
    // public System.Boolean Equals(GameplayServerFilter other)
    // Offset: 0xE4F0B4
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(GameplayServerFilter other)
    bool Equals(GlobalNamespace::GameplayServerFilter other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE4F0EC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE4F0F4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xE4F0FC
    // Implemented from: LiteNetLib.Utils.INetImmutableSerializable`1
    // Base method: System.Void INetImmutableSerializable_1::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public GameplayServerFilter CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xE4F104
    // Implemented from: LiteNetLib.Utils.INetImmutableSerializable`1
    // Base method: T INetImmutableSerializable_1::CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    GlobalNamespace::GameplayServerFilter CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData
    // Maps to method: CreateFromSerializedData
    GlobalNamespace::GameplayServerFilter LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
  }; // GameplayServerFilter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayServerFilter, "", "GameplayServerFilter");
#pragma pack(pop)