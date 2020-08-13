// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.IDespawnableMemoryPool`1
#include "Zenject/IDespawnableMemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IMemoryPool`4
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3>
  class IMemoryPool_4 : public Zenject::IDespawnableMemoryPool_1<TValue>, public Zenject::IMemoryPool {
    public:
    // public TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3)
    // Offset: 0xFFFFFFFF
    TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", param1, param2, param3));
    }
  }; // Zenject.IMemoryPool`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IMemoryPool_4, "Zenject", "IMemoryPool`4");
#pragma pack(pop)
