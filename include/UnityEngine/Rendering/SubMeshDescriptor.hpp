// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
// Including type: UnityEngine.MeshTopology
#include "UnityEngine/MeshTopology.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: SubMeshDescriptor
  struct SubMeshDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::SubMeshDescriptor, "UnityEngine.Rendering", "SubMeshDescriptor");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.SubMeshDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  struct SubMeshDescriptor/*, public ::System::ValueType*/ {
    public:
    public:
    // [DebuggerBrowsableAttribute] Offset: 0x109138C
    // private UnityEngine.Bounds <bounds>k__BackingField
    // Size: 0x18
    // Offset: 0x0
    ::UnityEngine::Bounds bounds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Bounds) == 0x18);
    // [DebuggerBrowsableAttribute] Offset: 0x10913C8
    // private UnityEngine.MeshTopology <topology>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::MeshTopology topology;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshTopology) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x1091404
    // private System.Int32 <indexStart>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int indexStart;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x1091440
    // private System.Int32 <indexCount>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int indexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x109147C
    // private System.Int32 <baseVertex>k__BackingField
    // Size: 0x4
    // Offset: 0x24
    int baseVertex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x10914B8
    // private System.Int32 <firstVertex>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    int firstVertex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0x10914F4
    // private System.Int32 <vertexCount>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    int vertexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SubMeshDescriptor
    constexpr SubMeshDescriptor(::UnityEngine::Bounds bounds_ = {}, ::UnityEngine::MeshTopology topology_ = {}, int indexStart_ = {}, int indexCount_ = {}, int baseVertex_ = {}, int firstVertex_ = {}, int vertexCount_ = {}) noexcept : bounds{bounds_}, topology{topology_}, indexStart{indexStart_}, indexCount{indexCount_}, baseVertex{baseVertex_}, firstVertex{firstVertex_}, vertexCount{vertexCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.Bounds <bounds>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Bounds& dyn_$bounds$k__BackingField();
    // Get instance field reference: private UnityEngine.MeshTopology <topology>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshTopology& dyn_$topology$k__BackingField();
    // Get instance field reference: private System.Int32 <indexStart>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$indexStart$k__BackingField();
    // Get instance field reference: private System.Int32 <indexCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$indexCount$k__BackingField();
    // Get instance field reference: private System.Int32 <baseVertex>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$baseVertex$k__BackingField();
    // Get instance field reference: private System.Int32 <firstVertex>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$firstVertex$k__BackingField();
    // Get instance field reference: private System.Int32 <vertexCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$vertexCount$k__BackingField();
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x215C244
    ::UnityEngine::Bounds get_bounds();
    // public UnityEngine.MeshTopology get_topology()
    // Offset: 0x215C258
    ::UnityEngine::MeshTopology get_topology();
    // public System.Int32 get_indexStart()
    // Offset: 0x215C260
    int get_indexStart();
    // public System.Int32 get_indexCount()
    // Offset: 0x215C268
    int get_indexCount();
    // public System.Void set_indexCount(System.Int32 value)
    // Offset: 0x215C270
    void set_indexCount(int value);
    // public System.Int32 get_baseVertex()
    // Offset: 0x215C278
    int get_baseVertex();
    // public System.Int32 get_firstVertex()
    // Offset: 0x215C280
    int get_firstVertex();
    // public System.Int32 get_vertexCount()
    // Offset: 0x215C288
    int get_vertexCount();
    // public override System.String ToString()
    // Offset: 0x215C290
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Rendering.SubMeshDescriptor
  #pragma pack(pop)
  static check_size<sizeof(SubMeshDescriptor), 44 + sizeof(int)> __UnityEngine_Rendering_SubMeshDescriptorSizeCheck;
  static_assert(sizeof(SubMeshDescriptor) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_bounds
// Il2CppName: get_bounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_bounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_bounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_topology
// Il2CppName: get_topology
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshTopology (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_topology)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_topology", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_indexStart
// Il2CppName: get_indexStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_indexStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_indexStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_indexCount
// Il2CppName: get_indexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_indexCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_indexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::set_indexCount
// Il2CppName: set_indexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::SubMeshDescriptor::*)(int)>(&UnityEngine::Rendering::SubMeshDescriptor::set_indexCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "set_indexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_baseVertex
// Il2CppName: get_baseVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_baseVertex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_baseVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_firstVertex
// Il2CppName: get_firstVertex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_firstVertex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_firstVertex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::get_vertexCount
// Il2CppName: get_vertexCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::get_vertexCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "get_vertexCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::SubMeshDescriptor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Rendering::SubMeshDescriptor::*)()>(&UnityEngine::Rendering::SubMeshDescriptor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::SubMeshDescriptor), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
