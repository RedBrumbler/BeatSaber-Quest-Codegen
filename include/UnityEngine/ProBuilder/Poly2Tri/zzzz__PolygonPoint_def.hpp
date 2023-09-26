#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationPoint_def.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonPoint;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::PolygonPoint
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15387))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15364))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.PolygonPoint
class CORDL_TYPE PolygonPoint : public UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PolygonPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "PolygonPoint", modifiers: " const&", def_value: None }]
constexpr PolygonPoint(PolygonPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PolygonPoint", modifiers: "&&", def_value: None }]
constexpr PolygonPoint(PolygonPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PolygonPoint(void* ptr) noexcept : UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint(ptr) {
}


  constexpr PolygonPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PolygonPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PolygonPoint& operator=(PolygonPoint&& o) noexcept = default;
  constexpr PolygonPoint& operator=(PolygonPoint const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Poly2Tri::PolygonPoint __declspec(property(get=__get__Next_k__BackingField, put=__set__Next_k__BackingField))  _Next_k__BackingField;

constexpr void __set__Next_k__BackingField(UnityEngine::ProBuilder::Poly2Tri::PolygonPoint value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::PolygonPoint __get__Next_k__BackingField() const;

 UnityEngine::ProBuilder::Poly2Tri::PolygonPoint __declspec(property(get=__get__Previous_k__BackingField, put=__set__Previous_k__BackingField))  _Previous_k__BackingField;

constexpr void __set__Previous_k__BackingField(UnityEngine::ProBuilder::Poly2Tri::PolygonPoint value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::PolygonPoint __get__Previous_k__BackingField() const;


// Properties

 UnityEngine::ProBuilder::Poly2Tri::PolygonPoint __declspec(property(get=get_Next, put=set_Next))  Next;

 UnityEngine::ProBuilder::Poly2Tri::PolygonPoint __declspec(property(get=get_Previous, put=set_Previous))  Previous;


// Methods

// Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
explicit PolygonPoint(double_t x, double_t y, int32_t index) ;

/// @brief Method .ctor addr 0x29ca988 size 0x3c virtual false final false
 void _ctor(double_t x, double_t y, int32_t index) ;

/// @brief Method get_Next addr 0x29caa00 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::PolygonPoint get_Next() ;

/// @brief Method set_Next addr 0x29caa08 size 0x8 virtual false final false
 void set_Next(UnityEngine::ProBuilder::Poly2Tri::PolygonPoint value) ;

/// @brief Method get_Previous addr 0x29caa10 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::PolygonPoint get_Previous() ;

/// @brief Method set_Previous addr 0x29caa18 size 0x8 virtual false final false
 void set_Previous(UnityEngine::ProBuilder::Poly2Tri::PolygonPoint value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::PolygonPoint);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::PolygonPoint, "UnityEngine.ProBuilder.Poly2Tri", "PolygonPoint");
