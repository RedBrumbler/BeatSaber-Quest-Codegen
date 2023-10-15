// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataSO
#include "GlobalNamespace/BeatmapDataSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BeatmapSaveDataVersion3
namespace BeatmapSaveDataVersion3 {
  // Forward declaring type: BeatmapSaveData
  class BeatmapSaveData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0*, "", "BeatmapDataSO/<>c__DisplayClass5_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataSO/<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapDataSO::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    public:
    // public BeatmapSaveDataVersion3.BeatmapSaveData beatmapSaveData
    // Size: 0x8
    // Offset: 0x10
    ::BeatmapSaveDataVersion3::BeatmapSaveData* beatmapSaveData;
    // Field size check
    static_assert(sizeof(::BeatmapSaveDataVersion3::BeatmapSaveData*) == 0x8);
    // public BeatmapDataSO <>4__this
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::BeatmapDataSO* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapDataSO*) == 0x8);
    public:
    // Get instance field reference: public BeatmapSaveDataVersion3.BeatmapSaveData beatmapSaveData
    [[deprecated("Use field access instead!")]] ::BeatmapSaveDataVersion3::BeatmapSaveData*& dyn_beatmapSaveData();
    // Get instance field reference: public BeatmapDataSO <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BeatmapDataSO*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x155ABC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataSO::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataSO::$$c__DisplayClass5_0*, creationType>()));
    }
    // System.Void <LoadBeatmapSaveDataAsync>b__0()
    // Offset: 0x155ABC8
    void $LoadBeatmapSaveDataAsync$b__0();
  }; // BeatmapDataSO/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(BeatmapDataSO::$$c__DisplayClass5_0), 24 + sizeof(::GlobalNamespace::BeatmapDataSO*)> __GlobalNamespace_BeatmapDataSO_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(BeatmapDataSO::$$c__DisplayClass5_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0::$LoadBeatmapSaveDataAsync$b__0
// Il2CppName: <LoadBeatmapSaveDataAsync>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0::*)()>(&GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0::$LoadBeatmapSaveDataAsync$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataSO::$$c__DisplayClass5_0*), "<LoadBeatmapSaveDataAsync>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};