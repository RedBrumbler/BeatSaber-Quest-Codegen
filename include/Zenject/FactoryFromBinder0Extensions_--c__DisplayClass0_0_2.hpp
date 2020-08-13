// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder0Extensions
#include "Zenject/FactoryFromBinder0Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`1<TParam1>
  template<typename TParam1>
  class IPoolable_1;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`2<TValue, TParam1>
  template<typename TValue, typename TParam1>
  class MemoryPool_2;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder0Extensions/<>c__DisplayClass0_0`2
  template<typename TContract, typename TMemoryPool>
  class FactoryFromBinder0Extensions::$$c__DisplayClass0_0_2 : public ::CsObject {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TContract>> || std::is_base_of_v<Zenject::IPoolable_1<Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>));
    static_assert((!std::is_complete_v<std::remove_pointer_t<TMemoryPool>> || std::is_base_of_v<Zenject::MemoryPool_2<Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>));
    public:
    // public System.Guid poolId
    // Offset: 0x0
    System::Guid poolId;
    // Zenject.IProvider <FromPoolableMemoryPool>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromPoolableMemoryPool$b__0(Zenject::DiContainer* container) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromPoolableMemoryPool>b__0", container)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder0Extensions::$$c__DisplayClass0_0_2<TContract, TMemoryPool>* New_ctor() {
      return (FactoryFromBinder0Extensions::$$c__DisplayClass0_0_2<TContract, TMemoryPool>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder0Extensions::$$c__DisplayClass0_0_2<TContract, TMemoryPool>*>::get())));
    }
  }; // Zenject.FactoryFromBinder0Extensions/<>c__DisplayClass0_0`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder0Extensions::$$c__DisplayClass0_0_2, "Zenject", "FactoryFromBinder0Extensions/<>c__DisplayClass0_0`2");
#pragma pack(pop)
