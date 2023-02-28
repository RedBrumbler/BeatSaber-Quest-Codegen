// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: LeaderboardQueryDTO
  class LeaderboardQueryDTO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LeaderboardsDTO::LeaderboardQueryDTO);
DEFINE_IL2CPP_ARG_TYPE(::LeaderboardsDTO::LeaderboardQueryDTO*, "LeaderboardsDTO", "LeaderboardQueryDTO");
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardsDTO.LeaderboardQueryDTO
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardQueryDTO : public ::Il2CppObject {
    public:
    // Nested type: ::LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope
    struct ScoresScope;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope
    // [TokenAttribute] Offset: FFFFFFFF
    struct ScoresScope/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ScoresScope
      constexpr ScoresScope(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope Global
      static constexpr const int Global = 0;
      // Get static field: static public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope Global
      static ::LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope _get_Global();
      // Set static field: static public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope Global
      static void _set_Global(::LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope value);
      // static field const value: static public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope Friends
      static constexpr const int Friends = 1;
      // Get static field: static public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope Friends
      static ::LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope _get_Friends();
      // Set static field: static public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope Friends
      static void _set_Friends(::LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope
    #pragma pack(pop)
    static check_size<sizeof(LeaderboardQueryDTO::ScoresScope), 0 + sizeof(int)> __LeaderboardsDTO_LeaderboardQueryDTO_ScoresScopeSizeCheck;
    static_assert(sizeof(LeaderboardQueryDTO::ScoresScope) == 0x4);
    public:
    // public System.String leaderboardId
    // Size: 0x8
    // Offset: 0x10
    ::StringW leaderboardId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x18
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 fromRank
    // Size: 0x4
    // Offset: 0x1C
    int fromRank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope scope
    // Size: 0x4
    // Offset: 0x20
    ::LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope scope;
    // Field size check
    static_assert(sizeof(::LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope) == 0x4);
    // Padding between fields: scope and: friendsUserIds
    char __padding3[0x4] = {};
    // public System.String[] friendsUserIds
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::StringW> friendsUserIds;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.Boolean includedScoreWithModifiers
    // Size: 0x1
    // Offset: 0x30
    bool includedScoreWithModifiers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String leaderboardId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_leaderboardId();
    // Get instance field reference: public System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // Get instance field reference: public System.Int32 fromRank
    [[deprecated("Use field access instead!")]] int& dyn_fromRank();
    // Get instance field reference: public LeaderboardsDTO.LeaderboardQueryDTO/LeaderboardsDTO.ScoresScope scope
    [[deprecated("Use field access instead!")]] ::LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope& dyn_scope();
    // Get instance field reference: public System.String[] friendsUserIds
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_friendsUserIds();
    // Get instance field reference: public System.Boolean includedScoreWithModifiers
    [[deprecated("Use field access instead!")]] bool& dyn_includedScoreWithModifiers();
    // public System.Void .ctor()
    // Offset: 0x13B5C1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardQueryDTO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LeaderboardsDTO::LeaderboardQueryDTO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardQueryDTO*, creationType>()));
    }
  }; // LeaderboardsDTO.LeaderboardQueryDTO
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardQueryDTO), 48 + sizeof(bool)> __LeaderboardsDTO_LeaderboardQueryDTOSizeCheck;
  static_assert(sizeof(LeaderboardQueryDTO) == 0x31);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::LeaderboardsDTO::LeaderboardQueryDTO::ScoresScope, "LeaderboardsDTO", "LeaderboardQueryDTO/ScoresScope");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LeaderboardsDTO::LeaderboardQueryDTO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
