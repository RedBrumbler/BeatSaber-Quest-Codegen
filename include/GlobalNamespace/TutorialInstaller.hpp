// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayerHeightDetector
  class PlayerHeightDetector;
  // Forward declaring type: EffectPoolsManualInstaller
  class EffectPoolsManualInstaller;
  // Forward declaring type: TutorialSceneSetupData
  class TutorialSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TutorialInstaller
  class TutorialInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialInstaller*, "", "TutorialInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: TutorialInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialInstaller : public ::Zenject::MonoInstaller {
    public:
    public:
    // private UnityEngine.AudioClip _audioClip
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::AudioClip* audioClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private System.Single _songBPM
    // Size: 0x4
    // Offset: 0x28
    float songBPM;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: songBPM and: playerHeightDetectorPrefab
    char __padding1[0x4] = {};
    // [SpaceAttribute] Offset: 0x112B2CC
    // private PlayerHeightDetector _playerHeightDetectorPrefab
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::PlayerHeightDetector* playerHeightDetectorPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlayerHeightDetector*) == 0x8);
    // private EffectPoolsManualInstaller _effectPoolsManualInstaller
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::EffectPoolsManualInstaller* effectPoolsManualInstaller;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EffectPoolsManualInstaller*) == 0x8);
    // [InjectAttribute] Offset: 0x112B314
    // private readonly TutorialSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::TutorialSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TutorialSceneSetupData*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.AudioClip _audioClip
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn__audioClip();
    // Get instance field reference: private System.Single _songBPM
    [[deprecated("Use field access instead!")]] float& dyn__songBPM();
    // Get instance field reference: private PlayerHeightDetector _playerHeightDetectorPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PlayerHeightDetector*& dyn__playerHeightDetectorPrefab();
    // Get instance field reference: private EffectPoolsManualInstaller _effectPoolsManualInstaller
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EffectPoolsManualInstaller*& dyn__effectPoolsManualInstaller();
    // Get instance field reference: private readonly TutorialSceneSetupData _sceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TutorialSceneSetupData*& dyn__sceneSetupData();
    // public System.Void .ctor()
    // Offset: 0x13A5048
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x13A4638
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // TutorialInstaller
  #pragma pack(pop)
  static check_size<sizeof(TutorialInstaller), 64 + sizeof(::GlobalNamespace::TutorialSceneSetupData*)> __GlobalNamespace_TutorialInstallerSizeCheck;
  static_assert(sizeof(TutorialInstaller) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TutorialInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialInstaller::*)()>(&GlobalNamespace::TutorialInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
