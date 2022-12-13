// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassBackgroundNonLightRendererCore
#include "GlobalNamespace/BloomPrePassBackgroundNonLightRendererCore.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundNonLightRenderer
  class BloomPrePassBackgroundNonLightRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*, "", "BloomPrePassBackgroundNonLightRenderer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundNonLightRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class BloomPrePassBackgroundNonLightRenderer : public ::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore {
    public:
    public:
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Renderer*) == 0x8);
    // private UnityEngine.MeshFilter _meshFilter
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::MeshFilter* meshFilter;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private System.Boolean _isPartOfInstancedRendering
    // Size: 0x1
    // Offset: 0x48
    bool isPartOfInstancedRendering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPartOfInstancedRendering and: cachedTransform
    char __padding2[0x7] = {};
    // private UnityEngine.Transform _cachedTransform
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* cachedTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Renderer _renderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Renderer*& dyn__renderer();
    // Get instance field reference: private UnityEngine.MeshFilter _meshFilter
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn__meshFilter();
    // Get instance field reference: private System.Boolean _isPartOfInstancedRendering
    [[deprecated("Use field access instead!")]] bool& dyn__isPartOfInstancedRendering();
    // Get instance field reference: private UnityEngine.Transform _cachedTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__cachedTransform();
    // public UnityEngine.MeshFilter get_meshFilter()
    // Offset: 0x1CD182C
    ::UnityEngine::MeshFilter* get_meshFilter();
    // public UnityEngine.Transform get_cachedTransform()
    // Offset: 0x1CD1834
    ::UnityEngine::Transform* get_cachedTransform();
    // public System.Void set_isPartOfInstancedRendering(System.Boolean value)
    // Offset: 0x1CD0D78
    void set_isPartOfInstancedRendering(bool value);
    // public override UnityEngine.Renderer get_renderer()
    // Offset: 0x1CD1824
    // Implemented from: BloomPrePassBackgroundNonLightRendererCore
    // Base method: UnityEngine.Renderer BloomPrePassBackgroundNonLightRendererCore::get_renderer()
    ::UnityEngine::Renderer* get_renderer();
    // public System.Void .ctor()
    // Offset: 0x1CD1C1C
    // Implemented from: BloomPrePassBackgroundNonLightRendererCore
    // Base method: System.Void BloomPrePassBackgroundNonLightRendererCore::.ctor()
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundNonLightRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundNonLightRenderer*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x1CD19F8
    // Implemented from: BloomPrePassBackgroundNonLightRendererCore
    // Base method: System.Void BloomPrePassBackgroundNonLightRendererCore::Awake()
    void Awake();
    // protected override System.Void OnEnable()
    // Offset: 0x1CD1A3C
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::OnEnable()
    void OnEnable();
    // protected override System.Void OnValidate()
    // Offset: 0x1CD1A50
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::OnValidate()
    void OnValidate();
    // protected override System.Void InitIfNeeded()
    // Offset: 0x1CD1A94
    // Implemented from: BloomPrePassBackgroundNonLightRendererCore
    // Base method: System.Void BloomPrePassBackgroundNonLightRendererCore::InitIfNeeded()
    void InitIfNeeded();
  }; // BloomPrePassBackgroundNonLightRenderer
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundNonLightRenderer), 80 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_BloomPrePassBackgroundNonLightRendererSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundNonLightRenderer) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::get_meshFilter
// Il2CppName: get_meshFilter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::MeshFilter* (GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::get_meshFilter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*), "get_meshFilter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::get_cachedTransform
// Il2CppName: get_cachedTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::get_cachedTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*), "get_cachedTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::set_isPartOfInstancedRendering
// Il2CppName: set_isPartOfInstancedRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::*)(bool)>(&GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::set_isPartOfInstancedRendering)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*), "set_isPartOfInstancedRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::get_renderer
// Il2CppName: get_renderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Renderer* (GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::get_renderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*), "get_renderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::InitIfNeeded
// Il2CppName: InitIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightRenderer::InitIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*), "InitIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
