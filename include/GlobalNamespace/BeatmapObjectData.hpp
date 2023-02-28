// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataItem
#include "GlobalNamespace/BeatmapDataItem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapObjectData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapObjectData*, "", "BeatmapObjectData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectData
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapObjectData : public ::GlobalNamespace::BeatmapDataItem {
    public:
    // protected System.Void .ctor(System.Single time, System.Int32 subtypeIdentifier)
    // Offset: 0x26FD0F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectData* New_ctor(float time, int subtypeIdentifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapObjectData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectData*, creationType>(time, subtypeIdentifier)));
    }
    // public System.Void Mirror(System.Int32 lineCount)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Mirror(int lineCount);
  }; // BeatmapObjectData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapObjectData::Mirror
// Il2CppName: Mirror
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapObjectData::*)(int)>(&GlobalNamespace::BeatmapObjectData::Mirror)> {
  static const MethodInfo* get() {
    static auto* lineCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapObjectData*), "Mirror", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lineCount});
  }
};
