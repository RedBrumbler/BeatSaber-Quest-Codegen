#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class SliderInteractionManager;
}
namespace GlobalNamespace {
struct ColorType;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderInteractionEffect;
}
// Type: ::SliderInteractionEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4937))
// CS Name: SliderInteractionEffect
class CORDL_TYPE SliderInteractionEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SliderInteractionEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderInteractionEffect", modifiers: " const&", def_value: None }]
constexpr SliderInteractionEffect(SliderInteractionEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderInteractionEffect", modifiers: "&&", def_value: None }]
constexpr SliderInteractionEffect(SliderInteractionEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderInteractionEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SliderInteractionEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderInteractionEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderInteractionEffect& operator=(SliderInteractionEffect&& o) noexcept = default;
  constexpr SliderInteractionEffect& operator=(SliderInteractionEffect const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SliderInteractionManager __declspec(property(get=__get__sliderInteractionManager, put=__set__sliderInteractionManager))  _sliderInteractionManager;

constexpr void __set__sliderInteractionManager(GlobalNamespace::SliderInteractionManager value) ;

constexpr GlobalNamespace::SliderInteractionManager __get__sliderInteractionManager() const;


// Properties

 float_t __declspec(property(get=get_saberInteractionParam))  saberInteractionParam;

 GlobalNamespace::ColorType __declspec(property(get=get_colorType))  colorType;


// Methods

/// @brief Method get_saberInteractionParam addr 0x2283af8 size 0x1c virtual false final false
 float_t get_saberInteractionParam() ;

/// @brief Method get_colorType addr 0x2283a08 size 0x1c virtual false final false
 GlobalNamespace::ColorType get_colorType() ;

/// @brief Method Start addr 0x228391c size 0xec virtual true final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2284868 size 0xec virtual false final false
 void OnDestroy() ;

/// @brief Method StartEffect addr 0x0 size 0xffffffffffffffff virtual true final false
 void StartEffect(float_t saberInteractionParam) ;

/// @brief Method EndEffect addr 0x0 size 0xffffffffffffffff virtual true final false
 void EndEffect() ;

/// @brief Method HandleSliderWasAddedToActiveSliders addr 0x2284aa0 size 0xc virtual false final false
 void HandleSliderWasAddedToActiveSliders(float_t saberInteractionParam) ;

/// @brief Method HandleAllSliderWereRemovedFromActiveSliders addr 0x2284aac size 0xc virtual false final false
 void HandleAllSliderWereRemovedFromActiveSliders() ;

// Ctor Parameters []
explicit SliderInteractionEffect() ;

/// @brief Method .ctor addr 0x2283bb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SliderInteractionEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SliderInteractionEffect, "", "SliderInteractionEffect");
