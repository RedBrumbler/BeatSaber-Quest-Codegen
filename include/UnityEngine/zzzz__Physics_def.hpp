#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Collider;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine {
class Physics;
}
// Type: UnityEngine::Physics
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15481))
// CS Name: UnityEngine.Physics
class CORDL_TYPE Physics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Physics() = default;

// Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: " const&", def_value: None }]
constexpr Physics(Physics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "&&", def_value: None }]
constexpr Physics(Physics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Physics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Physics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Physics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Physics& operator=(Physics&& o) noexcept = default;
  constexpr Physics& operator=(Physics const& o) noexcept = default;
                


// Fields

static System::Action_2<UnityEngine::PhysicsScene,Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>> __declspec(property(get=__get_ContactModifyEvent, put=__set_ContactModifyEvent))  ContactModifyEvent;

static void __set_ContactModifyEvent(System::Action_2<UnityEngine::PhysicsScene,Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>> value) ;

static System::Action_2<UnityEngine::PhysicsScene,Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>> __get_ContactModifyEvent() ;

static System::Action_2<UnityEngine::PhysicsScene,Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>> __declspec(property(get=__get_ContactModifyEventCCD, put=__set_ContactModifyEventCCD))  ContactModifyEventCCD;

static void __set_ContactModifyEventCCD(System::Action_2<UnityEngine::PhysicsScene,Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>> value) ;

static System::Action_2<UnityEngine::PhysicsScene,Unity::Collections::NativeArray_1<UnityEngine::ModifiableContactPair>> __get_ContactModifyEventCCD() ;


// Properties

static UnityEngine::Vector3 __declspec(property(get=get_gravity))  gravity;

static UnityEngine::PhysicsScene __declspec(property(get=get_defaultPhysicsScene))  defaultPhysicsScene;


// Methods

/// @brief Method OnSceneContactModify addr 0x2bce598 size 0xcc virtual false final false
static void OnSceneContactModify(UnityEngine::PhysicsScene scene, ::cordl_internals::intptr_t buffer, int32_t count, bool isCCD) ;

/// @brief Method get_gravity addr 0x2bce664 size 0x4c virtual false final false
static UnityEngine::Vector3 get_gravity() ;

/// @brief Method get_defaultPhysicsScene addr 0x2bce6ec size 0x44 virtual false final false
static UnityEngine::PhysicsScene get_defaultPhysicsScene() ;

/// @brief Method IgnoreCollision addr 0x2bce76c size 0x54 virtual false final false
static void IgnoreCollision(UnityEngine::Collider collider1, UnityEngine::Collider collider2, bool ignore) ;

/// @brief Method IgnoreCollision addr 0x2bce7c0 size 0x48 virtual false final false
static void IgnoreCollision(UnityEngine::Collider collider1, UnityEngine::Collider collider2) ;

/// @brief Method Raycast addr 0x2bce808 size 0xc8 virtual false final false
static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Raycast addr 0x2bcea24 size 0xc4 virtual false final false
static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask) ;

/// @brief Method Raycast addr 0x2bceae8 size 0xb8 virtual false final false
static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float_t maxDistance) ;

/// @brief Method Raycast addr 0x2bceba0 size 0xb0 virtual false final false
static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction) ;

/// @brief Method Raycast addr 0x2bcec50 size 0xd8 virtual false final false
static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Raycast addr 0x2bcee90 size 0xcc virtual false final false
static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask) ;

/// @brief Method Raycast addr 0x2bcef5c size 0xc8 virtual false final false
static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance) ;

/// @brief Method Raycast addr 0x2bcf024 size 0xc0 virtual false final false
static bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo) ;

