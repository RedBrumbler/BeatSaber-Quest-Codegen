// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: UnityEngine.CubemapFace
#include "UnityEngine/CubemapFace.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CubemapHelpers
  class CubemapHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CubemapHelpers
    CubemapHelpers() noexcept {}
    // static field const value: static private System.String kCubemapHelpersShaderName
    static constexpr const char* kCubemapHelpersShaderName = "Hidden/CubemapHelpers";
    // Get static field: static private System.String kCubemapHelpersShaderName
    static ::Il2CppString* _get_kCubemapHelpersShaderName();
    // Set static field: static private System.String kCubemapHelpersShaderName
    static void _set_kCubemapHelpersShaderName(::Il2CppString* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27E6C
    // Get static field: static private UnityEngine.Material _cubemapHelpersMaterial
    static UnityEngine::Material* _get__cubemapHelpersMaterial();
    // Set static field: static private UnityEngine.Material _cubemapHelpersMaterial
    static void _set__cubemapHelpersMaterial(UnityEngine::Material* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27E7C
    // Get static field: static private readonly System.Int32 _cubePropertyId
    static int _get__cubePropertyId();
    // Set static field: static private readonly System.Int32 _cubePropertyId
    static void _set__cubePropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27E8C
    // Get static field: static private readonly System.Int32 _cubeFaceNumberId
    static int _get__cubeFaceNumberId();
    // Set static field: static private readonly System.Int32 _cubeFaceNumberId
    static void _set__cubeFaceNumberId(int value);
    // static field const value: static private System.Int32 kCubemapDownsamplePass
    static constexpr const int kCubemapDownsamplePass = 0;
    // Get static field: static private System.Int32 kCubemapDownsamplePass
    static int _get_kCubemapDownsamplePass();
    // Set static field: static private System.Int32 kCubemapDownsamplePass
    static void _set_kCubemapDownsamplePass(int value);
    // static field const value: static private System.Int32 kCubemapTo2DTexturePass
    static constexpr const int kCubemapTo2DTexturePass = 1;
    // Get static field: static private System.Int32 kCubemapTo2DTexturePass
    static int _get_kCubemapTo2DTexturePass();
    // Set static field: static private System.Int32 kCubemapTo2DTexturePass
    static void _set_kCubemapTo2DTexturePass(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27E9C
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<UnityEngine.CubemapFace,System.Int32> _cubemapFaceToCubeFaceNumberDict
    static System::Collections::Generic::Dictionary_2<UnityEngine::CubemapFace, int>* _get__cubemapFaceToCubeFaceNumberDict();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<UnityEngine.CubemapFace,System.Int32> _cubemapFaceToCubeFaceNumberDict
    static void _set__cubemapFaceToCubeFaceNumberDict(System::Collections::Generic::Dictionary_2<UnityEngine::CubemapFace, int>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27EAC
    // Get static field: static private readonly UnityEngine.CubemapFace[] _cubemapFaces
    static ::Array<UnityEngine::CubemapFace>* _get__cubemapFaces();
    // Set static field: static private readonly UnityEngine.CubemapFace[] _cubemapFaces
    static void _set__cubemapFaces(::Array<UnityEngine::CubemapFace>* value);
    // static private UnityEngine.Material get_cubemapHelpersMaterial()
    // Offset: 0x1198670
    static UnityEngine::Material* get_cubemapHelpersMaterial();
    // static private System.Void Downsample(UnityEngine.Texture src, UnityEngine.RenderTexture dest)
    // Offset: 0x119879C
    static void Downsample(UnityEngine::Texture* src, UnityEngine::RenderTexture* dest);
    // static public UnityEngine.RenderTexture CreateDownsampledCubemap(UnityEngine.RenderTexture src, System.Int32 count)
    // Offset: 0x1198A90
    static UnityEngine::RenderTexture* CreateDownsampledCubemap(UnityEngine::RenderTexture* src, int count);
    // static public UnityEngine.RenderTexture Create2DTextureFromCubemap(UnityEngine.RenderTexture src)
    // Offset: 0x1198C7C
    static UnityEngine::RenderTexture* Create2DTextureFromCubemap(UnityEngine::RenderTexture* src);
    // static private System.Void DrawCubemapFace(UnityEngine.Texture cubemap, UnityEngine.CubemapFace cubemapFace)
    // Offset: 0x11988DC
    static void DrawCubemapFace(UnityEngine::Texture* cubemap, UnityEngine::CubemapFace cubemapFace);
    // static private System.Void .cctor()
    // Offset: 0x1198DD0
    static void _cctor();
  }; // CubemapHelpers
  #pragma pack(pop)
  // Writing MetadataGetter for method: CubemapHelpers::get_cubemapHelpersMaterial
  // Il2CppName: get_cubemapHelpersMaterial
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Material* (*)()>(&CubemapHelpers::get_cubemapHelpersMaterial)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(CubemapHelpers*), "get_cubemapHelpersMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: CubemapHelpers::Downsample
  // Il2CppName: Downsample
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Texture*, UnityEngine::RenderTexture*)>(&CubemapHelpers::Downsample)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(CubemapHelpers*), "Downsample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Texture*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RenderTexture*>()});
    }
  };
  // Writing MetadataGetter for method: CubemapHelpers::CreateDownsampledCubemap
  // Il2CppName: CreateDownsampledCubemap
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture* (*)(UnityEngine::RenderTexture*, int)>(&CubemapHelpers::CreateDownsampledCubemap)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(CubemapHelpers*), "CreateDownsampledCubemap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::RenderTexture*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: CubemapHelpers::Create2DTextureFromCubemap
  // Il2CppName: Create2DTextureFromCubemap
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RenderTexture* (*)(UnityEngine::RenderTexture*)>(&CubemapHelpers::Create2DTextureFromCubemap)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(CubemapHelpers*), "Create2DTextureFromCubemap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::RenderTexture*>()});
    }
  };
  // Writing MetadataGetter for method: CubemapHelpers::DrawCubemapFace
  // Il2CppName: DrawCubemapFace
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Texture*, UnityEngine::CubemapFace)>(&CubemapHelpers::DrawCubemapFace)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(CubemapHelpers*), "DrawCubemapFace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Texture*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::CubemapFace>()});
    }
  };
  // Writing MetadataGetter for method: CubemapHelpers::_cctor
  // Il2CppName: .cctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&CubemapHelpers::_cctor)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(CubemapHelpers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CubemapHelpers*, "", "CubemapHelpers");
