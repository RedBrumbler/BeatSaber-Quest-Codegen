#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
namespace GlobalNamespace {
class Vector3TransitionSO;
}
namespace Tweening {
class Vector3Tween;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class BaseTransitionSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ScaleRectTransformViewStateTransition;
}
// Type: ::ScaleRectTransformViewStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5550), inst: 897 }), TypeDefinitionIndex(TypeDefinitionIndex(5550)), TypeDefinitionIndex(TypeDefinitionIndex(10241))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5562))
// CS Name: ScaleRectTransformViewStateTransition
class CORDL_TYPE ScaleRectTransformViewStateTransition : public GlobalNamespace::BaseStateTransition_1<UnityEngine::RectTransform> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ScaleRectTransformViewStateTransition() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScaleRectTransformViewStateTransition", modifiers: " const&", def_value: None }]
constexpr ScaleRectTransformViewStateTransition(ScaleRectTransformViewStateTransition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScaleRectTransformViewStateTransition", modifiers: "&&", def_value: None }]
constexpr ScaleRectTransformViewStateTransition(ScaleRectTransformViewStateTransition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScaleRectTransformViewStateTransition(void* ptr) noexcept : GlobalNamespace::BaseStateTransition_1<UnityEngine::RectTransform>(ptr) {
}


  constexpr ScaleRectTransformViewStateTransition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScaleRectTransformViewStateTransition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScaleRectTransformViewStateTransition& operator=(ScaleRectTransformViewStateTransition&& o) noexcept = default;
  constexpr ScaleRectTransformViewStateTransition& operator=(ScaleRectTransformViewStateTransition const& o) noexcept = default;
                


// Fields

 GlobalNamespace::Vector3TransitionSO __declspec(property(get=__get__transition, put=__set__transition))  _transition;

constexpr void __set__transition(GlobalNamespace::Vector3TransitionSO value) ;

constexpr GlobalNamespace::Vector3TransitionSO __get__transition() const;

 Tweening::Vector3Tween __declspec(property(get=__get__vectorTween, put=__set__vectorTween))  _vectorTween;

constexpr void __set__vectorTween(Tweening::Vector3Tween value) ;

constexpr Tweening::Vector3Tween __get__vectorTween() const;


// Properties

 GlobalNamespace::BaseTransitionSO __declspec(property(get=get_transition))  transition;


// Methods

/// @brief Method get_transition addr 0x2162c14 size 0x8 virtual true final false
 GlobalNamespace::BaseTransitionSO get_transition() ;

/// @brief Method TransitionToNormalState addr 0x2162c1c size 0x20 virtual true final false
 void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x2162e64 size 0x20 virtual true final false
 void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x2162e84 size 0x20 virtual true final false
 void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x2162ea4 size 0x20 virtual true final false
 void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x2162ec4 size 0x20 virtual true final false
 void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x2162ee4 size 0x20 virtual true final false
 void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x2162f04 size 0x2c virtual true final false
 void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x2162f30 size 0x2c virtual true final false
 void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x2162f5c size 0x2c virtual true final false
 void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x2162f88 size 0x2c virtual true final false
 void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x2162fb4 size 0x2c virtual true final false
 void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x2162fe0 size 0x2c virtual true final false
 void SetSelectedAndHighlightedState() ;

/// @brief Method StartTween addr 0x2162c3c size 0x228 virtual false final false
 void StartTween(UnityEngine::Vector3 endScale) ;

// Ctor Parameters []
explicit ScaleRectTransformViewStateTransition() ;

/// @brief Method .ctor addr 0x216300c size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method <StartTween>b__16_0 addr 0x2163054 size 0x1c virtual false final false
 void _StartTween_b__16_0(UnityEngine::Vector3 pos) ;

/// @brief Method <StartTween>b__16_1 addr 0x2163070 size 0x88 virtual false final false
 void _StartTween_b__16_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ScaleRectTransformViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScaleRectTransformViewStateTransition, "", "ScaleRectTransformViewStateTransition");
