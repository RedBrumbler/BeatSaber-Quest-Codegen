// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SphereCollider
  // [RequiredByNativeCodeAttribute] Offset: DA3538
  // [NativeHeaderAttribute] Offset: DA3538
  class SphereCollider : public UnityEngine::Collider {
    public:
    // Creating value type constructor for type: SphereCollider
    SphereCollider() noexcept {}
    // public System.Single get_radius()
    // Offset: 0x23DADB8
    float get_radius();
  }; // UnityEngine.SphereCollider
  #pragma pack(pop)
  // Writing MetadataGetter for method: SphereCollider::get_radius
  // Il2CppName: get_radius
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (SphereCollider::*)()>(&SphereCollider::get_radius)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SphereCollider*), "get_radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SphereCollider*, "UnityEngine", "SphereCollider");
