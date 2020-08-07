// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IPoolable`2
  template<typename TParam1, typename TParam2>
  class IPoolable_2 {
    public:
    // public System.Void OnDespawned()
    // Offset: 0xFFFFFFFF
    void OnDespawned() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned"));
    }
    // public System.Void OnSpawned(TParam1 p1, TParam2 p2)
    // Offset: 0xFFFFFFFF
    void OnSpawned(TParam1 p1, TParam2 p2) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnSpawned", p1, p2));
    }
  }; // Zenject.IPoolable`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IPoolable_2, "Zenject", "IPoolable`2");
#pragma pack(pop)