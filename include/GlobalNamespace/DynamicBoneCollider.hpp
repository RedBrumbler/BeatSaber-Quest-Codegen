// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DynamicBoneColliderBase
#include "GlobalNamespace/DynamicBoneColliderBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DynamicBoneCollider
  class DynamicBoneCollider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DynamicBoneCollider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DynamicBoneCollider*, "", "DynamicBoneCollider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: DynamicBoneCollider
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 1143BC0
  class DynamicBoneCollider : public ::GlobalNamespace::DynamicBoneColliderBase {
    public:
    public:
    // public System.Single m_Radius
    // Size: 0x4
    // Offset: 0x2C
    float m_Radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_Height
    // Size: 0x4
    // Offset: 0x30
    float m_Height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single m_Radius
    [[deprecated("Use field access instead!")]] float& dyn_m_Radius();
    // Get instance field reference: public System.Single m_Height
    [[deprecated("Use field access instead!")]] float& dyn_m_Height();
    // private System.Void OnValidate()
    // Offset: 0x2B7C5BC
    void OnValidate();
    // static private System.Void OutsideSphere(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius, UnityEngine.Vector3 sphereCenter, System.Single sphereRadius)
    // Offset: 0x2B7C8AC
    static void OutsideSphere(ByRef<::UnityEngine::Vector3> particlePosition, float particleRadius, ::UnityEngine::Vector3 sphereCenter, float sphereRadius);
    // static private System.Void InsideSphere(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius, UnityEngine.Vector3 sphereCenter, System.Single sphereRadius)
    // Offset: 0x2B7CA40
    static void InsideSphere(ByRef<::UnityEngine::Vector3> particlePosition, float particleRadius, ::UnityEngine::Vector3 sphereCenter, float sphereRadius);
    // static private System.Void OutsideCapsule(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius, UnityEngine.Vector3 capsuleP0, UnityEngine.Vector3 capsuleP1, System.Single capsuleRadius)
    // Offset: 0x2B7CBE4
    static void OutsideCapsule(ByRef<::UnityEngine::Vector3> particlePosition, float particleRadius, ::UnityEngine::Vector3 capsuleP0, ::UnityEngine::Vector3 capsuleP1, float capsuleRadius);
    // static private System.Void InsideCapsule(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius, UnityEngine.Vector3 capsuleP0, UnityEngine.Vector3 capsuleP1, System.Single capsuleRadius)
    // Offset: 0x2B7D020
    static void InsideCapsule(ByRef<::UnityEngine::Vector3> particlePosition, float particleRadius, ::UnityEngine::Vector3 capsuleP0, ::UnityEngine::Vector3 capsuleP1, float capsuleRadius);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x2B7D430
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x2B7D618
    // Implemented from: DynamicBoneColliderBase
    // Base method: System.Void DynamicBoneColliderBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicBoneCollider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DynamicBoneCollider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicBoneCollider*, creationType>()));
    }
    // public override System.Void Collide(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius)
    // Offset: 0x2B7C654
    // Implemented from: DynamicBoneColliderBase
    // Base method: System.Void DynamicBoneColliderBase::Collide(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius)
    void Collide(ByRef<::UnityEngine::Vector3> particlePosition, float particleRadius);
  }; // DynamicBoneCollider
  #pragma pack(pop)
  static check_size<sizeof(DynamicBoneCollider), 48 + sizeof(float)> __GlobalNamespace_DynamicBoneColliderSizeCheck;
  static_assert(sizeof(DynamicBoneCollider) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DynamicBoneCollider::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBoneCollider::*)()>(&GlobalNamespace::DynamicBoneCollider::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBoneCollider*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBoneCollider::OutsideSphere
// Il2CppName: OutsideSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, float, ::UnityEngine::Vector3, float)>(&GlobalNamespace::DynamicBoneCollider::OutsideSphere)> {
  static const MethodInfo* get() {
    static auto* particlePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* particleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sphereCenter = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sphereRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBoneCollider*), "OutsideSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particlePosition, particleRadius, sphereCenter, sphereRadius});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBoneCollider::InsideSphere
// Il2CppName: InsideSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, float, ::UnityEngine::Vector3, float)>(&GlobalNamespace::DynamicBoneCollider::InsideSphere)> {
  static const MethodInfo* get() {
    static auto* particlePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* particleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sphereCenter = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* sphereRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBoneCollider*), "InsideSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particlePosition, particleRadius, sphereCenter, sphereRadius});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBoneCollider::OutsideCapsule
// Il2CppName: OutsideCapsule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&GlobalNamespace::DynamicBoneCollider::OutsideCapsule)> {
  static const MethodInfo* get() {
    static auto* particlePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* particleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* capsuleP0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* capsuleP1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* capsuleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBoneCollider*), "OutsideCapsule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particlePosition, particleRadius, capsuleP0, capsuleP1, capsuleRadius});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBoneCollider::InsideCapsule
// Il2CppName: InsideCapsule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector3>, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&GlobalNamespace::DynamicBoneCollider::InsideCapsule)> {
  static const MethodInfo* get() {
    static auto* particlePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* particleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* capsuleP0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* capsuleP1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* capsuleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBoneCollider*), "InsideCapsule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particlePosition, particleRadius, capsuleP0, capsuleP1, capsuleRadius});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBoneCollider::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBoneCollider::*)()>(&GlobalNamespace::DynamicBoneCollider::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBoneCollider*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DynamicBoneCollider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DynamicBoneCollider::Collide
// Il2CppName: Collide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DynamicBoneCollider::*)(ByRef<::UnityEngine::Vector3>, float)>(&GlobalNamespace::DynamicBoneCollider::Collide)> {
  static const MethodInfo* get() {
    static auto* particlePosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* particleRadius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DynamicBoneCollider*), "Collide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particlePosition, particleRadius});
  }
};
