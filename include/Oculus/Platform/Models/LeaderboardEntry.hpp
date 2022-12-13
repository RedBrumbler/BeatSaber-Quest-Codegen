// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: SupplementaryMetric
  class SupplementaryMetric;
  // Forward declaring type: User
  class User;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LeaderboardEntry
  class LeaderboardEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Models::LeaderboardEntry);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LeaderboardEntry*, "Oculus.Platform.Models", "LeaderboardEntry");
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Models.LeaderboardEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardEntry : public ::Il2CppObject {
    public:
    public:
    // public readonly System.String DisplayScore
    // Size: 0x8
    // Offset: 0x10
    ::StringW DisplayScore;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Byte[] ExtraData
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> ExtraData;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // public readonly System.Int32 Rank
    // Size: 0x4
    // Offset: 0x20
    int Rank;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Rank and: Score
    char __padding2[0x4] = {};
    // public readonly System.Int64 Score
    // Size: 0x8
    // Offset: 0x28
    int64_t Score;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly Oculus.Platform.Models.SupplementaryMetric SupplementaryMetricOptional
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Platform::Models::SupplementaryMetric* SupplementaryMetricOptional;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::SupplementaryMetric*) == 0x8);
    // [ObsoleteAttribute] Offset: 0x110F9C4
    // public readonly Oculus.Platform.Models.SupplementaryMetric SupplementaryMetric
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Platform::Models::SupplementaryMetric* SupplementaryMetric;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::SupplementaryMetric*) == 0x8);
    // public readonly System.DateTime Timestamp
    // Size: 0x8
    // Offset: 0x40
    ::System::DateTime Timestamp;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // public readonly Oculus.Platform.Models.User User
    // Size: 0x8
    // Offset: 0x48
    ::Oculus::Platform::Models::User* User;
    // Field size check
    static_assert(sizeof(::Oculus::Platform::Models::User*) == 0x8);
    public:
    // Get instance field reference: public readonly System.String DisplayScore
    [[deprecated("Use field access instead!")]] ::StringW& dyn_DisplayScore();
    // Get instance field reference: public readonly System.Byte[] ExtraData
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_ExtraData();
    // Get instance field reference: public readonly System.Int32 Rank
    [[deprecated("Use field access instead!")]] int& dyn_Rank();
    // Get instance field reference: public readonly System.Int64 Score
    [[deprecated("Use field access instead!")]] int64_t& dyn_Score();
    // Get instance field reference: public readonly Oculus.Platform.Models.SupplementaryMetric SupplementaryMetricOptional
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::SupplementaryMetric*& dyn_SupplementaryMetricOptional();
    // Get instance field reference: public readonly Oculus.Platform.Models.SupplementaryMetric SupplementaryMetric
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::SupplementaryMetric*& dyn_SupplementaryMetric();
    // Get instance field reference: public readonly System.DateTime Timestamp
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_Timestamp();
    // Get instance field reference: public readonly Oculus.Platform.Models.User User
    [[deprecated("Use field access instead!")]] ::Oculus::Platform::Models::User*& dyn_User();
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1A39010
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardEntry* New_ctor(::System::IntPtr o) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Models::LeaderboardEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardEntry*, creationType>(o)));
    }
  }; // Oculus.Platform.Models.LeaderboardEntry
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardEntry), 72 + sizeof(::Oculus::Platform::Models::User*)> __Oculus_Platform_Models_LeaderboardEntrySizeCheck;
  static_assert(sizeof(LeaderboardEntry) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Models::LeaderboardEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
