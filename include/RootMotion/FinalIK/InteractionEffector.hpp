// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: InteractionObject
  class InteractionObject;
  // Forward declaring type: Poser
  class Poser;
  // Forward declaring type: IKEffector
  class IKEffector;
  // Forward declaring type: InteractionTarget
  class InteractionTarget;
  // Forward declaring type: InteractionSystem
  class InteractionSystem;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.InteractionEffector
  class InteractionEffector : public ::Il2CppObject {
    public:
    // private RootMotion.FinalIK.FullBodyBipedEffector <effectorType>k__BackingField
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effectorType;
    // private System.Boolean <isPaused>k__BackingField
    // Offset: 0x14
    bool isPaused;
    // private RootMotion.FinalIK.InteractionObject <interactionObject>k__BackingField
    // Offset: 0x18
    RootMotion::FinalIK::InteractionObject* interactionObject;
    // private RootMotion.FinalIK.Poser poser
    // Offset: 0x20
    RootMotion::FinalIK::Poser* poser;
    // private RootMotion.FinalIK.IKEffector effector
    // Offset: 0x28
    RootMotion::FinalIK::IKEffector* effector;
    // private System.Single timer
    // Offset: 0x30
    float timer;
    // private System.Single length
    // Offset: 0x34
    float length;
    // private System.Single weight
    // Offset: 0x38
    float weight;
    // private System.Single fadeInSpeed
    // Offset: 0x3C
    float fadeInSpeed;
    // private System.Single defaultPositionWeight
    // Offset: 0x40
    float defaultPositionWeight;
    // private System.Single defaultRotationWeight
    // Offset: 0x44
    float defaultRotationWeight;
    // private System.Single defaultPull
    // Offset: 0x48
    float defaultPull;
    // private System.Single defaultReach
    // Offset: 0x4C
    float defaultReach;
    // private System.Single defaultPush
    // Offset: 0x50
    float defaultPush;
    // private System.Single defaultPushParent
    // Offset: 0x54
    float defaultPushParent;
    // private System.Single defaultBendGoalWeight
    // Offset: 0x58
    float defaultBendGoalWeight;
    // private System.Single resetTimer
    // Offset: 0x5C
    float resetTimer;
    // private System.Boolean positionWeightUsed
    // Offset: 0x60
    bool positionWeightUsed;
    // private System.Boolean rotationWeightUsed
    // Offset: 0x61
    bool rotationWeightUsed;
    // private System.Boolean pullUsed
    // Offset: 0x62
    bool pullUsed;
    // private System.Boolean reachUsed
    // Offset: 0x63
    bool reachUsed;
    // private System.Boolean pushUsed
    // Offset: 0x64
    bool pushUsed;
    // private System.Boolean pushParentUsed
    // Offset: 0x65
    bool pushParentUsed;
    // private System.Boolean bendGoalWeightUsed
    // Offset: 0x66
    bool bendGoalWeightUsed;
    // private System.Boolean pickedUp
    // Offset: 0x67
    bool pickedUp;
    // private System.Boolean defaults
    // Offset: 0x68
    bool defaults;
    // private System.Boolean pickUpOnPostFBBIK
    // Offset: 0x69
    bool pickUpOnPostFBBIK;
    // private UnityEngine.Vector3 pickUpPosition
    // Offset: 0x6C
    UnityEngine::Vector3 pickUpPosition;
    // private UnityEngine.Vector3 pausePositionRelative
    // Offset: 0x78
    UnityEngine::Vector3 pausePositionRelative;
    // private UnityEngine.Quaternion pickUpRotation
    // Offset: 0x84
    UnityEngine::Quaternion pickUpRotation;
    // private UnityEngine.Quaternion pauseRotationRelative
    // Offset: 0x94
    UnityEngine::Quaternion pauseRotationRelative;
    // private RootMotion.FinalIK.InteractionTarget interactionTarget
    // Offset: 0xA8
    RootMotion::FinalIK::InteractionTarget* interactionTarget;
    // private UnityEngine.Transform target
    // Offset: 0xB0
    UnityEngine::Transform* target;
    // private System.Collections.Generic.List`1<System.Boolean> triggered
    // Offset: 0xB8
    System::Collections::Generic::List_1<bool>* triggered;
    // private RootMotion.FinalIK.InteractionSystem interactionSystem
    // Offset: 0xC0
    RootMotion::FinalIK::InteractionSystem* interactionSystem;
    // private System.Boolean started
    // Offset: 0xC8
    bool started;
    // public RootMotion.FinalIK.FullBodyBipedEffector get_effectorType()
    // Offset: 0x1432234
    RootMotion::FinalIK::FullBodyBipedEffector get_effectorType();
    // private System.Void set_effectorType(RootMotion.FinalIK.FullBodyBipedEffector value)
    // Offset: 0x143223C
    void set_effectorType(RootMotion::FinalIK::FullBodyBipedEffector value);
    // public System.Boolean get_isPaused()
    // Offset: 0x1432244
    bool get_isPaused();
    // private System.Void set_isPaused(System.Boolean value)
    // Offset: 0x143224C
    void set_isPaused(bool value);
    // public RootMotion.FinalIK.InteractionObject get_interactionObject()
    // Offset: 0x1432258
    RootMotion::FinalIK::InteractionObject* get_interactionObject();
    // private System.Void set_interactionObject(RootMotion.FinalIK.InteractionObject value)
    // Offset: 0x1432260
    void set_interactionObject(RootMotion::FinalIK::InteractionObject* value);
    // public System.Boolean get_inInteraction()
    // Offset: 0x1432268
    bool get_inInteraction();
    // public System.Void .ctor(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x14322D8
    static InteractionEffector* New_ctor(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Void Initiate(RootMotion.FinalIK.InteractionSystem interactionSystem)
    // Offset: 0x1432368
    void Initiate(RootMotion::FinalIK::InteractionSystem* interactionSystem);
    // private System.Void StoreDefaults()
    // Offset: 0x1432438
    void StoreDefaults();
    // public System.Boolean ResetToDefaults(System.Single speed)
    // Offset: 0x14325B0
    bool ResetToDefaults(float speed);
    // public System.Boolean Pause()
    // Offset: 0x1432A60
    bool Pause();
    // public System.Boolean Resume()
    // Offset: 0x1432E18
    bool Resume();
    // public System.Boolean Start(RootMotion.FinalIK.InteractionObject interactionObject, System.String tag, System.Single fadeInTime, System.Boolean interrupt)
    // Offset: 0x1432E6C
    bool Start(RootMotion::FinalIK::InteractionObject* interactionObject, ::Il2CppString* tag, float fadeInTime, bool interrupt);
    // public System.Void Update(UnityEngine.Transform root, System.Single speed)
    // Offset: 0x1433A1C
    void Update(UnityEngine::Transform* root, float speed);
    // public System.Single get_progress()
    // Offset: 0x1434D18
    float get_progress();
    // private System.Void TriggerUntriggeredEvents(System.Boolean checkTime, System.Boolean pickUp, System.Boolean pause)
    // Offset: 0x1434544
    void TriggerUntriggeredEvents(bool checkTime, bool& pickUp, bool& pause);
    // private System.Void PickUp(UnityEngine.Transform root)
    // Offset: 0x143476C
    void PickUp(UnityEngine::Transform* root);
    // public System.Boolean Stop()
    // Offset: 0x1434BA8
    bool Stop();
    // public System.Void OnPostFBBIK()
    // Offset: 0x14351F4
    void OnPostFBBIK();
  }; // RootMotion.FinalIK.InteractionEffector
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionEffector*, "RootMotion.FinalIK", "InteractionEffector");
#pragma pack(pop)