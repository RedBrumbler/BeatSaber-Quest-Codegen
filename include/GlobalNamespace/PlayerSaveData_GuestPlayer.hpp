// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveData/GuestPlayer
  class PlayerSaveData::GuestPlayer : public ::Il2CppObject {
    public:
    // public System.String playerName
    // Offset: 0x10
    ::Il2CppString* playerName;
    // public System.Void .ctor()
    // Offset: 0xBC6F54
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerSaveData::GuestPlayer* New_ctor();
  }; // PlayerSaveData/GuestPlayer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::GuestPlayer*, "", "PlayerSaveData/GuestPlayer");
#pragma pack(pop)