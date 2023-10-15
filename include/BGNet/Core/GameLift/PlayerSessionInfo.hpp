// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapLevelSelectionMask
#include "GlobalNamespace/BeatmapLevelSelectionMask.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: BGNet.Core.GameLift
namespace BGNet::Core::GameLift {
  // Forward declaring type: PlayerSessionInfo
  class PlayerSessionInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BGNet::Core::GameLift::PlayerSessionInfo);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::GameLift::PlayerSessionInfo*, "BGNet.Core.GameLift", "PlayerSessionInfo");
// Type namespace: BGNet.Core.GameLift
namespace BGNet::Core::GameLift {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: BGNet.Core.GameLift.PlayerSessionInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class PlayerSessionInfo : public ::Il2CppObject {
    public:
    public:
    // [JsonPropertyAttribute] Offset: 0x1104DA4
    // public System.String playerSessionId
    // Size: 0x8
    // Offset: 0x10
    ::StringW playerSessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [JsonPropertyAttribute] Offset: 0x1104DDC
    // public System.String gameSessionId
    // Size: 0x8
    // Offset: 0x18
    ::StringW gameSessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [JsonPropertyAttribute] Offset: 0x1104E14
    // public System.String dnsName
    // Size: 0x8
    // Offset: 0x20
    ::StringW dnsName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [JsonPropertyAttribute] Offset: 0x1104E4C
    // public System.Int32 port
    // Size: 0x4
    // Offset: 0x28
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: port and: beatmapLevelSelectionMask
    char __padding3[0x4] = {};
    // [JsonPropertyAttribute] Offset: 0x1104E84
    // public BeatmapLevelSelectionMask beatmapLevelSelectionMask
    // Size: 0x18
    // Offset: 0x30
    ::GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSelectionMask) == 0x18);
    // [JsonPropertyAttribute] Offset: 0x1104EBC
    // public GameplayServerConfiguration gameplayServerConfiguration
    // Size: 0x18
    // Offset: 0x48
    ::GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // [JsonPropertyAttribute] Offset: 0x1104EF4
    // public System.String privateGameSecret
    // Size: 0x8
    // Offset: 0x60
    ::StringW privateGameSecret;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [JsonPropertyAttribute] Offset: 0x1104F2C
    // public System.String privateGameCode
    // Size: 0x8
    // Offset: 0x68
    ::StringW privateGameCode;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.String playerSessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_playerSessionId();
    // Get instance field reference: public System.String gameSessionId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_gameSessionId();
    // Get instance field reference: public System.String dnsName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_dnsName();
    // Get instance field reference: public System.Int32 port
    [[deprecated("Use field access instead!")]] int& dyn_port();
    // Get instance field reference: public BeatmapLevelSelectionMask beatmapLevelSelectionMask
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapLevelSelectionMask& dyn_beatmapLevelSelectionMask();
    // Get instance field reference: public GameplayServerConfiguration gameplayServerConfiguration
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayServerConfiguration& dyn_gameplayServerConfiguration();
    // Get instance field reference: public System.String privateGameSecret
    [[deprecated("Use field access instead!")]] ::StringW& dyn_privateGameSecret();
    // Get instance field reference: public System.String privateGameCode
    [[deprecated("Use field access instead!")]] ::StringW& dyn_privateGameCode();
    // public System.Void .ctor()
    // Offset: 0x1607BF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSessionInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BGNet::Core::GameLift::PlayerSessionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSessionInfo*, creationType>()));
    }
  }; // BGNet.Core.GameLift.PlayerSessionInfo
  #pragma pack(pop)
  static check_size<sizeof(PlayerSessionInfo), 104 + sizeof(::StringW)> __BGNet_Core_GameLift_PlayerSessionInfoSizeCheck;
  static_assert(sizeof(PlayerSessionInfo) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BGNet::Core::GameLift::PlayerSessionInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!