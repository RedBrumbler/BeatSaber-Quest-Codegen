#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct RaycastHit;
}
// Forward declare root types
namespace UnityEngine {
struct PhysicsScene;
}
// Type: UnityEngine::PhysicsScene
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15496))
// CS Name: UnityEngine.PhysicsScene
struct CORDL_TYPE PhysicsScene : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::PhysicsScene>
constexpr operator  System::IEquatable_1<UnityEngine::PhysicsScene>() const;

// Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PhysicsScene(int32_t m_Handle) noexcept;


                    constexpr PhysicsScene(PhysicsScene const&) = default;
                    constexpr PhysicsScene(PhysicsScene&&) = default;
                    constexpr PhysicsScene& operator=(PhysicsScene const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PhysicsScene& operator=(PhysicsScene&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PhysicsScene(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Handle, put=__set_m_Handle))  m_Handle;

constexpr void __set_m_Handle(int32_t value) ;

constexpr int32_t __get_m_Handle() const;


// Methods

/// @brief Method ToString addr 0x2bd251c size 0xe4 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetHashCode addr 0x2bd2600 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2bd2608 size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

/// @brief Method Equals addr 0x2bd2680 size 0x10 virtual true final true
 bool Equals(UnityEngine::PhysicsScene other) ;

/// @brief Method Raycast addr 0x2bce8d0 size 0x154 virtual false final false
 bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_RaycastTest addr 0x2bd2690 size 0x7c virtual false final false
static bool Internal_RaycastTest(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Raycast addr 0x2bced28 size 0x168 virtual false final false
 bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_Raycast addr 0x2bd2778 size 0x7c virtual false final false
static bool Internal_Raycast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hit, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Raycast addr 0x2bcfe10 size 0x1dc virtual false final false
 int32_t Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::ArrayW<UnityEngine::RaycastHit> raycastHits, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_RaycastNonAlloc addr 0x2bd2870 size 0x78 virtual false final false
static int32_t Internal_RaycastNonAlloc(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, ::ArrayW<UnityEngine::RaycastHit> raycastHits, float_t maxDistance, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Query_CapsuleCast addr 0x2bd2964 size 0xb0 virtual false final false
static bool Query_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float_t radius, UnityEngine::Vector3 direction, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_CapsuleCast addr 0x2bd2ab0 size 0x14c virtual false final false
static bool Internal_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method CapsuleCast addr 0x2bcf7b8 size 0x20 virtual false final false
 bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Query_SphereCast addr 0x2bd2bfc size 0x9c virtual false final false
static bool Query_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_SphereCast addr 0x2bd2d24 size 0x12c virtual false final false
static bool Internal_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method SphereCast addr 0x2bcf8c4 size 0x8 virtual false final false
 bool SphereCast(UnityEngine::Vector3 origin, float_t radius, UnityEngine::Vector3 direction, ByRef<UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method OverlapBoxNonAlloc_Internal addr 0x2bd2e50 size 0x8c virtual false final false
static int32_t OverlapBoxNonAlloc_Internal(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::ArrayW<UnityEngine::Collider> results, UnityEngine::Quaternion orientation, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method OverlapBox addr 0x2bd0cac size 0x1c virtual false final false
 int32_t OverlapBox(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::ArrayW<UnityEngine::Collider> results, UnityEngine::Quaternion orientation, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_RaycastTest_Injected addr 0x2bd270c size 0x6c virtual false final false
static bool Internal_RaycastTest_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Ray> ray, float_t maxDistance, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_Raycast_Injected addr 0x2bd27f4 size 0x7c virtual false final false
static bool Internal_Raycast_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Ray> ray, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hit, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Internal_RaycastNonAlloc_Injected addr 0x2bd28e8 size 0x7c virtual false final false
static int32_t Internal_RaycastNonAlloc_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Ray> ray, ::ArrayW<UnityEngine::RaycastHit> raycastHits, float_t maxDistance, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Query_CapsuleCast_Injected addr 0x2bd2a14 size 0x9c virtual false final false
static bool Query_CapsuleCast_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Vector3> point1, ByRef<UnityEngine::Vector3> point2, float_t radius, ByRef<UnityEngine::Vector3> direction, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method Query_SphereCast_Injected addr 0x2bd2c98 size 0x8c virtual false final false
static bool Query_SphereCast_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Vector3> origin, float_t radius, ByRef<UnityEngine::Vector3> direction, float_t maxDistance, ByRef<UnityEngine::RaycastHit> hitInfo, int32_t layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

/// @brief Method OverlapBoxNonAlloc_Internal_Injected addr 0x2bd2edc size 0x84 virtual false final false
static int32_t OverlapBoxNonAlloc_Internal_Injected(ByRef<UnityEngine::PhysicsScene> physicsScene, ByRef<UnityEngine::Vector3> center, ByRef<UnityEngine::Vector3> halfExtents, ::ArrayW<UnityEngine::Collider> results, ByRef<UnityEngine::Quaternion> orientation, int32_t mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PhysicsScene, "UnityEngine", "PhysicsScene");
