// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: WingedEdge
  class WingedEdge;
  // Forward declaring type: EdgeLookup
  struct EdgeLookup;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.Smoothing
  class Smoothing : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::Smoothing::$$c
    class $$c;
    // static field const value: static System.Int32 smoothingGroupNone
    static constexpr const int smoothingGroupNone = 0;
    // Get static field: static System.Int32 smoothingGroupNone
    static int _get_smoothingGroupNone();
    // Set static field: static System.Int32 smoothingGroupNone
    static void _set_smoothingGroupNone(int value);
    // static field const value: static System.Int32 smoothRangeMin
    static constexpr const int smoothRangeMin = 1;
    // Get static field: static System.Int32 smoothRangeMin
    static int _get_smoothRangeMin();
    // Set static field: static System.Int32 smoothRangeMin
    static void _set_smoothRangeMin(int value);
    // static field const value: static System.Int32 smoothRangeMax
    static constexpr const int smoothRangeMax = 24;
    // Get static field: static System.Int32 smoothRangeMax
    static int _get_smoothRangeMax();
    // Set static field: static System.Int32 smoothRangeMax
    static void _set_smoothRangeMax(int value);
    // static field const value: static System.Int32 hardRangeMin
    static constexpr const int hardRangeMin = 25;
    // Get static field: static System.Int32 hardRangeMin
    static int _get_hardRangeMin();
    // Set static field: static System.Int32 hardRangeMin
    static void _set_hardRangeMin(int value);
    // static field const value: static System.Int32 hardRangeMax
    static constexpr const int hardRangeMax = 42;
    // Get static field: static System.Int32 hardRangeMax
    static int _get_hardRangeMax();
    // Set static field: static System.Int32 hardRangeMax
    static void _set_hardRangeMax(int value);
    // static public System.Int32 GetUnusedSmoothingGroup(UnityEngine.ProBuilder.ProBuilderMesh mesh)
    // Offset: 0x18B4A7C
    static int GetUnusedSmoothingGroup(UnityEngine::ProBuilder::ProBuilderMesh* mesh);
    // static private System.Int32 GetNextUnusedSmoothingGroup(System.Int32 start, System.Collections.Generic.HashSet`1<System.Int32> used)
    // Offset: 0x18B4C28
    static int GetNextUnusedSmoothingGroup(int start, System::Collections::Generic::HashSet_1<int>* used);
    // static public System.Boolean IsSmooth(System.Int32 index)
    // Offset: 0x18B4CE0
    static bool IsSmooth(int index);
    // static public System.Void ApplySmoothingGroups(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Single angleThreshold)
    // Offset: 0x18B4D00
    static void ApplySmoothingGroups(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, float angleThreshold);
    // static System.Void ApplySmoothingGroups(UnityEngine.ProBuilder.ProBuilderMesh mesh, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces, System.Single angleThreshold, UnityEngine.Vector3[] normals)
    // Offset: 0x18B4D08
    static void ApplySmoothingGroups(UnityEngine::ProBuilder::ProBuilderMesh* mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces, float angleThreshold, ::Array<UnityEngine::Vector3>* normals);
    // static private System.Boolean FindSoftEdgesRecursive(UnityEngine.Vector3[] normals, UnityEngine.ProBuilder.WingedEdge wing, System.Single angleThreshold, System.Collections.Generic.HashSet`1<UnityEngine.ProBuilder.Face> processed)
    // Offset: 0x18B5A28
    static bool FindSoftEdgesRecursive(::Array<UnityEngine::Vector3>* normals, UnityEngine::ProBuilder::WingedEdge* wing, float angleThreshold, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face*>* processed);
    // static private System.Boolean IsSoftEdge(UnityEngine.Vector3[] normals, UnityEngine.ProBuilder.EdgeLookup left, UnityEngine.ProBuilder.EdgeLookup right, System.Single threshold)
    // Offset: 0x18B5D30
    static bool IsSoftEdge(::Array<UnityEngine::Vector3>* normals, UnityEngine::ProBuilder::EdgeLookup left, UnityEngine::ProBuilder::EdgeLookup right, float threshold);
  }; // UnityEngine.ProBuilder.Smoothing
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Smoothing*, "UnityEngine.ProBuilder", "Smoothing");
#pragma pack(pop)