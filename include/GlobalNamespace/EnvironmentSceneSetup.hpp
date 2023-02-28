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
  // Forward declaring type: EnvironmentSceneSetupData
  class EnvironmentSceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentSceneSetup
  class EnvironmentSceneSetup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnvironmentSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentSceneSetup*, "", "EnvironmentSceneSetup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentSceneSetup
  // [TokenAttribute] Offset: FFFFFFFF
  class EnvironmentSceneSetup : public ::Zenject::MonoInstaller {
    public:
    public:
    // [InjectAttribute] Offset: 0x113473C
    // private readonly EnvironmentSceneSetupData _sceneSetupData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::EnvironmentSceneSetupData* sceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::EnvironmentSceneSetupData*) == 0x8);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x113474C
    // Get static field: static private readonly System.Int32 trackLaneYPositionPropertyId
    static int _get_trackLaneYPositionPropertyId();
    // Set static field: static private readonly System.Int32 trackLaneYPositionPropertyId
    static void _set_trackLaneYPositionPropertyId(int value);
    // Get instance field reference: private readonly EnvironmentSceneSetupData _sceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::EnvironmentSceneSetupData*& dyn__sceneSetupData();
    // public System.Void .ctor()
    // Offset: 0x13C11B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentSceneSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnvironmentSceneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentSceneSetup*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x13C11BC
    static void _cctor();
    // public override System.Void InstallBindings()
    // Offset: 0x13C1064
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // EnvironmentSceneSetup
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentSceneSetup), 32 + sizeof(::GlobalNamespace::EnvironmentSceneSetupData*)> __GlobalNamespace_EnvironmentSceneSetupSizeCheck;
  static_assert(sizeof(EnvironmentSceneSetup) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSceneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSceneSetup::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::EnvironmentSceneSetup::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSceneSetup*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::EnvironmentSceneSetup::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnvironmentSceneSetup::*)()>(&GlobalNamespace::EnvironmentSceneSetup::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnvironmentSceneSetup*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
