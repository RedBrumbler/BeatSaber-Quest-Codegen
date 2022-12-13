// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VersionSaveData
#include "GlobalNamespace/VersionSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerSaveData
  class PlayerSaveData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveData*, "", "PlayerSaveData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveData : public ::GlobalNamespace::VersionSaveData {
    public:
    // Nested type: ::GlobalNamespace::PlayerSaveData::GameplayModifiers
    class GameplayModifiers;
    // Nested type: ::GlobalNamespace::PlayerSaveData::PlayerSpecificSettings
    class PlayerSpecificSettings;
    // Nested type: ::GlobalNamespace::PlayerSaveData::PlayerAllOverallStatsData
    class PlayerAllOverallStatsData;
    // Nested type: ::GlobalNamespace::PlayerSaveData::PlayerOverallStatsData
    class PlayerOverallStatsData;
    // Nested type: ::GlobalNamespace::PlayerSaveData::PlayerLevelStatsData
    class PlayerLevelStatsData;
    // Nested type: ::GlobalNamespace::PlayerSaveData::PlayerMissionStatsData
    class PlayerMissionStatsData;
    // Nested type: ::GlobalNamespace::PlayerSaveData::PracticeSettings
    class PracticeSettings;
    // Nested type: ::GlobalNamespace::PlayerSaveData::ColorScheme
    class ColorScheme;
    // Nested type: ::GlobalNamespace::PlayerSaveData::ColorSchemesSettings
    class ColorSchemesSettings;
    // Nested type: ::GlobalNamespace::PlayerSaveData::OverrideEnvironmentSettings
    class OverrideEnvironmentSettings;
    // Nested type: ::GlobalNamespace::PlayerSaveData::GuestPlayer
    class GuestPlayer;
    // Nested type: ::GlobalNamespace::PlayerSaveData::MultiplayerModeSettings
    class MultiplayerModeSettings;
    // Nested type: ::GlobalNamespace::PlayerSaveData::PlayerAgreementsData
    class PlayerAgreementsData;
    // Nested type: ::GlobalNamespace::PlayerSaveData::LocalPlayer
    class LocalPlayer;
    public:
    // public System.Collections.Generic.List`1<PlayerSaveData/LocalPlayer> localPlayers
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData::LocalPlayer*>* localPlayers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData::LocalPlayer*>*) == 0x8);
    // public System.Collections.Generic.List`1<PlayerSaveData/GuestPlayer> guestPlayers
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData::GuestPlayer*>* guestPlayers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData::GuestPlayer*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept = delete;
    // static field const value: static public System.String kCurrentVersion
    static constexpr const char* kCurrentVersion = "2.0.22";
    // Get static field: static public System.String kCurrentVersion
    static ::StringW _get_kCurrentVersion();
    // Set static field: static public System.String kCurrentVersion
    static void _set_kCurrentVersion(::StringW value);
    // Get instance field reference: public System.Collections.Generic.List`1<PlayerSaveData/LocalPlayer> localPlayers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData::LocalPlayer*>*& dyn_localPlayers();
    // Get instance field reference: public System.Collections.Generic.List`1<PlayerSaveData/GuestPlayer> guestPlayers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData::GuestPlayer*>*& dyn_guestPlayers();
    // public System.Void .ctor()
    // Offset: 0x1585B64
    // Implemented from: VersionSaveData
    // Base method: System.Void VersionSaveData::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData*, creationType>()));
    }
  }; // PlayerSaveData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData), 32 + sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData::GuestPlayer*>*)> __GlobalNamespace_PlayerSaveDataSizeCheck;
  static_assert(sizeof(PlayerSaveData) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
