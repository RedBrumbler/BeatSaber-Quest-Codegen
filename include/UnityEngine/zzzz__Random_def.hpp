#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class Random;
}
// Type: UnityEngine::Random
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10101))
// CS Name: UnityEngine.Random
class CORDL_TYPE Random : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Random() = default;

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: " const&", def_value: None }]
constexpr Random(Random const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Random", modifiers: "&&", def_value: None }]
constexpr Random(Random&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Random(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Random& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Random& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Random& operator=(Random&& o) noexcept = default;
  constexpr Random& operator=(Random const& o) noexcept = default;
                


// Properties

static float_t __declspec(property(get=get_value))  value;

static UnityEngine::Vector3 __declspec(property(get=get_insideUnitSphere))  insideUnitSphere;

static UnityEngine::Vector3 __declspec(property(get=get_onUnitSphere))  onUnitSphere;

static UnityEngine::Quaternion __declspec(property(get=get_rotation))  rotation;


// Methods

/// @brief Method InitState addr 0x2b800a4 size 0x3c virtual false final false
static void InitState(int32_t seed) ;

/// @brief Method Range addr 0x2b800e0 size 0x40 virtual false final false
static float_t Range(float_t minInclusive, float_t maxInclusive) ;

/// @brief Method Range addr 0x2b80120 size 0x44 virtual false final false
static int32_t Range(int32_t minInclusive, int32_t maxExclusive) ;

/// @brief Method RandomRangeInt addr 0x2b80164 size 0x44 virtual false final false
static int32_t RandomRangeInt(int32_t minInclusive, int32_t maxExclusive) ;

/// @brief Method get_value addr 0x2b801a8 size 0x28 virtual false final false
static float_t get_value() ;

/// @brief Method get_insideUnitSphere addr 0x2b801d0 size 0x4c virtual false final false
static UnityEngine::Vector3 get_insideUnitSphere() ;

/// @brief Method get_onUnitSphere addr 0x2b80258 size 0x4c virtual false final false
static UnityEngine::Vector3 get_onUnitSphere() ;

/// @brief Method get_rotation addr 0x2b802e0 size 0x48 virtual false final false
static UnityEngine::Quaternion get_rotation() ;

/// @brief Method ColorHSV addr 0x2b80364 size 0x24 virtual false final false
static UnityEngine::Color ColorHSV() ;

/// @brief Method ColorHSV addr 0x2b80388 size 0x164 virtual false final false
static UnityEngine::Color ColorHSV(float_t hueMin, float_t hueMax, float_t saturationMin, float_t saturationMax, float_t valueMin, float_t valueMax, float_t alphaMin, float_t alphaMax) ;

/// @brief Method get_insideUnitSphere_Injected addr 0x2b8021c size 0x3c virtual false final false
static void get_insideUnitSphere_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method get_onUnitSphere_Injected addr 0x2b802a4 size 0x3c virtual false final false
static void get_onUnitSphere_Injected(ByRef<UnityEngine::Vector3> ret) ;

/// @brief Method get_rotation_Injected addr 0x2b80328 size 0x3c virtual false final false
static void get_rotation_Injected(ByRef<UnityEngine::Quaternion> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Random);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Random, "UnityEngine", "Random");
