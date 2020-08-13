// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.Bevel
#include "UnityEngine/ProBuilder/MeshOperations/Bevel.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_0
#include "UnityEngine/ProBuilder/MeshOperations/Bevel_--c__DisplayClass0_0.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_1
#include "UnityEngine/ProBuilder/MeshOperations/Bevel_--c__DisplayClass0_1.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c__DisplayClass0_2
#include "UnityEngine/ProBuilder/MeshOperations/Bevel_--c__DisplayClass0_2.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.Bevel/<>c
#include "UnityEngine/ProBuilder/MeshOperations/Bevel_--c.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.ProBuilder.Face
#include "UnityEngine/ProBuilder/Face.hpp"
// Including type: UnityEngine.ProBuilder.ProBuilderMesh
#include "UnityEngine/ProBuilder/ProBuilderMesh.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: UnityEngine.ProBuilder.FaceRebuildData
#include "UnityEngine/ProBuilder/FaceRebuildData.hpp"
// Including type: UnityEngine.ProBuilder.Vertex
#include "UnityEngine/ProBuilder/Vertex.hpp"
// Including type: UnityEngine.ProBuilder.WingedEdge
#include "UnityEngine/ProBuilder/WingedEdge.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Int32[] k_BridgeIndexesTri
::Array<int>* UnityEngine::ProBuilder::MeshOperations::Bevel::_get_k_BridgeIndexesTri() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<int>*>("UnityEngine.ProBuilder.MeshOperations", "Bevel", "k_BridgeIndexesTri"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32[] k_BridgeIndexesTri
void UnityEngine::ProBuilder::MeshOperations::Bevel::_set_k_BridgeIndexesTri(::Array<int>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.ProBuilder.MeshOperations", "Bevel", "k_BridgeIndexesTri", value));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.Bevel.BevelEdges
System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::Bevel::BevelEdges(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Edge>* edges, float amount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<UnityEngine::ProBuilder::Face*>*>("UnityEngine.ProBuilder.MeshOperations", "Bevel", "BevelEdges", mesh, edges, amount));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.Bevel.GetBridgeFaces
System::Collections::Generic::List_1<UnityEngine::ProBuilder::FaceRebuildData*>* UnityEngine::ProBuilder::MeshOperations::Bevel::GetBridgeFaces(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, UnityEngine::ProBuilder::WingedEdge* left, UnityEngine::ProBuilder::WingedEdge* right, System::Collections::Generic::Dictionary_2<int, System::Collections::Generic::List_1<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::FaceRebuildData*, System::Collections::Generic::List_1<int>*>>*>* holes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<UnityEngine::ProBuilder::FaceRebuildData*>*>("UnityEngine.ProBuilder.MeshOperations", "Bevel", "GetBridgeFaces", vertices, left, right, holes));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.Bevel.SlideEdge
void UnityEngine::ProBuilder::MeshOperations::Bevel::SlideEdge(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, UnityEngine::ProBuilder::WingedEdge* we, float amount) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.MeshOperations", "Bevel", "SlideEdge", vertices, we, amount));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.Bevel.GetLeadingEdge
UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::Bevel::GetLeadingEdge(UnityEngine::ProBuilder::WingedEdge* wing, int common) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::Edge>("UnityEngine.ProBuilder.MeshOperations", "Bevel", "GetLeadingEdge", wing, common));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.Bevel..cctor
void UnityEngine::ProBuilder::MeshOperations::Bevel::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.ProBuilder.MeshOperations", "Bevel", ".cctor"));
}
