// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.ConnectElements
#include "UnityEngine/ProBuilder/MeshOperations/ConnectElements.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.ConnectElements/<>c
#include "UnityEngine/ProBuilder/MeshOperations/ConnectElements_--c.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.ConnectElements/<>c__DisplayClass2_0
#include "UnityEngine/ProBuilder/MeshOperations/ConnectElements_--c__DisplayClass2_0.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.ConnectElements/<>c__DisplayClass3_0
#include "UnityEngine/ProBuilder/MeshOperations/ConnectElements_--c__DisplayClass3_0.hpp"
// Including type: UnityEngine.ProBuilder.Face
#include "UnityEngine/ProBuilder/Face.hpp"
// Including type: UnityEngine.ProBuilder.ProBuilderMesh
#include "UnityEngine/ProBuilder/ProBuilderMesh.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.ProBuilder.SimpleTuple`2
#include "UnityEngine/ProBuilder/SimpleTuple_2.hpp"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: UnityEngine.ProBuilder.ActionResult
#include "UnityEngine/ProBuilder/ActionResult.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData
#include "UnityEngine/ProBuilder/MeshOperations/ConnectFaceRebuildData.hpp"
// Including type: UnityEngine.ProBuilder.WingedEdge
#include "UnityEngine/ProBuilder/WingedEdge.hpp"
// Including type: UnityEngine.ProBuilder.Vertex
#include "UnityEngine/ProBuilder/Vertex.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.ConnectElements.Connect
::Array<UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::ProBuilder::Face*>*>("UnityEngine.ProBuilder.MeshOperations", "ConnectElements", "Connect", mesh, faces));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.ConnectElements.Connect
UnityEngine::ProBuilder::SimpleTuple_2<::Array<UnityEngine::ProBuilder::Face*>*, ::Array<UnityEngine::ProBuilder::Edge>*> UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<UnityEngine::ProBuilder::SimpleTuple_2<::Array<UnityEngine::ProBuilder::Face*>*, ::Array<UnityEngine::ProBuilder::Edge>*>>("UnityEngine.ProBuilder.MeshOperations", "ConnectElements", "Connect", mesh, edges)));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.ConnectElements.Connect
::Array<int>* UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IList_1<int>* indexes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<int>*>("UnityEngine.ProBuilder.MeshOperations", "ConnectElements", "Connect", mesh, indexes));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.ConnectElements.Connect
UnityEngine::ProBuilder::ActionResult* UnityEngine::ProBuilder::MeshOperations::ConnectElements::Connect(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges, ::Array<UnityEngine::ProBuilder::Face*>*& addedFaces, ::Array<UnityEngine::ProBuilder::Edge>*& connections, bool returnFaces, bool returnEdges, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* faceMask) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::ActionResult*>("UnityEngine.ProBuilder.MeshOperations", "ConnectElements", "Connect", mesh, edges, addedFaces, connections, returnFaces, returnEdges, faceMask));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.ConnectElements.ConnectEdgesInFace
System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace(UnityEngine::ProBuilder::Face* face, UnityEngine::ProBuilder::WingedEdge* a, UnityEngine::ProBuilder::WingedEdge* b, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*>("UnityEngine.ProBuilder.MeshOperations", "ConnectElements", "ConnectEdgesInFace", face, a, b, vertices));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.ConnectElements.ConnectEdgesInFace
System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectEdgesInFace(UnityEngine::ProBuilder::Face* face, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* edges, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*>("UnityEngine.ProBuilder.MeshOperations", "ConnectElements", "ConnectEdgesInFace", face, edges, vertices));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.ConnectElements.InsertVertices
bool UnityEngine::ProBuilder::MeshOperations::ConnectElements::InsertVertices(UnityEngine::ProBuilder::Face* face, System::Collections::Generic::List_1<UnityEngine::ProBuilder::WingedEdge*>* edges, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*& data) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("UnityEngine.ProBuilder.MeshOperations", "ConnectElements", "InsertVertices", face, edges, vertices, data));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.ConnectElements.ConnectIndexesPerFace
System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace(UnityEngine::ProBuilder::Face* face, int a, int b, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::Dictionary_2<int, int>* lookup) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*>("UnityEngine.ProBuilder.MeshOperations", "ConnectElements", "ConnectIndexesPerFace", face, a, b, vertices, lookup));
}
// Autogenerated method: UnityEngine.ProBuilder.MeshOperations.ConnectElements.ConnectIndexesPerFace
System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>* UnityEngine::ProBuilder::MeshOperations::ConnectElements::ConnectIndexesPerFace(UnityEngine::ProBuilder::Face* face, System::Collections::Generic::List_1<int>* indexes, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::Dictionary_2<int, int>* lookup, int sharedIndexOffset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*>*>("UnityEngine.ProBuilder.MeshOperations", "ConnectElements", "ConnectIndexesPerFace", face, indexes, vertices, lookup, sharedIndexOffset));
}
