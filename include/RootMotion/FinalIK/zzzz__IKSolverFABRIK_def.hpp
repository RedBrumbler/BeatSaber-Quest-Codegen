#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverHeuristic_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class RootMotion__FinalIK__IKSolver__IterationDelegate;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverFABRIK;
}
// Type: RootMotion.FinalIK::IKSolverFABRIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12535))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12529))
// CS Name: RootMotion.FinalIK.IKSolverFABRIK
class CORDL_TYPE IKSolverFABRIK : public RootMotion::FinalIK::IKSolverHeuristic {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~IKSolverFABRIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverFABRIK", modifiers: " const&", def_value: None }]
constexpr IKSolverFABRIK(IKSolverFABRIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IKSolverFABRIK", modifiers: "&&", def_value: None }]
constexpr IKSolverFABRIK(IKSolverFABRIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IKSolverFABRIK(void* ptr) noexcept : RootMotion::FinalIK::IKSolverHeuristic(ptr) {
}


  constexpr IKSolverFABRIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IKSolverFABRIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IKSolverFABRIK& operator=(IKSolverFABRIK&& o) noexcept = default;
  constexpr IKSolverFABRIK& operator=(IKSolverFABRIK const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate __declspec(property(get=__get_OnPreIteration, put=__set_OnPreIteration))  OnPreIteration;

constexpr void __set_OnPreIteration(RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate value) ;

constexpr RootMotion::FinalIK::RootMotion__FinalIK__IKSolver__IterationDelegate __get_OnPreIteration() const;

 ::ArrayW<bool> __declspec(property(get=__get_limitedBones, put=__set_limitedBones))  limitedBones;

constexpr void __set_limitedBones(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get_limitedBones() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_solverLocalPositions, put=__set_solverLocalPositions))  solverLocalPositions;

constexpr void __set_solverLocalPositions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_solverLocalPositions() const;


// Properties

 bool __declspec(property(get=get_boneLengthCanBeZero))  boneLengthCanBeZero;


// Methods

/// @brief Method SolveForward addr 0x11e4bb0 size 0xd8 virtual false final false
 void SolveForward(UnityEngine::Vector3 position) ;

/// @brief Method SolveBackward addr 0x11e5190 size 0xd8 virtual false final false
 void SolveBackward(UnityEngine::Vector3 position) ;

/// @brief Method GetIKPosition addr 0x11e52c0 size 0x88 virtual true final false
 UnityEngine::Vector3 GetIKPosition() ;

/// @brief Method OnInitiate addr 0x11e5348 size 0x270 virtual true final false
 void OnInitiate() ;

/// @brief Method OnUpdate addr 0x11e5840 size 0x2f0 virtual true final false
 void OnUpdate() ;

/// @brief Method get_boneLengthCanBeZero addr 0x11e5b78 size 0x8 virtual true final false
 bool get_boneLengthCanBeZero() ;

/// @brief Method SolveJoint addr 0x11e5b80 size 0x11c virtual false final false
 UnityEngine::Vector3 SolveJoint(UnityEngine::Vector3 pos1, UnityEngine::Vector3 pos2, float_t length) ;

/// @brief Method OnPreSolve addr 0x11e4c88 size 0x39c virtual false final false
 void OnPreSolve() ;

/// @brief Method OnPostSolve addr 0x11e5278 size 0x48 virtual false final false
 void OnPostSolve() ;

/// @brief Method Solve addr 0x11e5b30 size 0x48 virtual false final false
 void Solve(UnityEngine::Vector3 targetPosition) ;

/// @brief Method ForwardReach addr 0x11e5024 size 0x16c virtual false final false
 void ForwardReach(UnityEngine::Vector3 position) ;

/// @brief Method SolverMove addr 0x11e622c size 0x68 virtual false final false
 void SolverMove(int32_t index, UnityEngine::Vector3 offset) ;

/// @brief Method SolverRotate addr 0x11e6294 size 0xd0 virtual false final false
 void SolverRotate(int32_t index, UnityEngine::Quaternion rotation, bool recursive) ;

/// @brief Method SolverRotateChildren addr 0x11e6364 size 0xc8 virtual false final false
 void SolverRotateChildren(int32_t index, UnityEngine::Quaternion rotation) ;

/// @brief Method SolverMoveChildrenAroundPoint addr 0x11e642c size 0xf0 virtual false final false
 void SolverMoveChildrenAroundPoint(int32_t index, UnityEngine::Quaternion rotation) ;

/// @brief Method GetParentSolverRotation addr 0x11e55b8 size 0x144 virtual false final false
 UnityEngine::Quaternion GetParentSolverRotation(int32_t index) ;

/// @brief Method GetParentSolverPosition addr 0x11e56fc size 0x144 virtual false final false
 UnityEngine::Vector3 GetParentSolverPosition(int32_t index) ;

/// @brief Method GetLimitedRotation addr 0x11e651c size 0x1c0 virtual false final false
 UnityEngine::Quaternion GetLimitedRotation(int32_t index, UnityEngine::Quaternion q, ByRef<bool> changed) ;

/// @brief Method LimitForward addr 0x11e5e1c size 0x410 virtual false final false
 void LimitForward(int32_t rotateBone, int32_t limitBone) ;

/// @brief Method BackwardReach addr 0x11e5268 size 0x10 virtual false final false
 void BackwardReach(UnityEngine::Vector3 position) ;

/// @brief Method BackwardReachUnlimited addr 0x11e6b8c size 0xb8 virtual false final false
 void BackwardReachUnlimited(UnityEngine::Vector3 position) ;

/// @brief Method BackwardReachLimited addr 0x11e66dc size 0x4b0 virtual false final false
 void BackwardReachLimited(UnityEngine::Vector3 position) ;

/// @brief Method MapToSolverPositions addr 0x11e5c9c size 0xd0 virtual false final false
 void MapToSolverPositions() ;

/// @brief Method MapToSolverPositionsLimited addr 0x11e5d6c size 0xb0 virtual false final false
 void MapToSolverPositionsLimited() ;

// Ctor Parameters []
explicit IKSolverFABRIK() ;

/// @brief Method .ctor addr 0x11e6c44 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::IKSolverFABRIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::IKSolverFABRIK, "RootMotion.FinalIK", "IKSolverFABRIK");
