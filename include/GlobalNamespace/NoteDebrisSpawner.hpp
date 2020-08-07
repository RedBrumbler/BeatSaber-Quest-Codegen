// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: NoteDebris
#include "GlobalNamespace/NoteDebris.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
  // Forward declaring type: INoteController
  class INoteController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteDebrisSpawner
  class NoteDebrisSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private NoteDebris/Pool _noteDebrisPool
    // Offset: 0x18
    GlobalNamespace::NoteDebris::Pool* noteDebrisPool;
    // static field const value: static private System.Single kMinLifeTime
    static constexpr const float kMinLifeTime = 0.8;
    // Get static field: static private System.Single kMinLifeTime
    static float _get_kMinLifeTime();
    // Set static field: static private System.Single kMinLifeTime
    static void _set_kMinLifeTime(float value);
    // static field const value: static private System.Single kMaxLifeTime
    static constexpr const float kMaxLifeTime = 1.5;
    // Get static field: static private System.Single kMaxLifeTime
    static float _get_kMaxLifeTime();
    // Set static field: static private System.Single kMaxLifeTime
    static void _set_kMaxLifeTime(float value);
    // static field const value: static private System.Single kLifeTimeOffset
    static constexpr const float kLifeTimeOffset = 0.4;
    // Get static field: static private System.Single kLifeTimeOffset
    static float _get_kLifeTimeOffset();
    // Set static field: static private System.Single kLifeTimeOffset
    static void _set_kLifeTimeOffset(float value);
    // public System.Void SpawnDebris(NoteCutInfo noteCutInfo, INoteController noteController, UnityEngine.Vector3 moveVec)
    // Offset: 0xC01010
    void SpawnDebris(GlobalNamespace::NoteCutInfo* noteCutInfo, GlobalNamespace::INoteController* noteController, UnityEngine::Vector3 moveVec);
    // private System.Void HandleNoteDebrisDidFinish(NoteDebris noteDebris)
    // Offset: 0xC044E8
    void HandleNoteDebrisDidFinish(GlobalNamespace::NoteDebris* noteDebris);
    // public System.Void .ctor()
    // Offset: 0xC04594
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteDebrisSpawner* New_ctor();
  }; // NoteDebrisSpawner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisSpawner*, "", "NoteDebrisSpawner");
#pragma pack(pop)