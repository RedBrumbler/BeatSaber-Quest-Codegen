#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
// Forward declare root types
namespace GlobalNamespace {
class Easing;
}
// Type: ::Easing
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15950))
// CS Name: Easing
class CORDL_TYPE Easing : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Easing() = default;

// Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: " const&", def_value: None }]
constexpr Easing(Easing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "&&", def_value: None }]
constexpr Easing(Easing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Easing(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Easing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Easing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Easing& operator=(Easing&& o) noexcept = default;
  constexpr Easing& operator=(Easing const& o) noexcept = default;
                


// Methods

/// @brief Method Linear addr 0x28ab430 size 0x4 virtual false final false
static float_t Linear(float_t t) ;

/// @brief Method InSine addr 0x28ab434 size 0x2c virtual false final false
static float_t InSine(float_t t) ;

/// @brief Method OutSine addr 0x28ab460 size 0x18 virtual false final false
static float_t OutSine(float_t t) ;

/// @brief Method InOutSine addr 0x28ab478 size 0x2c virtual false final false
static float_t InOutSine(float_t t) ;

/// @brief Method InQuad addr 0x28ab4a4 size 0x8 virtual false final false
static float_t InQuad(float_t t) ;

/// @brief Method OutQuad addr 0x28ab4ac size 0x14 virtual false final false
static float_t OutQuad(float_t t) ;

/// @brief Method InOutQuad addr 0x28ab4c0 size 0x30 virtual false final false
static float_t InOutQuad(float_t t) ;

/// @brief Method InCubic addr 0x28ab4f0 size 0xc virtual false final false
static float_t InCubic(float_t t) ;

/// @brief Method OutCubic addr 0x28ab4fc size 0x28 virtual false final false
static float_t OutCubic(float_t t) ;

/// @brief Method InOutCubic addr 0x28ab524 size 0x50 virtual false final false
static float_t InOutCubic(float_t t) ;

/// @brief Method InQuart addr 0x28ab574 size 0x10 virtual false final false
static float_t InQuart(float_t t) ;

/// @brief Method OutQuart addr 0x28ab584 size 0x28 virtual false final false
static float_t OutQuart(float_t t) ;

/// @brief Method InOutQuart addr 0x28ab5ac size 0x54 virtual false final false
static float_t InOutQuart(float_t t) ;

/// @brief Method InQuint addr 0x28ab600 size 0x14 virtual false final false
static float_t InQuint(float_t t) ;

/// @brief Method OutQuint addr 0x28ab614 size 0x28 virtual false final false
static float_t OutQuint(float_t t) ;

/// @brief Method InOutQuint addr 0x28ab63c size 0x58 virtual false final false
static float_t InOutQuint(float_t t) ;

/// @brief Method InExpo addr 0x28ab694 size 0x24 virtual false final false
static float_t InExpo(float_t t) ;

/// @brief Method OutExpo addr 0x28ab6b8 size 0x30 virtual false final false
static float_t OutExpo(float_t t) ;

/// @brief Method InOutExpo addr 0x28ab6e8 size 0x70 virtual false final false
static float_t InOutExpo(float_t t) ;

/// @brief Method InCirc addr 0x28ab758 size 0x18 virtual false final false
static float_t InCirc(float_t t) ;

/// @brief Method OutCirc addr 0x28ab770 size 0x1c virtual false final false
static float_t OutCirc(float_t t) ;

/// @brief Method InOutCirc addr 0x28ab78c size 0x4c virtual false final false
static float_t InOutCirc(float_t t) ;

/// @brief Method InBack addr 0x28ab7d8 size 0x2c virtual false final false
static float_t InBack(float_t t) ;

/// @brief Method OutBack addr 0x28ab804 size 0x50 virtual false final false
static float_t OutBack(float_t t) ;

/// @brief Method InOutBack addr 0x28ab854 size 0x6c virtual false final false
static float_t InOutBack(float_t t) ;

/// @brief Method InElastic addr 0x28ab8c0 size 0x6c virtual false final false
static float_t InElastic(float_t t) ;

/// @brief Method OutElastic addr 0x28ab92c size 0x70 virtual false final false
static float_t OutElastic(float_t t) ;

/// @brief Method InOutElastic addr 0x28ab99c size 0xc8 virtual false final false
static float_t InOutElastic(float_t t) ;

/// @brief Method InBounce addr 0x28aba64 size 0x24 virtual false final false
static float_t InBounce(float_t t) ;

/// @brief Method OutBounce addr 0x28aba88 size 0xb8 virtual false final false
static float_t OutBounce(float_t t) ;

/// @brief Method InOutBounce addr 0x28abb40 size 0x50 virtual false final false
static float_t InOutBounce(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::Easing);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Easing, "", "Easing");
