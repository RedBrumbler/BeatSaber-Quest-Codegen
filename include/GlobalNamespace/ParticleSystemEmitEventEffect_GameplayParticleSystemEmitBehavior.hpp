// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ParticleSystemEmitEventEffect
#include "GlobalNamespace/ParticleSystemEmitEventEffect.hpp"
// Including type: ParticleSystemEmitEventEffect/ParticleSystemEmitBehavior
#include "GlobalNamespace/ParticleSystemEmitEventEffect_ParticleSystemEmitBehavior.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PauseController
  class PauseController;
  // Forward declaring type: SongSpeedData
  class SongSpeedData;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BeatmapCallbacksController
  class BeatmapCallbacksController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior*, "", "ParticleSystemEmitEventEffect/GameplayParticleSystemEmitBehavior");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: ParticleSystemEmitEventEffect/GameplayParticleSystemEmitBehavior
  // [TokenAttribute] Offset: FFFFFFFF
  class ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior : public ::GlobalNamespace::ParticleSystemEmitEventEffect::ParticleSystemEmitBehavior {
    public:
    public:
    // private readonly PauseController _pauseController
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::PauseController* pauseController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PauseController*) == 0x8);
    // private readonly SongSpeedData _songSpeedData
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::SongSpeedData* songSpeedData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SongSpeedData*) == 0x8);
    public:
    // Get instance field reference: private readonly PauseController _pauseController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::PauseController*& dyn__pauseController();
    // Get instance field reference: private readonly SongSpeedData _songSpeedData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SongSpeedData*& dyn__songSpeedData();
    // public System.Void .ctor(BasicBeatmapEventType beatmapEvent, UnityEngine.Transform particleSystemParentTransform, System.Int32 particleSystemMaxSpawnedSystems, IAudioTimeSource audioTimeSource, BeatmapCallbacksController beatmapCallbacksController, ParticleSystemEventController/Pool particleSystemEventControllerPool, PauseController pauseController, SongSpeedData songSpeedData)
    // Offset: 0x13911CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior* New_ctor(::GlobalNamespace::BasicBeatmapEventType beatmapEvent, ::UnityEngine::Transform* particleSystemParentTransform, int particleSystemMaxSpawnedSystems, ::GlobalNamespace::IAudioTimeSource* audioTimeSource, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController, ::GlobalNamespace::ParticleSystemEventController::Pool* particleSystemEventControllerPool, ::GlobalNamespace::PauseController* pauseController, ::GlobalNamespace::SongSpeedData* songSpeedData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior*, creationType>(beatmapEvent, particleSystemParentTransform, particleSystemMaxSpawnedSystems, audioTimeSource, beatmapCallbacksController, particleSystemEventControllerPool, pauseController, songSpeedData)));
    }
    // private System.Void HandlePauseControllerDidPause()
    // Offset: 0x13913FC
    void HandlePauseControllerDidPause();
    // private System.Void HandlePauseControllerDidResume()
    // Offset: 0x1391530
    void HandlePauseControllerDidResume();
    // public override System.Void Dispose()
    // Offset: 0x13912EC
    // Implemented from: ParticleSystemEmitEventEffect/ParticleSystemEmitBehavior
    // Base method: System.Void ParticleSystemEmitBehavior::Dispose()
    void Dispose();
    // protected override ParticleSystemEventController EmitParticles(System.Single startTime)
    // Offset: 0x1391664
    // Implemented from: ParticleSystemEmitEventEffect/ParticleSystemEmitBehavior
    // Base method: ParticleSystemEventController ParticleSystemEmitBehavior::EmitParticles(System.Single startTime)
    ::GlobalNamespace::ParticleSystemEventController* EmitParticles(float startTime);
  }; // ParticleSystemEmitEventEffect/GameplayParticleSystemEmitBehavior
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior), 72 + sizeof(::GlobalNamespace::SongSpeedData*)> __GlobalNamespace_ParticleSystemEmitEventEffect_GameplayParticleSystemEmitBehaviorSizeCheck;
  static_assert(sizeof(ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::HandlePauseControllerDidPause
// Il2CppName: HandlePauseControllerDidPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::*)()>(&GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::HandlePauseControllerDidPause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior*), "HandlePauseControllerDidPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::HandlePauseControllerDidResume
// Il2CppName: HandlePauseControllerDidResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::*)()>(&GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::HandlePauseControllerDidResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior*), "HandlePauseControllerDidResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::*)()>(&GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::EmitParticles
// Il2CppName: EmitParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ParticleSystemEventController* (GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::*)(float)>(&GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior::EmitParticles)> {
  static const MethodInfo* get() {
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ParticleSystemEmitEventEffect::GameplayParticleSystemEmitBehavior*), "EmitParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startTime});
  }
};
