#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct Orientation;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class AdvancingFrontNode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweep;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0;
}
// Type: ::<>c__DisplayClass21_0
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15369))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DTSweep::<>c__DisplayClass21_0
class CORDL_TYPE UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0(UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0(UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0& operator=(UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0& operator=(UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0 const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __declspec(property(get=__get_ep, put=__set_ep))  ep;

constexpr void __set_ep(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint __get_ep() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0() ;

/// @brief Method .ctor addr 0x29cf110 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SplitEdge>b__0 addr 0x29cfb6c size 0x38 virtual false final false
 bool _SplitEdge_b__0(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
// Type: UnityEngine.ProBuilder.Poly2Tri::DTSweep
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15370))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.DTSweep
class CORDL_TYPE DTSweep : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass21_0 = UnityEngine::ProBuilder::Poly2Tri::UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DTSweep() = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweep", modifiers: " const&", def_value: None }]
constexpr DTSweep(DTSweep const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DTSweep", modifiers: "&&", def_value: None }]
constexpr DTSweep(DTSweep&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DTSweep(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DTSweep& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DTSweep& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DTSweep& operator=(DTSweep&& o) noexcept = default;
  constexpr DTSweep& operator=(DTSweep const& o) noexcept = default;
                


// Fields

/// @brief Field PI_div2 offset 0
static constexpr double_t  PI_div2{1.5707963267948966};

/// @brief Field PI_3div4 offset 0
static constexpr double_t  PI_3div4{2.356194490192345};


// Methods

/// @brief Method Triangulate addr 0x29c9628 size 0x4c virtual false final false
static void Triangulate(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx) ;

/// @brief Method Sweep addr 0x29cc794 size 0x218 virtual false final false
static void Sweep(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx) ;

/// @brief Method FinalizationConvexHull addr 0x29cca54 size 0x280 virtual false final false
static void FinalizationConvexHull(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx) ;

/// @brief Method TurnAdvancingFrontConvex addr 0x29cd050 size 0x16c virtual false final false
static void TurnAdvancingFrontConvex(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode b, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode c) ;

/// @brief Method FinalizationPolygon addr 0x29cc9ac size 0xa8 virtual false final false
static void FinalizationPolygon(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx) ;

/// @brief Method PointEvent addr 0x29ccce4 size 0x10c virtual false final false
static UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode PointEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

/// @brief Method NewFrontTriangle addr 0x29cdb6c size 0x1a4 virtual false final false
static UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode NewFrontTriangle(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method EdgeEvent addr 0x29ccec8 size 0x184 virtual false final false
static void EdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method FillEdgeEvent addr 0x29ce19c size 0x2c virtual false final false
static void FillEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method FillRightConcaveEdgeEvent addr 0x29ce5bc size 0xfc virtual false final false
static void FillRightConcaveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method FillRightConvexEdgeEvent addr 0x29ce6b8 size 0x120 virtual false final false
static void FillRightConvexEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method FillRightBelowEdgeEvent addr 0x29ce7d8 size 0x12c virtual false final false
static void FillRightBelowEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method FillRightAboveEdgeEvent addr 0x29ce3a8 size 0x10c virtual false final false
static void FillRightAboveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method FillLeftConvexEdgeEvent addr 0x29ce904 size 0x118 virtual false final false
static void FillLeftConvexEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method FillLeftConcaveEdgeEvent addr 0x29cea1c size 0xf4 virtual false final false
static void FillLeftConcaveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method FillLeftBelowEdgeEvent addr 0x29ceb10 size 0x128 virtual false final false
static void FillLeftBelowEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method FillLeftAboveEdgeEvent addr 0x29ce4b4 size 0x108 virtual false final false
static void FillLeftAboveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method IsEdgeSideOfTriangle addr 0x29ce0dc size 0xc0 virtual false final false
static bool IsEdgeSideOfTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle triangle, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint eq) ;

/// @brief Method EdgeEvent addr 0x29ce1c8 size 0x1e0 virtual false final false
static void EdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle triangle, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint point) ;

/// @brief Method SplitEdge addr 0x29ceff8 size 0x118 virtual false final false
static void SplitEdge(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint eq, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method FlipEdgeEvent addr 0x29cec74 size 0x384 virtual false final false
static void FlipEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method NextFlipPoint addr 0x29cf2c0 size 0x160 virtual false final false
static UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint NextFlipPoint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle ot, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint op) ;

/// @brief Method NextFlipTriangle addr 0x29cf24c size 0x74 virtual false final false
static UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle NextFlipTriangle(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::Orientation o, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle t, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle ot, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint op) ;

/// @brief Method FlipScanEdgeEvent addr 0x29cf420 size 0x1a0 virtual false final false
static void FlipScanEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle flipTriangle, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p) ;

/// @brief Method FillAdvancingFront addr 0x29cdd28 size 0xf8 virtual false final false
static void FillAdvancingFront(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode n) ;

/// @brief Method FillBasin addr 0x29cf72c size 0x190 virtual false final false
static void FillBasin(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method FillBasinReq addr 0x29cf8bc size 0x170 virtual false final false
static void FillBasinReq(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method IsShallow addr 0x29cfa2c size 0x64 virtual false final false
static bool IsShallow(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method HoleAngle addr 0x29cf5cc size 0xc4 virtual false final false
static double_t HoleAngle(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method BasinAngle addr 0x29cf690 size 0x9c virtual false final false
static double_t BasinAngle(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method Fill addr 0x29cd9cc size 0x17c virtual false final false
static void Fill(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode node) ;

/// @brief Method Legalize addr 0x29cde20 size 0x270 virtual false final false
static bool Legalize(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext tcx, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle t) ;

/// @brief Method RotateTrianglePair addr 0x29cd1bc size 0x4b8 virtual false final false
static void RotateTrianglePair(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint p, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle ot, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint op) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::DTSweep);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweep, "UnityEngine.ProBuilder.Poly2Tri", "DTSweep");
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::UnityEngine__ProBuilder__Poly2Tri__DTSweep____c__DisplayClass21_0, "UnityEngine.ProBuilder.Poly2Tri", "DTSweep/<>c__DisplayClass21_0");
