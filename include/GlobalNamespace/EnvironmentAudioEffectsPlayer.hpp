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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentAudioEffectsPlayer
  class EnvironmentAudioEffectsPlayer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentAudioEffectsPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentAudioEffectsPlayer*, "", "EnvironmentAudioEffectsPlayer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentAudioEffectsPlayer
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentAudioEffectsPlayer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioSource*& dyn__audioSource();
    // public UnityEngine.AudioSource get_audioSource()
    // Offset: 0x13936BC
    ::UnityEngine::AudioSource* get_audioSource();
    // public System.Void .ctor()
    // Offset: 0x139372C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentAudioEffectsPlayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentAudioEffectsPlayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentAudioEffectsPlayer*, creationType>()));
    }
    // public System.Void PlayEffect(UnityEngine.AudioClip clip, System.Single volume)
    // Offset: 0x13936C4
    void PlayEffect(::UnityEngine::AudioClip* clip, float volume);
  }; // EnvironmentAudioEffectsPlayer
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentAudioEffectsPlayer), 24 + sizeof(::UnityEngine::AudioSource*)> __GlobalNamespace_EnvironmentAudioEffectsPlayerSizeCheck;
  static_assert(sizeof(EnvironmentAudioEffectsPlayer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentAudioEffectsPlayer::get_audioSource
// Il2CppName: get_audioSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioSource* (GlobalNamespace::EnvironmentAudioEffectsPlayer::*)()>(&GlobalNamespace::EnvironmentAudioEffectsPlayer::get_audioSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentAudioEffectsPlayer*), "get_audioSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentAudioEffectsPlayer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentAudioEffectsPlayer::PlayEffect
// Il2CppName: PlayEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentAudioEffectsPlayer::*)(::UnityEngine::AudioClip*, float)>(&GlobalNamespace::EnvironmentAudioEffectsPlayer::PlayEffect)> {
  static const MethodInfo* get() {
    static auto* clip = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip")->byval_arg;
    static auto* volume = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentAudioEffectsPlayer*), "PlayEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clip, volume});
  }
};
