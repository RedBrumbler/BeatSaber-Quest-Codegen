// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MonoInstallerBase
#include "Zenject/MonoInstallerBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: MonoInstaller
  class MonoInstaller;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::MonoInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MonoInstaller*, "Zenject", "MonoInstaller");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.MonoInstaller
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoInstaller : public ::Zenject::MonoInstallerBase {
    public:
    // public System.Void .ctor()
    // Offset: 0x1CBFBC0
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MonoInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoInstaller*, creationType>()));
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CBFBD0
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: Zenject.InjectTypeInfo MonoInstallerBase::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.MonoInstaller
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::MonoInstaller::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::MonoInstaller::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::MonoInstaller::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::MonoInstaller*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
