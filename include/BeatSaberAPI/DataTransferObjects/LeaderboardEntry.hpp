// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: BeatSaberAPI.DataTransferObjects.LevelScoreResult/GameplayModifiers
#include "BeatSaberAPI/DataTransferObjects/LevelScoreResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.LeaderboardEntry
  class LeaderboardEntry : public ::Il2CppObject {
    public:
    // public System.Int32 id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 score
    // Size: 0x4
    // Offset: 0x14
    int score;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 unmodifiedScore
    // Size: 0x4
    // Offset: 0x18
    int unmodifiedScore;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 rank
    // Size: 0x4
    // Offset: 0x1C
    int rank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.DateTime updated
    // Size: 0x8
    // Offset: 0x20
    System::DateTime updated;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // public System.String userDisplayName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* userDisplayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String platformUserId
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* platformUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public BeatSaberAPI.DataTransferObjects.LevelScoreResult/GameplayModifiers[] gameplayModifiers
    // Size: 0x8
    // Offset: 0x38
    ::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>* gameplayModifiers;
    // Field size check
    static_assert(sizeof(::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>*) == 0x8);
    // Creating value type constructor for type: LeaderboardEntry
    LeaderboardEntry(int id_ = {}, int score_ = {}, int unmodifiedScore_ = {}, int rank_ = {}, System::DateTime updated_ = {}, ::Il2CppString* userDisplayName_ = {}, ::Il2CppString* platformUserId_ = {}, ::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>* gameplayModifiers_ = {}) noexcept : id{id_}, score{score_}, unmodifiedScore{unmodifiedScore_}, rank{rank_}, updated{updated_}, userDisplayName{userDisplayName_}, platformUserId{platformUserId_}, gameplayModifiers{gameplayModifiers_} {}
    // public System.Void .ctor()
    // Offset: 0x11BC6E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardEntry* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("BeatSaberAPI::DataTransferObjects::LeaderboardEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardEntry*, creationType>()));
    }
  }; // BeatSaberAPI.DataTransferObjects.LeaderboardEntry
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardEntry), 56 + sizeof(::Array<BeatSaberAPI::DataTransferObjects::LevelScoreResult::GameplayModifiers>*)> __BeatSaberAPI_DataTransferObjects_LeaderboardEntrySizeCheck;
  static_assert(sizeof(LeaderboardEntry) == 0x40);
  // Writing MetadataGetter for method: LeaderboardEntry::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LeaderboardEntry::*)()>(&LeaderboardEntry::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LeaderboardEntry*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LeaderboardEntry::*)()>(&LeaderboardEntry::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(LeaderboardEntry*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::LeaderboardEntry*, "BeatSaberAPI.DataTransferObjects", "LeaderboardEntry");
