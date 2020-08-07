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
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: CutoutAnimateEffect
  class CutoutAnimateEffect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BaseNoteVisuals
  class BaseNoteVisuals : public UnityEngine::MonoBehaviour {
    public:
    // private NoteController _noteController
    // Offset: 0x18
    GlobalNamespace::NoteController* noteController;
    // private CutoutAnimateEffect _cutoutAnimateEffect
    // Offset: 0x20
    GlobalNamespace::CutoutAnimateEffect* cutoutAnimateEffect;
    // protected System.Void Awake()
    // Offset: 0x1970E24
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1970F04
    void OnDestroy();
    // public System.Void HandleNoteControllerDidInitEvent(NoteController noteController)
    // Offset: 0x1971028
    void HandleNoteControllerDidInitEvent(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteDidStartDissolvingEvent(NoteController noteController, System.Single duration)
    // Offset: 0x1971054
    void HandleNoteDidStartDissolvingEvent(GlobalNamespace::NoteController* noteController, float duration);
    // private System.Void AnimateCutout(System.Single cutoutStart, System.Single cutoutEnd, System.Single duration)
    // Offset: 0x1971064
    void AnimateCutout(float cutoutStart, float cutoutEnd, float duration);
    // public System.Void .ctor()
    // Offset: 0x197108C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BaseNoteVisuals* New_ctor();
  }; // BaseNoteVisuals
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseNoteVisuals*, "", "BaseNoteVisuals");
#pragma pack(pop)