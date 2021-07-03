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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: ColorType
  struct ColorType;
  // Forward declaring type: BeatmapEventType
  struct BeatmapEventType;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataLoader
  class BeatmapDataLoader : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapDataLoader::BpmChangeData
    struct BpmChangeData;
    // Nested type: GlobalNamespace::BeatmapDataLoader::$$c__DisplayClass2_0
    struct $$c__DisplayClass2_0;
    // Nested type: GlobalNamespace::BeatmapDataLoader::$$c
    class $$c;
    // Creating value type constructor for type: BeatmapDataLoader
    BeatmapDataLoader() noexcept {}
    // private System.Single GetRealTimeFromBPMTime(System.Single bmpTime, System.Single bpm, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x11C3488
    float GetRealTimeFromBPMTime(float bmpTime, float bpm, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromBeatmapSaveData(System.Collections.Generic.List`1<BeatmapSaveData/NoteData> notesSaveData, System.Collections.Generic.List`1<BeatmapSaveData/WaypointData> waypointsSaveData, System.Collections.Generic.List`1<BeatmapSaveData/ObstacleData> obstaclesSaveData, System.Collections.Generic.List`1<BeatmapSaveData/EventData> eventsSaveData, BeatmapSaveData/SpecialEventKeywordFiltersData environmentSpecialEventFilterData, System.Single startBpm, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x11C34DC
    GlobalNamespace::BeatmapData* GetBeatmapDataFromBeatmapSaveData(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* notesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>* waypointsSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* obstaclesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* eventsSaveData, GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData* environmentSpecialEventFilterData, float startBpm, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromBinary(System.Byte[] data, System.Single startBPM, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x11C4608
    GlobalNamespace::BeatmapData* GetBeatmapDataFromBinary(::Array<uint8_t>* data, float startBPM, float shuffle, float shufflePeriod);
    // public BeatmapData GetBeatmapDataFromJson(System.String json, System.Single startBPM, System.Single shuffle, System.Single shufflePeriod)
    // Offset: 0x11C4680
    GlobalNamespace::BeatmapData* GetBeatmapDataFromJson(::Il2CppString* json, float startBPM, float shuffle, float shufflePeriod);
    // static private ColorType ConvertFromBeatmapSaveDataNoteType(BeatmapSaveData/NoteType noteType)
    // Offset: 0x11C45E8
    static GlobalNamespace::ColorType ConvertFromBeatmapSaveDataNoteType(GlobalNamespace::BeatmapSaveData::NoteType noteType);
    // static private BeatmapEventType ConvertFromBeatmapSaveDataBeatmapEventType(BeatmapSaveData/BeatmapEventType beatmapEventType)
    // Offset: 0x11C4300
    static GlobalNamespace::BeatmapEventType ConvertFromBeatmapSaveDataBeatmapEventType(GlobalNamespace::BeatmapSaveData::BeatmapEventType beatmapEventType);
    // static BeatmapSaveData/ITime <GetBeatmapDataFromBeatmapSaveData>g__SortBeatmapSaveDataObjects|2_3(BeatmapSaveData/ITime[] data)
    // Offset: 0x11C4304
    static GlobalNamespace::BeatmapSaveData::ITime* $GetBeatmapDataFromBeatmapSaveData$g__SortBeatmapSaveDataObjects_2_3(::Array<GlobalNamespace::BeatmapSaveData::ITime*>* data);
    // private System.Single <GetBeatmapDataFromBeatmapSaveData>g__ProcessTime|2_4(System.Single bpmTime, ref BeatmapDataLoader/<>c__DisplayClass2_0 )
    // Offset: 0x11C4498
    float $GetBeatmapDataFromBeatmapSaveData$g__ProcessTime_2_4(float bpmTime, GlobalNamespace::BeatmapDataLoader::$$c__DisplayClass2_0& param_1);
    // public System.Void .ctor()
    // Offset: 0x11C46F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataLoader*, creationType>()));
    }
  }; // BeatmapDataLoader
  #pragma pack(pop)
  // Writing MetadataGetter for method: BeatmapDataLoader::GetRealTimeFromBPMTime
  // Il2CppName: GetRealTimeFromBPMTime
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapDataLoader::*)(float, float, float, float)>(&BeatmapDataLoader::GetRealTimeFromBPMTime)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapDataLoader*), "GetRealTimeFromBPMTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: BeatmapDataLoader::GetBeatmapDataFromBeatmapSaveData
  // Il2CppName: GetBeatmapDataFromBeatmapSaveData
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (BeatmapDataLoader::*)(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>*, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>*, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>*, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>*, GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData*, float, float, float)>(&BeatmapDataLoader::GetBeatmapDataFromBeatmapSaveData)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapDataLoader*), "GetBeatmapDataFromBeatmapSaveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::WaypointData*>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>*>(), ::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapSaveData::SpecialEventKeywordFiltersData*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: BeatmapDataLoader::GetBeatmapDataFromBinary
  // Il2CppName: GetBeatmapDataFromBinary
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (BeatmapDataLoader::*)(::Array<uint8_t>*, float, float, float)>(&BeatmapDataLoader::GetBeatmapDataFromBinary)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapDataLoader*), "GetBeatmapDataFromBinary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: BeatmapDataLoader::GetBeatmapDataFromJson
  // Il2CppName: GetBeatmapDataFromJson
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapData* (BeatmapDataLoader::*)(::Il2CppString*, float, float, float)>(&BeatmapDataLoader::GetBeatmapDataFromJson)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapDataLoader*), "GetBeatmapDataFromJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: BeatmapDataLoader::ConvertFromBeatmapSaveDataNoteType
  // Il2CppName: ConvertFromBeatmapSaveDataNoteType
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ColorType (*)(GlobalNamespace::BeatmapSaveData::NoteType)>(&BeatmapDataLoader::ConvertFromBeatmapSaveDataNoteType)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapDataLoader*), "ConvertFromBeatmapSaveDataNoteType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapSaveData::NoteType>()});
    }
  };
  // Writing MetadataGetter for method: BeatmapDataLoader::ConvertFromBeatmapSaveDataBeatmapEventType
  // Il2CppName: ConvertFromBeatmapSaveDataBeatmapEventType
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapEventType (*)(GlobalNamespace::BeatmapSaveData::BeatmapEventType)>(&BeatmapDataLoader::ConvertFromBeatmapSaveDataBeatmapEventType)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapDataLoader*), "ConvertFromBeatmapSaveDataBeatmapEventType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapSaveData::BeatmapEventType>()});
    }
  };
  // Writing MetadataGetter for method: BeatmapDataLoader::$GetBeatmapDataFromBeatmapSaveData$g__SortBeatmapSaveDataObjects_2_3
  // Il2CppName: <GetBeatmapDataFromBeatmapSaveData>g__SortBeatmapSaveDataObjects|2_3
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapSaveData::ITime* (*)(::Array<GlobalNamespace::BeatmapSaveData::ITime*>*)>(&BeatmapDataLoader::$GetBeatmapDataFromBeatmapSaveData$g__SortBeatmapSaveDataObjects_2_3)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapDataLoader*), "<GetBeatmapDataFromBeatmapSaveData>g__SortBeatmapSaveDataObjects|2_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<GlobalNamespace::BeatmapSaveData::ITime*>*>()});
    }
  };
  // Writing MetadataGetter for method: BeatmapDataLoader::$GetBeatmapDataFromBeatmapSaveData$g__ProcessTime_2_4
  // Il2CppName: <GetBeatmapDataFromBeatmapSaveData>g__ProcessTime|2_4
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (BeatmapDataLoader::*)(float, GlobalNamespace::BeatmapDataLoader::$$c__DisplayClass2_0&)>(&BeatmapDataLoader::$GetBeatmapDataFromBeatmapSaveData$g__ProcessTime_2_4)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapDataLoader*), "<GetBeatmapDataFromBeatmapSaveData>g__ProcessTime|2_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::BeatmapDataLoader::$$c__DisplayClass2_0&>()});
    }
  };
  // Writing MetadataGetter for method: BeatmapDataLoader::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapDataLoader::*)()>(&BeatmapDataLoader::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapDataLoader*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BeatmapDataLoader::*)()>(&BeatmapDataLoader::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(BeatmapDataLoader*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataLoader*, "", "BeatmapDataLoader");
