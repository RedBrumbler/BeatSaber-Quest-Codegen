// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Installer`1
#include "Zenject/Installer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenjectManagersInstaller
  class ZenjectManagersInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ZenjectManagersInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectManagersInstaller*, "Zenject", "ZenjectManagersInstaller");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.ZenjectManagersInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class ZenjectManagersInstaller : public ::Zenject::Installer_1<::Zenject::ZenjectManagersInstaller*> {
    public:
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1DF5EBC
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // public System.Void .ctor()
    // Offset: 0x1DF5E6C
    // Implemented from: Zenject.Installer`1
    // Base method: System.Void Installer_1::.ctor()
    // Base method: System.Void InstallerBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZenjectManagersInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ZenjectManagersInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZenjectManagersInstaller*, creationType>()));
    }
    // public override System.Void InstallBindings()
    // Offset: 0x1DF5CD4
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1DF5F14
    // Implemented from: Zenject.Installer`1
    // Base method: Zenject.InjectTypeInfo Installer_1::__zenCreateInjectTypeInfo()
    // Base method: Zenject.InjectTypeInfo InstallerBase::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.ZenjectManagersInstaller
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ZenjectManagersInstaller::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ZenjectManagersInstaller::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectManagersInstaller*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectManagersInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::ZenjectManagersInstaller::InstallBindings
// Il2CppName: InstallBindings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::ZenjectManagersInstaller::*)()>(&Zenject::ZenjectManagersInstaller::InstallBindings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectManagersInstaller*), "InstallBindings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ZenjectManagersInstaller::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ZenjectManagersInstaller::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ZenjectManagersInstaller*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
