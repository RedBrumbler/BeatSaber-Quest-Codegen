// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.DTSweep
#include "UnityEngine/ProBuilder/Poly2Tri/DTSweep.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.DTSweepContext
#include "UnityEngine/ProBuilder/Poly2Tri/DTSweepContext.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode
#include "UnityEngine/ProBuilder/Poly2Tri/AdvancingFrontNode.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationPoint.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint
#include "UnityEngine/ProBuilder/Poly2Tri/DTSweepConstraint.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
#include "UnityEngine/ProBuilder/Poly2Tri/DelaunayTriangle.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.Orientation
#include "UnityEngine/ProBuilder/Poly2Tri/Orientation.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.Triangulate
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::Triangulate(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "Triangulate", tcx));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.Sweep
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::Sweep(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "Sweep", tcx));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FinalizationConvexHull
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FinalizationConvexHull(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FinalizationConvexHull", tcx));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.TurnAdvancingFrontConvex
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::TurnAdvancingFrontConvex(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* b, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* c) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "TurnAdvancingFrontConvex", tcx, b, c));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FinalizationPolygon
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FinalizationPolygon(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FinalizationPolygon", tcx));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.PointEvent
UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::DTSweep::PointEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "PointEvent", tcx, point));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.NewFrontTriangle
UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::DTSweep::NewFrontTriangle(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "NewFrontTriangle", tcx, point, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.EdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::EdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "EdgeEvent", tcx, edge, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FillEdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FillEdgeEvent", tcx, edge, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FillRightConcaveEdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightConcaveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FillRightConcaveEdgeEvent", tcx, edge, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FillRightConvexEdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightConvexEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FillRightConvexEdgeEvent", tcx, edge, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FillRightBelowEdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightBelowEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FillRightBelowEdgeEvent", tcx, edge, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FillRightAboveEdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillRightAboveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FillRightAboveEdgeEvent", tcx, edge, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FillLeftConvexEdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftConvexEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FillLeftConvexEdgeEvent", tcx, edge, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FillLeftConcaveEdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftConcaveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FillLeftConcaveEdgeEvent", tcx, edge, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FillLeftBelowEdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftBelowEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FillLeftBelowEdgeEvent", tcx, edge, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FillLeftAboveEdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillLeftAboveEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* edge, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FillLeftAboveEdgeEvent", tcx, edge, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.IsEdgeSideOfTriangle
bool UnityEngine::ProBuilder::Poly2Tri::DTSweep::IsEdgeSideOfTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "IsEdgeSideOfTriangle", triangle, ep, eq));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.EdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::EdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* triangle, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "EdgeEvent", tcx, ep, eq, triangle, point));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FlipEdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FlipEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FlipEdgeEvent", tcx, ep, eq, t, p));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.NextFlipPoint
UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* UnityEngine::ProBuilder::Poly2Tri::DTSweep::NextFlipPoint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "NextFlipPoint", ep, eq, ot, op));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.NextFlipTriangle
UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* UnityEngine::ProBuilder::Poly2Tri::DTSweep::NextFlipTriangle(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::Orientation o, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "NextFlipTriangle", tcx, o, t, ot, p, op));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FlipScanEdgeEvent
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FlipScanEdgeEvent(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* ep, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* eq, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* flipTriangle, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FlipScanEdgeEvent", tcx, ep, eq, flipTriangle, t, p));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FillAdvancingFront
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillAdvancingFront(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* n) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FillAdvancingFront", tcx, n));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FillBasin
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillBasin(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FillBasin", tcx, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.FillBasinReq
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::FillBasinReq(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "FillBasinReq", tcx, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.IsShallow
bool UnityEngine::ProBuilder::Poly2Tri::DTSweep::IsShallow(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "IsShallow", tcx, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.HoleAngle
double UnityEngine::ProBuilder::Poly2Tri::DTSweep::HoleAngle(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "HoleAngle", node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.BasinAngle
double UnityEngine::ProBuilder::Poly2Tri::DTSweep::BasinAngle(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "BasinAngle", node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.Fill
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::Fill(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "Fill", tcx, node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.Legalize
bool UnityEngine::ProBuilder::Poly2Tri::DTSweep::Legalize(UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* tcx, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "Legalize", tcx, t));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.DTSweep.RotateTrianglePair
void UnityEngine::ProBuilder::Poly2Tri::DTSweep::RotateTrianglePair(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* ot, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* op) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.Poly2Tri", "DTSweep", "RotateTrianglePair", t, p, ot, op));
}