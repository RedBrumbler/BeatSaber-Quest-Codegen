// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront
#include "UnityEngine/ProBuilder/Poly2Tri/AdvancingFront.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode
#include "UnityEngine/ProBuilder/Poly2Tri/AdvancingFrontNode.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
#include "UnityEngine/ProBuilder/Poly2Tri/TriangulationPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront..ctor
UnityEngine::ProBuilder::Poly2Tri::AdvancingFront* UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::New_ctor(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* head, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* tail) {
  return (AdvancingFront*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.ProBuilder.Poly2Tri", "AdvancingFront", head, tail));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront.AddNode
void UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::AddNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddNode", node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront.RemoveNode
void UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::RemoveNode(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* node) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveNode", node));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront.FindSearchNode
UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::FindSearchNode(double x) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(this, "FindSearchNode", x));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront.LocateNode
UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocateNode(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(this, "LocateNode", point));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront.LocateNode
UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocateNode(double x) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(this, "LocateNode", x));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront.LocatePoint
UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::LocatePoint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*>(this, "LocatePoint", point));
}
// Autogenerated method: UnityEngine.ProBuilder.Poly2Tri.AdvancingFront.ToString
::Il2CppString* UnityEngine::ProBuilder::Poly2Tri::AdvancingFront::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}