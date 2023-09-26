#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
namespace Tweening {
class Vector3Tween;
}
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace GlobalNamespace {
class Vector3TransitionSO;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PositionRectTransformViewStateTransition;
}
// Type: ::PositionRectTransformViewStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5550)), TypeDefinitionIndex(TypeDefinitionIndex(10241)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5550), inst: 897 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5561))
// CS Name: PositionRectTransformViewStateTransition
class CORDL_TYPE PositionRectTransformViewStateTransition : public GlobalNamespace::BaseStateTransition_1<UnityEngine::RectTransform> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PositionRectTransformViewStateTransition() = default;

// Ctor Parameters [CppParam { name: "", ty: "PositionRectTransformViewStateTransition", modifiers: " const&", def_value: None }]
constexpr PositionRectTransformViewStateTransition(PositionRectTransformViewStateTransition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PositionRectTransformViewStateTransition", modifiers: "&&", def_value: None }]
constexpr PositionRectTransformViewStateTransition(PositionRectTransformViewStateTransition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PositionRectTransformViewStateTransition(void* ptr) noexcept : GlobalNamespace::BaseStateTransition_1<UnityEngine::RectTransform>(ptr) {
}


  constexpr PositionRectTransformViewStateTransition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PositionRectTransformViewStateTransition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PositionRectTransformViewStateTransition& operator=(PositionRectTransformViewStateTransition&& o) noexcept = default;
  constexpr PositionRectTransformViewStateTransition& operator=(PositionRectTransformViewStateTransition const& o) noexcept = default;
                


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

/// @brief Method get_transition addr 0x2161768 size 0x8 virtual true final false
 GlobalNamespace::BaseTransitionSO get_transition() ;

/// @brief Method TransitionToNormalState addr 0x2161770 size 0x20 virtual true final false
 void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x2161998 size 0x20 virtual true final false
 void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x21619b8 size 0x20 virtual true final false
 void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x21619d8 size 0x20 virtual true final false
 void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x21619f8 size 0x20 virtual true final false
 void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x2161a18 size 0x20 virtual true final false
 void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x2161a38 size 0x28 virtual true final false
 void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x2161a60 size 0x28 virtual true final false
 void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x2161a88 size 0x28 virtual true final false
 void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x2161ab0 size 0x28 virtual true final false
 void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x2161ad8 size 0x28 virtual true final false
 void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x2161b00 size 0x28 virtual true final false
 void SetSelectedAndHighlightedState() ;

/// @brief Method StartTween addr 0x2161790 size 0x208 virtual false final false
 void StartTween(UnityEngine::Vector3 endPosition) ;

// Ctor Parameters []
explicit PositionRectTransformViewStateTransition() ;

/// @brief Method .ctor addr 0x2161b28 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method <StartTween>b__16_0 addr 0x2161b70 size 0x1c virtual false final false
 void _StartTween_b__16_0(UnityEngine::Vector3 pos) ;

/// @brief Method <StartTween>b__16_1 addr 0x2161b8c size 0x1088 virtual false final false
 void _StartTween_b__16_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PositionRectTransformViewStateTransition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PositionRectTransformViewStateTransition, "", "PositionRectTransformViewStateTransition");
