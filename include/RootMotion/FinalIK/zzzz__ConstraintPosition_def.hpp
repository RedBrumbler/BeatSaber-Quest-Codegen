#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__Constraint_def.hpp"
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class ConstraintPosition;
}
// Type: RootMotion.FinalIK::ConstraintPosition
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12469))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12470))
// CS Name: RootMotion.FinalIK.ConstraintPosition
class CORDL_TYPE ConstraintPosition : public RootMotion::FinalIK::Constraint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ConstraintPosition() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstraintPosition", modifiers: " const&", def_value: None }]
constexpr ConstraintPosition(ConstraintPosition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstraintPosition", modifiers: "&&", def_value: None }]
constexpr ConstraintPosition(ConstraintPosition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstraintPosition(void* ptr) noexcept : RootMotion::FinalIK::Constraint(ptr) {
}


  constexpr ConstraintPosition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstraintPosition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstraintPosition& operator=(ConstraintPosition&& o) noexcept = default;
  constexpr ConstraintPosition& operator=(ConstraintPosition const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_position, put=__set_position))  position;

constexpr void __set_position(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_position() const;


// Methods

/// @brief Method UpdateConstraint addr 0x11c522c size 0x98 virtual true final false
 void UpdateConstraint() ;

// Ctor Parameters []
explicit ConstraintPosition() ;

/// @brief Method .ctor addr 0x11c52c4 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "transform", ty: "UnityEngine::Transform", modifiers: "", def_value: None }]
explicit ConstraintPosition(UnityEngine::Transform transform) ;

/// @brief Method .ctor addr 0x11c52cc size 0x28 virtual false final false
 void _ctor(UnityEngine::Transform transform) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::ConstraintPosition);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::ConstraintPosition, "RootMotion.FinalIK", "ConstraintPosition");
