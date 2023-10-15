// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BezierPath
  class BezierPath;
  // Skipping declaration: Vertex because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VertexPath
  class VertexPath;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VertexPath);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VertexPath*, "", "VertexPath");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VertexPath
  // [TokenAttribute] Offset: FFFFFFFF
  class VertexPath : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::VertexPath::Vertex
    struct Vertex;
    // Size: 0x24
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: VertexPath/Vertex
    // [TokenAttribute] Offset: FFFFFFFF
    struct Vertex/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Vector3 position
      // Size: 0xC
      // Offset: 0x0
      ::UnityEngine::Vector3 position;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // public UnityEngine.Vector3 tangent
      // Size: 0xC
      // Offset: 0xC
      ::UnityEngine::Vector3 tangent;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // public UnityEngine.Vector3 normal
      // Size: 0xC
      // Offset: 0x18
      ::UnityEngine::Vector3 normal;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      public:
      // Creating value type constructor for type: Vertex
      constexpr Vertex(::UnityEngine::Vector3 position_ = {}, ::UnityEngine::Vector3 tangent_ = {}, ::UnityEngine::Vector3 normal_ = {}) noexcept : position{position_}, tangent{tangent_}, normal{normal_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Vector3 position
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
      // Get instance field reference: public UnityEngine.Vector3 tangent
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_tangent();
      // Get instance field reference: public UnityEngine.Vector3 normal
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_normal();
    }; // VertexPath/Vertex
    #pragma pack(pop)
    static check_size<sizeof(VertexPath::Vertex), 24 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_VertexPath_VertexSizeCheck;
    static_assert(sizeof(VertexPath::Vertex) == 0x24);
    public:
    // public readonly System.Int32 vertexCount
    // Size: 0x4
    // Offset: 0x10
    int vertexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: vertexCount and: localVertices
    char __padding0[0x4] = {};
    // private readonly VertexPath/Vertex[] _localVertices
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::VertexPath::Vertex> localVertices;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::VertexPath::Vertex>) == 0x8);
    // private System.Single _length
    // Size: 0x4
    // Offset: 0x20
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: length and: cumulativeLengthAtEachVertex
    char __padding2[0x4] = {};
    // private readonly System.Single[] _cumulativeLengthAtEachVertex
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<float> cumulativeLengthAtEachVertex;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private readonly System.Int32[] _anchorVertexMap
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<int> anchorVertexMap;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1133C7C
    // Get static field: static private readonly UnityEngine.Vector3 _back
    static ::UnityEngine::Vector3 _get__back();
    // Set static field: static private readonly UnityEngine.Vector3 _back
    static void _set__back(::UnityEngine::Vector3 value);
    // Get instance field reference: public readonly System.Int32 vertexCount
    [[deprecated("Use field access instead!")]] int& dyn_vertexCount();
    // Get instance field reference: private readonly VertexPath/Vertex[] _localVertices
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::VertexPath::Vertex>& dyn__localVertices();
    // Get instance field reference: private System.Single _length
    [[deprecated("Use field access instead!")]] float& dyn__length();
    // Get instance field reference: private readonly System.Single[] _cumulativeLengthAtEachVertex
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn__cumulativeLengthAtEachVertex();
    // Get instance field reference: private readonly System.Int32[] _anchorVertexMap
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__anchorVertexMap();
    // public System.Single get_length()
    // Offset: 0x1540824
    float get_length();
    // public System.Void .ctor(System.Int32 numberOfPathSegments)
    // Offset: 0x154082C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VertexPath* New_ctor(int numberOfPathSegments) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VertexPath::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VertexPath*, creationType>(numberOfPathSegments)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1541648
    static void _cctor();
    // public System.Void UpdateByBezierPath(BezierPath bezierPath)
    // Offset: 0x1540900
    void UpdateByBezierPath(::GlobalNamespace::BezierPath* bezierPath);
    // public System.Single TimeAtPoint(System.Int32 pointIndex)
    // Offset: 0x1541128
    float TimeAtPoint(int pointIndex);
    // public System.Void GetVertex(System.Int32 index, out UnityEngine.Vector3 position, out UnityEngine.Vector3 tangent, out UnityEngine.Vector3 normal)
    // Offset: 0x154116C
    void GetVertex(int index, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> tangent, ByRef<::UnityEngine::Vector3> normal);
    // public UnityEngine.Vector3 GetPoint(System.Int32 index)
    // Offset: 0x15411D8
    ::UnityEngine::Vector3 GetPoint(int index);
    // private System.Void SplitBezierPathIntoFixNumberOfSegments(BezierPath bezierPath, System.Int32 numberOfVertexSegments)
    // Offset: 0x1540CA4
    void SplitBezierPathIntoFixNumberOfSegments(::GlobalNamespace::BezierPath* bezierPath, int numberOfVertexSegments);
    // private System.Void AddVertex(in UnityEngine.Vector3 p0, in UnityEngine.Vector3 p1, in UnityEngine.Vector3 p2, in UnityEngine.Vector3 p3, System.Single t, ref UnityEngine.Vector3 lastRotationAxis, ref System.Single currentPathLength, ref VertexPath/Vertex lastVertex, ref System.Int32 vertCount)
    // Offset: 0x154121C
    void AddVertex(ByRef<::UnityEngine::Vector3> p0, ByRef<::UnityEngine::Vector3> p1, ByRef<::UnityEngine::Vector3> p2, ByRef<::UnityEngine::Vector3> p3, float t, ByRef<::UnityEngine::Vector3> lastRotationAxis, ByRef<float> currentPathLength, ByRef<::GlobalNamespace::VertexPath::Vertex> lastVertex, ByRef<int> vertCount);
  }; // VertexPath
  #pragma pack(pop)
  static check_size<sizeof(VertexPath), 48 + sizeof(::ArrayW<int>)> __GlobalNamespace_VertexPathSizeCheck;
  static_assert(sizeof(VertexPath) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VertexPath::Vertex, "", "VertexPath/Vertex");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::VertexPath::*)()>(&GlobalNamespace::VertexPath::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::VertexPath::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::UpdateByBezierPath
// Il2CppName: UpdateByBezierPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VertexPath::*)(::GlobalNamespace::BezierPath*)>(&GlobalNamespace::VertexPath::UpdateByBezierPath)> {
  static const MethodInfo* get() {
    static auto* bezierPath = &::il2cpp_utils::GetClassFromName("", "BezierPath")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "UpdateByBezierPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bezierPath});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::TimeAtPoint
// Il2CppName: TimeAtPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::VertexPath::*)(int)>(&GlobalNamespace::VertexPath::TimeAtPoint)> {
  static const MethodInfo* get() {
    static auto* pointIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "TimeAtPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::GetVertex
// Il2CppName: GetVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VertexPath::*)(int, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&GlobalNamespace::VertexPath::GetVertex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* tangent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* normal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "GetVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, position, tangent, normal});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::GetPoint
// Il2CppName: GetPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::VertexPath::*)(int)>(&GlobalNamespace::VertexPath::GetPoint)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "GetPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::SplitBezierPathIntoFixNumberOfSegments
// Il2CppName: SplitBezierPathIntoFixNumberOfSegments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VertexPath::*)(::GlobalNamespace::BezierPath*, int)>(&GlobalNamespace::VertexPath::SplitBezierPathIntoFixNumberOfSegments)> {
  static const MethodInfo* get() {
    static auto* bezierPath = &::il2cpp_utils::GetClassFromName("", "BezierPath")->byval_arg;
    static auto* numberOfVertexSegments = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "SplitBezierPathIntoFixNumberOfSegments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bezierPath, numberOfVertexSegments});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VertexPath::AddVertex
// Il2CppName: AddVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::VertexPath::*)(ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, float, ByRef<::UnityEngine::Vector3>, ByRef<float>, ByRef<::GlobalNamespace::VertexPath::Vertex>, ByRef<int>)>(&GlobalNamespace::VertexPath::AddVertex)> {
  static const MethodInfo* get() {
    static auto* p0 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* p3 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* lastRotationAxis = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* currentPathLength = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* lastVertex = &::il2cpp_utils::GetClassFromName("", "VertexPath/Vertex")->this_arg;
    static auto* vertCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VertexPath*), "AddVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p0, p1, p2, p3, t, lastRotationAxis, currentPathLength, lastVertex, vertCount});
  }
};