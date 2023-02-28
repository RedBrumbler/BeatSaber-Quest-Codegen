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
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BombCutSoundEffect
  class BombCutSoundEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BombCutSoundEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BombCutSoundEffect*, "", "BombCutSoundEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: BombCutSoundEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class BombCutSoundEffect : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BombCutSoundEffect::Pool
    class Pool;
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Action`1<BombCutSoundEffect> didFinishEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>*) == 0x8);
    // private Saber _saber
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::Saber* saber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Saber*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private System.Action`1<BombCutSoundEffect> didFinishEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>*& dyn_didFinishEvent();
    // Get instance field reference: private Saber _saber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Saber*& dyn__saber();
    // public System.Void add_didFinishEvent(System.Action`1<BombCutSoundEffect> value)
    // Offset: 0x13F0034
    void add_didFinishEvent(::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>* value);
    // public System.Void remove_didFinishEvent(System.Action`1<BombCutSoundEffect> value)
    // Offset: 0x13F00D8
    void remove_didFinishEvent(::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>* value);
    // public System.Void .ctor()
    // Offset: 0x13F0318
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BombCutSoundEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BombCutSoundEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BombCutSoundEffect*, creationType>()));
    }
    // public System.Void Init(UnityEngine.AudioClip audioClip, Saber saber, System.Single volume)
    // Offset: 0x13F017C
    void Init(::UnityEngine::AudioClip* audioClip, ::GlobalNamespace::Saber* saber, float volume);
    // protected System.Void LateUpdate()
    // Offset: 0x13F01FC
    void LateUpdate();
    // private System.Void StopPlayingAndFinish()
    // Offset: 0x13F0290
    void StopPlayingAndFinish();
  }; // BombCutSoundEffect
  #pragma pack(pop)
  static check_size<sizeof(BombCutSoundEffect), 40 + sizeof(::GlobalNamespace::Saber*)> __GlobalNamespace_BombCutSoundEffectSizeCheck;
  static_assert(sizeof(BombCutSoundEffect) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BombCutSoundEffect::add_didFinishEvent
// Il2CppName: add_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombCutSoundEffect::*)(::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>*)>(&GlobalNamespace::BombCutSoundEffect::add_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BombCutSoundEffect")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombCutSoundEffect*), "add_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombCutSoundEffect::remove_didFinishEvent
// Il2CppName: remove_didFinishEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombCutSoundEffect::*)(::System::Action_1<::GlobalNamespace::BombCutSoundEffect*>*)>(&GlobalNamespace::BombCutSoundEffect::remove_didFinishEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "BombCutSoundEffect")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombCutSoundEffect*), "remove_didFinishEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombCutSoundEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BombCutSoundEffect::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombCutSoundEffect::*)(::UnityEngine::AudioClip*, ::GlobalNamespace::Saber*, float)>(&GlobalNamespace::BombCutSoundEffect::Init)> {
  static const MethodInfo* get() {
    static auto* audioClip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* saber = &::il2cpp_utils::GetClassFromName("", "Saber")->byval_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombCutSoundEffect*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioClip, saber, volume});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombCutSoundEffect::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombCutSoundEffect::*)()>(&GlobalNamespace::BombCutSoundEffect::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombCutSoundEffect*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BombCutSoundEffect::StopPlayingAndFinish
// Il2CppName: StopPlayingAndFinish
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BombCutSoundEffect::*)()>(&GlobalNamespace::BombCutSoundEffect::StopPlayingAndFinish)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BombCutSoundEffect*), "StopPlayingAndFinish", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
