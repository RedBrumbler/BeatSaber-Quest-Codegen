// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Including type: BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType
#include "BeatmapSaveDataVersion2_6_0AndEarlier/BeatmapSaveData.hpp"
// Including type: BeatmapSaveDataVersion3.BeatmapSaveData
#include "BeatmapSaveDataVersion3/BeatmapSaveData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentKeywords
  class EnvironmentKeywords;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter*, "", "BeatmapDataLoader/SpecialEventsFilter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataLoader/SpecialEventsFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::SpecialEventsFilter : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Collections.Generic.HashSet`1<BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType> _eventTypesToFilter
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType>* eventTypesToFilter;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType>*
    constexpr operator ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType>*() const noexcept {
      return eventTypesToFilter;
    }
    // Get instance field reference: private readonly System.Collections.Generic.HashSet`1<BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType> _eventTypesToFilter
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType>*& dyn__eventTypesToFilter();
    // public System.Void .ctor(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.BasicEventTypesWithKeywords basicEventTypesWithKeywords, EnvironmentKeywords environmentKeywords)
    // Offset: 0x13B6200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader::SpecialEventsFilter* New_ctor(::BeatmapSaveDataVersion3::BeatmapSaveData::BasicEventTypesWithKeywords* basicEventTypesWithKeywords, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader::SpecialEventsFilter*, creationType>(basicEventTypesWithKeywords, environmentKeywords)));
    }
    // public System.Boolean IsEventValid(BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapSaveData/BeatmapSaveDataVersion2_6_0AndEarlier.BeatmapEventType basicBeatmapEventType)
    // Offset: 0x13B7230
    bool IsEventValid(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType basicBeatmapEventType);
  }; // BeatmapDataLoader/SpecialEventsFilter
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDataLoader::SpecialEventsFilter), 16 + sizeof(::System::Collections::Generic::HashSet_1<::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType>*)> __GlobalNamespace_BeatmapDataLoader_SpecialEventsFilterSizeCheck;
  static_assert(sizeof(BeatmapDataLoader::SpecialEventsFilter) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter::IsEventValid
// Il2CppName: IsEventValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::BeatmapSaveData::BeatmapEventType)>(&GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter::IsEventValid)> {
  static const MethodInfo* get() {
    static auto* basicBeatmapEventType = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion2_6_0AndEarlier", "BeatmapSaveData/BeatmapEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::SpecialEventsFilter*), "IsEventValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{basicBeatmapEventType});
  }
};
