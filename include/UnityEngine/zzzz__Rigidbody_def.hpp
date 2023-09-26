#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace UnityEngine {
struct CollisionDetectionMode;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct ForceMode;
}
// Forward declare root types
namespace UnityEngine {
class Rigidbody;
}
// Type: UnityEngine::Rigidbody
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10198))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15485))
// CS Name: UnityEngine.Rigidbody
class CORDL_TYPE Rigidbody : public UnityEngine::Component {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Rigidbody() = default;

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: " const&", def_value: None }]
constexpr Rigidbody(Rigidbody const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "&&", def_value: None }]
constexpr Rigidbody(Rigidbody&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Rigidbody(void* ptr) noexcept : UnityEngine::Component(ptr) {
}


  constexpr Rigidbody& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Rigidbody& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Rigidbody& operator=(Rigidbody&& o) noexcept = default;
  constexpr Rigidbody& operator=(Rigidbody const& o) noexcept = default;
                


// Properties

 UnityEngine::Vector3 __declspec(property(put=set_velocity))  velocity;

 UnityEngine::Vector3 __declspec(property(put=set_angularVelocity))  angularVelocity;

 float_t __declspec(property(put=set_mass))  mass;

 bool __declspec(property(put=set_useGravity))  useGravity;

 bool __declspec(property(get=get_isKinematic, put=set_isKinematic))  isKinematic;

 UnityEngine::CollisionDetectionMode __declspec(property(put=set_collisionDetectionMode))  collisionDetectionMode;

 UnityEngine::Vector3 __declspec(property(get=get_worldCenterOfMass))  worldCenterOfMass;

 UnityEngine::Vector3 __declspec(property(get=get_position, put=set_position))  position;

 UnityEngine::Quaternion __declspec(property(put=set_rotation))  rotation;

 float_t __declspec(property(get=get_maxAngularVelocity))  maxAngularVelocity;


// Methods

/// @brief Method set_velocity addr 0x2bd0dc4 size 0x54 virtual false final false
 void set_velocity(UnityEngine::Vector3 value) ;

/// @brief Method set_angularVelocity addr 0x2bd0e5c size 0x54 virtual false final false
 void set_angularVelocity(UnityEngine::Vector3 value) ;

/// @brief Method set_mass addr 0x2bd0ef4 size 0x4c virtual false final false
 void set_mass(float_t value) ;

/// @brief Method set_useGravity addr 0x2bd0f40 size 0x44 virtual false final false
 void set_useGravity(bool value) ;

/// @brief Method get_isKinematic addr 0x2bd0f84 size 0x3c virtual false final false
 bool get_isKinematic() ;

/// @brief Method set_isKinematic addr 0x2bd0fc0 size 0x44 virtual false final false
 void set_isKinematic(bool value) ;

/// @brief Method set_collisionDetectionMode addr 0x2bd1004 size 0x44 virtual false final false
 void set_collisionDetectionMode(UnityEngine::CollisionDetectionMode value) ;

/// @brief Method get_worldCenterOfMass addr 0x2bd1048 size 0x5c virtual false final false
 UnityEngine::Vector3 get_worldCenterOfMass() ;

/// @brief Method get_position addr 0x2bd10e8 size 0x5c virtual false final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method set_position addr 0x2bd1188 size 0x54 virtual false final false
 void set_position(UnityEngine::Vector3 value) ;

/// @brief Method set_rotation addr 0x2bd1220 size 0x54 virtual false final false
 void set_rotation(UnityEngine::Quaternion value) ;

/// @brief Method get_maxAngularVelocity addr 0x2bd12b8 size 0x3c virtual false final false
 float_t get_maxAngularVelocity() ;

/// @brief Method MovePosition addr 0x2bd12f4 size 0x54 virtual false final false
 void MovePosition(UnityEngine::Vector3 position) ;

/// @brief Method MoveRotation addr 0x2bd138c size 0x54 virtual false final false
 void MoveRotation(UnityEngine::Quaternion rot) ;

/// @brief Method WakeUp addr 0x2bd1424 size 0x3c virtual false final false
 void WakeUp() ;

/// @brief Method AddForce addr 0x2bd1460 size 0x5c virtual false final false
 void AddForce(UnityEngine::Vector3 force, UnityEngine::ForceMode mode) ;

/// @brief Method AddForceAtPosition addr 0x2bd1510 size 0x68 virtual false final false
 void AddForceAtPosition(UnityEngine::Vector3 force, UnityEngine::Vector3 position, UnityEngine::ForceMode mode) ;

/// @brief Method AddForceAtPosition addr 0x2bd15d4 size 0x8 virtual false final false
 void AddForceAtPosition(UnityEngine::Vector3 force, UnityEngine::Vector3 position) ;

// Ctor Parameters []
explicit Rigidbody() ;

/// @brief Method .ctor addr 0x2bd15dc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method set_velocity_Injected addr 0x2bd0e18 size 0x44 virtual false final false
 void set_velocity_Injected(ByRef<UnityEngine::Vector3> value) ;

/// @brief Method set_angularVelocity_Injected addr 0x2bd0eb0 size 0x44 virtual false final false
 void set_angularVelocity_Injected(ByRef<UnityEngine::Vector3> value) ;

/// @brief Method get_worldCenterOfMass_Injected addr 0x2bd10a4 size 0x44 virtual false final false
 void get_worldCenterOfMass_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method get_position_Injected addr 0x2bd1144 size 0x44 virtual false final false
 void get_position_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method set_position_Injected addr 0x2bd11dc size 0x44 virtual false final false
 void set_position_Injected(ByRef<UnityEngine::Vector3> value) ;

/// @brief Method set_rotation_Injected addr 0x2bd1274 size 0x44 virtual false final false
 void set_rotation_Injected(ByRef<UnityEngine::Quaternion> value) ;

/// @brief Method MovePosition_Injected addr 0x2bd1348 size 0x44 virtual false final false
 void MovePosition_Injected(ByRef<UnityEngine::Vector3> position) ;

/// @brief Method MoveRotation_Injected addr 0x2bd13e0 size 0x44 virtual false final false
 void MoveRotation_Injected(ByRef<UnityEngine::Quaternion> rot) ;

/// @brief Method AddForce_Injected addr 0x2bd14bc size 0x54 virtual false final false
 void AddForce_Injected(ByRef<UnityEngine::Vector3> force, UnityEngine::ForceMode mode) ;

/// @brief Method AddForceAtPosition_Injected addr 0x2bd1578 size 0x5c virtual false final false
 void AddForceAtPosition_Injected(ByRef<UnityEngine::Vector3> force, ByRef<UnityEngine::Vector3> position, UnityEngine::ForceMode mode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Rigidbody);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rigidbody, "UnityEngine", "Rigidbody");
