// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Poly2Tri.Triangulatable
#include "UnityEngine/ProBuilder/Poly2Tri/Triangulatable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
  // Forward declaring type: PolygonPoint
  class PolygonPoint;
  // Forward declaring type: TriangulationMode
  struct TriangulationMode;
  // Forward declaring type: TriangulationContext
  class TriangulationContext;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.Polygon
  class Polygon : public ::Il2CppObject/*, public UnityEngine::ProBuilder::Poly2Tri::Triangulatable*/ {
    public:
    // protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> _points
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*) == 0x8);
    // protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> _steinerPoints
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* steinerPoints;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*) == 0x8);
    // protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.Polygon> _holes
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::Polygon*>* holes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::Polygon*>*) == 0x8);
    // protected System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> _triangles
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* triangles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*) == 0x8);
    // Creating value type constructor for type: Polygon
    Polygon(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* points_ = {}, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>* steinerPoints_ = {}, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::Polygon*>* holes_ = {}, System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* triangles_ = {}) noexcept : points{points_}, steinerPoints{steinerPoints_}, holes{holes_}, triangles{triangles_} {}
    // Creating interface conversion operator: operator UnityEngine::ProBuilder::Poly2Tri::Triangulatable
    operator UnityEngine::ProBuilder::Poly2Tri::Triangulatable() noexcept {
      return *reinterpret_cast<UnityEngine::ProBuilder::Poly2Tri::Triangulatable*>(this);
    }
    // public System.Void .ctor(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint> points)
    // Offset: 0x239E808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Polygon* New_ctor(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::Polygon::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Polygon*, creationType>(points)));
    }
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.PolygonPoint> points)
    // Offset: 0x239EBA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Polygon* New_ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>* points) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::Polygon::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Polygon*, creationType>(points)));
    }
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationMode get_TriangulationMode()
    // Offset: 0x239EC2C
    UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode();
    // public System.Void AddHole(UnityEngine.ProBuilder.Poly2Tri.Polygon poly)
    // Offset: 0x239EC34
    void AddHole(UnityEngine::ProBuilder::Poly2Tri::Polygon* poly);
    // public System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> get_Triangles()
    // Offset: 0x239ECCC
    System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* get_Triangles();
    // public System.Void AddTriangle(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x239ECD4
    void AddTriangle(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void AddTriangles(System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> list)
    // Offset: 0x239ED3C
    void AddTriangles(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* list);
    // public System.Void Prepare(UnityEngine.ProBuilder.Poly2Tri.TriangulationContext tcx)
    // Offset: 0x239EDA4
    void Prepare(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* tcx);
  }; // UnityEngine.ProBuilder.Poly2Tri.Polygon
  #pragma pack(pop)
  static check_size<sizeof(Polygon), 40 + sizeof(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)> __UnityEngine_ProBuilder_Poly2Tri_PolygonSizeCheck;
  static_assert(sizeof(Polygon) == 0x30);
  // Writing MetadataGetter for method: Polygon::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polygon::*)(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*)>(&Polygon::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Polygon*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polygon::*)(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*)>(&Polygon::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Polygon*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>()});
    }
  };
  // Writing MetadataGetter for method: Polygon::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polygon::*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*)>(&Polygon::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Polygon*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>()});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polygon::*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*)>(&Polygon::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Polygon*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::PolygonPoint*>*>()});
    }
  };
  // Writing MetadataGetter for method: Polygon::get_TriangulationMode
  // Il2CppName: get_TriangulationMode
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Poly2Tri::TriangulationMode (Polygon::*)()>(&Polygon::get_TriangulationMode)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Polygon*), "get_TriangulationMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Polygon::AddHole
  // Il2CppName: AddHole
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polygon::*)(UnityEngine::ProBuilder::Poly2Tri::Polygon*)>(&Polygon::AddHole)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Polygon*), "AddHole", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::Polygon*>()});
    }
  };
  // Writing MetadataGetter for method: Polygon::get_Triangles
  // Il2CppName: get_Triangles
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>* (Polygon::*)()>(&Polygon::get_Triangles)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Polygon*), "get_Triangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: Polygon::AddTriangle
  // Il2CppName: AddTriangle
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polygon::*)(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&Polygon::AddTriangle)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Polygon*), "AddTriangle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>()});
    }
  };
  // Writing MetadataGetter for method: Polygon::AddTriangles
  // Il2CppName: AddTriangles
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polygon::*)(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*)>(&Polygon::AddTriangles)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Polygon*), "AddTriangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>*>()});
    }
  };
  // Writing MetadataGetter for method: Polygon::Prepare
  // Il2CppName: Prepare
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Polygon::*)(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*)>(&Polygon::Prepare)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(Polygon*), "Prepare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::ProBuilder::Poly2Tri::TriangulationContext*>()});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::Polygon*, "UnityEngine.ProBuilder.Poly2Tri", "Polygon");
