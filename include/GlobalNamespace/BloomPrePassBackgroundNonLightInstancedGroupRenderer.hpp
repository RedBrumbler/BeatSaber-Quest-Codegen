// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassNonLightPass
#include "GlobalNamespace/BloomPrePassNonLightPass.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundNonLightRenderer
  class BloomPrePassBackgroundNonLightRenderer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundNonLightInstancedGroupRenderer
  class BloomPrePassBackgroundNonLightInstancedGroupRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*, "", "BloomPrePassBackgroundNonLightInstancedGroupRenderer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundNonLightInstancedGroupRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class BloomPrePassBackgroundNonLightInstancedGroupRenderer : public ::GlobalNamespace::BloomPrePassNonLightPass {
    public:
    // Nested type: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty
    class SupportedProperty;
    // Nested type: ::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::PropertyType
    struct PropertyType;
    public:
    // private BloomPrePassBackgroundNonLightRenderer[] _renderers
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*> renderers;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>) == 0x8);
    // [SpaceAttribute] Offset: 0x1109EE0
    // private BloomPrePassBackgroundNonLightInstancedGroupRenderer/SupportedProperty[] _supportedProperties
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty*> supportedProperties;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty*>) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Single[]> _reusableFloatArrays
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float>>* reusableFloatArrays;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float>>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector4[]> _reusableVectorArrays
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4>>* reusableVectorArrays;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4>>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Matrix4x4[]> _reusableMatrixArrays
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4>>* reusableMatrixArrays;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4>>*) == 0x8);
    // private System.Int32 _reusableArraysSize
    // Size: 0x4
    // Offset: 0x48
    int reusableArraysSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: reusableArraysSize and: commandBuffer
    char __padding5[0x4] = {};
    // private UnityEngine.Rendering.CommandBuffer _commandBuffer
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Rendering::CommandBuffer* commandBuffer;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CommandBuffer*) == 0x8);
    // private UnityEngine.MaterialPropertyBlock _reusableSetMaterialPropertyBlock
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::MaterialPropertyBlock* reusableSetMaterialPropertyBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    // private UnityEngine.MaterialPropertyBlock _reusableGetMaterialPropertyBlock
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::MaterialPropertyBlock* reusableGetMaterialPropertyBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    public:
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1109F18
    // Get static field: static private readonly System.Int32 _worldSpaceCameraPosID
    static int _get__worldSpaceCameraPosID();
    // Set static field: static private readonly System.Int32 _worldSpaceCameraPosID
    static void _set__worldSpaceCameraPosID(int value);
    // static field const value: static private System.String kInternalMatricesCachingId
    static constexpr const char* kInternalMatricesCachingId = "INTERNAL_MATRICES";
    // Get static field: static private System.String kInternalMatricesCachingId
    static ::StringW _get_kInternalMatricesCachingId();
    // Set static field: static private System.String kInternalMatricesCachingId
    static void _set_kInternalMatricesCachingId(::StringW value);
    // Get instance field reference: private BloomPrePassBackgroundNonLightRenderer[] _renderers
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightRenderer*>& dyn__renderers();
    // Get instance field reference: private BloomPrePassBackgroundNonLightInstancedGroupRenderer/SupportedProperty[] _supportedProperties
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::SupportedProperty*>& dyn__supportedProperties();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,System.Single[]> _reusableFloatArrays
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<float>>*& dyn__reusableFloatArrays();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector4[]> _reusableVectorArrays
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Vector4>>*& dyn__reusableVectorArrays();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Matrix4x4[]> _reusableMatrixArrays
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::ArrayW<::UnityEngine::Matrix4x4>>*& dyn__reusableMatrixArrays();
    // Get instance field reference: private System.Int32 _reusableArraysSize
    [[deprecated("Use field access instead!")]] int& dyn__reusableArraysSize();
    // Get instance field reference: private UnityEngine.Rendering.CommandBuffer _commandBuffer
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CommandBuffer*& dyn__commandBuffer();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _reusableSetMaterialPropertyBlock
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn__reusableSetMaterialPropertyBlock();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _reusableGetMaterialPropertyBlock
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn__reusableGetMaterialPropertyBlock();
    // protected System.Void Awake()
    // Offset: 0x1CE22BC
    void Awake();
    // private System.Void InitIfNeeded()
    // Offset: 0x1CE22C0
    void InitIfNeeded();
    // private UnityEngine.Matrix4x4[] GetCachedMatrixArray(System.String propertyName)
    // Offset: 0x1CE2B98
    ::ArrayW<::UnityEngine::Matrix4x4> GetCachedMatrixArray(::StringW propertyName);
    // private System.Single[] GetCachedFloatArray(System.String propertyName)
    // Offset: 0x1CE2D30
    ::ArrayW<float> GetCachedFloatArray(::StringW propertyName);
    // private UnityEngine.Vector4[] GetCachedVectorArray(System.String propertyName)
    // Offset: 0x1CE2C64
    ::ArrayW<::UnityEngine::Vector4> GetCachedVectorArray(::StringW propertyName);
    // private System.Void AutoFillRenderers()
    // Offset: 0x1CE2DFC
    void AutoFillRenderers();
    // public System.Void .ctor()
    // Offset: 0x1CE2E54
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundNonLightInstancedGroupRenderer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundNonLightInstancedGroupRenderer*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1CE2F34
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::.cctor()
    static void _cctor();
    // public override System.Void Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    // Offset: 0x1CE252C
    // Implemented from: BloomPrePassNonLightPass
    // Base method: System.Void BloomPrePassNonLightPass::Render(UnityEngine.RenderTexture dest, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix)
    void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);
  }; // BloomPrePassBackgroundNonLightInstancedGroupRenderer
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundNonLightInstancedGroupRenderer), 96 + sizeof(::UnityEngine::MaterialPropertyBlock*)> __GlobalNamespace_BloomPrePassBackgroundNonLightInstancedGroupRendererSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundNonLightInstancedGroupRenderer) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::InitIfNeeded
// Il2CppName: InitIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::InitIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*), "InitIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedMatrixArray
// Il2CppName: GetCachedMatrixArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Matrix4x4> (GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)(::StringW)>(&GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedMatrixArray)> {
  static const MethodInfo* get() {
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*), "GetCachedMatrixArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedFloatArray
// Il2CppName: GetCachedFloatArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)(::StringW)>(&GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedFloatArray)> {
  static const MethodInfo* get() {
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*), "GetCachedFloatArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedVectorArray
// Il2CppName: GetCachedVectorArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector4> (GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)(::StringW)>(&GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::GetCachedVectorArray)> {
  static const MethodInfo* get() {
    static auto* propertyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*), "GetCachedVectorArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::AutoFillRenderers
// Il2CppName: AutoFillRenderers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::AutoFillRenderers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*), "AutoFillRenderers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::Render
// Il2CppName: Render
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::*)(::UnityEngine::RenderTexture*, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4)>(&GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer::Render)> {
  static const MethodInfo* get() {
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundNonLightInstancedGroupRenderer*), "Render", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest, viewMatrix, projectionMatrix});
  }
};
