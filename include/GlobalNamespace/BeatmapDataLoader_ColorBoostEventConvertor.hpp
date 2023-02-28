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
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: ColorBoostBeatmapEventData
  class ColorBoostBeatmapEventData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataLoader::ColorBoostEventConvertor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataLoader::ColorBoostEventConvertor*, "", "BeatmapDataLoader/ColorBoostEventConvertor");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapDataLoader/ColorBoostEventConvertor
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataLoader::ColorBoostEventConvertor : public ::GlobalNamespace::BeatmapDataLoader::BeatmapDataItemConvertor_3<::GlobalNamespace::BeatmapEventData*, ::BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData*, ::GlobalNamespace::ColorBoostBeatmapEventData*> {
    public:
    // protected ColorBoostBeatmapEventData Convert(BeatmapSaveDataVersion3.BeatmapSaveData/BeatmapSaveDataVersion3.ColorBoostEventData colorBoostEventSaveData)
    // Offset: 0x13E3AD8
    ::GlobalNamespace::ColorBoostBeatmapEventData* Convert(::BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData* colorBoostEventSaveData);
    // public System.Void .ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor)
    // Offset: 0x13E2BC0
    // Implemented from: BeatmapDataLoader/BeatmapDataItemConvertor`3
    // Base method: System.Void BeatmapDataItemConvertor_3::.ctor(BeatmapDataLoader/BpmTimeProcessor bpmTimeProcessor)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader::ColorBoostEventConvertor* New_ctor(::GlobalNamespace::BeatmapDataLoader::BpmTimeProcessor* bpmTimeProcessor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataLoader::ColorBoostEventConvertor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader::ColorBoostEventConvertor*, creationType>(bpmTimeProcessor)));
    }
  }; // BeatmapDataLoader/ColorBoostEventConvertor
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ColorBoostEventConvertor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorBoostBeatmapEventData* (GlobalNamespace::BeatmapDataLoader::ColorBoostEventConvertor::*)(::BeatmapSaveDataVersion3::BeatmapSaveData::ColorBoostEventData*)>(&GlobalNamespace::BeatmapDataLoader::ColorBoostEventConvertor::Convert)> {
  static const MethodInfo* get() {
    static auto* colorBoostEventSaveData = &::il2cpp_utils::GetClassFromName("BeatmapSaveDataVersion3", "BeatmapSaveData/ColorBoostEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataLoader::ColorBoostEventConvertor*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{colorBoostEventSaveData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataLoader::ColorBoostEventConvertor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
