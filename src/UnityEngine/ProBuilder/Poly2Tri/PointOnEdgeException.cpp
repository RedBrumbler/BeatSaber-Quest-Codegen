// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException
#include "UnityEngine/ProBuilder/Poly2Tri/PointOnEdgeException.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.PointOnEdgeException..ctor
UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException* UnityEngine::ProBuilder::Poly2Tri::PointOnEdgeException::New_ctor(::Il2CppString* message, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* b, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* c) {
  return (PointOnEdgeException*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder.Poly2Tri", "PointOnEdgeException", message, a, b, c));
}