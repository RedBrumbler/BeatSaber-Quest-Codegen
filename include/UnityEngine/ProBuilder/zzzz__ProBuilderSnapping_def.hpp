#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
struct Vector3Mask;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ProBuilderSnapping;
}
// Type: UnityEngine.ProBuilder::ProBuilderSnapping
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12137))
// CS Name: UnityEngine.ProBuilder.ProBuilderSnapping
class CORDL_TYPE ProBuilderSnapping : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ProBuilderSnapping() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProBuilderSnapping", modifiers: " const&", def_value: None }]
constexpr ProBuilderSnapping(ProBuilderSnapping const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProBuilderSnapping", modifiers: "&&", def_value: None }]
constexpr ProBuilderSnapping(ProBuilderSnapping&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProBuilderSnapping(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProBuilderSnapping& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProBuilderSnapping& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProBuilderSnapping& operator=(ProBuilderSnapping&& o) noexcept = default;
  constexpr ProBuilderSnapping& operator=(ProBuilderSnapping const& o) noexcept = default;
                


// Fields

/// @brief Field k_MaxRaySnapDistance offset 0
static constexpr float_t  k_MaxRaySnapDistance{inf};


// Methods

/// @brief Method IsCardinalDirection addr 0x29fb92c size 0x1e8 virtual false final false
static bool IsCardinalDirection(UnityEngine::Vector3 direction) ;

/// @brief Method Snap addr 0x29fbb14 size 0xa0 virtual false final false
static float_t Snap(float_t val, float_t snap) ;

/// @brief Method Snap addr 0x29fbbb4 size 0xa0 virtual false final false
static UnityEngine::Vector3 Snap(UnityEngine::Vector3 val, UnityEngine::Vector3 snap) ;

/// @brief Method SnapVertices addr 0x29fbc54 size 0x3d0 virtual false final false
static void SnapVertices(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<int32_t> indexes, UnityEngine::Vector3 snap) ;

/// @brief Method GetSnappingMaskBasedOnNormalVector addr 0x29fc024 size 0xd0 virtual false final false
static UnityEngine::Vector3 GetSnappingMaskBasedOnNormalVector(UnityEngine::Vector3 normal) ;

/// @brief Method SnapValueOnRay addr 0x29fc0f4 size 0x4bc virtual false final false
static UnityEngine::Vector3 SnapValueOnRay(UnityEngine::Ray ray, float_t distance, float_t snap, UnityEngine::ProBuilder::Vector3Mask mask) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::ProBuilderSnapping);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ProBuilderSnapping, "UnityEngine.ProBuilder", "ProBuilderSnapping");