/// @brief Method Raycast addr 0x2bcf0e4 size 0xd0 virtual false final false
static bool Raycast(UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Raycast addr 0x2bcf1b4 size 0xc4 virtual false final false
static bool Raycast(UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask) ;

/// @brief Method Raycast addr 0x2bcf278 size 0xc0 virtual false final false
static bool Raycast(UnityEngine::Ray ray, float_t maxDistance) ;

/// @brief Method Raycast addr 0x2bcf338 size 0xc0 virtual false final false
static bool Raycast(UnityEngine::Ray ray) ;

/// @brief Method Raycast addr 0x2bcf3f8 size 0xd8 virtual false final false
static bool Raycast(UnityEngine::Ray ray, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Raycast addr 0x2bcf4d0 size 0x7c virtual false final false
static bool Raycast(UnityEngine::Ray ray, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask) ;

/// @brief Method Raycast addr 0x2bcf54c size 0xc8 virtual false final false
static bool Raycast(UnityEngine::Ray ray, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance) ;

/// @brief Method Raycast addr 0x2bcf614 size 0xc8 virtual false final false
static bool Raycast(UnityEngine::Ray ray, ByRef<UnityEngine::RaycastHit> hitInfo) ;

/// @brief Method CapsuleCast addr 0x2bcf6dc size 0xdc virtual false final false
static bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method CapsuleCast addr 0x2bcf7d8 size 0x20 virtual false final false
static bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask) ;

/// @brief Method SphereCast addr 0x2bcf7f8 size 0xcc virtual false final false
static bool SphereCast(UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method SphereCast addr 0x2bcf8cc size 0x8 virtual false final false
static bool SphereCast(UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask) ;

/// @brief Method Internal_RaycastAll addr 0x2bcf8d4 size 0x78 virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> Internal_RaycastAll(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float_t maxDistance, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method RaycastAll addr 0x2bcf9b8 size 0x1a0 virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method RaycastAll addr 0x2bcfb58 size 0x8 virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask) ;

/// @brief Method RaycastAll addr 0x2bcfb60 size 0xc virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float_t maxDistance) ;

/// @brief Method RaycastAll addr 0x2bcfb6c size 0x14 virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> RaycastAll(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction) ;

/// @brief Method RaycastAll addr 0x2bcfb80 size 0x78 virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> RaycastAll(UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method RaycastAll addr 0x2bcfbf8 size 0x74 virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> RaycastAll(UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask) ;

/// @brief Method RaycastAll addr 0x2bcfc6c size 0x68 virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> RaycastAll(UnityEngine::Ray ray, float_t maxDistance) ;

/// @brief Method RaycastAll addr 0x2bcfcd4 size 0x68 virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> RaycastAll(UnityEngine::Ray ray) ;

/// @brief Method RaycastNonAlloc addr 0x2bcfd3c size 0xd4 virtual false final false
static int32_t RaycastNonAlloc(UnityEngine::Ray ray, ::ArrayW<UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method RaycastNonAlloc addr 0x2bcffec size 0xd0 virtual false final false
static int32_t RaycastNonAlloc(UnityEngine::Ray ray, ::ArrayW<UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask) ;

/// @brief Method RaycastNonAlloc addr 0x2bd00bc size 0xc4 virtual false final false
static int32_t RaycastNonAlloc(UnityEngine::Ray ray, ::ArrayW<UnityEngine::RaycastHit> results, float_t maxDistance) ;

/// @brief Method RaycastNonAlloc addr 0x2bd0180 size 0xc4 virtual false final false
static int32_t RaycastNonAlloc(UnityEngine::Ray ray, ::ArrayW<UnityEngine::RaycastHit> results) ;

/// @brief Method RaycastNonAlloc addr 0x2bd0244 size 0xd4 virtual false final false
static int32_t RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::ArrayW<UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method RaycastNonAlloc addr 0x2bd0318 size 0xc8 virtual false final false
static int32_t RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::ArrayW<UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask) ;

/// @brief Method RaycastNonAlloc addr 0x2bd03e0 size 0xc4 virtual false final false
static int32_t RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::ArrayW<UnityEngine::RaycastHit> results, float_t maxDistance) ;

/// @brief Method RaycastNonAlloc addr 0x2bd04a4 size 0xbc virtual false final false
static int32_t RaycastNonAlloc(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::ArrayW<UnityEngine::RaycastHit> results) ;

/// @brief Method Query_SphereCastAll addr 0x2bd0560 size 0x88 virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> Query_SphereCastAll(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, float_t maxDistance, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method SphereCastAll addr 0x2bd066c size 0x17c virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> SphereCastAll(UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method SphereCastAll addr 0x2bd07e8 size 0x88 virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> SphereCastAll(UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method SphereCastAll addr 0x2bd0870 size 0x30 virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> SphereCastAll(UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask) ;

/// @brief Method CheckSphere_Internal addr 0x2bd08a0 size 0x78 virtual false final false
static bool CheckSphere_Internal(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 position, float_t radius, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method CheckSphere addr 0x2bd0984 size 0x94 virtual false final false
static bool CheckSphere(UnityEngine::Vector3 position, float_t radius, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method CheckSphere addr 0x2bd0a18 size 0x8 virtual false final false
static bool CheckSphere(UnityEngine::Vector3 position, float_t radius, int32_t layerMask) ;

/// @brief Method CheckCapsule_Internal addr 0x2bd0a20 size 0x84 virtual false final false
static bool CheckCapsule_Internal(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 start, UnityEngine::Vector3 end, float_t radius, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method CheckCapsule addr 0x2bd0b20 size 0xb4 virtual false final false
static bool CheckCapsule(UnityEngine::Vector3 start, UnityEngine::Vector3 end, float_t radius, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method CheckCapsule addr 0x2bd0bd4 size 0x8 virtual false final false
static bool CheckCapsule(UnityEngine::Vector3 start, UnityEngine::Vector3 end, float_t radius, int32_t layerMask) ;

/// @brief Method OverlapBoxNonAlloc addr 0x2bd0bdc size 0xd0 virtual false final false
static int32_t OverlapBoxNonAlloc(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::ArrayW<UnityEngine::Collider> results, UnityEngine::Quaternion orientation, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method OverlapBoxNonAlloc addr 0x2bd0cc8 size 0x10 virtual false final false
static int32_t OverlapBoxNonAlloc(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::ArrayW<UnityEngine::Collider> results, UnityEngine::Quaternion orientation, int32_t mask) ;

/// @brief Method get_gravity_Injected addr 0x2bce6b0 size 0x3c virtual false final false
static void get_gravity_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method get_defaultPhysicsScene_Injected addr 0x2bce730 size 0x3c virtual false final false
static void get_defaultPhysicsScene_Injected(ByRef<UnityEngine::PhysicsScene> ret) ;

/// @brief Method Internal_RaycastAll_Injected addr 0x2bcf94c size 0x6c virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> Internal_RaycastAll_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Ray> ray, float_t maxDistance, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Query_SphereCastAll_Injected addr 0x2bd05e8 size 0x84 virtual false final false
static ::ArrayW<UnityEngine::RaycastHit> Query_SphereCastAll_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Vector3> origin, float_t radius, ByRef<UnityEngine::Vector3> direction, float_t maxDistance, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method CheckSphere_Internal_Injected addr 0x2bd0918 size 0x6c virtual false final false
static bool CheckSphere_Internal_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Vector3> position, float_t radius, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method CheckCapsule_Internal_Injected addr 0x2bd0aa4 size 0x7c virtual false final false
static bool CheckCapsule_Internal_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Vector3> start, ByRef<UnityEngine::Vector3> end, float_t radius, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Physics);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Physics, "UnityEngine", "Physics");
