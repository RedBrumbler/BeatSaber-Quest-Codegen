// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelCollectionViewController
#include "GlobalNamespace/LevelCollectionViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelCollectionViewController::$$c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCollectionViewController::$$c__DisplayClass24_0*, "", "LevelCollectionViewController/<>c__DisplayClass24_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LevelCollectionViewController/<>c__DisplayClass24_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LevelCollectionViewController::$$c__DisplayClass24_0 : public ::Il2CppObject {
    public:
    public:
    // public LevelCollectionViewController <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::LevelCollectionViewController* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LevelCollectionViewController*) == 0x8);
    // public IPreviewBeatmapLevel level
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::IPreviewBeatmapLevel* level;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    public:
    // Get instance field reference: public LevelCollectionViewController <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LevelCollectionViewController*& dyn_$$4__this();
    // Get instance field reference: public IPreviewBeatmapLevel level
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IPreviewBeatmapLevel*& dyn_level();
    // public System.Void .ctor()
    // Offset: 0x1546E2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelCollectionViewController::$$c__DisplayClass24_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelCollectionViewController::$$c__DisplayClass24_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelCollectionViewController::$$c__DisplayClass24_0*, creationType>()));
    }
    // System.Void <SongPlayerCrossfadeToLevelAsync>b__0()
    // Offset: 0x1546E34
    void $SongPlayerCrossfadeToLevelAsync$b__0();
  }; // LevelCollectionViewController/<>c__DisplayClass24_0
  #pragma pack(pop)
  static check_size<sizeof(LevelCollectionViewController::$$c__DisplayClass24_0), 24 + sizeof(::GlobalNamespace::IPreviewBeatmapLevel*)> __GlobalNamespace_LevelCollectionViewController_$$c__DisplayClass24_0SizeCheck;
  static_assert(sizeof(LevelCollectionViewController::$$c__DisplayClass24_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::$$c__DisplayClass24_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionViewController::$$c__DisplayClass24_0::$SongPlayerCrossfadeToLevelAsync$b__0
// Il2CppName: <SongPlayerCrossfadeToLevelAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionViewController::$$c__DisplayClass24_0::*)()>(&GlobalNamespace::LevelCollectionViewController::$$c__DisplayClass24_0::$SongPlayerCrossfadeToLevelAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionViewController::$$c__DisplayClass24_0*), "<SongPlayerCrossfadeToLevelAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
