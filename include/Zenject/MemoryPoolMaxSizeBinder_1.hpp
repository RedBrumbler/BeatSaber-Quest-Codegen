// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MemoryPoolExpandBinder`1
#include "Zenject/MemoryPoolExpandBinder_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: MemoryPoolBindInfo
  class MemoryPoolBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: MemoryPoolMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolMaxSizeBinder_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolMaxSizeBinder_1, "Zenject", "MemoryPoolMaxSizeBinder`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MemoryPoolMaxSizeBinder`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  template<typename TContract>
  class MemoryPoolMaxSizeBinder_1 : public Zenject::MemoryPoolExpandBinder_1<TContract> {
    public:
    // public Zenject.MemoryPoolExpandBinder`1<TContract> WithMaxSize(System.Int32 size)
    // Offset: 0xFFFFFFFF
    Zenject::MemoryPoolExpandBinder_1<TContract>* WithMaxSize(int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolMaxSizeBinder_1::WithMaxSize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithMaxSize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(size)})));
      return ::il2cpp_utils::RunMethodRethrow<Zenject::MemoryPoolExpandBinder_1<TContract>*, false>(this, ___internal__method, size);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolExpandBinder`1
    // Base method: System.Void MemoryPoolExpandBinder_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemoryPoolMaxSizeBinder_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, Zenject::MemoryPoolBindInfo* poolBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MemoryPoolMaxSizeBinder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemoryPoolMaxSizeBinder_1<TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo)));
    }
  }; // Zenject.MemoryPoolMaxSizeBinder`1
  // Could not write size check! Type: Zenject.MemoryPoolMaxSizeBinder`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
