// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IBeatmapLevelCollection
#include "GlobalNamespace/IBeatmapLevelCollection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelCollection
  class BeatmapLevelCollection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelCollection*, "", "BeatmapLevelCollection");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelCollection
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapLevelCollection : public ::Il2CppObject/*, public ::GlobalNamespace::IBeatmapLevelCollection*/ {
    public:
    public:
    // private readonly System.Collections.Generic.IReadOnlyList`1<IPreviewBeatmapLevel> _levels
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* levels;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IBeatmapLevelCollection
    operator ::GlobalNamespace::IBeatmapLevelCollection() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IBeatmapLevelCollection*>(this);
    }
    // Creating interface conversion operator: i_IBeatmapLevelCollection
    inline ::GlobalNamespace::IBeatmapLevelCollection* i_IBeatmapLevelCollection() noexcept {
      return reinterpret_cast<::GlobalNamespace::IBeatmapLevelCollection*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*
    constexpr operator ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*() const noexcept {
      return levels;
    }
    // Get instance field reference: private readonly System.Collections.Generic.IReadOnlyList`1<IPreviewBeatmapLevel> _levels
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*& dyn__levels();
    // public System.Collections.Generic.IReadOnlyList`1<IPreviewBeatmapLevel> get_beatmapLevels()
    // Offset: 0x1562444
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();
    // public System.Void .ctor(System.Collections.Generic.IReadOnlyList`1<IPreviewBeatmapLevel> levels)
    // Offset: 0x156244C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelCollection* New_ctor(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* levels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapLevelCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelCollection*, creationType>(levels)));
    }
    // static public BeatmapLevelCollection CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering(IBeatmapLevelCollection beatmapLevelCollection, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x1562478
    static ::GlobalNamespace::BeatmapLevelCollection* CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering(::GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
  }; // BeatmapLevelCollection
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelCollection), 16 + sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*)> __GlobalNamespace_BeatmapLevelCollectionSizeCheck;
  static_assert(sizeof(BeatmapLevelCollection) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelCollection::get_beatmapLevels
// Il2CppName: get_beatmapLevels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* (GlobalNamespace::BeatmapLevelCollection::*)()>(&GlobalNamespace::BeatmapLevelCollection::get_beatmapLevels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelCollection*), "get_beatmapLevels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelCollection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapLevelCollection::CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering
// Il2CppName: CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelCollection* (*)(::GlobalNamespace::IBeatmapLevelCollection*, ::GlobalNamespace::BeatmapCharacteristicSO*)>(&GlobalNamespace::BeatmapLevelCollection::CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering)> {
  static const MethodInfo* get() {
    static auto* beatmapLevelCollection = &::il2cpp_utils::GetClassFromName("", "IBeatmapLevelCollection")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapLevelCollection*), "CreateBeatmapLevelCollectionByUsingBeatmapCharacteristicFiltering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevelCollection, beatmapCharacteristic});
  }
};
