// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveData/GuestPlayer
  class PlayerSaveData::GuestPlayer : public ::Il2CppObject {
    public:
    // public System.String playerName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* playerName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: GuestPlayer
    GuestPlayer(::Il2CppString* playerName_ = {}) noexcept : playerName{playerName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return playerName;
    }
    // public System.Void .ctor()
    // Offset: 0x10559E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveData::GuestPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveData::GuestPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveData::GuestPlayer*, creationType>()));
    }
  }; // PlayerSaveData/GuestPlayer
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveData::GuestPlayer), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_PlayerSaveData_GuestPlayerSizeCheck;
  static_assert(sizeof(PlayerSaveData::GuestPlayer) == 0x18);
  // Writing MetadataGetter for method: PlayerSaveData::GuestPlayer::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayerSaveData::GuestPlayer::*)()>(&PlayerSaveData::GuestPlayer::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlayerSaveData::GuestPlayer*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (PlayerSaveData::GuestPlayer::*)()>(&PlayerSaveData::GuestPlayer::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(PlayerSaveData::GuestPlayer*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::GuestPlayer*, "", "PlayerSaveData/GuestPlayer");
