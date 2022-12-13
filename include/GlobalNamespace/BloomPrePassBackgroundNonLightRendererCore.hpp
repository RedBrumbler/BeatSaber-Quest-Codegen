// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassNonLightPass
#include "GlobalNamespace/BloomPrePassNonLightPass.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundNonLightRendererCore
  class BloomPrePassBackgroundNonLightRendererCore;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*, "", "BloomPrePassBackgroundNonLightRendererCore");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundNonLightRendererCore
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class BloomPrePassBackgroundNonLightRendererCore : public ::GlobalNamespace::BloomPrePassNonLightPass {
    public:
    public:
    // protected System.Boolean _keepDefaultRendering
    // Size: 0x1
    // Offset: 0x20
    bool keepDefaultRendering;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _useCustomMaterial
    // Size: 0x1
    // Offset: 0x21
    bool useCustomMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useCustomMaterial and: customMaterial
    char __padding1[0x6] = {};
    // [DrawIfAttribute] Offset: 0x110537C
    // [NullAllowed] Offset: 0x110537C
    // private UnityEngine.Material _customMaterial
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* customMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Rendering.CommandBuffer _commandBuffer
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Rendering::CommandBuffer* commandBuffer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CommandBuffer*) == 0x8);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1105434
    // Get static field: static private readonly System.Int32 _worldSpaceCameraPosID
    static int _get__worldSpaceCameraPosID();
    // Set static field: static private readonly System.Int32 _worldSpaceCameraPosID
    static void _set__worldSpaceCameraPosID(int value);
    // Get instance field reference: protected System.Boolean _keepDefaultRendering
    [[deprecated("Use field access instead!")]] bool& dyn__keepDefaultRendering();
    // Get instance field reference: private System.Boolean _useCustomMaterial
    [[deprecated("Use field access instead!")]] bool& dyn__useCustomMaterial();
    // Get instance field reference: private UnityEngine.Material _customMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__customMaterial();
    // Get instance field reference: private UnityEngine.Rendering.CommandBuffer _commandBuffer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CommandBuffer*& dyn__commandBuffer();
    // public UnityEngine.Renderer get_renderer()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Renderer* get_renderer();
    // protected System.Void InitIfNeeded()
    // Offset: 0x1CD1B6C
    void InitIfNeeded();
    // protected System.Void Awake()
    // Offset: 0x1CD1A30
    void Awake();
    // protected System.Void .ctor()
    // Offset: 0x1CD1C80
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundNonLightRendererCore* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundNonLightRendererCore*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CD1F14
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.cctor()
    static void _cctor();
    // public override System.Void Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    // Offset: 0x1CD1CE8
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);
  }; // BloomPrePassBackgroundNonLightRendererCore
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundNonLightRendererCore), 48 + sizeof(::UnityEngine::Rendering::CommandBuffer*)> __GlobalNamespace_BloomPrePassBackgroundNonLightRendererCoreSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundNonLightRendererCore) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::get_renderer
// Il2CppName: get_renderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Renderer* (GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::get_renderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*), "get_renderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::InitIfNeeded
// Il2CppName: InitIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::InitIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*), "InitIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::*)(::UnityEngine::RenderTexture*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore::Render)> {
  static const MethodInfo* get() {
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightRendererCore*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, viewMatrix, projectionMatrix});
  }
};
