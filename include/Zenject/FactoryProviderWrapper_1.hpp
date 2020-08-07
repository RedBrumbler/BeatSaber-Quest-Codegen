// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IFactory`1
#include "Zenject/IFactory_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryProviderWrapper`1
  template<typename TContract>
  class FactoryProviderWrapper_1 : public ::Il2CppObject, public Zenject::IFactory_1<TContract>, public Zenject::IFactory {
    public:
    // private readonly Zenject.IProvider _provider
    // Offset: 0x0
    Zenject::IProvider* provider;
    // private readonly Zenject.InjectContext _injectContext
    // Offset: 0x0
    Zenject::InjectContext* injectContext;
    // public System.Void .ctor(Zenject.IProvider provider, Zenject.InjectContext injectContext)
    // Offset: 0xFFFFFFFF
    static FactoryProviderWrapper_1<TContract>* New_ctor(Zenject::IProvider* provider, Zenject::InjectContext* injectContext) {
      return (FactoryProviderWrapper_1<TContract>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryProviderWrapper_1<TContract>*>::get(), provider, injectContext));
    }
    // public TContract Create()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`1
    // Base method: TValue IFactory`1::Create()
    TContract Create() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TContract>(this, "Create"));
    }
    // Creating proxy method: Zenject_IFactory_1_Create
    // Maps to method: Create
    TContract Zenject_IFactory_1_Create() {
      return Create();
    }
  }; // Zenject.FactoryProviderWrapper`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryProviderWrapper_1, "Zenject", "FactoryProviderWrapper`1");
#pragma pack(pop)