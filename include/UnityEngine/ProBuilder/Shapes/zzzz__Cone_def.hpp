#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Cone;
}
// Type: UnityEngine.ProBuilder.Shapes::Cone
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12194))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12186))
// CS Name: UnityEngine.ProBuilder.Shapes.Cone
class CORDL_TYPE Cone : public UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Cone() = default;

// Ctor Parameters [CppParam { name: "", ty: "Cone", modifiers: " const&", def_value: None }]
constexpr Cone(Cone const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Cone", modifiers: "&&", def_value: None }]
constexpr Cone(Cone&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Cone(void* ptr) noexcept : UnityEngine::ProBuilder::Shapes::Shape(ptr) {
}


  constexpr Cone& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Cone& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Cone& operator=(Cone&& o) noexcept = default;
  constexpr Cone& operator=(Cone const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_NumberOfSides, put=__set_m_NumberOfSides))  m_NumberOfSides;

constexpr void __set_m_NumberOfSides(int32_t value) ;

constexpr int32_t __get_m_NumberOfSides() const;

 float_t __declspec(property(get=__get_m_Radius, put=__set_m_Radius))  m_Radius;

constexpr void __set_m_Radius(float_t value) ;

constexpr float_t __get_m_Radius() const;

 bool __declspec(property(get=__get_m_Smooth, put=__set_m_Smooth))  m_Smooth;

constexpr void __set_m_Smooth(bool value) ;

constexpr bool __get_m_Smooth() const;


// Methods

/// @brief Method CopyShape addr 0x2a2430c size 0x84 virtual true final false
 void CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape) ;

/// @brief Method UpdateBounds addr 0x2a24390 size 0x174 virtual true final false
 UnityEngine::Bounds UpdateBounds(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation, UnityEngine::Bounds bounds) ;

/// @brief Method RebuildMesh addr 0x2a24504 size 0xc4c virtual true final false
 UnityEngine::Bounds RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation) ;

// Ctor Parameters []
explicit Cone() ;

/// @brief Method .ctor addr 0x2a25150 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(UnityEngine::ProBuilder::Shapes::Cone);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shapes::Cone, "UnityEngine.ProBuilder.Shapes", "Cone");
