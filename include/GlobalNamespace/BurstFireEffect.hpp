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
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: SongTimeTweeningManager
  class SongTimeTweeningManager;
  // Forward declaring type: FloatTween
  class FloatTween;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BurstFireEffect
  class BurstFireEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BurstFireEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstFireEffect*, "", "BurstFireEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: BurstFireEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class BurstFireEffect : public ::GlobalNamespace::FireEffect {
    public:
    public:
    // [SpaceAttribute] Offset: 0x1117930
    // private System.Single _fadeOutDuration
    // Size: 0x4
    // Offset: 0x80
    float fadeOutDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: fadeOutDuration and: flipbookFadeOutCurve
    char __padding0[0x4] = {};
    // private UnityEngine.AnimationCurve _flipbookFadeOutCurve
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::AnimationCurve* flipbookFadeOutCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _bloomFadeOutCurve
    // Size: 0x8
    // Offset: 0x90
    ::UnityEngine::AnimationCurve* bloomFadeOutCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // [InjectAttribute] Offset: 0x1117988
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0x1117998
    // private readonly Tweening.SongTimeTweeningManager _songTimeTweeningManager
    // Size: 0x8
    // Offset: 0xA0
    ::Tweening::SongTimeTweeningManager* songTimeTweeningManager;
    // Field size check
    static_assert(sizeof(::Tweening::SongTimeTweeningManager*) == 0x8);
    // private Tweening.FloatTween _fadeOutTween
    // Size: 0x8
    // Offset: 0xA8
    ::Tweening::FloatTween* fadeOutTween;
    // Field size check
    static_assert(sizeof(::Tweening::FloatTween*) == 0x8);
    public:
    // Get instance field reference: private System.Single _fadeOutDuration
    [[deprecated("Use field access instead!")]] float& dyn__fadeOutDuration();
    // Get instance field reference: private UnityEngine.AnimationCurve _flipbookFadeOutCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__flipbookFadeOutCurve();
    // Get instance field reference: private UnityEngine.AnimationCurve _bloomFadeOutCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__bloomFadeOutCurve();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private readonly Tweening.SongTimeTweeningManager _songTimeTweeningManager
    [[deprecated("Use field access instead!")]] ::Tweening::SongTimeTweeningManager*& dyn__songTimeTweeningManager();
    // Get instance field reference: private Tweening.FloatTween _fadeOutTween
    [[deprecated("Use field access instead!")]] ::Tweening::FloatTween*& dyn__fadeOutTween();
    // protected System.Void Awake()
    // Offset: 0x1403324
    void Awake();
    // private System.Void StartEffect(System.Single time)
    // Offset: 0x1403770
    void StartEffect(float time);
    // private System.Void EndEffect()
    // Offset: 0x1403730
    void EndEffect();
    // private System.Void SetInitialValues()
    // Offset: 0x1403448
    void SetInitialValues();
    // private System.Void UpdateFadeOutProgress(System.Single fadeOutProgress)
    // Offset: 0x1403860
    void UpdateFadeOutProgress(float fadeOutProgress);
    // public System.Void .ctor()
    // Offset: 0x1403A5C
    // Implemented from: FireEffect
    // Base method: System.Void FireEffect::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BurstFireEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BurstFireEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BurstFireEffect*, creationType>()));
    }
    // protected override System.Void Start()
    // Offset: 0x1403420
    // Implemented from: FireEffect
    // Base method: System.Void FireEffect::Start()
    void Start();
    // protected override System.Void OnDestroy()
    // Offset: 0x1403518
    // Implemented from: FireEffect
    // Base method: System.Void FireEffect::OnDestroy()
    void OnDestroy();
    // protected override System.Void HandleColorChangeBeatmapEvent(LightColorBeatmapEventData e)
    // Offset: 0x14035BC
    // Implemented from: FireEffect
    // Base method: System.Void FireEffect::HandleColorChangeBeatmapEvent(LightColorBeatmapEventData e)
    void HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData* e);
  }; // BurstFireEffect
  #pragma pack(pop)
  static check_size<sizeof(BurstFireEffect), 168 + sizeof(::Tweening::FloatTween*)> __GlobalNamespace_BurstFireEffectSizeCheck;
  static_assert(sizeof(BurstFireEffect) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BurstFireEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstFireEffect::*)()>(&GlobalNamespace::BurstFireEffect::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstFireEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstFireEffect::StartEffect
// Il2CppName: StartEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstFireEffect::*)(float)>(&GlobalNamespace::BurstFireEffect::StartEffect)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstFireEffect*), "StartEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstFireEffect::EndEffect
// Il2CppName: EndEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstFireEffect::*)()>(&GlobalNamespace::BurstFireEffect::EndEffect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstFireEffect*), "EndEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstFireEffect::SetInitialValues
// Il2CppName: SetInitialValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstFireEffect::*)()>(&GlobalNamespace::BurstFireEffect::SetInitialValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstFireEffect*), "SetInitialValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstFireEffect::UpdateFadeOutProgress
// Il2CppName: UpdateFadeOutProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstFireEffect::*)(float)>(&GlobalNamespace::BurstFireEffect::UpdateFadeOutProgress)> {
  static const MethodInfo* get() {
    static auto* fadeOutProgress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstFireEffect*), "UpdateFadeOutProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fadeOutProgress});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstFireEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BurstFireEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstFireEffect::*)()>(&GlobalNamespace::BurstFireEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstFireEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstFireEffect::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstFireEffect::*)()>(&GlobalNamespace::BurstFireEffect::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstFireEffect*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BurstFireEffect::HandleColorChangeBeatmapEvent
// Il2CppName: HandleColorChangeBeatmapEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BurstFireEffect::*)(::GlobalNamespace::LightColorBeatmapEventData*)>(&GlobalNamespace::BurstFireEffect::HandleColorChangeBeatmapEvent)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("", "LightColorBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BurstFireEffect*), "HandleColorChangeBeatmapEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
