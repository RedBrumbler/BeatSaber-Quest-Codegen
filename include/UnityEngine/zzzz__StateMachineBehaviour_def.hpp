#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
namespace UnityEngine {
struct AnimatorStateInfo;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine::Animations {
struct AnimatorControllerPlayable;
}
// Forward declare root types
namespace UnityEngine {
class StateMachineBehaviour;
}
// Type: UnityEngine::StateMachineBehaviour
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15078))
// CS Name: UnityEngine.StateMachineBehaviour
class CORDL_TYPE StateMachineBehaviour : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~StateMachineBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "StateMachineBehaviour", modifiers: " const&", def_value: None }]
constexpr StateMachineBehaviour(StateMachineBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StateMachineBehaviour", modifiers: "&&", def_value: None }]
constexpr StateMachineBehaviour(StateMachineBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StateMachineBehaviour(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr StateMachineBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StateMachineBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StateMachineBehaviour& operator=(StateMachineBehaviour&& o) noexcept = default;
  constexpr StateMachineBehaviour& operator=(StateMachineBehaviour const& o) noexcept = default;
                


// Methods

/// @brief Method OnStateEnter addr 0x2b52f9c size 0x4 virtual true final false
 void OnStateEnter(UnityEngine::Animator animator, UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex) ;

/// @brief Method OnStateUpdate addr 0x2b52fa0 size 0x4 virtual true final false
 void OnStateUpdate(UnityEngine::Animator animator, UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex) ;

/// @brief Method OnStateExit addr 0x2b52fa4 size 0x4 virtual true final false
 void OnStateExit(UnityEngine::Animator animator, UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex) ;

/// @brief Method OnStateMove addr 0x2b52fa8 size 0x4 virtual true final false
 void OnStateMove(UnityEngine::Animator animator, UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex) ;

/// @brief Method OnStateIK addr 0x2b52fac size 0x4 virtual true final false
 void OnStateIK(UnityEngine::Animator animator, UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex) ;

/// @brief Method OnStateMachineEnter addr 0x2b52fb0 size 0x4 virtual true final false
 void OnStateMachineEnter(UnityEngine::Animator animator, int32_t stateMachinePathHash) ;

/// @brief Method OnStateMachineExit addr 0x2b52fb4 size 0x4 virtual true final false
 void OnStateMachineExit(UnityEngine::Animator animator, int32_t stateMachinePathHash) ;

/// @brief Method OnStateEnter addr 0x2b52fb8 size 0x4 virtual true final false
 void OnStateEnter(UnityEngine::Animator animator, UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine::Animations::AnimatorControllerPlayable controller) ;

/// @brief Method OnStateUpdate addr 0x2b52fbc size 0x4 virtual true final false
 void OnStateUpdate(UnityEngine::Animator animator, UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine::Animations::AnimatorControllerPlayable controller) ;

/// @brief Method OnStateExit addr 0x2b52fc0 size 0x4 virtual true final false
 void OnStateExit(UnityEngine::Animator animator, UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine::Animations::AnimatorControllerPlayable controller) ;

/// @brief Method OnStateMove addr 0x2b52fc4 size 0x4 virtual true final false
 void OnStateMove(UnityEngine::Animator animator, UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine::Animations::AnimatorControllerPlayable controller) ;

/// @brief Method OnStateIK addr 0x2b52fc8 size 0x4 virtual true final false
 void OnStateIK(UnityEngine::Animator animator, UnityEngine::AnimatorStateInfo stateInfo, int32_t layerIndex, UnityEngine::Animations::AnimatorControllerPlayable controller) ;

/// @brief Method OnStateMachineEnter addr 0x2b52fcc size 0x4 virtual true final false
 void OnStateMachineEnter(UnityEngine::Animator animator, int32_t stateMachinePathHash, UnityEngine::Animations::AnimatorControllerPlayable controller) ;

/// @brief Method OnStateMachineExit addr 0x2b52fd0 size 0x4 virtual true final false
 void OnStateMachineExit(UnityEngine::Animator animator, int32_t stateMachinePathHash, UnityEngine::Animations::AnimatorControllerPlayable controller) ;

// Ctor Parameters []
explicit StateMachineBehaviour() ;

/// @brief Method .ctor addr 0x2b52fd4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::StateMachineBehaviour);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::StateMachineBehaviour, "UnityEngine", "StateMachineBehaviour");
