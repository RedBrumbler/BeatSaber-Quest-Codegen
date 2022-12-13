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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
  // Forward declaring type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData;
  // Forward declaring type: PerceivedLoudnessPerLevelModel
  class PerceivedLoudnessPerLevelModel;
  // Forward declaring type: RelativeSfxVolumePerLevelModel
  class RelativeSfxVolumePerLevelModel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLocalInactivePlayerInstaller
  class MultiplayerLocalInactivePlayerInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*, "", "MultiplayerLocalInactivePlayerInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalInactivePlayerInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLocalInactivePlayerInstaller : public ::Zenject::MonoInstaller {
    public:
    public:
    // private AudioManagerSO _audioManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::AudioManagerSO* audioManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AudioManagerSO*) == 0x8);
    // [InjectAttribute] Offset: 0x1123050
    // private readonly GameplayCoreSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayCoreSceneSetupData*) == 0x8);
    // [InjectAttribute] Offset: 0x1123060
    // private readonly PerceivedLoudnessPerLevelModel _beatmapLoudnessModel
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::PerceivedLoudnessPerLevelModel* beatmapLoudnessModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PerceivedLoudnessPerLevelModel*) == 0x8);
    // [InjectAttribute] Offset: 0x1123070
    // private readonly RelativeSfxVolumePerLevelModel _relativeSfxVolumePerLevelModel
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::RelativeSfxVolumePerLevelModel* relativeSfxVolumePerLevelModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::RelativeSfxVolumePerLevelModel*) == 0x8);
    public:
    // Get instance field reference: private AudioManagerSO _audioManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::AudioManagerSO*& dyn__audioManager();
    // Get instance field reference: private readonly GameplayCoreSceneSetupData _sceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GameplayCoreSceneSetupData*& dyn__sceneSetupData();
    // Get instance field reference: private readonly PerceivedLoudnessPerLevelModel _beatmapLoudnessModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& dyn__beatmapLoudnessModel();
    // Get instance field reference: private readonly RelativeSfxVolumePerLevelModel _relativeSfxVolumePerLevelModel
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::RelativeSfxVolumePerLevelModel*& dyn__relativeSfxVolumePerLevelModel();
    // public System.Void .ctor()
    // Offset: 0x13EA750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactivePlayerInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactivePlayerInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x13EA1A4
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // MultiplayerLocalInactivePlayerInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalInactivePlayerInstaller), 56 + sizeof(::GlobalNamespace::RelativeSfxVolumePerLevelModel*)> __GlobalNamespace_MultiplayerLocalInactivePlayerInstallerSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactivePlayerInstaller) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::*)()>(&GlobalNamespace::MultiplayerLocalInactivePlayerInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLocalInactivePlayerInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
