#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace RootMotion {
struct InterpolationMode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion {
class Interp;
}
// Type: RootMotion::Interp
namespace RootMotion {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12455))
// CS Name: RootMotion.Interp
class CORDL_TYPE Interp : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Interp() = default;

// Ctor Parameters [CppParam { name: "", ty: "Interp", modifiers: " const&", def_value: None }]
constexpr Interp(Interp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Interp", modifiers: "&&", def_value: None }]
constexpr Interp(Interp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Interp(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Interp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Interp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Interp& operator=(Interp&& o) noexcept = default;
  constexpr Interp& operator=(Interp const& o) noexcept = default;
                


// Methods

/// @brief Method Float addr 0x11bffe0 size 0x400 virtual false final false
static float_t Float(float_t t, RootMotion::InterpolationMode mode) ;

/// @brief Method V3 addr 0x11c0968 size 0x70 virtual false final false
static UnityEngine::Vector3 V3(UnityEngine::Vector3 v1, UnityEngine::Vector3 v2, float_t t, RootMotion::InterpolationMode mode) ;

/// @brief Method LerpValue addr 0x11c09d8 size 0x70 virtual false final false
static float_t LerpValue(float_t value, float_t target, float_t increaseSpeed, float_t decreaseSpeed) ;

/// @brief Method None addr 0x11c03e0 size 0xc virtual false final false
static float_t None(float_t t, float_t b, float_t c) ;

/// @brief Method InOutCubic addr 0x11c03ec size 0x24 virtual false final false
static float_t InOutCubic(float_t t, float_t b, float_t c) ;

/// @brief Method InOutQuintic addr 0x11c0410 size 0x3c virtual false final false
static float_t InOutQuintic(float_t t, float_t b, float_t c) ;

/// @brief Method InQuintic addr 0x11c044c size 0x18 virtual false final false
static float_t InQuintic(float_t t, float_t b, float_t c) ;

/// @brief Method InQuartic addr 0x11c0464 size 0x14 virtual false final false
static float_t InQuartic(float_t t, float_t b, float_t c) ;

/// @brief Method InCubic addr 0x11c0478 size 0x14 virtual false final false
static float_t InCubic(float_t t, float_t b, float_t c) ;

/// @brief Method InQuadratic addr 0x11c048c size 0x10 virtual false final false
static float_t InQuadratic(float_t t, float_t b, float_t c) ;

/// @brief Method OutQuintic addr 0x11c049c size 0x48 virtual false final false
static float_t OutQuintic(float_t t, float_t b, float_t c) ;

/// @brief Method OutQuartic addr 0x11c04e4 size 0x38 virtual false final false
static float_t OutQuartic(float_t t, float_t b, float_t c) ;

/// @brief Method OutCubic addr 0x11c051c size 0x28 virtual false final false
static float_t OutCubic(float_t t, float_t b, float_t c) ;

/// @brief Method OutInCubic addr 0x11c0544 size 0x34 virtual false final false
static float_t OutInCubic(float_t t, float_t b, float_t c) ;

/// @brief Method OutInQuartic addr 0x11c0a48 size 0x34 virtual false final false
static float_t OutInQuartic(float_t t, float_t b, float_t c) ;

/// @brief Method BackInCubic addr 0x11c0578 size 0x28 virtual false final false
static float_t BackInCubic(float_t t, float_t b, float_t c) ;

/// @brief Method BackInQuartic addr 0x11c05a0 size 0x30 virtual false final false
static float_t BackInQuartic(float_t t, float_t b, float_t c) ;

/// @brief Method OutBackCubic addr 0x11c05d0 size 0x34 virtual false final false
static float_t OutBackCubic(float_t t, float_t b, float_t c) ;

/// @brief Method OutBackQuartic addr 0x11c0604 size 0x44 virtual false final false
static float_t OutBackQuartic(float_t t, float_t b, float_t c) ;

/// @brief Method OutElasticSmall addr 0x11c0648 size 0x64 virtual false final false
static float_t OutElasticSmall(float_t t, float_t b, float_t c) ;

/// @brief Method OutElasticBig addr 0x11c06ac size 0x64 virtual false final false
static float_t OutElasticBig(float_t t, float_t b, float_t c) ;

/// @brief Method InElasticSmall addr 0x11c0710 size 0x54 virtual false final false
static float_t InElasticSmall(float_t t, float_t b, float_t c) ;

/// @brief Method InElasticBig addr 0x11c0764 size 0x54 virtual false final false
static float_t InElasticBig(float_t t, float_t b, float_t c) ;

/// @brief Method InSine addr 0x11c07b8 size 0x38 virtual false final false
static float_t InSine(float_t t, float_t b, float_t c) ;

/// @brief Method OutSine addr 0x11c07f0 size 0x34 virtual false final false
static float_t OutSine(float_t t, float_t b, float_t c) ;

/// @brief Method InOutSine addr 0x11c0824 size 0x44 virtual false final false
static float_t InOutSine(float_t t, float_t b, float_t c) ;

/// @brief Method InElastic addr 0x11c0a7c size 0x90 virtual false final false
static float_t InElastic(float_t t, float_t b, float_t c) ;

/// @brief Method OutElastic addr 0x11c0868 size 0x90 virtual false final false
static float_t OutElastic(float_t t, float_t b, float_t c) ;

/// @brief Method InBack addr 0x11c08f8 size 0x30 virtual false final false
static float_t InBack(float_t t, float_t b, float_t c) ;

/// @brief Method OutBack addr 0x11c0928 size 0x40 virtual false final false
static float_t OutBack(float_t t, float_t b, float_t c) ;

// Ctor Parameters []
explicit Interp() ;

/// @brief Method .ctor addr 0x11c0b0c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def RootMotion
NEED_NO_BOX(RootMotion::Interp);
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Interp, "RootMotion", "Interp");
