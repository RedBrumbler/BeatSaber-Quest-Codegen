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
  // Forward declaring type: TutorialNoteController
  class TutorialNoteController;
  // Forward declaring type: BombNoteController
  class BombNoteController;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: NoteLineConnectionController
  class NoteLineConnectionController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TutorialBeatmapObjectPoolsInstaller
  class TutorialBeatmapObjectPoolsInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*, "", "TutorialBeatmapObjectPoolsInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: TutorialBeatmapObjectPoolsInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialBeatmapObjectPoolsInstaller : public ::Zenject::MonoInstaller {
    public:
    public:
    // private TutorialNoteController _basicNotePrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::TutorialNoteController* basicNotePrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TutorialNoteController*) == 0x8);
    // private BombNoteController _bombNotePrefab
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BombNoteController* bombNotePrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BombNoteController*) == 0x8);
    // private ObstacleController _obstaclePrefab
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::ObstacleController* obstaclePrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ObstacleController*) == 0x8);
    // private NoteLineConnectionController _noteLineConnectionControllerPrefab
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::NoteLineConnectionController* noteLineConnectionControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NoteLineConnectionController*) == 0x8);
    public:
    // Get instance field reference: private TutorialNoteController _basicNotePrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TutorialNoteController*& dyn__basicNotePrefab();
    // Get instance field reference: private BombNoteController _bombNotePrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BombNoteController*& dyn__bombNotePrefab();
    // Get instance field reference: private ObstacleController _obstaclePrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ObstacleController*& dyn__obstaclePrefab();
    // Get instance field reference: private NoteLineConnectionController _noteLineConnectionControllerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NoteLineConnectionController*& dyn__noteLineConnectionControllerPrefab();
    // public System.Void .ctor()
    // Offset: 0x13A3BC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialBeatmapObjectPoolsInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialBeatmapObjectPoolsInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x13A3A88
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // TutorialBeatmapObjectPoolsInstaller
  #pragma pack(pop)
  static check_size<sizeof(TutorialBeatmapObjectPoolsInstaller), 56 + sizeof(::GlobalNamespace::NoteLineConnectionController*)> __GlobalNamespace_TutorialBeatmapObjectPoolsInstallerSizeCheck;
  static_assert(sizeof(TutorialBeatmapObjectPoolsInstaller) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::*)()>(&GlobalNamespace::TutorialBeatmapObjectPoolsInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
