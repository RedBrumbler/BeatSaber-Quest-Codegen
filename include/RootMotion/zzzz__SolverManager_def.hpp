#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace RootMotion {
class SolverManager;
}
// Type: RootMotion::SolverManager
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12460))
// CS Name: RootMotion.SolverManager
class CORDL_TYPE SolverManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~SolverManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "SolverManager", modifiers: " const&", def_value: None }]
constexpr SolverManager(SolverManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SolverManager", modifiers: "&&", def_value: None }]
constexpr SolverManager(SolverManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SolverManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SolverManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SolverManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SolverManager& operator=(SolverManager&& o) noexcept = default;
  constexpr SolverManager& operator=(SolverManager const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_fixTransforms, put=__set_fixTransforms))  fixTransforms;

constexpr void __set_fixTransforms(bool value) ;

constexpr bool __get_fixTransforms() const;

 UnityEngine::Animator __declspec(property(get=__get_animator, put=__set_animator))  animator;

constexpr void __set_animator(UnityEngine::Animator value) ;

constexpr UnityEngine::Animator __get_animator() const;

 UnityEngine::Animation __declspec(property(get=__get_legacy, put=__set_legacy))  legacy;

constexpr void __set_legacy(UnityEngine::Animation value) ;

constexpr UnityEngine::Animation __get_legacy() const;

 bool __declspec(property(get=__get_updateFrame, put=__set_updateFrame))  updateFrame;

constexpr void __set_updateFrame(bool value) ;

constexpr bool __get_updateFrame() const;

 bool __declspec(property(get=__get_componentInitiated, put=__set_componentInitiated))  componentInitiated;

constexpr void __set_componentInitiated(bool value) ;

constexpr bool __get_componentInitiated() const;

 bool __declspec(property(get=__get_skipSolverUpdate, put=__set_skipSolverUpdate))  skipSolverUpdate;

constexpr void __set_skipSolverUpdate(bool value) ;

constexpr bool __get_skipSolverUpdate() const;


// Properties

 bool __declspec(property(get=get_animatePhysics))  animatePhysics;

 bool __declspec(property(get=get_isAnimated))  isAnimated;


// Methods

/// @brief Method Disable addr 0x11c1de0 size 0x94 virtual false final false
 void Disable() ;

/// @brief Method InitiateSolver addr 0x11c1e74 size 0x4 virtual true final false
 void InitiateSolver() ;

/// @brief Method UpdateSolver addr 0x11c1e78 size 0x4 virtual true final false
 void UpdateSolver() ;

/// @brief Method FixTransforms addr 0x11c1e7c size 0x4 virtual true final false
 void FixTransforms() ;

/// @brief Method OnDisable addr 0x11c1e80 size 0x28 virtual false final false
 void OnDisable() ;

/// @brief Method Start addr 0x11c1ef8 size 0x4 virtual false final false
 void Start() ;

/// @brief Method get_animatePhysics addr 0x11c1efc size 0xcc virtual false final false
 bool get_animatePhysics() ;

/// @brief Method Initiate addr 0x11c1ea8 size 0x50 virtual false final false
 void Initiate() ;

/// @brief Method Update addr 0x11c2180 size 0x3c virtual false final false
 void Update() ;

/// @brief Method FindAnimatorRecursive addr 0x11c1fc8 size 0x1b8 virtual false final false
 void FindAnimatorRecursive(UnityEngine::Transform t, bool findInChildren) ;

/// @brief Method get_isAnimated addr 0x11c21bc size 0x98 virtual false final false
 bool get_isAnimated() ;

/// @brief Method FixedUpdate addr 0x11c2254 size 0x4c virtual false final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x11c22a0 size 0x4c virtual false final false
 void LateUpdate() ;

/// @brief Method UpdateSolverExternal addr 0x11c22ec size 0x38 virtual false final false
 void UpdateSolverExternal() ;

// Ctor Parameters []
explicit SolverManager() ;

/// @brief Method .ctor addr 0x11c2324 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::SolverManager);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::SolverManager, "RootMotion", "SolverManager");
