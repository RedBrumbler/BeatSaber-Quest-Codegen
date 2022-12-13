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
  // Forward declaring type: StandardGameplaySceneSetupData
  class StandardGameplaySceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StandardGameplayInstaller
  class StandardGameplayInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardGameplayInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardGameplayInstaller*, "", "StandardGameplayInstaller");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: StandardGameplayInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardGameplayInstaller : public ::Zenject::MonoInstaller {
    public:
    public:
    // [InjectAttribute] Offset: 0x11264A4
    // private readonly StandardGameplaySceneSetupData _standardSceneSetupData
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::StandardGameplaySceneSetupData* standardSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardGameplaySceneSetupData*) == 0x8);
    public:
    // Get instance field reference: private readonly StandardGameplaySceneSetupData _standardSceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::StandardGameplaySceneSetupData*& dyn__standardSceneSetupData();
    // public System.Void .ctor()
    // Offset: 0x14892F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardGameplayInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardGameplayInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardGameplayInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x1489008
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
  }; // StandardGameplayInstaller
  #pragma pack(pop)
  static check_size<sizeof(StandardGameplayInstaller), 32 + sizeof(::GlobalNamespace::StandardGameplaySceneSetupData*)> __GlobalNamespace_StandardGameplayInstallerSizeCheck;
  static_assert(sizeof(StandardGameplayInstaller) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardGameplayInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandardGameplayInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardGameplayInstaller::*)()>(&GlobalNamespace::StandardGameplayInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardGameplayInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
