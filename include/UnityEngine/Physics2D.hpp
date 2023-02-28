// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.RaycastHit2D
#include "UnityEngine/RaycastHit2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody2D
  class Rigidbody2D;
  // Forward declaring type: PhysicsScene2D
  struct PhysicsScene2D;
  // Forward declaring type: Ray
  struct Ray;
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: ContactFilter2D
  struct ContactFilter2D;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Physics2D
  class Physics2D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Physics2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics2D*, "UnityEngine", "Physics2D");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Physics2D
  // [TokenAttribute] Offset: FFFFFFFF
  // [StaticAccessorAttribute] Offset: 10B6A28
  // [NativeHeaderAttribute] Offset: 10B6A28
  // [NativeHeaderAttribute] Offset: 10B6A28
  // [NativeHeaderAttribute] Offset: 10B6A28
  class Physics2D : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> m_LastDisabledRigidbody2D
    static ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>* _get_m_LastDisabledRigidbody2D();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> m_LastDisabledRigidbody2D
    static void _set_m_LastDisabledRigidbody2D(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>* value);
    // static public UnityEngine.PhysicsScene2D get_defaultPhysicsScene()
    // Offset: 0x2BA5BCC
    static ::UnityEngine::PhysicsScene2D get_defaultPhysicsScene();
    // static public System.Boolean get_queriesHitTriggers()
    // Offset: 0x2BA5B98
    static bool get_queriesHitTriggers();
    // static private System.Void .cctor()
    // Offset: 0x2BA6B80
    static void _cctor();
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction)
    // Offset: 0x2BA5BD4
    static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance)
    // Offset: 0x2BA5D7C
    static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float distance);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0x2BA5E60
    static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float distance, int layerMask);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask, System.Single minDepth)
    // Offset: 0x2BA6008
    static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float distance, int layerMask, float minDepth);
    // static public UnityEngine.RaycastHit2D Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, System.Single distance, System.Int32 layerMask, System.Single minDepth, System.Single maxDepth)
    // Offset: 0x2BA6148
    static ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float distance, int layerMask, float minDepth, float maxDepth);
    // static public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x2BA6290
    static int Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D> results);
    // static public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, UnityEngine.ContactFilter2D contactFilter, UnityEngine.RaycastHit2D[] results, System.Single distance)
    // Offset: 0x2BA6390
    static int Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D> results, float distance);
    // static public System.Int32 Raycast(UnityEngine.Vector2 origin, UnityEngine.Vector2 direction, UnityEngine.ContactFilter2D contactFilter, System.Collections.Generic.List`1<UnityEngine.RaycastHit2D> results, System.Single distance)
    // Offset: 0x2BA6464
    static int Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results, float distance);
    // static public UnityEngine.RaycastHit2D[] GetRayIntersectionAll(UnityEngine.Ray ray)
    // Offset: 0x2BA656C
    static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray ray);
    // static public UnityEngine.RaycastHit2D[] GetRayIntersectionAll(UnityEngine.Ray ray, System.Single distance)
    // Offset: 0x2BA66E8
    static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray ray, float distance);
    // static public UnityEngine.RaycastHit2D[] GetRayIntersectionAll(UnityEngine.Ray ray, System.Single distance, System.Int32 layerMask)
    // Offset: 0x2BA67A4
    static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray ray, float distance, int layerMask);
    // static private UnityEngine.RaycastHit2D[] GetRayIntersectionAll_Internal(UnityEngine.PhysicsScene2D physicsScene, UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0x2BA6628
    static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float distance, int layerMask);
    // static public System.Int32 GetRayIntersectionNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit2D[] results)
    // Offset: 0x2BA68E4
    static int GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D> results);
    // static public System.Int32 GetRayIntersectionNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit2D[] results, System.Single distance)
    // Offset: 0x2BA6A1C
    static int GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D> results, float distance);
    // static public System.Int32 GetRayIntersectionNonAlloc(UnityEngine.Ray ray, UnityEngine.RaycastHit2D[] results, System.Single distance, System.Int32 layerMask)
    // Offset: 0x2BA6ACC
    static int GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D> results, float distance, int layerMask);
    // static private UnityEngine.RaycastHit2D[] GetRayIntersectionAll_Internal_Injected(ref UnityEngine.PhysicsScene2D physicsScene, ref UnityEngine.Vector3 origin, ref UnityEngine.Vector3 direction, System.Single distance, System.Int32 layerMask)
    // Offset: 0x2BA686C
    static ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll_Internal_Injected(ByRef<::UnityEngine::PhysicsScene2D> physicsScene, ByRef<::UnityEngine::Vector3> origin, ByRef<::UnityEngine::Vector3> direction, float distance, int layerMask);
  }; // UnityEngine.Physics2D
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Physics2D::get_defaultPhysicsScene
// Il2CppName: get_defaultPhysicsScene
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PhysicsScene2D (*)()>(&UnityEngine::Physics2D::get_defaultPhysicsScene)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "get_defaultPhysicsScene", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::get_queriesHitTriggers
// Il2CppName: get_queriesHitTriggers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::Physics2D::get_queriesHitTriggers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "get_queriesHitTriggers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Physics2D::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float, int)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float, int, float)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, distance, layerMask, minDepth});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit2D (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float, int, float, float)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* minDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* maxDepth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, distance, layerMask, minDepth, maxDepth});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, contactFilter, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::ArrayW<::UnityEngine::RaycastHit2D>, float)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, contactFilter, results, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*, float)>(&UnityEngine::Physics2D::Raycast)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* contactFilter = &::il2cpp_utils::GetClassFromName("UnityEngine", "ContactFilter2D")->byval_arg;
    static auto* results = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D")})->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, direction, contactFilter, results, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionAll
