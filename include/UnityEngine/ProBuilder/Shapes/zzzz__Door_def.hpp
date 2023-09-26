#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include <cmath>
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Door;
}
// Type: UnityEngine.ProBuilder.Shapes::Door
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12194))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12189))
// CS Name: UnityEngine.ProBuilder.Shapes.Door
class CORDL_TYPE Door : public UnityEngine::ProBuilder::Shapes::Shape {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Door() = default;

// Ctor Parameters [CppParam { name: "", ty: "Door", modifiers: " const&", def_value: None }]
constexpr Door(Door const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Door", modifiers: "&&", def_value: None }]
constexpr Door(Door&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Door(void* ptr) noexcept : UnityEngine::ProBuilder::Shapes::Shape(ptr) {
}


  constexpr Door& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Door& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Door& operator=(Door&& o) noexcept = default;
  constexpr Door& operator=(Door const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_m_DoorHeight, put=__set_m_DoorHeight))  m_DoorHeight;

constexpr void __set_m_DoorHeight(float_t value) ;

constexpr float_t __get_m_DoorHeight() const;

 float_t __declspec(property(get=__get_m_LegWidth, put=__set_m_LegWidth))  m_LegWidth;

constexpr void __set_m_LegWidth(float_t value) ;

constexpr float_t __get_m_LegWidth() const;


// Methods

/// @brief Method CopyShape addr 0x2a26210 size 0xac virtual true final false
 void CopyShape(UnityEngine::ProBuilder::Shapes::Shape shape) ;

/// @brief Method RebuildMesh addr 0x2a262bc size 0x1a9c virtual true final false
 UnityEngine::Bounds RebuildMesh(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation) ;

// Ctor Parameters []
explicit Door() ;

/// @brief Method .ctor addr 0x2a27d58 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(UnityEngine::ProBuilder::Shapes::Door);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shapes::Door, "UnityEngine.ProBuilder.Shapes", "Door");
