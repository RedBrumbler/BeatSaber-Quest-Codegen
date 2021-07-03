// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveData/SpecialEventKeywordFiltersData
  class BeatmapSaveData::SpecialEventKeywordFiltersData : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<BeatmapSaveData/SpecialEventsForKeyword> _keywords
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>* keywords;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>*) == 0x8);
    // Creating value type constructor for type: SpecialEventKeywordFiltersData
    SpecialEventKeywordFiltersData(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>* keywords_ = {}) noexcept : keywords{keywords_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>*
    constexpr operator System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>*() const noexcept {
      return keywords;
    }
    // public System.Collections.Generic.List`1<BeatmapSaveData/SpecialEventsForKeyword> get_keywords()
    // Offset: 0x110DF40
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>* get_keywords();
    // public System.Void .ctor(System.Collections.Generic.List`1<BeatmapSaveData/SpecialEventsForKeyword> keywords)
    // Offset: 0x110DF48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSaveData::SpecialEventKeywordFiltersData* New_ctor(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>* keywords) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSaveData::SpecialEventKeywordFiltersData*, creationType>(keywords)));
    }
  }; // BeatmapSaveData/SpecialEventKeywordFiltersData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::SpecialEventKeywordFiltersData), 16 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>*)> __GlobalNamespace_BeatmapSaveData_SpecialEventKeywordFiltersDataSizeCheck;
  static_assert(sizeof(BeatmapSaveData::SpecialEventKeywordFiltersData) == 0x18);
  // Writing MetadataGetter for method: BeatmapSaveData::SpecialEventKeywordFiltersData::get_keywords
  // Il2CppName: get_keywords
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>* (BeatmapSaveData::SpecialEventKeywordFiltersData::*)()>(&BeatmapSaveData::SpecialEventKeywordFiltersData::get_keywords)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapSaveData::SpecialEventKeywordFiltersData*), "get_keywords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: BeatmapSaveData::SpecialEventKeywordFiltersData::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapSaveData::SpecialEventKeywordFiltersData::*)(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>*)>(&BeatmapSaveData::SpecialEventKeywordFiltersData::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapSaveData::SpecialEventKeywordFiltersData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapSaveData::SpecialEventKeywordFiltersData::*)(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>*)>(&BeatmapSaveData::SpecialEventKeywordFiltersData::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapSaveData::SpecialEventKeywordFiltersData*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::SpecialEventsForKeyword*>*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData*, "", "BeatmapSaveData/SpecialEventKeywordFiltersData");
