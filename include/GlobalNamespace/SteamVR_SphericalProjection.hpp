// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_SphericalProjection
  // [ExecuteInEditMode] Offset: DD3168
  class SteamVR_SphericalProjection : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: SteamVR_SphericalProjection
    SteamVR_SphericalProjection() noexcept {}
    // Get static field: static private UnityEngine.Material material
    static UnityEngine::Material* _get_material();
    // Set static field: static private UnityEngine.Material material
    static void _set_material(UnityEngine::Material* value);
    // public System.Void Set(UnityEngine.Vector3 N, System.Single phi0, System.Single phi1, System.Single theta0, System.Single theta1, UnityEngine.Vector3 uAxis, UnityEngine.Vector3 uOrigin, System.Single uScale, UnityEngine.Vector3 vAxis, UnityEngine.Vector3 vOrigin, System.Single vScale)
    // Offset: 0x13DDEEC
    void Set(UnityEngine::Vector3 N, float phi0, float phi1, float theta0, float theta1, UnityEngine::Vector3 uAxis, UnityEngine::Vector3 uOrigin, float uScale, UnityEngine::Vector3 vAxis, UnityEngine::Vector3 vOrigin, float vScale);
    // private System.Void OnRenderImage(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x13DE28C
    void OnRenderImage(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest);
    // public System.Void .ctor()
    // Offset: 0x13DE31C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_SphericalProjection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_SphericalProjection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_SphericalProjection*, creationType>()));
    }
  }; // SteamVR_SphericalProjection
  #pragma pack(pop)
  // Writing MetadataGetter for method: SteamVR_SphericalProjection::Set
  // Il2CppName: Set
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_SphericalProjection::*)(UnityEngine::Vector3, float, float, float, float, UnityEngine::Vector3, UnityEngine::Vector3, float, UnityEngine::Vector3, UnityEngine::Vector3, float)>(&SteamVR_SphericalProjection::Set)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_SphericalProjection*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>(), ::il2cpp_utils::ExtractIndependentType<float>()});
    }
  };
  // Writing MetadataGetter for method: SteamVR_SphericalProjection::OnRenderImage
  // Il2CppName: OnRenderImage
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_SphericalProjection::*)(UnityEngine::RenderTexture*, UnityEngine::RenderTexture*)>(&SteamVR_SphericalProjection::OnRenderImage)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_SphericalProjection*), "OnRenderImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::RenderTexture*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RenderTexture*>()});
    }
  };
  // Writing MetadataGetter for method: SteamVR_SphericalProjection::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_SphericalProjection::*)()>(&SteamVR_SphericalProjection::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_SphericalProjection*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (SteamVR_SphericalProjection::*)()>(&SteamVR_SphericalProjection::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(SteamVR_SphericalProjection*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_SphericalProjection*, "", "SteamVR_SphericalProjection");
