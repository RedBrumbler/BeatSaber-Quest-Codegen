#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolverVR__Arm;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__Point;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverArm;
}
// Type: RootMotion.FinalIK::IKSolverArm
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12525))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12527))
// CS Name: RootMotion.FinalIK.IKSolverArm
class CORDL_TYPE IKSolverArm : public RootMotion::FinalIK::IKSolver {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~IKSolverArm() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverArm", modifiers: " const&", def_value: None }]
constexpr IKSolverArm(IKSolverArm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverArm", modifiers: "&&", def_value: None }]
constexpr IKSolverArm(IKSolverArm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverArm(void* ptr) noexcept : RootMotion::FinalIK::IKSolver(ptr) {
}


  constexpr IKSolverArm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverArm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverArm& operator=(IKSolverArm&& o) noexcept = default;
  constexpr IKSolverArm& operator=(IKSolverArm const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_IKRotationWeight, put=__set_IKRotationWeight))  IKRotationWeight;

constexpr void __set_IKRotationWeight(float_t value) ;

constexpr float_t __get_IKRotationWeight() const;

 UnityEngine::Quaternion __declspec(property(get=__get_IKRotation, put=__set_IKRotation))  IKRotation;

constexpr void __set_IKRotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_IKRotation() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __declspec(property(get=__get_chest, put=__set_chest))  chest;

constexpr void __set_chest(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __get_chest() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __declspec(property(get=__get_shoulder, put=__set_shoulder))  shoulder;

constexpr void __set_shoulder(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __get_shoulder() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __declspec(property(get=__get_upperArm, put=__set_upperArm))  upperArm;

constexpr void __set_upperArm(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __get_upperArm() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __declspec(property(get=__get_forearm, put=__set_forearm))  forearm;

constexpr void __set_forearm(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __get_forearm() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __declspec(property(get=__get_hand, put=__set_hand))  hand;

constexpr void __set_hand(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point __get_hand() const;

 bool __declspec(property(get=__get_isLeft, put=__set_isLeft))  isLeft;

constexpr void __set_isLeft(bool value) ;

constexpr bool __get_isLeft() const;

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm __declspec(property(get=__get_arm, put=__set_arm))  arm;

constexpr void __set_arm(RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolverVR__Arm __get_arm() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_positions, put=__set_positions))  positions;

constexpr void __set_positions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_positions() const;

 ::ArrayW<UnityEngine::Quaternion> __declspec(property(get=__get_rotations, put=__set_rotations))  rotations;

constexpr void __set_rotations(::ArrayW<UnityEngine::Quaternion> value) ;

constexpr ::ArrayW<UnityEngine::Quaternion> __get_rotations() const;


// Methods

/// @brief Method IsValid addr 0x11e2b08 size 0x35c virtual true final false
 bool IsValid(ByRef<::StringW> message) ;

/// @brief Method SetChain addr 0x11e2e64 size 0x60 virtual false final false
 bool SetChain(UnityEngine::Transform chest, UnityEngine::Transform shoulder, UnityEngine::Transform upperArm, UnityEngine::Transform forearm, UnityEngine::Transform hand, UnityEngine::Transform root) ;

/// @brief Method GetPoints addr 0x11e2ec4 size 0x144 virtual true final false
 ::ArrayW<RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point> GetPoints() ;

/// @brief Method GetPoint addr 0x11e3008 size 0x160 virtual true final false
 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__Point GetPoint(UnityEngine::Transform transform) ;

/// @brief Method StoreDefaultLocalState addr 0x11e3168 size 0x40 virtual true final false
 void StoreDefaultLocalState() ;

/// @brief Method FixTransforms addr 0x11e31a8 size 0x50 virtual true final false
 void FixTransforms() ;

/// @brief Method OnInitiate addr 0x11e31f8 size 0x58 virtual true final false
 void OnInitiate() ;

/// @brief Method OnUpdate addr 0x11e3558 size 0x20 virtual true final false
 void OnUpdate() ;

/// @brief Method Solve addr 0x11e3578 size 0x60 virtual false final false
 void Solve() ;

/// @brief Method Read addr 0x11e3250 size 0x308 virtual false final false
 void Read() ;

/// @brief Method Write addr 0x11e35d8 size 0x178 virtual false final false
 void Write() ;

// Ctor Parameters []
explicit IKSolverArm() ;

/// @brief Method .ctor addr 0x11e3750 size 0x194 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::IKSolverArm);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverArm, "RootMotion.FinalIK", "IKSolverArm");