// Il2CppName: GetRayIntersectionAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::Ray)>(&UnityEngine::Physics2D::GetRayIntersectionAll)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionAll
// Il2CppName: GetRayIntersectionAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::Ray, float)>(&UnityEngine::Physics2D::GetRayIntersectionAll)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionAll
// Il2CppName: GetRayIntersectionAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::Ray, float, int)>(&UnityEngine::Physics2D::GetRayIntersectionAll)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionAll_Internal
// Il2CppName: GetRayIntersectionAll_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(::UnityEngine::PhysicsScene2D, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, int)>(&UnityEngine::Physics2D::GetRayIntersectionAll_Internal)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->byval_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionAll_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, origin, direction, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionNonAlloc
// Il2CppName: GetRayIntersectionNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&UnityEngine::Physics2D::GetRayIntersectionNonAlloc)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, results});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionNonAlloc
// Il2CppName: GetRayIntersectionNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>, float)>(&UnityEngine::Physics2D::GetRayIntersectionNonAlloc)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, results, distance});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionNonAlloc
// Il2CppName: GetRayIntersectionNonAlloc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Ray, ::ArrayW<::UnityEngine::RaycastHit2D>, float, int)>(&UnityEngine::Physics2D::GetRayIntersectionNonAlloc)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* results = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit2D"), 1)->byval_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionNonAlloc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, results, distance, layerMask});
  }
};
// Writing MetadataGetter for method: UnityEngine::Physics2D::GetRayIntersectionAll_Internal_Injected
// Il2CppName: GetRayIntersectionAll_Internal_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::RaycastHit2D> (*)(ByRef<::UnityEngine::PhysicsScene2D>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, float, int)>(&UnityEngine::Physics2D::GetRayIntersectionAll_Internal_Injected)> {
  static const MethodInfo* get() {
    static auto* physicsScene = &::il2cpp_utils::GetClassFromName("UnityEngine", "PhysicsScene2D")->this_arg;
    static auto* origin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* distance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Physics2D*), "GetRayIntersectionAll_Internal_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{physicsScene, origin, direction, distance, layerMask});
  }
};
