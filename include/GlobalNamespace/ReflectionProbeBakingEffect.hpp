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
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ReflectionProbeBakingEffect
  // [ExecuteAlways] Offset: DF5A08
  // [ImageEffectAllowedInSceneView] Offset: DF5A08
  class ReflectionProbeBakingEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: ReflectionProbeBakingEffect
    ReflectionProbeBakingEffect(UnityEngine::Material* material_ = {}) noexcept : material{material_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnRenderImage(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x1D921C0
    void OnRenderImage(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest);
    // public System.Void .ctor()
    // Offset: 0x1D92244
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionProbeBakingEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ReflectionProbeBakingEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionProbeBakingEffect*, creationType>()));
    }
  }; // ReflectionProbeBakingEffect
  #pragma pack(pop)
  static check_size<sizeof(ReflectionProbeBakingEffect), 24 + sizeof(UnityEngine::Material*)> __GlobalNamespace_ReflectionProbeBakingEffectSizeCheck;
  static_assert(sizeof(ReflectionProbeBakingEffect) == 0x20);
  // Writing MetadataGetter for method: ReflectionProbeBakingEffect::OnRenderImage
  // Il2CppName: OnRenderImage
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ReflectionProbeBakingEffect::*)(UnityEngine::RenderTexture*, UnityEngine::RenderTexture*)>(&ReflectionProbeBakingEffect::OnRenderImage)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ReflectionProbeBakingEffect*), "OnRenderImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::RenderTexture*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::RenderTexture*>()});
    }
  };
  // Writing MetadataGetter for method: ReflectionProbeBakingEffect::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ReflectionProbeBakingEffect::*)()>(&ReflectionProbeBakingEffect::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ReflectionProbeBakingEffect*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (ReflectionProbeBakingEffect::*)()>(&ReflectionProbeBakingEffect::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(ReflectionProbeBakingEffect*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReflectionProbeBakingEffect*, "", "ReflectionProbeBakingEffect");
