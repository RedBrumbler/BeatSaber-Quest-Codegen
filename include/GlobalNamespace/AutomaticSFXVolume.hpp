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
  // Forward declaring type: AutomaticSFXVolumeParamsSO
  class AutomaticSFXVolumeParamsSO;
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AutomaticSFXVolume
  class AutomaticSFXVolume;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AutomaticSFXVolume);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutomaticSFXVolume*, "", "AutomaticSFXVolume");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: AutomaticSFXVolume
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 111924C
  class AutomaticSFXVolume : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::AutomaticSFXVolume::InitData
    class InitData;
    public:
    // private AutomaticSFXVolumeParamsSO _params
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::AutomaticSFXVolumeParamsSO* params;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AutomaticSFXVolumeParamsSO*) == 0x8);
    // [SpaceAttribute] Offset: 0x111D644
    // private AudioManagerSO _audioManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::AudioManagerSO* audioManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioManagerSO*) == 0x8);
    // [InjectAttribute] Offset: 0x111D67C
    // private AutomaticSFXVolume/InitData _initData
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::AutomaticSFXVolume::InitData* initData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AutomaticSFXVolume::InitData*) == 0x8);
    // private System.Single _sampleRate
    // Size: 0x4
    // Offset: 0x30
    float sampleRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _volume
    // Size: 0x4
    // Offset: 0x34
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _envelope
    // Size: 0x4
    // Offset: 0x38
    float envelope;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _attackSamples
    // Size: 0x4
    // Offset: 0x3C
    float attackSamples;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _releaseSamples
    // Size: 0x4
    // Offset: 0x40
    float releaseSamples;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _attackCoef
    // Size: 0x4
    // Offset: 0x44
    float attackCoef;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _releaseCoef
    // Size: 0x4
    // Offset: 0x48
    float releaseCoef;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxVolume
    // Size: 0x4
    // Offset: 0x4C
    float maxVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kBaseVolume
    static constexpr const float kBaseVolume = 0.4;
    // Get static field: static private System.Single kBaseVolume
    static float _get_kBaseVolume();
    // Set static field: static private System.Single kBaseVolume
    static void _set_kBaseVolume(float value);
    // Get instance field reference: private AutomaticSFXVolumeParamsSO _params
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AutomaticSFXVolumeParamsSO*& dyn__params();
    // Get instance field reference: private AudioManagerSO _audioManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioManagerSO*& dyn__audioManager();
    // Get instance field reference: private AutomaticSFXVolume/InitData _initData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AutomaticSFXVolume::InitData*& dyn__initData();
    // Get instance field reference: private System.Single _sampleRate
    [[deprecated("Use field access instead!")]] float& dyn__sampleRate();
    // Get instance field reference: private System.Single _volume
    [[deprecated("Use field access instead!")]] float& dyn__volume();
    // Get instance field reference: private System.Single _envelope
    [[deprecated("Use field access instead!")]] float& dyn__envelope();
    // Get instance field reference: private System.Single _attackSamples
    [[deprecated("Use field access instead!")]] float& dyn__attackSamples();
    // Get instance field reference: private System.Single _releaseSamples
    [[deprecated("Use field access instead!")]] float& dyn__releaseSamples();
    // Get instance field reference: private System.Single _attackCoef
    [[deprecated("Use field access instead!")]] float& dyn__attackCoef();
    // Get instance field reference: private System.Single _releaseCoef
    [[deprecated("Use field access instead!")]] float& dyn__releaseCoef();
    // Get instance field reference: private System.Single _maxVolume
    [[deprecated("Use field access instead!")]] float& dyn__maxVolume();
    // public System.Void .ctor()
    // Offset: 0x157DF64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutomaticSFXVolume* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AutomaticSFXVolume::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutomaticSFXVolume*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x157DB50
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x157DC78
    void OnDisable();
    // protected System.Void OnValidate()
    // Offset: 0x157DD0C
    void OnValidate();
    // private System.Void RecalculateParams()
    // Offset: 0x157DB54
    void RecalculateParams();
    // protected System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x157DD10
    void OnAudioFilterRead(::ArrayW<float> data, int channels);
    // protected System.Void Update()
    // Offset: 0x157DF14
    void Update();
  }; // AutomaticSFXVolume
  #pragma pack(pop)
  static check_size<sizeof(AutomaticSFXVolume), 76 + sizeof(float)> __GlobalNamespace_AutomaticSFXVolumeSizeCheck;
  static_assert(sizeof(AutomaticSFXVolume) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutomaticSFXVolume::*)()>(&GlobalNamespace::AutomaticSFXVolume::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolume*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutomaticSFXVolume::*)()>(&GlobalNamespace::AutomaticSFXVolume::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolume*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutomaticSFXVolume::*)()>(&GlobalNamespace::AutomaticSFXVolume::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolume*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::RecalculateParams
// Il2CppName: RecalculateParams
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutomaticSFXVolume::*)()>(&GlobalNamespace::AutomaticSFXVolume::RecalculateParams)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolume*), "RecalculateParams", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::OnAudioFilterRead
// Il2CppName: OnAudioFilterRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutomaticSFXVolume::*)(::ArrayW<float>, int)>(&GlobalNamespace::AutomaticSFXVolume::OnAudioFilterRead)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolume*), "OnAudioFilterRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, channels});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AutomaticSFXVolume::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AutomaticSFXVolume::*)()>(&GlobalNamespace::AutomaticSFXVolume::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AutomaticSFXVolume*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
