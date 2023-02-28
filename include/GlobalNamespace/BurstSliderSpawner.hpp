// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapObjectSpawnMovementData
#include "GlobalNamespace/BeatmapObjectSpawnMovementData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SliderData
  class SliderData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BurstSliderSpawner
  class BurstSliderSpawner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BurstSliderSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderSpawner*, "", "BurstSliderSpawner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BurstSliderSpawner
  // [TokenAttribute] Offset: FFFFFFFF
  class BurstSliderSpawner : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::BurstSliderSpawner::ProcessNoteDataDelegate
    class ProcessNoteDataDelegate;
    // static public System.Void BezierCurve(UnityEngine.Vector2 p0, UnityEngine.Vector2 p1, UnityEngine.Vector2 p2, System.Single t, out UnityEngine.Vector2 pos, out UnityEngine.Vector2 tangent)
    // Offset: 0x13F3EC8
    static void BezierCurve(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float t, ByRef<::UnityEngine::Vector2> pos, ByRef<::UnityEngine::Vector2> tangent);
    // static public System.Void ProcessSliderData(SliderData sliderData, in BeatmapObjectSpawnMovementData/SliderSpawnData sliderSpawnData, System.Single rotation, System.Boolean forceIsFirstNote, BurstSliderSpawner/ProcessNoteDataDelegate processNoteData)
    // Offset: 0x13F409C
    static void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::SliderSpawnData> sliderSpawnData, float rotation, bool forceIsFirstNote, ::GlobalNamespace::BurstSliderSpawner::ProcessNoteDataDelegate* processNoteData);
  }; // BurstSliderSpawner
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderSpawner::BezierCurve
// Il2CppName: BezierCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float, ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector2>)>(&GlobalNamespace::BurstSliderSpawner::BezierCurve)> {
  static const MethodInfo* get() {
    static auto* p0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    static auto* tangent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderSpawner*), "BezierCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p0, p1, p2, t, pos, tangent});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstSliderSpawner::ProcessSliderData
// Il2CppName: ProcessSliderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::SliderData*, ByRef<::GlobalNamespace::BeatmapObjectSpawnMovementData::SliderSpawnData>, float, bool, ::GlobalNamespace::BurstSliderSpawner::ProcessNoteDataDelegate*)>(&GlobalNamespace::BurstSliderSpawner::ProcessSliderData)> {
  static const MethodInfo* get() {
    static auto* sliderData = &::il2cpp_utils::GetClassFromName("", "SliderData")->byval_arg;
    static auto* sliderSpawnData = &::il2cpp_utils::GetClassFromName("", "BeatmapObjectSpawnMovementData/SliderSpawnData")->this_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* forceIsFirstNote = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* processNoteData = &::il2cpp_utils::GetClassFromName("", "BurstSliderSpawner/ProcessNoteDataDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstSliderSpawner*), "ProcessSliderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sliderData, sliderSpawnData, rotation, forceIsFirstNote, processNoteData});
  }
};
