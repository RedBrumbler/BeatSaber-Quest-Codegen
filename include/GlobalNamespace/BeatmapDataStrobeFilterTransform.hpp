// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
  // Forward declaring type: EnvironmentIntensityReductionOptions
  class EnvironmentIntensityReductionOptions;
  // Forward declaring type: EnvironmentColorType
  struct EnvironmentColorType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataStrobeFilterTransform
  class BeatmapDataStrobeFilterTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataStrobeFilterTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataStrobeFilterTransform*, "", "BeatmapDataStrobeFilterTransform");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataStrobeFilterTransform
  // [TokenAttribute] Offset: FFFFFFFF
  class BeatmapDataStrobeFilterTransform : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::BeatmapDataStrobeFilterTransform::StrobeStreakData
    class StrobeStreakData;
    // static field const value: static private System.Single kMaxSecondsToConsiderStrobe
    static constexpr const float kMaxSecondsToConsiderStrobe = 0.1;
    // Get static field: static private System.Single kMaxSecondsToConsiderStrobe
    static float _get_kMaxSecondsToConsiderStrobe();
    // Set static field: static private System.Single kMaxSecondsToConsiderStrobe
    static void _set_kMaxSecondsToConsiderStrobe(float value);
    // static public IReadonlyBeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData, EnvironmentIntensityReductionOptions environmentIntensityReductionOptions)
    // Offset: 0x155B8FC
    static ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData, ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions);
    // static private System.Int32 GetOnEventDataValue(EnvironmentColorType lightColorType)
    // Offset: 0x155C174
    static int GetOnEventDataValue(::GlobalNamespace::EnvironmentColorType lightColorType);
    // static private System.Int32 GetFlashAndFadeToBlackEventDataValue(EnvironmentColorType lightColorType)
    // Offset: 0x155C198
    static int GetFlashAndFadeToBlackEventDataValue(::GlobalNamespace::EnvironmentColorType lightColorType);
  }; // BeatmapDataStrobeFilterTransform
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataStrobeFilterTransform::CreateTransformedData
// Il2CppName: CreateTransformedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::EnvironmentIntensityReductionOptions*)>(&GlobalNamespace::BeatmapDataStrobeFilterTransform::CreateTransformedData)> {
  static const MethodInfo* get() {
    static auto* beatmapData = &::il2cpp_utils::GetClassFromName("", "IReadonlyBeatmapData")->byval_arg;
    static auto* environmentIntensityReductionOptions = &::il2cpp_utils::GetClassFromName("", "EnvironmentIntensityReductionOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataStrobeFilterTransform*), "CreateTransformedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapData, environmentIntensityReductionOptions});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataStrobeFilterTransform::GetOnEventDataValue
// Il2CppName: GetOnEventDataValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::GlobalNamespace::EnvironmentColorType)>(&GlobalNamespace::BeatmapDataStrobeFilterTransform::GetOnEventDataValue)> {
  static const MethodInfo* get() {
    static auto* lightColorType = &::il2cpp_utils::GetClassFromName("", "EnvironmentColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataStrobeFilterTransform*), "GetOnEventDataValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightColorType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataStrobeFilterTransform::GetFlashAndFadeToBlackEventDataValue
// Il2CppName: GetFlashAndFadeToBlackEventDataValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::GlobalNamespace::EnvironmentColorType)>(&GlobalNamespace::BeatmapDataStrobeFilterTransform::GetFlashAndFadeToBlackEventDataValue)> {
  static const MethodInfo* get() {
    static auto* lightColorType = &::il2cpp_utils::GetClassFromName("", "EnvironmentColorType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataStrobeFilterTransform*), "GetFlashAndFadeToBlackEventDataValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightColorType});
  }
};
