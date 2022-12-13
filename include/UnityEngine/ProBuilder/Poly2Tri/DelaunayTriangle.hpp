// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1
#include "UnityEngine/ProBuilder/Poly2Tri/FixedArray3_1.hpp"
// Including type: UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3
#include "UnityEngine/ProBuilder/Poly2Tri/FixedBitArray3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: DelaunayTriangle
  class DelaunayTriangle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, "UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle");
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
  // [TokenAttribute] Offset: FFFFFFFF
  class DelaunayTriangle : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> Points
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> Points;
    // public UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> Neighbors
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> Neighbors;
    // public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 EdgeIsConstrained
    // Size: 0x3
    // Offset: 0x40
    ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsConstrained;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3) == 0x3);
    // public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 EdgeIsDelaunay
    // Size: 0x3
    // Offset: 0x43
    ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsDelaunay;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3) == 0x3);
    // private System.Boolean <IsInterior>k__BackingField
    // Size: 0x1
    // Offset: 0x46
    bool IsInterior;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint> Points
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>& dyn_Points();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle> Neighbors
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*>& dyn_Neighbors();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 EdgeIsConstrained
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& dyn_EdgeIsConstrained();
    // Get instance field reference: public UnityEngine.ProBuilder.Poly2Tri.FixedBitArray3 EdgeIsDelaunay
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3& dyn_EdgeIsDelaunay();
    // Get instance field reference: private System.Boolean <IsInterior>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsInterior$k__BackingField();
    // public System.Boolean get_IsInterior()
    // Offset: 0x2B2E8CC
    bool get_IsInterior();
    // public System.Void set_IsInterior(System.Boolean value)
    // Offset: 0x2B2E8D4
    void set_IsInterior(bool value);
    // public System.Void .ctor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p3)
    // Offset: 0x2B2B884
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DelaunayTriangle* New_ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DelaunayTriangle*, creationType>(p1, p2, p3)));
    }
    // public System.Int32 IndexOf(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x2B2DAF0
    int IndexOf(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Int32 IndexCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x2B2E8E0
    int IndexCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean Contains(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x2B2A8CC
    bool Contains(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // private System.Void MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2, UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x2B2E918
    void MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public System.Void MarkNeighbor(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t)
    // Offset: 0x2B2B930
    void MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint OppositePoint(UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle t, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x2B2A9A8
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* OppositePoint(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* t, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NeighborCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x2B2B1A0
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NeighborCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x2B2B074
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle NeighborAcrossFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x2B2A92C
    ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborAcrossFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint PointCCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x2B2AFE4
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // public UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint PointCWFrom(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint point)
    // Offset: 0x2B2B110
    ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* point);
    // private System.Void RotateCW()
    // Offset: 0x2B2E9E0
    void RotateCW();
    // public System.Void Legalize(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint oPoint, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint nPoint)
    // Offset: 0x2B2DD38
    void Legalize(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* oPoint, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* nPoint);
    // public System.Void MarkConstrainedEdge(System.Int32 index)
    // Offset: 0x2B2CB40
    void MarkConstrainedEdge(int index);
    // public System.Void MarkConstrainedEdge(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint q)
    // Offset: 0x2B2CB4C
    void MarkConstrainedEdge(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* q);
    // public System.Int32 EdgeIndex(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2)
    // Offset: 0x2B2CA50
    int EdgeIndex(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);
    // public System.Boolean GetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x2B2DC60
    bool GetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean GetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x2B2B5A8
    bool GetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Void SetConstrainedEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x2B2DE78
    void SetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Void SetConstrainedEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x2B2DEC8
    void SetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Boolean GetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x2B2DCA8
    bool GetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Boolean GetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p)
    // Offset: 0x2B2DCF0
    bool GetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p);
    // public System.Void SetDelaunayEdgeCCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x2B2DDD8
    void SetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public System.Void SetDelaunayEdgeCW(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p, System.Boolean ce)
    // Offset: 0x2B2DE28
    void SetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p, bool ce);
    // public override System.String ToString()
    // Offset: 0x2B2EAA8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.ProBuilder.Poly2Tri.DelaunayTriangle
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::get_IsInterior
// Il2CppName: get_IsInterior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::get_IsInterior)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "get_IsInterior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::set_IsInterior
// Il2CppName: set_IsInterior
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(bool)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::set_IsInterior)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "set_IsInterior", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexOf
// Il2CppName: IndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexOf)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "IndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexCCWFrom
// Il2CppName: IndexCCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::IndexCCWFrom)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "IndexCCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Contains)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor
// Il2CppName: MarkNeighbor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "MarkNeighbor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2, t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor
// Il2CppName: MarkNeighbor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkNeighbor)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "MarkNeighbor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::OppositePoint
// Il2CppName: OppositePoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::OppositePoint)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "DelaunayTriangle")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "OppositePoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCWFrom
// Il2CppName: NeighborCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCWFrom)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "NeighborCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCCWFrom
// Il2CppName: NeighborCCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborCCWFrom)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "NeighborCCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborAcrossFrom
// Il2CppName: NeighborAcrossFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::NeighborAcrossFrom)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "NeighborAcrossFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCCWFrom
// Il2CppName: PointCCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCCWFrom)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "PointCCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCWFrom
// Il2CppName: PointCWFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::PointCWFrom)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "PointCWFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::RotateCW
// Il2CppName: RotateCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::RotateCW)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "RotateCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Legalize
// Il2CppName: Legalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::Legalize)> {
  static const MethodInfo* get() {
    static auto* oPoint = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* nPoint = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "Legalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oPoint, nPoint});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge
// Il2CppName: MarkConstrainedEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(int)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "MarkConstrainedEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge
// Il2CppName: MarkConstrainedEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::MarkConstrainedEdge)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "MarkConstrainedEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, q});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::EdgeIndex
// Il2CppName: EdgeIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::EdgeIndex)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "EdgeIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCCW
// Il2CppName: GetConstrainedEdgeCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "GetConstrainedEdgeCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCW
// Il2CppName: GetConstrainedEdgeCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetConstrainedEdgeCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "GetConstrainedEdgeCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCCW
// Il2CppName: SetConstrainedEdgeCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* ce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "SetConstrainedEdgeCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, ce});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCW
// Il2CppName: SetConstrainedEdgeCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetConstrainedEdgeCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* ce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "SetConstrainedEdgeCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, ce});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCCW
// Il2CppName: GetDelaunayEdgeCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "GetDelaunayEdgeCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCW
// Il2CppName: GetDelaunayEdgeCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::GetDelaunayEdgeCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "GetDelaunayEdgeCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCCW
// Il2CppName: SetDelaunayEdgeCCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* ce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "SetDelaunayEdgeCCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, ce});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCW
// Il2CppName: SetDelaunayEdgeCW
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, bool)>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::SetDelaunayEdgeCW)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint")->byval_arg;
    static auto* ce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "SetDelaunayEdgeCW", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p, ce});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::*)()>(&UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
