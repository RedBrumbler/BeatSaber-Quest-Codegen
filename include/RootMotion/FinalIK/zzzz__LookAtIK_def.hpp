#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "RootMotion/FinalIK/zzzz__IK_def.hpp"
namespace RootMotion::FinalIK {
class IKSolver;
}
namespace RootMotion::FinalIK {
class IKSolverLookAt;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class LookAtIK;
}
// Type: RootMotion.FinalIK::LookAtIK
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12497))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12501))
// CS Name: RootMotion.FinalIK.LookAtIK
class CORDL_TYPE LookAtIK : public RootMotion::FinalIK::IK {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LookAtIK() = default;

// Ctor Parameters [CppParam { name: "", ty: "LookAtIK", modifiers: " const&", def_value: None }]
constexpr LookAtIK(LookAtIK const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LookAtIK", modifiers: "&&", def_value: None }]
constexpr LookAtIK(LookAtIK&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LookAtIK(void* ptr) noexcept : RootMotion::FinalIK::IK(ptr) {
}


  constexpr LookAtIK& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LookAtIK& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LookAtIK& operator=(LookAtIK&& o) noexcept = default;
  constexpr LookAtIK& operator=(LookAtIK const& o) noexcept = default;
                


// Fields

 RootMotion::FinalIK::IKSolverLookAt __declspec(property(get=__get_solver, put=__set_solver))  solver;

constexpr void __set_solver(RootMotion::FinalIK::IKSolverLookAt value) ;

constexpr RootMotion::FinalIK::IKSolverLookAt __get_solver() const;


// Methods

/// @brief Method OpenUserManual addr 0x11d22cc size 0x44 virtual true final false
 void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x11d2310 size 0x44 virtual true final false
 void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x11d2354 size 0x44 virtual false final false
 void SupportGroup() ;

/// @brief Method ASThread addr 0x11d2398 size 0x44 virtual false final false
 void ASThread() ;

/// @brief Method GetIKSolver addr 0x11d23dc size 0x8 virtual true final false
 RootMotion::FinalIK::IKSolver GetIKSolver() ;

// Ctor Parameters []
explicit LookAtIK() ;

/// @brief Method .ctor addr 0x11d23e4 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion::FinalIK
NEED_NO_BOX(RootMotion::FinalIK::LookAtIK);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::LookAtIK, "RootMotion.FinalIK", "LookAtIK");
