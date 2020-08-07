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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRCameraRig
  class OVRCameraRig : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform <trackingSpace>k__BackingField
    // Offset: 0x18
    UnityEngine::Transform* trackingSpace;
    // private UnityEngine.Transform <leftEyeAnchor>k__BackingField
    // Offset: 0x20
    UnityEngine::Transform* leftEyeAnchor;
    // private UnityEngine.Transform <centerEyeAnchor>k__BackingField
    // Offset: 0x28
    UnityEngine::Transform* centerEyeAnchor;
    // private UnityEngine.Transform <rightEyeAnchor>k__BackingField
    // Offset: 0x30
    UnityEngine::Transform* rightEyeAnchor;
    // private UnityEngine.Transform <leftHandAnchor>k__BackingField
    // Offset: 0x38
    UnityEngine::Transform* leftHandAnchor;
    // private UnityEngine.Transform <rightHandAnchor>k__BackingField
    // Offset: 0x40
    UnityEngine::Transform* rightHandAnchor;
    // private UnityEngine.Transform <leftControllerAnchor>k__BackingField
    // Offset: 0x48
    UnityEngine::Transform* leftControllerAnchor;
    // private UnityEngine.Transform <rightControllerAnchor>k__BackingField
    // Offset: 0x50
    UnityEngine::Transform* rightControllerAnchor;
    // private UnityEngine.Transform <trackerAnchor>k__BackingField
    // Offset: 0x58
    UnityEngine::Transform* trackerAnchor;
    // private System.Action`1<OVRCameraRig> UpdatedAnchors
    // Offset: 0x60
    System::Action_1<GlobalNamespace::OVRCameraRig*>* UpdatedAnchors;
    // public System.Boolean usePerEyeCameras
    // Offset: 0x68
    bool usePerEyeCameras;
    // public System.Boolean useFixedUpdateForTracking
    // Offset: 0x69
    bool useFixedUpdateForTracking;
    // public System.Boolean disableEyeAnchorCameras
    // Offset: 0x6A
    bool disableEyeAnchorCameras;
    // protected System.Boolean _skipUpdate
    // Offset: 0x6B
    bool skipUpdate;
    // protected readonly System.String trackingSpaceName
    // Offset: 0x70
    ::Il2CppString* trackingSpaceName;
    // protected readonly System.String trackerAnchorName
    // Offset: 0x78
    ::Il2CppString* trackerAnchorName;
    // protected readonly System.String leftEyeAnchorName
    // Offset: 0x80
    ::Il2CppString* leftEyeAnchorName;
    // protected readonly System.String centerEyeAnchorName
    // Offset: 0x88
    ::Il2CppString* centerEyeAnchorName;
    // protected readonly System.String rightEyeAnchorName
    // Offset: 0x90
    ::Il2CppString* rightEyeAnchorName;
    // protected readonly System.String leftHandAnchorName
    // Offset: 0x98
    ::Il2CppString* leftHandAnchorName;
    // protected readonly System.String rightHandAnchorName
    // Offset: 0xA0
    ::Il2CppString* rightHandAnchorName;
    // protected readonly System.String leftControllerAnchorName
    // Offset: 0xA8
    ::Il2CppString* leftControllerAnchorName;
    // protected readonly System.String rightControllerAnchorName
    // Offset: 0xB0
    ::Il2CppString* rightControllerAnchorName;
    // protected UnityEngine.Camera _centerEyeCamera
    // Offset: 0xB8
    UnityEngine::Camera* centerEyeCamera;
    // protected UnityEngine.Camera _leftEyeCamera
    // Offset: 0xC0
    UnityEngine::Camera* leftEyeCamera;
    // protected UnityEngine.Camera _rightEyeCamera
    // Offset: 0xC8
    UnityEngine::Camera* rightEyeCamera;
    // public UnityEngine.Camera get_leftEyeCamera()
    // Offset: 0xCB24B8
    UnityEngine::Camera* get_leftEyeCamera();
    // public UnityEngine.Camera get_rightEyeCamera()
    // Offset: 0xCB24D4
    UnityEngine::Camera* get_rightEyeCamera();
    // public UnityEngine.Transform get_trackingSpace()
    // Offset: 0xCB24F0
    UnityEngine::Transform* get_trackingSpace();
    // private System.Void set_trackingSpace(UnityEngine.Transform value)
    // Offset: 0xCB24F8
    void set_trackingSpace(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_leftEyeAnchor()
    // Offset: 0xCB2500
    UnityEngine::Transform* get_leftEyeAnchor();
    // private System.Void set_leftEyeAnchor(UnityEngine.Transform value)
    // Offset: 0xCB2508
    void set_leftEyeAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_centerEyeAnchor()
    // Offset: 0xCB2510
    UnityEngine::Transform* get_centerEyeAnchor();
    // private System.Void set_centerEyeAnchor(UnityEngine.Transform value)
    // Offset: 0xCB2518
    void set_centerEyeAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_rightEyeAnchor()
    // Offset: 0xCB2520
    UnityEngine::Transform* get_rightEyeAnchor();
    // private System.Void set_rightEyeAnchor(UnityEngine.Transform value)
    // Offset: 0xCB2528
    void set_rightEyeAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_leftHandAnchor()
    // Offset: 0xCB2530
    UnityEngine::Transform* get_leftHandAnchor();
    // private System.Void set_leftHandAnchor(UnityEngine.Transform value)
    // Offset: 0xCB2538
    void set_leftHandAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_rightHandAnchor()
    // Offset: 0xCB2540
    UnityEngine::Transform* get_rightHandAnchor();
    // private System.Void set_rightHandAnchor(UnityEngine.Transform value)
    // Offset: 0xCB2548
    void set_rightHandAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_leftControllerAnchor()
    // Offset: 0xCB2550
    UnityEngine::Transform* get_leftControllerAnchor();
    // private System.Void set_leftControllerAnchor(UnityEngine.Transform value)
    // Offset: 0xCB2558
    void set_leftControllerAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_rightControllerAnchor()
    // Offset: 0xCB2560
    UnityEngine::Transform* get_rightControllerAnchor();
    // private System.Void set_rightControllerAnchor(UnityEngine.Transform value)
    // Offset: 0xCB2568
    void set_rightControllerAnchor(UnityEngine::Transform* value);
    // public UnityEngine.Transform get_trackerAnchor()
    // Offset: 0xCB2570
    UnityEngine::Transform* get_trackerAnchor();
    // private System.Void set_trackerAnchor(UnityEngine.Transform value)
    // Offset: 0xCB2578
    void set_trackerAnchor(UnityEngine::Transform* value);
    // public System.Void add_UpdatedAnchors(System.Action`1<OVRCameraRig> value)
    // Offset: 0xCB2580
    void add_UpdatedAnchors(System::Action_1<GlobalNamespace::OVRCameraRig*>* value);
    // public System.Void remove_UpdatedAnchors(System.Action`1<OVRCameraRig> value)
    // Offset: 0xCB2624
    void remove_UpdatedAnchors(System::Action_1<GlobalNamespace::OVRCameraRig*>* value);
    // protected System.Void Awake()
    // Offset: 0xCB26C8
    void Awake();
    // protected System.Void Start()
    // Offset: 0xCB26DC
    void Start();
    // protected System.Void FixedUpdate()
    // Offset: 0xCB276C
    void FixedUpdate();
    // protected System.Void Update()
    // Offset: 0xCB278C
    void Update();
    // protected System.Void OnDestroy()
    // Offset: 0xCB27B0
    void OnDestroy();
    // protected System.Void UpdateAnchors(System.Boolean updateEyeAnchors, System.Boolean updateHandAnchors)
    // Offset: 0xCB2828
    void UpdateAnchors(bool updateEyeAnchors, bool updateHandAnchors);
    // protected System.Void OnBeforeRenderCallback()
    // Offset: 0xCB369C
    void OnBeforeRenderCallback();
    // protected System.Void RaiseUpdatedAnchorsEvent()
    // Offset: 0xCB37A8
    void RaiseUpdatedAnchorsEvent();
    // public System.Void EnsureGameObjectIntegrity()
    // Offset: 0xCB380C
    void EnsureGameObjectIntegrity();
    // protected UnityEngine.Transform ConfigureAnchor(UnityEngine.Transform root, System.String name)
    // Offset: 0xCB4190
    UnityEngine::Transform* ConfigureAnchor(UnityEngine::Transform* root, ::Il2CppString* name);
    // public UnityEngine.Matrix4x4 ComputeTrackReferenceMatrix()
    // Offset: 0xCB43C8
    UnityEngine::Matrix4x4 ComputeTrackReferenceMatrix();
    // public System.Void .ctor()
    // Offset: 0xCB46C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRCameraRig* New_ctor();
  }; // OVRCameraRig
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCameraRig*, "", "OVRCameraRig");
#pragma pack(pop)