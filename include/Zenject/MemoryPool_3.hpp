// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`3
#include "Zenject/IMemoryPool_3.hpp"
// Including type: Zenject.IFactory`3
#include "Zenject/IFactory_3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPool`3
  template<typename TValue, typename TParam1, typename TParam2>
  class MemoryPool_3 : public Zenject::MemoryPoolBase_1<TValue>, public Zenject::IMemoryPool_3<TParam1, TParam2, TValue>, public Zenject::IDespawnableMemoryPool_1<TValue>, public Zenject::IMemoryPool, public Zenject::IFactory_3<TParam1, TParam2, TValue>, public Zenject::IFactory {
    public:
    // public TValue Spawn(TParam1 param1, TParam2 param2)
    // Offset: 0xFFFFFFFF
    TValue Spawn(TParam1 param1, TParam2 param2) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", param1, param2));
    }
    // protected System.Void Reinitialize(TParam1 p1, TParam2 p2, TValue item)
    // Offset: 0xFFFFFFFF
    void Reinitialize(TParam1 p1, TParam2 p2, TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", p1, p2, item));
    }
    // private TValue Zenject.IFactory<TParam1,TParam2,TValue>.Create(TParam1 p1, TParam2 p2)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`3
    // Base method: TValue IFactory`3::Create(TParam1 p1, TParam2 p2)
    TValue Zenject_IFactory_3_Create(TParam1 p1, TParam2 p2) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<TValue>(this, "Zenject.IFactory<TParam1,TParam2,TValue>.Create", p1, p2)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MemoryPool_3<TValue, TParam1, TParam2>* New_ctor() {
      return (MemoryPool_3<TValue, TParam1, TParam2>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPool_3<TValue, TParam1, TParam2>*>::get())));
    }
  }; // Zenject.MemoryPool`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_3, "Zenject", "MemoryPool`3");
#pragma pack(pop)
