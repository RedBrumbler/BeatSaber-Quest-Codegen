// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationContext
  class TriangulationContext;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: TriangulationMode
  struct TriangulationMode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
  class Triangulatable {
    public:
    // Creating value type constructor for type: Triangulatable
    Triangulatable() noexcept {}
    // public System.Void Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext tcx)
    // Offset: 0xFFFFFFFF
    void Prepare(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);
    // public System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> get_Triangles()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles();
    // public System.Void AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0xFFFFFFFF
    void AddTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> list)
    // Offset: 0xFFFFFFFF
    void AddTriangles(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode get_TriangulationMode()
    // Offset: 0xFFFFFFFF
    UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();
  }; // UnityEngine.ProBuilder.Poly2Tri.Triangulatable
  #pragma pack(pop)
  // Writing MetadataGetter for method: Triangulatable::Prepare
  // Il2CppName: Prepare
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Triangulatable::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*)>(&Triangulatable::Prepare)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Triangulatable*), "Prepare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>()});
    }
  };
  // Writing MetadataGetter for method: Triangulatable::get_Triangles
  // Il2CppName: get_Triangles
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* (Triangulatable::*)()>(&Triangulatable::get_Triangles)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Triangulatable*), "get_Triangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Triangulatable::AddTriangle
  // Il2CppName: AddTriangle
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Triangulatable::*)(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&Triangulatable::AddTriangle)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Triangulatable*), "AddTriangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>()});
    }
  };
  // Writing MetadataGetter for method: Triangulatable::AddTriangles
  // Il2CppName: AddTriangles
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Triangulatable::*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)>(&Triangulatable::AddTriangles)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Triangulatable*), "AddTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>()});
    }
  };
  // Writing MetadataGetter for method: Triangulatable::get_TriangulationMode
  // Il2CppName: get_TriangulationMode
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationMode (Triangulatable::*)()>(&Triangulatable::get_TriangulationMode)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Triangulatable*), "get_TriangulationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::Triangulatable*, "UnityEngine.ProBuilder.Poly2Tri", "Triangulatable");
