// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder`3
#include "Zenject/FactoryFromBinder_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: FactoryFromBinder`3 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryToChoiceBinder`3
  template<typename TParam1, typename TParam2, typename TContract>
  class FactoryToChoiceBinder_3 : public Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract> {
    public:
    // public Zenject.FactoryFromBinder`3<TParam1,TParam2,TContract> ToSelf()
    // Offset: 0xFFFFFFFF
    Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>* ToSelf() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::FactoryFromBinder_3<TParam1, TParam2, TContract>*>(this, "ToSelf")));
    }
    // public Zenject.FactoryFromBinder`3<TParam1,TParam2,TConcrete> To()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::FactoryFromBinder_3<TParam1, TParam2, TConcrete>* To() {
      static_assert(std::is_convertible_v<TConcrete, TContract>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::FactoryFromBinder_3<TParam1, TParam2, TConcrete>*>(this, "To", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()})));
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactoryFromBinder`3
    // Base method: System.Void FactoryFromBinder`3::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    static FactoryToChoiceBinder_3<TParam1, TParam2, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      return (FactoryToChoiceBinder_3<TParam1, TParam2, TContract>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryToChoiceBinder_3<TParam1, TParam2, TContract>*>::get(), bindContainer, bindInfo, factoryBindInfo)));
    }
  }; // Zenject.FactoryToChoiceBinder`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_3, "Zenject", "FactoryToChoiceBinder`3");
#pragma pack(pop)
