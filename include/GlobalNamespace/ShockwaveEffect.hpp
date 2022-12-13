// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/UnityEngine.EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IntSO
  class IntSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ShockwaveEffect
  class ShockwaveEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ShockwaveEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShockwaveEffect*, "", "ShockwaveEffect");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xBC
  #pragma pack(push, 1)
  // Autogenerated type: ShockwaveEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class ShockwaveEffect : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.ParticleSystem _shockwavePS
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::ParticleSystem* shockwavePS;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem*) == 0x8);
    // private IntSO _maxShockwaveParticles
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IntSO* maxShockwaveParticles;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IntSO*) == 0x8);
    // private UnityEngine.ParticleSystem/UnityEngine.EmitParams _shockwavePSEmitParams
    // Size: 0x8F
    // Offset: 0x28
    ::UnityEngine::ParticleSystem::EmitParams shockwavePSEmitParams;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Padding between fields: shockwavePSEmitParams and: prevShockwaveParticleSpawnTime
    char __padding2[0x1] = {};
    // private System.Single _prevShockwaveParticleSpawnTime
    // Size: 0x4
    // Offset: 0xB8
    float prevShockwaveParticleSpawnTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.ParticleSystem _shockwavePS
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem*& dyn__shockwavePS();
    // Get instance field reference: private IntSO _maxShockwaveParticles
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IntSO*& dyn__maxShockwaveParticles();
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.EmitParams _shockwavePSEmitParams
    [[deprecated("Use field access instead!")]] ::UnityEngine::ParticleSystem::EmitParams& dyn__shockwavePSEmitParams();
    // Get instance field reference: private System.Single _prevShockwaveParticleSpawnTime
    [[deprecated("Use field access instead!")]] float& dyn__prevShockwaveParticleSpawnTime();
    // public System.Void .ctor()
    // Offset: 0x141D55C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShockwaveEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ShockwaveEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShockwaveEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x141D370
    void Start();
    // public System.Void SpawnShockwave(UnityEngine.Vector3 pos)
    // Offset: 0x141D484
    void SpawnShockwave(::UnityEngine::Vector3 pos);
  }; // ShockwaveEffect
  #pragma pack(pop)
  static check_size<sizeof(ShockwaveEffect), 184 + sizeof(float)> __GlobalNamespace_ShockwaveEffectSizeCheck;
  static_assert(sizeof(ShockwaveEffect) == 0xBC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ShockwaveEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ShockwaveEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShockwaveEffect::*)()>(&GlobalNamespace::ShockwaveEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShockwaveEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ShockwaveEffect::SpawnShockwave
// Il2CppName: SpawnShockwave
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ShockwaveEffect::*)(::UnityEngine::Vector3)>(&GlobalNamespace::ShockwaveEffect::SpawnShockwave)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ShockwaveEffect*), "SpawnShockwave", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos});
  }
};
