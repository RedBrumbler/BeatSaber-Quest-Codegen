#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
namespace GlobalNamespace {
class ColorTransitionSO;
}
namespace GlobalNamespace {
class BaseTransitionSO;
}
namespace Tweening {
class ColorTween;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorGraphicStateTransition;
}
// Type: ::ColorGraphicStateTransition
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5550), inst: 894 }), TypeDefinitionIndex(TypeDefinitionIndex(5550)), TypeDefinitionIndex(TypeDefinitionIndex(13000))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5554))
// CS Name: ColorGraphicStateTransition
class CORDL_TYPE ColorGraphicStateTransition : public GlobalNamespace::BaseStateTransition_1<UnityEngine::UI::Graphic> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~ColorGraphicStateTransition() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorGraphicStateTransition", modifiers: " const&", def_value: None }]
constexpr ColorGraphicStateTransition(ColorGraphicStateTransition const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorGraphicStateTransition", modifiers: "&&", def_value: None }]
constexpr ColorGraphicStateTransition(ColorGraphicStateTransition&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorGraphicStateTransition(void* ptr) noexcept : GlobalNamespace::BaseStateTransition_1<UnityEngine::UI::Graphic>(ptr) {
}


  constexpr ColorGraphicStateTransition& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorGraphicStateTransition& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorGraphicStateTransition& operator=(ColorGraphicStateTransition&& o) noexcept = default;
  constexpr ColorGraphicStateTransition& operator=(ColorGraphicStateTransition const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorTransitionSO __declspec(property(get=__get__transition, put=__set__transition))  _transition;

constexpr void __set__transition(GlobalNamespace::ColorTransitionSO value) ;

constexpr GlobalNamespace::ColorTransitionSO __get__transition() const;

 Tweening::ColorTween __declspec(property(get=__get__colorTween, put=__set__colorTween))  _colorTween;

constexpr void __set__colorTween(Tweening::ColorTween value) ;

constexpr Tweening::ColorTween __get__colorTween() const;


// Properties

 GlobalNamespace::BaseTransitionSO __declspec(property(get=get_transition))  transition;


// Methods

/// @brief Method get_transition addr 0x215fdd0 size 0x8 virtual true final false
 GlobalNamespace::BaseTransitionSO get_transition() ;

/// @brief Method TransitionToNormalState addr 0x215fdd8 size 0x2c virtual true final false
 void TransitionToNormalState() ;

/// @brief Method TransitionToHighlightedState addr 0x2160048 size 0x2c virtual true final false
 void TransitionToHighlightedState() ;

/// @brief Method TransitionToPressedState addr 0x2160080 size 0x2c virtual true final false
 void TransitionToPressedState() ;

/// @brief Method TransitionToDisabledState addr 0x21600b8 size 0x2c virtual true final false
 void TransitionToDisabledState() ;

/// @brief Method TransitionToSelectedState addr 0x21600f0 size 0x2c virtual true final false
 void TransitionToSelectedState() ;

/// @brief Method TransitionToSelectedAndHighlightedState addr 0x2160128 size 0x2c virtual true final false
 void TransitionToSelectedAndHighlightedState() ;

/// @brief Method SetNormalState addr 0x2160160 size 0x3c virtual true final false
 void SetNormalState() ;

/// @brief Method SetHighlightedState addr 0x216019c size 0x3c virtual true final false
 void SetHighlightedState() ;

/// @brief Method SetPressedState addr 0x21601d8 size 0x3c virtual true final false
 void SetPressedState() ;

/// @brief Method SetDisabledState addr 0x2160214 size 0x3c virtual true final false
 void SetDisabledState() ;

/// @brief Method SetSelectedState addr 0x2160250 size 0x3c virtual true final false
 void SetSelectedState() ;

/// @brief Method SetSelectedAndHighlightedState addr 0x216028c size 0x3c virtual true final false
 void SetSelectedAndHighlightedState() ;

/// @brief Method StartTween addr 0x215fe10 size 0x238 virtual false final false
 void StartTween(UnityEngine::Color endColor) ;

// Ctor Parameters []
explicit ColorGraphicStateTransition() ;

/// @brief Method .ctor addr 0x21602c8 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method <StartTween>b__16_0 addr 0x2160310 size 0x24 virtual false final false
 void _StartTween_b__16_0(UnityEngine::Color color) ;

/// @brief Method <StartTween>b__16_1 addr 0x2160334 size 0x88 virtual false final false
 void _StartTween_b__16_1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorGraphicStateTransition);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorGraphicStateTransition, "", "ColorGraphicStateTransition");
