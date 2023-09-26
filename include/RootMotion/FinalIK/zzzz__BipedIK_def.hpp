#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/zzzz__SolverManager_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace RootMotion {
class BipedReferences;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class BipedIKSolvers;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class BipedIK;
}
// Type: RootMotion.FinalIK::BipedIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12460))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12467))
// CS Name: RootMotion.FinalIK.BipedIK
class CORDL_TYPE BipedIK : public RootMotion::SolverManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~BipedIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "BipedIK", modifiers: " const&", def_value: None }]
constexpr BipedIK(BipedIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BipedIK", modifiers: "&&", def_value: None }]
constexpr BipedIK(BipedIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BipedIK(void* ptr) noexcept : RootMotion::SolverManager(ptr) {
}


  constexpr BipedIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BipedIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BipedIK& operator=(BipedIK&& o) noexcept = default;
  constexpr BipedIK& operator=(BipedIK const& o) noexcept = default;
                


// Fields

 RootMotion::BipedReferences __declspec(property(get=__get_references, put=__set_references))  references;

constexpr void __set_references(RootMotion::BipedReferences value) ;

constexpr RootMotion::BipedReferences __get_references() const;

 RootMotion::FinalIK::BipedIKSolvers __declspec(property(get=__get_solvers, put=__set_solvers))  solvers;

constexpr void __set_solvers(RootMotion::FinalIK::BipedIKSolvers value) ;

constexpr RootMotion::FinalIK::BipedIKSolvers __get_solvers() const;


// Methods

/// @brief Method OpenUserManual addr 0x11c3fa4 size 0x44 virtual false final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11c3fe8 size 0x44 virtual false final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x11c402c size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11c4070 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method GetIKPositionWeight addr 0x11c40b4 size 0x1c virtual false final false
 float_t GetIKPositionWeight(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method GetIKRotationWeight addr 0x11c414c size 0x1c virtual false final false
 float_t GetIKRotationWeight(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method SetIKPositionWeight addr 0x11c4168 size 0x2c virtual false final false
 void SetIKPositionWeight(UnityEngine::AvatarIKGoal goal, float_t weight) ;

/// @brief Method SetIKRotationWeight addr 0x11c4194 size 0x2c virtual false final false
 void SetIKRotationWeight(UnityEngine::AvatarIKGoal goal, float_t weight) ;

/// @brief Method SetIKPosition addr 0x11c41c0 size 0x3c virtual false final false
 void SetIKPosition(UnityEngine::AvatarIKGoal goal, UnityEngine::Vector3 IKPosition) ;

/// @brief Method SetIKRotation addr 0x11c41fc size 0x40 virtual false final false
 void SetIKRotation(UnityEngine::AvatarIKGoal goal, UnityEngine::Quaternion IKRotation) ;

/// @brief Method GetIKPosition addr 0x11c423c size 0x20 virtual false final false
 UnityEngine::Vector3 GetIKPosition(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method GetIKRotation addr 0x11c425c size 0x20 virtual false final false
 UnityEngine::Quaternion GetIKRotation(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method SetLookAtWeight addr 0x11c427c size 0x24 virtual false final false
 void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight, float_t clampWeightHead, float_t clampWeightEyes) ;

/// @brief Method SetLookAtPosition addr 0x11c42a0 size 0x28 virtual false final false
 void SetLookAtPosition(UnityEngine::Vector3 lookAtPosition) ;

/// @brief Method SetSpinePosition addr 0x11c42c8 size 0x28 virtual false final false
 void SetSpinePosition(UnityEngine::Vector3 spinePosition) ;

/// @brief Method SetSpineWeight addr 0x11c42f0 size 0x24 virtual false final false
 void SetSpineWeight(float_t weight) ;

/// @brief Method GetGoalIK addr 0x11c40d0 size 0x7c virtual false final false
 RootMotion::FinalIK::IKSolverLimb GetGoalIK(UnityEngine::AvatarIKGoal goal) ;

/// @brief Method InitiateBipedIK addr 0x11c4314 size 0xc virtual false final false
 void InitiateBipedIK() ;

/// @brief Method UpdateBipedIK addr 0x11c4320 size 0xc virtual false final false
 void UpdateBipedIK() ;

/// @brief Method SetToDefaults addr 0x11c432c size 0x13c virtual false final false
 void SetToDefaults() ;

/// @brief Method FixTransforms addr 0x11c4598 size 0x9c virtual true final false
 void FixTransforms() ;

/// @brief Method InitiateSolver addr 0x11c4634 size 0x1b0 virtual true final false
 void InitiateSolver() ;

/// @brief Method UpdateSolver addr 0x11c4954 size 0x174 virtual true final false
 void UpdateSolver() ;

/// @brief Method LogWarning addr 0x11c4dc0 size 0x24 virtual false final false
 void LogWarning(::StringW message) ;

// Ctor Parameters []
explicit BipedIK() ;

/// @brief Method .ctor addr 0x11c4de4 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::BipedIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::BipedIK, "RootMotion.FinalIK", "BipedIK");
