// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.IPoolable
  class IPoolable {
    public:
    // Creating value type constructor for type: IPoolable
    IPoolable() noexcept {}
    // public System.Void OnDespawned()
    // Offset: 0xFFFFFFFF
    void OnDespawned();
    // public System.Void OnSpawned()
    // Offset: 0xFFFFFFFF
    void OnSpawned();
  }; // Zenject.IPoolable
  #pragma pack(pop)
  // Writing MetadataGetter for method: IPoolable::OnDespawned
  // Il2CppName: OnDespawned
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IPoolable::*)()>(&IPoolable::OnDespawned)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IPoolable*), "OnDespawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: IPoolable::OnSpawned
  // Il2CppName: OnSpawned
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IPoolable::*)()>(&IPoolable::OnSpawned)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IPoolable*), "OnSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::IPoolable*, "Zenject", "IPoolable");
