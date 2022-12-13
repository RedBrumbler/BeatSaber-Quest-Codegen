// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData*, "", "PlayerSaveDataV1_0_1/AchievementsData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/AchievementsData
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::AchievementsData : public ::Il2CppObject {
    public:
    public:
    // public System.String[] unlockedAchievements
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> unlockedAchievements;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String[] unlockedAchievementsToUpload
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> unlockedAchievementsToUpload;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Get instance field reference: public System.String[] unlockedAchievements
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_unlockedAchievements();
    // Get instance field reference: public System.String[] unlockedAchievementsToUpload
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_unlockedAchievementsToUpload();
    // public System.Void .ctor()
    // Offset: 0x158A274
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::AchievementsData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::AchievementsData*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/AchievementsData
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::AchievementsData), 24 + sizeof(::ArrayW<::StringW>)> __GlobalNamespace_PlayerSaveDataV1_0_1_AchievementsDataSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::AchievementsData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerSaveDataV1_0_1::AchievementsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
