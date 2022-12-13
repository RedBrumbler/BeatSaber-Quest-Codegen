// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: FireEffect
#include "GlobalNamespace/FireEffect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: LightColorBeatmapEventData
  class LightColorBeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ContinuousFireEffect
  class ContinuousFireEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ContinuousFireEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ContinuousFireEffect*, "", "ContinuousFireEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: ContinuousFireEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class ContinuousFireEffect : public ::GlobalNamespace::FireEffect {
    public:
    public:
    // [SpaceAttribute] Offset: 0x11179A8
    // private System.Single _fadeInDuration
    // Size: 0x4
    // Offset: 0x80
    float fadeInDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeOutDuration
    // Size: 0x4
    // Offset: 0x84
    float fadeOutDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x11179F0
    // private System.Single _sustainDuration
    // Size: 0x4
    // Offset: 0x88
    float sustainDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: sustainDuration and: flipbookSustainCurve
    char __padding2[0x4] = {};
    // private UnityEngine.AnimationCurve _flipbookSustainCurve
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::AnimationCurve* flipbookSustainCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _bloomSustainCurve
    // Size: 0x8
    // Offset: 0x98
    ::UnityEngine::AnimationCurve* bloomSustainCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [InjectAttribute] Offset: 0x1117A48
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private System.Single _fadeInEndTime
    // Size: 0x4
    // Offset: 0xA8
    float fadeInEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fadeOutStartTime
    // Size: 0x4
    // Offset: 0xAC
    float fadeOutStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _effectStartTime
    // Size: 0x4
    // Offset: 0xB0
    float effectStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _effectEndTime
    // Size: 0x4
    // Offset: 0xB4
    float effectEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastSustainProgress
    // Size: 0x4
    // Offset: 0xB8
    float lastSustainProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lastFadeOutProgress
    // Size: 0x4
    // Offset: 0xBC
    float lastFadeOutProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single _fadeInDuration
    [[deprecated("Use field access instead!")]] float& dyn__fadeInDuration();
    // Get instance field reference: private System.Single _fadeOutDuration
    [[deprecated("Use field access instead!")]] float& dyn__fadeOutDuration();
    // Get instance field reference: private System.Single _sustainDuration
    [[deprecated("Use field access instead!")]] float& dyn__sustainDuration();
    // Get instance field reference: private UnityEngine.AnimationCurve _flipbookSustainCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__flipbookSustainCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _bloomSustainCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__bloomSustainCurve();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private System.Single _fadeInEndTime
    [[deprecated("Use field access instead!")]] float& dyn__fadeInEndTime();
    // Get instance field reference: private System.Single _fadeOutStartTime
    [[deprecated("Use field access instead!")]] float& dyn__fadeOutStartTime();
    // Get instance field reference: private System.Single _effectStartTime
    [[deprecated("Use field access instead!")]] float& dyn__effectStartTime();
    // Get instance field reference: private System.Single _effectEndTime
    [[deprecated("Use field access instead!")]] float& dyn__effectEndTime();
    // Get instance field reference: private System.Single _lastSustainProgress
    [[deprecated("Use field access instead!")]] float& dyn__lastSustainProgress();
    // Get instance field reference: private System.Single _lastFadeOutProgress
    [[deprecated("Use field access instead!")]] float& dyn__lastFadeOutProgress();
    // protected System.Void Update()
    // Offset: 0x143DAA8
    void Update();
    // private System.Void SetInitialValues()
    // Offset: 0x143D9E4
    void SetInitialValues();
    // private System.Void StartEffect(System.Single startTime, System.Single endTime)
    // Offset: 0x143DE00
    void StartEffect(float startTime, float endTime);
    // private System.Void EndEffect()
    // Offset: 0x143DDCC
    void EndEffect();
    // private System.Void UpdateEffect()
    // Offset: 0x143DAAC
    void UpdateEffect();
    // private System.Void UpdateRenderers(System.Single flipBookAlpha, System.Single bloomAlpha)
    // Offset: 0x143DF34
    void UpdateRenderers(float flipBookAlpha, float bloomAlpha);
    // public System.Void .ctor()
    // Offset: 0x143E100
    // Implemented from: FireEffect
    // Base method: System.Void FireEffect::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContinuousFireEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ContinuousFireEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContinuousFireEffect*, creationType>()));
    }
    // protected override System.Void Start()
    // Offset: 0x143D9AC
    // Implemented from: FireEffect
    // Base method: System.Void FireEffect::Start()
    void Start();
    // protected override System.Void HandleColorChangeBeatmapEvent(LightColorBeatmapEventData e)
    // Offset: 0x143DC70
    // Implemented from: FireEffect
    // Base method: System.Void FireEffect::HandleColorChangeBeatmapEvent(LightColorBeatmapEventData e)
    void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* e);
  }; // ContinuousFireEffect
  #pragma pack(pop)
  static check_size<sizeof(ContinuousFireEffect), 188 + sizeof(float)> __GlobalNamespace_ContinuousFireEffectSizeCheck;
  static_assert(sizeof(ContinuousFireEffect) == 0xC0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ContinuousFireEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ContinuousFireEffect::*)()>(&GlobalNamespace::ContinuousFireEffect::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ContinuousFireEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ContinuousFireEffect::SetInitialValues
// Il2CppName: SetInitialValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ContinuousFireEffect::*)()>(&GlobalNamespace::ContinuousFireEffect::SetInitialValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ContinuousFireEffect*), "SetInitialValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ContinuousFireEffect::StartEffect
// Il2CppName: StartEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ContinuousFireEffect::*)(float, float)>(&GlobalNamespace::ContinuousFireEffect::StartEffect)> {
  static const MethodInfo* get() {
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* endTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ContinuousFireEffect*), "StartEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTime, endTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ContinuousFireEffect::EndEffect
// Il2CppName: EndEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ContinuousFireEffect::*)()>(&GlobalNamespace::ContinuousFireEffect::EndEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ContinuousFireEffect*), "EndEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ContinuousFireEffect::UpdateEffect
// Il2CppName: UpdateEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ContinuousFireEffect::*)()>(&GlobalNamespace::ContinuousFireEffect::UpdateEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ContinuousFireEffect*), "UpdateEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ContinuousFireEffect::UpdateRenderers
// Il2CppName: UpdateRenderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ContinuousFireEffect::*)(float, float)>(&GlobalNamespace::ContinuousFireEffect::UpdateRenderers)> {
  static const MethodInfo* get() {
    static auto* flipBookAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* bloomAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ContinuousFireEffect*), "UpdateRenderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flipBookAlpha, bloomAlpha});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ContinuousFireEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ContinuousFireEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ContinuousFireEffect::*)()>(&GlobalNamespace::ContinuousFireEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ContinuousFireEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ContinuousFireEffect::HandleColorChangeBeatmapEvent
// Il2CppName: HandleColorChangeBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ContinuousFireEffect::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(&GlobalNamespace::ContinuousFireEffect::HandleColorChangeBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("", "LightColorBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ContinuousFireEffect*), "HandleColorChangeBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
