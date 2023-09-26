#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace RootMotion::FinalIK {
class IKSolver;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class LimbIK;
}
// Type: RootMotion.FinalIK::LimbIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12497))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12500))
// CS Name: RootMotion.FinalIK.LimbIK
class CORDL_TYPE LimbIK : public RootMotion::FinalIK::IK {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LimbIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "LimbIK", modifiers: " const&", def_value: None }]
constexpr LimbIK(LimbIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LimbIK", modifiers: "&&", def_value: None }]
constexpr LimbIK(LimbIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LimbIK(void* ptr) noexcept : RootMotion::FinalIK::IK(ptr) {
}


  constexpr LimbIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LimbIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LimbIK& operator=(LimbIK&& o) noexcept = default;
  constexpr LimbIK& operator=(LimbIK const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::IKSolverLimb __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(RootMotion::FinalIK::IKSolverLimb value) ;

constexpr RootMotion::FinalIK::IKSolverLimb __get_solver() const;


// Methods

/// @brief Method OpenUserManual addr 0x11d214c size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11d2190 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x11d21d4 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11d2218 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method GetIKSolver addr 0x11d225c size 0x8 virtual true final false
 RootMotion::FinalIK::IKSolver GetIKSolver() ;

// Ctor Parameters []
explicit LimbIK() ;

/// @brief Method .ctor addr 0x11d2264 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::LimbIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::LimbIK, "RootMotion.FinalIK", "LimbIK");
