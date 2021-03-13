// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: InMultiplayerRichPresenceData
#include "GlobalNamespace/InMultiplayerRichPresenceData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayingMultiplayerRichPresenceData
  // [] Offset: FFFFFFFF
  class PlayingMultiplayerRichPresenceData : public GlobalNamespace::InMultiplayerRichPresenceData {
    public:
    // Creating value type constructor for type: PlayingMultiplayerRichPresenceData
    PlayingMultiplayerRichPresenceData() noexcept {}
    // [LocalizationKeyAttribute] Offset: 0xD22354
    // static field const value: static private System.String kPlayingMultiplayerLobbyRichPresenceLocalizationKey
    static constexpr const char* kPlayingMultiplayerLobbyRichPresenceLocalizationKey = "PLAYING_MULTIPLAYER_PRESENCE";
    // Get static field: static private System.String kPlayingMultiplayerLobbyRichPresenceLocalizationKey
    static ::Il2CppString* _get_kPlayingMultiplayerLobbyRichPresenceLocalizationKey();
    // Set static field: static private System.String kPlayingMultiplayerLobbyRichPresenceLocalizationKey
    static void _set_kPlayingMultiplayerLobbyRichPresenceLocalizationKey(::Il2CppString* value);
    // public System.Void .ctor(IDifficultyBeatmap difficultyBeatmap, System.String multiplayerLobbyCode)
    // Offset: 0xF9B104
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayingMultiplayerRichPresenceData* New_ctor(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::Il2CppString* multiplayerLobbyCode) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayingMultiplayerRichPresenceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayingMultiplayerRichPresenceData*, creationType>(difficultyBeatmap, multiplayerLobbyCode)));
    }
  }; // PlayingMultiplayerRichPresenceData
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayingMultiplayerRichPresenceData*, "", "PlayingMultiplayerRichPresenceData");