// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: INoteCutSoundEffectDidFinishEvent
  class INoteCutSoundEffectDidFinishEvent;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteCutSoundEffect
  class NoteCutSoundEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteCutSoundEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteCutSoundEffect*, "", "NoteCutSoundEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutSoundEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteCutSoundEffect : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::NoteCutSoundEffect::Pool
    class Pool;
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private UnityEngine.AnimationCurve _speedToVolumeCurve
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AnimationCurve* speedToVolumeCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AudioClip[] _badCutSoundEffectAudioClips
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::UnityEngine::AudioClip*> badCutSoundEffectAudioClips;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::AudioClip*>) == 0x8);
    // private System.Single _badCutVolume
    // Size: 0x4
    // Offset: 0x30
    float badCutVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _goodCutVolume
    // Size: 0x4
    // Offset: 0x34
    float goodCutVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Saber _saber
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::Saber* saber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Saber*) == 0x8);
    // private NoteController _noteController
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::NoteController* noteController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteController*) == 0x8);
    // private System.Boolean _isPlaying
    // Size: 0x1
    // Offset: 0x48
    bool isPlaying;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPlaying and: volumeMultiplier
    char __padding7[0x3] = {};
    // private System.Single _volumeMultiplier
    // Size: 0x4
    // Offset: 0x4C
    float volumeMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _noteWasCut
    // Size: 0x1
    // Offset: 0x50
    bool noteWasCut;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: noteWasCut and: aheadTime
    char __padding9[0x3] = {};
    // private System.Single _aheadTime
    // Size: 0x4
    // Offset: 0x54
    float aheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _timeToNextNote
    // Size: 0x4
    // Offset: 0x58
    float timeToNextNote;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _timeToPrevNote
    // Size: 0x4
    // Offset: 0x5C
    float timeToPrevNote;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Double _startDSPTime
    // Size: 0x8
    // Offset: 0x60
    double startDSPTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double _endDSPtime
    // Size: 0x8
    // Offset: 0x68
    double endDSPtime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double _fadeOutStartDSPtime
    // Size: 0x8
    // Offset: 0x70
    double fadeOutStartDSPtime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Single _noteMissedTimeOffset
    // Size: 0x4
    // Offset: 0x78
    float noteMissedTimeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _beforeCutVolume
    // Size: 0x4
    // Offset: 0x7C
    float beforeCutVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _goodCut
    // Size: 0x1
    // Offset: 0x80
    bool goodCut;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: goodCut and: pitch
    char __padding18[0x3] = {};
    // private System.Single _pitch
    // Size: 0x4
    // Offset: 0x84
    float pitch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _badCutRandomSoundPicker
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* badCutRandomSoundPicker;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*) == 0x8);
    // private System.Boolean _handleWrongSaberTypeAsGood
    // Size: 0x1
    // Offset: 0x90
    bool handleWrongSaberTypeAsGood;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _ignoreSaberSpeed
    // Size: 0x1
    // Offset: 0x91
    bool ignoreSaberSpeed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _ignoreBadCuts
    // Size: 0x1
    // Offset: 0x92
    bool ignoreBadCuts;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ignoreBadCuts and: didFinishEvent
    char __padding23[0x5] = {};
    // private readonly LazyCopyHashSet`1<INoteCutSoundEffectDidFinishEvent> _didFinishEvent
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kEndOverlap
    static constexpr const float kEndOverlap = 100.01;
    // Get static field: static private System.Single kEndOverlap
    static float _get_kEndOverlap();
    // Set static field: static private System.Single kEndOverlap
    static void _set_kEndOverlap(float value);
    // static field const value: static private System.Single kEndFadeLength
    static constexpr const float kEndFadeLength = 0.01;
    // Get static field: static private System.Single kEndFadeLength
    static float _get_kEndFadeLength();
    // Set static field: static private System.Single kEndFadeLength
    static void _set_kEndFadeLength(float value);
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private UnityEngine.AnimationCurve _speedToVolumeCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn__speedToVolumeCurve();
    // Get instance field reference: private UnityEngine.AudioClip[] _badCutSoundEffectAudioClips
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::AudioClip*>& dyn__badCutSoundEffectAudioClips();
    // Get instance field reference: private System.Single _badCutVolume
    [[deprecated("Use field access instead!")]] float& dyn__badCutVolume();
    // Get instance field reference: private System.Single _goodCutVolume
    [[deprecated("Use field access instead!")]] float& dyn__goodCutVolume();
    // Get instance field reference: private Saber _saber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Saber*& dyn__saber();
    // Get instance field reference: private NoteController _noteController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteController*& dyn__noteController();
    // Get instance field reference: private System.Boolean _isPlaying
    [[deprecated("Use field access instead!")]] bool& dyn__isPlaying();
    // Get instance field reference: private System.Single _volumeMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__volumeMultiplier();
    // Get instance field reference: private System.Boolean _noteWasCut
    [[deprecated("Use field access instead!")]] bool& dyn__noteWasCut();
    // Get instance field reference: private System.Single _aheadTime
    [[deprecated("Use field access instead!")]] float& dyn__aheadTime();
    // Get instance field reference: private System.Single _timeToNextNote
    [[deprecated("Use field access instead!")]] float& dyn__timeToNextNote();
    // Get instance field reference: private System.Single _timeToPrevNote
    [[deprecated("Use field access instead!")]] float& dyn__timeToPrevNote();
    // Get instance field reference: private System.Double _startDSPTime
    [[deprecated("Use field access instead!")]] double& dyn__startDSPTime();
    // Get instance field reference: private System.Double _endDSPtime
    [[deprecated("Use field access instead!")]] double& dyn__endDSPtime();
    // Get instance field reference: private System.Double _fadeOutStartDSPtime
    [[deprecated("Use field access instead!")]] double& dyn__fadeOutStartDSPtime();
    // Get instance field reference: private System.Single _noteMissedTimeOffset
    [[deprecated("Use field access instead!")]] float& dyn__noteMissedTimeOffset();
    // Get instance field reference: private System.Single _beforeCutVolume
    [[deprecated("Use field access instead!")]] float& dyn__beforeCutVolume();
    // Get instance field reference: private System.Boolean _goodCut
    [[deprecated("Use field access instead!")]] bool& dyn__goodCut();
    // Get instance field reference: private System.Single _pitch
    [[deprecated("Use field access instead!")]] float& dyn__pitch();
    // Get instance field reference: private RandomObjectPicker`1<UnityEngine.AudioClip> _badCutRandomSoundPicker
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*& dyn__badCutRandomSoundPicker();
    // Get instance field reference: private System.Boolean _handleWrongSaberTypeAsGood
    [[deprecated("Use field access instead!")]] bool& dyn__handleWrongSaberTypeAsGood();
    // Get instance field reference: private System.Boolean _ignoreSaberSpeed
    [[deprecated("Use field access instead!")]] bool& dyn__ignoreSaberSpeed();
    // Get instance field reference: private System.Boolean _ignoreBadCuts
    [[deprecated("Use field access instead!")]] bool& dyn__ignoreBadCuts();
    // Get instance field reference: private readonly LazyCopyHashSet`1<INoteCutSoundEffectDidFinishEvent> _didFinishEvent
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>*& dyn__didFinishEvent();
    // public ILazyCopyHashSet`1<INoteCutSoundEffectDidFinishEvent> get_didFinishEvent()
    // Offset: 0x150C6BC
    ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* get_didFinishEvent();
    // public System.Single get_volumeMultiplier()
    // Offset: 0x150C6CC
    float get_volumeMultiplier();
    // public System.Void set_volumeMultiplier(System.Single value)
    // Offset: 0x150C6C4
    void set_volumeMultiplier(float value);
    // public System.Single get_time()
    // Offset: 0x150C6D4
    float get_time();
    // public System.Void .ctor()
    // Offset: 0x150D044
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutSoundEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteCutSoundEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutSoundEffect*, creationType>()));
    }
    // protected System.Void Awake()
    // Offset: 0x150C704
    void Awake();
    // protected System.Void Start()
    // Offset: 0x150C784
    void Start();
    // public System.Void Init(UnityEngine.AudioClip audioClip, NoteController noteController, System.Double noteDSPTime, System.Single aheadTime, System.Single missedTimeOffset, System.Single timeToPrevNote, System.Single timeToNextNote, Saber saber, System.Boolean handleWrongSaberTypeAsGood, System.Single volumeMultiplier, System.Boolean ignoreSaberSpeed, System.Boolean ignoreBadCuts)
    // Offset: 0x150C7A4
    void Init(::UnityEngine::AudioClip* audioClip, ::GlobalNamespace::NoteController* noteController, double noteDSPTime, float aheadTime, float missedTimeOffset, float timeToPrevNote, float timeToNextNote, ::GlobalNamespace::Saber* saber, bool handleWrongSaberTypeAsGood, float volumeMultiplier, bool ignoreSaberSpeed, bool ignoreBadCuts);
    // private System.Void ComputeDSPTimes(System.Double noteDSPTime, System.Single aheadTime, System.Single timeToPrevNote, System.Single timeToNextNote)
    // Offset: 0x150C964
    void ComputeDSPTimes(double noteDSPTime, float aheadTime, float timeToPrevNote, float timeToNextNote);
    // protected System.Void LateUpdate()
    // Offset: 0x150CA64
    void LateUpdate();
    // public System.Void StopPlayingAndFinish()
    // Offset: 0x150CC98
    void StopPlayingAndFinish();
    // public System.Void NoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x150CE34
    void NoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo);
  }; // NoteCutSoundEffect
  #pragma pack(pop)
  static check_size<sizeof(NoteCutSoundEffect), 152 + sizeof(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>*)> __GlobalNamespace_NoteCutSoundEffectSizeCheck;
  static_assert(sizeof(NoteCutSoundEffect) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffect::get_didFinishEvent
// Il2CppName: get_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>* (GlobalNamespace::NoteCutSoundEffect::*)()>(&GlobalNamespace::NoteCutSoundEffect::get_didFinishEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffect*), "get_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffect::get_volumeMultiplier
// Il2CppName: get_volumeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteCutSoundEffect::*)()>(&GlobalNamespace::NoteCutSoundEffect::get_volumeMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffect*), "get_volumeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffect::set_volumeMultiplier
// Il2CppName: set_volumeMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffect::*)(float)>(&GlobalNamespace::NoteCutSoundEffect::set_volumeMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffect*), "set_volumeMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffect::get_time
// Il2CppName: get_time
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::NoteCutSoundEffect::*)()>(&GlobalNamespace::NoteCutSoundEffect::get_time)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffect*), "get_time", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffect::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffect::*)()>(&GlobalNamespace::NoteCutSoundEffect::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffect*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffect::*)()>(&GlobalNamespace::NoteCutSoundEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffect::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffect::*)(::UnityEngine::AudioClip*, ::GlobalNamespace::NoteController*, double, float, float, float, float, ::GlobalNamespace::Saber*, bool, float, bool, bool)>(&GlobalNamespace::NoteCutSoundEffect::Init)> {
  static const MethodInfo* get() {
    static auto* audioClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteDSPTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* aheadTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* missedTimeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeToPrevNote = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeToNextNote = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* handleWrongSaberTypeAsGood = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* volumeMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* ignoreSaberSpeed = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* ignoreBadCuts = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffect*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClip, noteController, noteDSPTime, aheadTime, missedTimeOffset, timeToPrevNote, timeToNextNote, saber, handleWrongSaberTypeAsGood, volumeMultiplier, ignoreSaberSpeed, ignoreBadCuts});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffect::ComputeDSPTimes
