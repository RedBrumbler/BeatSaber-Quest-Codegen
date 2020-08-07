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
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SongTimeAnimationPlayer
  class SongTimeAnimationPlayer : public UnityEngine::MonoBehaviour {
    public:
    // private FloatSO _songTime
    // Offset: 0x18
    GlobalNamespace::FloatSO* songTime;
    // private UnityEngine.AnimationClip _animationClip
    // Offset: 0x20
    UnityEngine::AnimationClip* animationClip;
    // protected System.Void Update()
    // Offset: 0xB879F0
    void Update();
    // public System.Void .ctor()
    // Offset: 0xB87A70
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SongTimeAnimationPlayer* New_ctor();
  }; // SongTimeAnimationPlayer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongTimeAnimationPlayer*, "", "SongTimeAnimationPlayer");
#pragma pack(pop)