// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryArgumentsToChoiceBinder`6
#include "Zenject/FactoryArgumentsToChoiceBinder_6.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryToChoiceIdBinder`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TContract>
  class FactoryToChoiceIdBinder_6 : public Zenject::FactoryArgumentsToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract> {
    public:
    // public Zenject.FactoryArgumentsToChoiceBinder`6<TParam1,TParam2,TParam3,TParam4,TParam5,TContract> WithId(System.Object identifier)
    // Offset: 0xFFFFFFFF
    Zenject::FactoryArgumentsToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* WithId(::CsObject* identifier) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::FactoryArgumentsToChoiceBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>(this, "WithId", identifier)));
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactoryArgumentsToChoiceBinder`6
    // Base method: System.Void FactoryArgumentsToChoiceBinder`6::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Base method: System.Void FactoryToChoiceBinder`6::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Base method: System.Void FactoryFromBinder`6::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    static FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      return (FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryToChoiceIdBinder_6<TParam1, TParam2, TParam3, TParam4, TParam5, TContract>*>::get(), bindContainer, bindInfo, factoryBindInfo)));
    }
  }; // Zenject.FactoryToChoiceIdBinder`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceIdBinder_6, "Zenject", "FactoryToChoiceIdBinder`6");
#pragma pack(pop)