// Il2CppName: ComputeDSPTimes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffect::*)(double, float, float, float)>(&GlobalNamespace::NoteCutSoundEffect::ComputeDSPTimes)> {
  static const MethodInfo* get() {
    static auto* noteDSPTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* aheadTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeToPrevNote = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* timeToNextNote = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffect*), "ComputeDSPTimes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteDSPTime, aheadTime, timeToPrevNote, timeToNextNote});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffect::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffect::*)()>(&GlobalNamespace::NoteCutSoundEffect::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffect*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffect::StopPlayingAndFinish
// Il2CppName: StopPlayingAndFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffect::*)()>(&GlobalNamespace::NoteCutSoundEffect::StopPlayingAndFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffect*), "StopPlayingAndFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteCutSoundEffect::NoteWasCut
// Il2CppName: NoteWasCut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteCutSoundEffect::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&GlobalNamespace::NoteCutSoundEffect::NoteWasCut)> {
  static const MethodInfo* get() {
    static auto* noteController = &::il2cpp_utils::GetClassFromName("", "NoteController")->byval_arg;
    static auto* noteCutInfo = &::il2cpp_utils::GetClassFromName("", "NoteCutInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteCutSoundEffect*), "NoteWasCut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{noteController, noteCutInfo});
  }
};
