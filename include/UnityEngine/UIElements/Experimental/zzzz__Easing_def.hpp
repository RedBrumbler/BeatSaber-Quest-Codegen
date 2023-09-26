#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class Easing;
}
// Type: UnityEngine.UIElements.Experimental::Easing
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7572))
// CS Name: UnityEngine.UIElements.Experimental.Easing
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

/// @brief Method Linear addr 0x2c9e610 size 0x4 virtual false final false
static float_t Linear(float_t t) ;

/// @brief Method InSine addr 0x2c9e614 size 0x2c virtual false final false
static float_t InSine(float_t t) ;

/// @brief Method OutSine addr 0x2c9e640 size 0x10 virtual false final false
static float_t OutSine(float_t t) ;

/// @brief Method InOutSine addr 0x2c9e650 size 0x34 virtual false final false
static float_t InOutSine(float_t t) ;

/// @brief Method InQuad addr 0x2c9e684 size 0x8 virtual false final false
static float_t InQuad(float_t t) ;

/// @brief Method OutQuad addr 0x2c9e68c size 0x10 virtual false final false
static float_t OutQuad(float_t t) ;

/// @brief Method InOutQuad addr 0x2c9e69c size 0x40 virtual false final false
static float_t InOutQuad(float_t t) ;

/// @brief Method InCubic addr 0x2c9e6dc size 0x8 virtual false final false
static float_t InCubic(float_t t) ;

/// @brief Method OutCubic addr 0x2c9e6ec size 0x24 virtual false final false
static float_t OutCubic(float_t t) ;

/// @brief Method InOutCubic addr 0x2c9e748 size 0x48 virtual false final false
static float_t InOutCubic(float_t t) ;

/// @brief Method InPower addr 0x2c9e6e4 size 0x8 virtual false final false
static float_t InPower(float_t t, int32_t power) ;

/// @brief Method OutPower addr 0x2c9e710 size 0x38 virtual false final false
static float_t OutPower(float_t t, int32_t power) ;

/// @brief Method InOutPower addr 0x2c9e790 size 0x68 virtual false final false
static float_t InOutPower(float_t t, int32_t power) ;

/// @brief Method InBounce addr 0x2c9e7f8 size 0x24 virtual false final false
static float_t InBounce(float_t t) ;

/// @brief Method OutBounce addr 0x2c9e81c size 0xb8 virtual false final false
static float_t OutBounce(float_t t) ;

/// @brief Method InOutBounce addr 0x2c9e8d4 size 0x54 virtual false final false
static float_t InOutBounce(float_t t) ;

/// @brief Method InElastic addr 0x2c9e928 size 0x78 virtual false final false
static float_t InElastic(float_t t) ;

/// @brief Method OutElastic addr 0x2c9e9a0 size 0x78 virtual false final false
static float_t OutElastic(float_t t) ;

/// @brief Method InOutElastic addr 0x2c9ea18 size 0x104 virtual false final false
static float_t InOutElastic(float_t t) ;

/// @brief Method InBack addr 0x2c9eb1c size 0x24 virtual false final false
static float_t InBack(float_t t) ;

/// @brief Method OutBack addr 0x2c9eb40 size 0x30 virtual false final false
static float_t OutBack(float_t t) ;

/// @brief Method InOutBack addr 0x2c9eb70 size 0x7c virtual false final false
static float_t InOutBack(float_t t) ;

/// @brief Method InCirc addr 0x2c9ebec size 0x20 virtual false final false
static float_t InCirc(float_t t) ;

/// @brief Method OutCirc addr 0x2c9ec0c size 0x1c virtual false final false
static float_t OutCirc(float_t t) ;

/// @brief Method InOutCirc addr 0x2c9ec28 size 0x48 virtual false final false
static float_t InOutCirc(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::Experimental
NEED_NO_BOX(UnityEngine::UIElements::Experimental::Easing);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::Experimental::Easing, "UnityEngine.UIElements.Experimental", "Easing");
