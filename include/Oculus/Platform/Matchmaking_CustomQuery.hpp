// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Matchmaking
#include "Oculus/Platform/Matchmaking.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Oculus.Platform.MatchmakingCriterionImportance
#include "Oculus/Platform/MatchmakingCriterionImportance.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Matchmaking/CustomQuery
  class Matchmaking::CustomQuery : public ::Il2CppObject {
    public:
    // Nested type: Oculus::Platform::Matchmaking::CustomQuery::Criterion
    struct Criterion;
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Oculus.Platform.Matchmaking/CustomQuery/Criterion
    struct Criterion/*, public System::ValueType*/ {
      public:
      // public System.String key
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* key;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // public Oculus.Platform.MatchmakingCriterionImportance importance
      // Size: 0x4
      // Offset: 0x8
      Oculus::Platform::MatchmakingCriterionImportance importance;
      // Field size check
      static_assert(sizeof(Oculus::Platform::MatchmakingCriterionImportance) == 0x4);
      // Padding between fields: importance and: parameters
      char __padding1[0x4] = {};
      // public System.Collections.Generic.Dictionary`2<System.String,System.Object> parameters
      // Size: 0x8
      // Offset: 0x10
      System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* parameters;
      // Field size check
      static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>*) == 0x8);
      // Creating value type constructor for type: Criterion
      constexpr Criterion(::Il2CppString* key_ = {}, Oculus::Platform::MatchmakingCriterionImportance importance_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* parameters_ = {}) noexcept : key{key_}, importance{importance_}, parameters{parameters_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(System.String key_, Oculus.Platform.MatchmakingCriterionImportance importance_)
      // Offset: 0xEF0468
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      Criterion(::Il2CppString* key_, Oculus::Platform::MatchmakingCriterionImportance importance_) {
        static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Matchmaking::CustomQuery::Criterion::.ctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(key_), ::il2cpp_utils::ExtractType(importance_)})));
        ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, key_, importance_);
      }
    }; // Oculus.Platform.Matchmaking/CustomQuery/Criterion
    #pragma pack(pop)
    static check_size<sizeof(Matchmaking::CustomQuery::Criterion), 16 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>*)> __Oculus_Platform_Matchmaking_CustomQuery_CriterionSizeCheck;
    static_assert(sizeof(Matchmaking::CustomQuery::Criterion) == 0x18);
    // Writing MetadataGetter for method: Matchmaking::CustomQuery::Criterion::Criterion
    // Il2CppName: .ctor
    template<>
    struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Matchmaking::CustomQuery::Criterion::*)(::Il2CppString*, Oculus::Platform::MatchmakingCriterionImportance)>(&Matchmaking::CustomQuery::Criterion::Criterion<::il2cpp_utils::CreationType::Temporary>)> {
      const MethodInfo* get() {
        return ::il2cpp_utils::FindMethod(classof(Matchmaking::CustomQuery::Criterion), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<Oculus::Platform::MatchmakingCriterionImportance>()});
      }
    };
    template<>
    struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Matchmaking::CustomQuery::Criterion::*)(::Il2CppString*, Oculus::Platform::MatchmakingCriterionImportance)>(&Matchmaking::CustomQuery::Criterion::Criterion<::il2cpp_utils::CreationType::Manual>)> {
      const MethodInfo* get() {
        return ::il2cpp_utils::FindMethod(classof(Matchmaking::CustomQuery::Criterion), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<Oculus::Platform::MatchmakingCriterionImportance>()});
      }
    };
    // public System.Collections.Generic.Dictionary`2<System.String,System.Object> data
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* data;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>*) == 0x8);
    // public Oculus.Platform.Matchmaking/CustomQuery/Criterion[] criteria
    // Size: 0x8
    // Offset: 0x18
    ::Array<Oculus::Platform::Matchmaking::CustomQuery::Criterion>* criteria;
    // Field size check
    static_assert(sizeof(::Array<Oculus::Platform::Matchmaking::CustomQuery::Criterion>*) == 0x8);
    // Creating value type constructor for type: CustomQuery
    CustomQuery(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* data_ = {}, ::Array<Oculus::Platform::Matchmaking::CustomQuery::Criterion>* criteria_ = {}) noexcept : data{data_}, criteria{criteria_} {}
    // public System.IntPtr ToUnmanaged()
    // Offset: 0x14C650C
    System::IntPtr ToUnmanaged();
    // public System.Void .ctor()
    // Offset: 0x14C79E8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Matchmaking::CustomQuery* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Matchmaking::CustomQuery::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Matchmaking::CustomQuery*, creationType>()));
    }
  }; // Oculus.Platform.Matchmaking/CustomQuery
  #pragma pack(pop)
  static check_size<sizeof(Matchmaking::CustomQuery), 24 + sizeof(::Array<Oculus::Platform::Matchmaking::CustomQuery::Criterion>*)> __Oculus_Platform_Matchmaking_CustomQuerySizeCheck;
  static_assert(sizeof(Matchmaking::CustomQuery) == 0x20);
  // Writing MetadataGetter for method: Matchmaking::CustomQuery::ToUnmanaged
  // Il2CppName: ToUnmanaged
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IntPtr (Matchmaking::CustomQuery::*)()>(&Matchmaking::CustomQuery::ToUnmanaged)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Matchmaking::CustomQuery*), "ToUnmanaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Matchmaking::CustomQuery::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Matchmaking::CustomQuery::*)()>(&Matchmaking::CustomQuery::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Matchmaking::CustomQuery*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Matchmaking::CustomQuery::*)()>(&Matchmaking::CustomQuery::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Matchmaking::CustomQuery*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Matchmaking::CustomQuery*, "Oculus.Platform", "Matchmaking/CustomQuery");
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Matchmaking::CustomQuery::Criterion, "Oculus.Platform", "Matchmaking/CustomQuery/Criterion");
