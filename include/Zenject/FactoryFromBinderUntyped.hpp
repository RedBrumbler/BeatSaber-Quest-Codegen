// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryFromBinderUntyped
  // [NoReflectionBakingAttribute] Offset: DDC824
  class FactoryFromBinderUntyped : public Zenject::FactoryFromBinderBase {
    public:
    // Creating value type constructor for type: FactoryFromBinderUntyped
    FactoryFromBinderUntyped() noexcept {}
    // public System.Void .ctor(Zenject.DiContainer bindContainer, System.Type contractType, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0x16370B4
    // Implemented from: Zenject.FactoryFromBinderBase
    // Base method: System.Void FactoryFromBinderBase::.ctor(Zenject.DiContainer bindContainer, System.Type contractType, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinderUntyped* New_ctor(Zenject::DiContainer* bindContainer, System::Type* contractType, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinderUntyped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinderUntyped*, creationType>(bindContainer, contractType, bindInfo, factoryBindInfo)));
    }
  }; // Zenject.FactoryFromBinderUntyped
  #pragma pack(pop)
  // Writing MetadataGetter for method: FactoryFromBinderUntyped::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FactoryFromBinderUntyped::*)(Zenject::DiContainer*, System::Type*, Zenject::BindInfo*, Zenject::FactoryBindInfo*)>(&FactoryFromBinderUntyped::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FactoryFromBinderUntyped*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::DiContainer*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::BindInfo*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::FactoryBindInfo*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (FactoryFromBinderUntyped::*)(Zenject::DiContainer*, System::Type*, Zenject::BindInfo*, Zenject::FactoryBindInfo*)>(&FactoryFromBinderUntyped::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(FactoryFromBinderUntyped*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::DiContainer*>(), ::il2cpp_utils::ExtractIndependentType<System::Type*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::BindInfo*>(), ::il2cpp_utils::ExtractIndependentType<Zenject::FactoryBindInfo*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderUntyped*, "Zenject", "FactoryFromBinderUntyped");
