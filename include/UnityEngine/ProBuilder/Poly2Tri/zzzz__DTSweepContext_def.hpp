#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__TriangulationContext_def.hpp"
#include <cmath>
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepPointComparator;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepBasin;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFront;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepEdgeEvent;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Triangulatable;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationAlgorithm;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationConstraint;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepContext;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweepContext
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15384))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15373))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
class CORDL_TYPE DTSweepContext : public UnityEngine::ProBuilder::Poly2Tri::TriangulationContext {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~DTSweepContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepContext", modifiers: " const&", def_value: None }]
constexpr DTSweepContext(DTSweepContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweepContext", modifiers: "&&", def_value: None }]
constexpr DTSweepContext(DTSweepContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DTSweepContext(void* ptr) noexcept : UnityEngine::ProBuilder::Poly2Tri::TriangulationContext(ptr) {
}


  constexpr DTSweepContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DTSweepContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DTSweepContext& operator=(DTSweepContext&& o) noexcept = default;
  constexpr DTSweepContext& operator=(DTSweepContext const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_ALPHA, put=__set_ALPHA))  ALPHA;

constexpr void __set_ALPHA(float_t value) ;

constexpr float_t __get_ALPHA() const;

 UnityEngine::ProBuilder::Poly2Tri::AdvancingFront __declspec(property(get=__get_Front, put=__set_Front))  Front;

constexpr void __set_Front(UnityEngine::ProBuilder::Poly2Tri::AdvancingFront value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::AdvancingFront __get_Front() const;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=__get__Head_k__BackingField, put=__set__Head_k__BackingField))  _Head_k__BackingField;

constexpr void __set__Head_k__BackingField(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __get__Head_k__BackingField() const;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=__get__Tail_k__BackingField, put=__set__Tail_k__BackingField))  _Tail_k__BackingField;

constexpr void __set__Tail_k__BackingField(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __get__Tail_k__BackingField() const;

 UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin __declspec(property(get=__get_Basin, put=__set_Basin))  Basin;

constexpr void __set_Basin(UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin __get_Basin() const;

 UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent __declspec(property(get=__get_EdgeEvent, put=__set_EdgeEvent))  EdgeEvent;

constexpr void __set_EdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::DTSweepEdgeEvent __get_EdgeEvent() const;

 UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator __declspec(property(get=__get__comparator, put=__set__comparator))  _comparator;

constexpr void __set__comparator(UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator __get__comparator() const;


// Properties

 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=get_Head, put=set_Head))  Head;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=get_Tail, put=set_Tail))  Tail;

 bool __declspec(property(get=get_IsDebugEnabled, put=set_IsDebugEnabled))  IsDebugEnabled;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm __declspec(property(get=get_Algorithm))  Algorithm;


// Methods

/// @brief Method get_Head addr 0x29cfca4 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint get_Head() ;

/// @brief Method set_Head addr 0x29cfcac size 0x8 virtual false final false
 void set_Head(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

/// @brief Method get_Tail addr 0x29cfcb4 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint get_Tail() ;

/// @brief Method set_Tail addr 0x29cfcbc size 0x8 virtual false final false
 void set_Tail(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

// Ctor Parameters []
explicit DTSweepContext() ;

/// @brief Method .ctor addr 0x29c9548 size 0xe0 virtual false final false
 void _ctor() ;

/// @brief Method get_IsDebugEnabled addr 0x29cfd94 size 0x8 virtual true final false
 bool get_IsDebugEnabled() ;

/// @brief Method set_IsDebugEnabled addr 0x29cfd9c size 0x7c virtual true final false
 void set_IsDebugEnabled(bool value) ;

/// @brief Method RemoveFromList addr 0x29cd750 size 0x58 virtual false final false
 void RemoveFromList(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle triangle) ;

/// @brief Method MeshClean addr 0x29cdb48 size 0x4 virtual false final false
 void MeshClean(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle triangle) ;

/// @brief Method MeshCleanReq addr 0x29cfe40 size 0x124 virtual false final false
 void MeshCleanReq(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle triangle) ;

/// @brief Method Clear addr 0x29cff64 size 0x78 virtual true final false
 void Clear() ;

/// @brief Method AddNode addr 0x29cdd10 size 0x18 virtual false final false
 void AddNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method RemoveNode addr 0x29cfa90 size 0x18 virtual false final false
 void RemoveNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method LocateNode addr 0x29cdb4c size 0x20 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode LocateNode(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

/// @brief Method CreateAdvancingFront addr 0x29cc56c size 0x228 virtual false final false
 void CreateAdvancingFront() ;

/// @brief Method MapTriangleToNodes addr 0x29cd674 size 0xdc virtual false final false
 void MapTriangleToNodes(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle t) ;

/// @brief Method PrepareTriangulation addr 0x29d005c size 0x2a4 virtual true final false
 void PrepareTriangulation(UnityEngine::ProBuilder::Poly2Tri::Triangulatable t) ;

/// @brief Method FinalizeTriangulation addr 0x29cd7a8 size 0xf0 virtual false final false
 void FinalizeTriangulation() ;

/// @brief Method NewConstraint addr 0x29d0408 size 0x70 virtual true final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint NewConstraint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint a, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint b) ;

/// @brief Method get_Algorithm addr 0x29d0478 size 0x8 virtual true final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm get_Algorithm() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepContext");
