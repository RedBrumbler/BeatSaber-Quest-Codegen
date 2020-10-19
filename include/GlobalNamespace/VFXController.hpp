// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: Animation
  class Animation;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VFXController
  class VFXController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VFXController::$MainCoroutine$d__9
    class $MainCoroutine$d__9;
    // private UnityEngine.ParticleSystem[] _particleSystems
    // Offset: 0x18
    ::Array<UnityEngine::ParticleSystem*>* particleSystems;
    // private UnityEngine.Animation _animation
    // Offset: 0x20
    UnityEngine::Animation* animation;
    // private System.Boolean _deactivateAfterAnimationDuration
    // Offset: 0x28
    bool deactivateAfterAnimationDuration;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Animation get_animation()
    // Offset: 0x223FE04
    UnityEngine::Animation* get_animation();
    // public UnityEngine.ParticleSystem[] get_particleSystems()
    // Offset: 0x223FE0C
    ::Array<UnityEngine::ParticleSystem*>* get_particleSystems();
    // protected System.Void Awake()
    // Offset: 0x223FE14
    void Awake();
    // public System.Void Play()
    // Offset: 0x223FE3C
    void Play();
    // private System.Collections.IEnumerator MainCoroutine(System.Boolean deactivateAfterDuration, System.Single duration)
    // Offset: 0x223FF6C
    System::Collections::IEnumerator* MainCoroutine(bool deactivateAfterDuration, float duration);
    // public System.Void .ctor()
    // Offset: 0x2240038
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VFXController* New_ctor();
  }; // VFXController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VFXController*, "", "VFXController");
#pragma pack(pop)