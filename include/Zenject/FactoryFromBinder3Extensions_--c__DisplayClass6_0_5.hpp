// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder3Extensions
#include "Zenject/FactoryFromBinder3Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`4<TParam1, TParam2, TParam3, TParam4>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class IPoolable_4;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`5<TValue, TParam1, TParam2, TParam3, TParam4>
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class MemoryPool_5;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder3Extensions/<>c__DisplayClass6_0`5
  template<typename TParam1, typename TParam2, typename TParam3, typename TContract, typename TMemoryPool>
  class FactoryFromBinder3Extensions::$$c__DisplayClass6_0_5 : public ::CsObject {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TContract>> || std::is_base_of_v<Zenject::IPoolable_4<TParam1, TParam2, TParam3, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>));
    static_assert((!std::is_complete_v<std::remove_pointer_t<TMemoryPool>> || std::is_base_of_v<Zenject::MemoryPool_5<TParam1, TParam2, TParam3, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>));
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
    static FactoryFromBinder3Extensions::$$c__DisplayClass6_0_5<TParam1, TParam2, TParam3, TContract, TMemoryPool>* New_ctor() {
      return (FactoryFromBinder3Extensions::$$c__DisplayClass6_0_5<TParam1, TParam2, TParam3, TContract, TMemoryPool>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder3Extensions::$$c__DisplayClass6_0_5<TParam1, TParam2, TParam3, TContract, TMemoryPool>*>::get())));
    }
  }; // Zenject.FactoryFromBinder3Extensions/<>c__DisplayClass6_0`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass6_0_5, "Zenject", "FactoryFromBinder3Extensions/<>c__DisplayClass6_0`5");
#pragma pack(pop)
