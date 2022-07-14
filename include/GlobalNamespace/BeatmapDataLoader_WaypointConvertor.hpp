// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Including type: BeatmapDataLoader/BeatmapDataItemConvertor`3
#include "GlobalNamespace/BeatmapDataLoader_BeatmapDataItemConvertor_3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: WaypointData
  class WaypointData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::WaypointConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::WaypointConvertor*, "", "BeatmapDataLoader/WaypointConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapDataLoader/WaypointConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::WaypointConvertor : public ::GlobalNamespace::BeatmapDataLoader::BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapObjectData*, ::BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData*, ::GlobalNamespace::WaypointData*> {
    public:
    // protected WaypointData Convert(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.WaypointData waypointSaveData)
    // Offset: 0x1398D80
    ::GlobalNamespace::WaypointData* Convert(::BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData* waypointSaveData);
    // public System.Void .ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor)
    // Offset: 0x1396C9C
    // Implemented from: BeatmapDataLoader/BeatmapDataItemConvertor`3
    // Base method: System.Void BeatmapDataItemConvertor_3::.ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader::WaypointConvertor* New_ctor(::GlobalNamespace::BeatmapDataLoader::BpmTimeProcessor* bpmTimeProcessor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataLoader::WaypointConvertor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader::WaypointConvertor*, creationType>(bpmTimeProcessor)));
    }
  }; // BeatmapDataLoader/WaypointConvertor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::WaypointConvertor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::WaypointData* (GlobalNamespace::BeatmapDataLoader::WaypointConvertor::*)(::BeatmapSaveDataVersion3::BeatmapSaveData::WaypointData*)>(&GlobalNamespace::BeatmapDataLoader::WaypointConvertor::Convert)> {
  static const MethodInfo* get() {
    static auto* waypointSaveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/WaypointData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::WaypointConvertor*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waypointSaveData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::WaypointConvertor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!