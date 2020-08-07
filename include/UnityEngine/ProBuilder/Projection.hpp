// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: AutoUnwrapSettings
  struct AutoUnwrapSettings;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: SortMethod
  struct SortMethod;
  // Forward declaring type: ProjectionAxis
  struct ProjectionAxis;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Plane
  struct Plane;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.Projection
  class Projection : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::Projection::$$c
    class $$c;
    // static public UnityEngine.Vector2[] PlanarProject(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x1027470
    static ::Array<UnityEngine::Vector2>* PlanarProject(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions, System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.Vector2[] PlanarProject(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.Vector3 direction)
    // Offset: 0x1027DC8
    static ::Array<UnityEngine::Vector2>* PlanarProject(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions, System::Collections::Generic::IList_1<int>* indexes, UnityEngine::Vector3 direction);
    // static System.Void PlanarProject(System.Collections.Generic.IList`1<UnityEngine.Vector3> positions, System.Collections.Generic.IList`1<System.Int32> indexes, UnityEngine.Vector3 direction, System.Collections.Generic.List`1<UnityEngine.Vector2> results)
    // Offset: 0x1027F68
    static void PlanarProject(System::Collections::Generic::IList_1<UnityEngine::Vector3>* positions, System::Collections::Generic::IList_1<int>* indexes, UnityEngine::Vector3 direction, System::Collections::Generic::List_1<UnityEngine::Vector2>* results);
    // static System.Void PlanarProject(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 textureGroup, UnityEngine.ProBuilder.AutoUnwrapSettings unwrapSettings)
    // Offset: 0x10287DC
    static void PlanarProject(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int textureGroup, UnityEngine::ProBuilder::AutoUnwrapSettings unwrapSettings);
    // static System.Void PlanarProject(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face, UnityEngine.Vector3 projection)
    // Offset: 0x1028C08
    static void PlanarProject(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face, UnityEngine::Vector3 projection);
    // static UnityEngine.Vector2[] SphericalProject(System.Collections.Generic.IList`1<UnityEngine.Vector3> vertices, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x1028F58
    static ::Array<UnityEngine::Vector2>* SphericalProject(System::Collections::Generic::IList_1<UnityEngine::Vector3>* vertices, System::Collections::Generic::IList_1<int>* indexes);
    // static System.Collections.Generic.IList`1<UnityEngine.Vector2> Sort(System.Collections.Generic.IList`1<UnityEngine.Vector2> verts, UnityEngine.ProBuilder.SortMethod method)
    // Offset: 0x1029304
    static System::Collections::Generic::IList_1<UnityEngine::Vector2>* Sort(System::Collections::Generic::IList_1<UnityEngine::Vector2>* verts, UnityEngine::ProBuilder::SortMethod method);
    // static UnityEngine.Vector3 GetTangentToAxis(UnityEngine.ProBuilder.ProjectionAxis axis)
    // Offset: 0x1028720
    static UnityEngine::Vector3 GetTangentToAxis(UnityEngine::ProBuilder::ProjectionAxis axis);
    // static UnityEngine.Vector3 ProjectionAxisToVector(UnityEngine.ProBuilder.ProjectionAxis axis)
    // Offset: 0x1029784
    static UnityEngine::Vector3 ProjectionAxisToVector(UnityEngine::ProBuilder::ProjectionAxis axis);
    // static UnityEngine.ProBuilder.ProjectionAxis VectorToProjectionAxis(UnityEngine.Vector3 direction)
    // Offset: 0x10285F0
    static UnityEngine::ProBuilder::ProjectionAxis VectorToProjectionAxis(UnityEngine::Vector3 direction);
    // static public UnityEngine.Plane FindBestPlane(System.Collections.Generic.IList`1<UnityEngine.Vector3> points, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x10274BC
    static UnityEngine::Plane FindBestPlane(System::Collections::Generic::IList_1<UnityEngine::Vector3>* points, System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Plane FindBestPlane(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Int32 textureGroup)
    // Offset: 0x1029928
    static UnityEngine::Plane FindBestPlane(UnityEngine::ProBuilder::ProBuilderMesh* mesh, int textureGroup);
  }; // UnityEngine.ProBuilder.Projection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Projection*, "UnityEngine.ProBuilder", "Projection");
#pragma pack(pop)