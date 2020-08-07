// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Including type: RootMotion.FinalIK.InteractionTrigger
#include "RootMotion/FinalIK/InteractionTrigger.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedIK
  class FullBodyBipedIK;
  // Forward declaring type: InteractionLookAt
  class InteractionLookAt;
  // Forward declaring type: InteractionEffector
  class InteractionEffector;
  // Forward declaring type: FullBodyBipedEffector
  struct FullBodyBipedEffector;
  // Forward declaring type: InteractionObject
  class InteractionObject;
  // Forward declaring type: InteractionTarget
  class InteractionTarget;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.InteractionSystem
  class InteractionSystem : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::InteractionSystem::InteractionDelegate
    class InteractionDelegate;
    // Nested type: RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate
    class InteractionEventDelegate;
    // public System.String targetTag
    // Offset: 0x18
    ::Il2CppString* targetTag;
    // public System.Single fadeInTime
    // Offset: 0x20
    float fadeInTime;
    // public System.Single speed
    // Offset: 0x24
    float speed;
    // public System.Single resetToDefaultsSpeed
    // Offset: 0x28
    float resetToDefaultsSpeed;
    // public UnityEngine.Collider characterCollider
    // Offset: 0x30
    UnityEngine::Collider* characterCollider;
    // public UnityEngine.Transform FPSCamera
    // Offset: 0x38
    UnityEngine::Transform* FPSCamera;
    // public UnityEngine.LayerMask camRaycastLayers
    // Offset: 0x40
    UnityEngine::LayerMask camRaycastLayers;
    // public System.Single camRaycastDistance
    // Offset: 0x44
    float camRaycastDistance;
    // private System.Collections.Generic.List`1<RootMotion.FinalIK.InteractionTrigger> <triggersInRange>k__BackingField
    // Offset: 0x48
    System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger*>* triggersInRange;
    // private System.Collections.Generic.List`1<RootMotion.FinalIK.InteractionTrigger> inContact
    // Offset: 0x50
    System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger*>* inContact;
    // private System.Collections.Generic.List`1<System.Int32> bestRangeIndexes
    // Offset: 0x58
    System::Collections::Generic::List_1<int>* bestRangeIndexes;
    // public RootMotion.FinalIK.InteractionSystem/InteractionDelegate OnInteractionStart
    // Offset: 0x60
    RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionStart;
    // public RootMotion.FinalIK.InteractionSystem/InteractionDelegate OnInteractionPause
    // Offset: 0x68
    RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionPause;
    // public RootMotion.FinalIK.InteractionSystem/InteractionDelegate OnInteractionPickUp
    // Offset: 0x70
    RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionPickUp;
    // public RootMotion.FinalIK.InteractionSystem/InteractionDelegate OnInteractionResume
    // Offset: 0x78
    RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionResume;
    // public RootMotion.FinalIK.InteractionSystem/InteractionDelegate OnInteractionStop
    // Offset: 0x80
    RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionStop;
    // public RootMotion.FinalIK.InteractionSystem/InteractionEventDelegate OnInteractionEvent
    // Offset: 0x88
    RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate* OnInteractionEvent;
    // public UnityEngine.RaycastHit raycastHit
    // Offset: 0x90
    UnityEngine::RaycastHit raycastHit;
    // private RootMotion.FinalIK.FullBodyBipedIK fullBody
    // Offset: 0xC0
    RootMotion::FinalIK::FullBodyBipedIK* fullBody;
    // public RootMotion.FinalIK.InteractionLookAt lookAt
    // Offset: 0xC8
    RootMotion::FinalIK::InteractionLookAt* lookAt;
    // private RootMotion.FinalIK.InteractionEffector[] interactionEffectors
    // Offset: 0xD0
    ::Array<RootMotion::FinalIK::InteractionEffector*>* interactionEffectors;
    // private System.Boolean initiated
    // Offset: 0xD8
    bool initiated;
    // private UnityEngine.Collider lastCollider
    // Offset: 0xE0
    UnityEngine::Collider* lastCollider;
    // private UnityEngine.Collider c
    // Offset: 0xE8
    UnityEngine::Collider* c;
    // private System.Void OpenUserManual()
    // Offset: 0x1436DF4
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x1436E40
    void OpenScriptReference();
    // private System.Void OpenTutorial1()
    // Offset: 0x1436E8C
    void OpenTutorial1();
    // private System.Void OpenTutorial2()
    // Offset: 0x1436ED8
    void OpenTutorial2();
    // private System.Void OpenTutorial3()
    // Offset: 0x1436F24
    void OpenTutorial3();
    // private System.Void OpenTutorial4()
    // Offset: 0x1436F70
    void OpenTutorial4();
    // private System.Void SupportGroup()
    // Offset: 0x1436FBC
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1437008
    void ASThread();
    // public System.Boolean get_inInteraction()
    // Offset: 0x1437054
    bool get_inInteraction();
    // public System.Boolean IsInInteraction(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x14371E4
    bool IsInInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Boolean IsPaused(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x14372B0
    bool IsPaused(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Boolean IsPaused()
    // Offset: 0x143737C
    bool IsPaused();
    // public System.Boolean IsInSync()
    // Offset: 0x1437428
    bool IsInSync();
    // public System.Boolean StartInteraction(RootMotion.FinalIK.FullBodyBipedEffector effectorType, RootMotion.FinalIK.InteractionObject interactionObject, System.Boolean interrupt)
    // Offset: 0x1437520
    bool StartInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject* interactionObject, bool interrupt);
    // public System.Boolean PauseInteraction(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x143763C
    bool PauseInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Boolean ResumeInteraction(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x14376CC
    bool ResumeInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Boolean StopInteraction(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x143775C
    bool StopInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Void PauseAll()
    // Offset: 0x14377EC
    void PauseAll();
    // public System.Void ResumeAll()
    // Offset: 0x1437860
    void ResumeAll();
    // public System.Void StopAll()
    // Offset: 0x14378D4
    void StopAll();
    // public RootMotion.FinalIK.InteractionObject GetInteractionObject(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x143793C
    RootMotion::FinalIK::InteractionObject* GetInteractionObject(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Single GetProgress(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x14379C8
    float GetProgress(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Single GetMinActiveProgress()
    // Offset: 0x1437A7C
    float GetMinActiveProgress();
    // public System.Boolean TriggerInteraction(System.Int32 index, System.Boolean interrupt)
    // Offset: 0x1437B60
    bool TriggerInteraction(int index, bool interrupt);
    // public System.Boolean TriggerInteraction(System.Int32 index, System.Boolean interrupt, RootMotion.FinalIK.InteractionObject interactionObject)
    // Offset: 0x1437E04
    bool TriggerInteraction(int index, bool interrupt, RootMotion::FinalIK::InteractionObject*& interactionObject);
    // public System.Boolean TriggerInteraction(System.Int32 index, System.Boolean interrupt, RootMotion.FinalIK.InteractionTarget interactionTarget)
    // Offset: 0x1437FF4
    bool TriggerInteraction(int index, bool interrupt, RootMotion::FinalIK::InteractionTarget*& interactionTarget);
    // public RootMotion.FinalIK.InteractionTrigger/Range GetClosestInteractionRange()
    // Offset: 0x1438278
    RootMotion::FinalIK::InteractionTrigger::Range* GetClosestInteractionRange();
    // public RootMotion.FinalIK.InteractionObject GetClosestInteractionObjectInRange()
    // Offset: 0x143856C
    RootMotion::FinalIK::InteractionObject* GetClosestInteractionObjectInRange();
    // public RootMotion.FinalIK.InteractionTarget GetClosestInteractionTargetInRange()
    // Offset: 0x14385B0
    RootMotion::FinalIK::InteractionTarget* GetClosestInteractionTargetInRange();
    // public RootMotion.FinalIK.InteractionObject[] GetClosestInteractionObjectsInRange()
    // Offset: 0x1438628
    ::Array<RootMotion::FinalIK::InteractionObject*>* GetClosestInteractionObjectsInRange();
    // public RootMotion.FinalIK.InteractionTarget[] GetClosestInteractionTargetsInRange()
    // Offset: 0x1438760
    ::Array<RootMotion::FinalIK::InteractionTarget*>* GetClosestInteractionTargetsInRange();
    // public System.Boolean TriggerEffectorsReady(System.Int32 index)
    // Offset: 0x14388D8
    bool TriggerEffectorsReady(int index);
    // public RootMotion.FinalIK.InteractionTrigger/Range GetTriggerRange(System.Int32 index)
    // Offset: 0x1438B80
    RootMotion::FinalIK::InteractionTrigger::Range* GetTriggerRange(int index);
    // public System.Int32 GetClosestTriggerIndex()
    // Offset: 0x1438378
    int GetClosestTriggerIndex();
    // public RootMotion.FinalIK.FullBodyBipedIK get_ik()
    // Offset: 0x1438CAC
    RootMotion::FinalIK::FullBodyBipedIK* get_ik();
    // public System.Void set_ik(RootMotion.FinalIK.FullBodyBipedIK value)
    // Offset: 0x1438CB4
    void set_ik(RootMotion::FinalIK::FullBodyBipedIK* value);
    // public System.Collections.Generic.List`1<RootMotion.FinalIK.InteractionTrigger> get_triggersInRange()
    // Offset: 0x1438CBC
    System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger*>* get_triggersInRange();
    // private System.Void set_triggersInRange(System.Collections.Generic.List`1<RootMotion.FinalIK.InteractionTrigger> value)
    // Offset: 0x1438CC4
    void set_triggersInRange(System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger*>* value);
    // public System.Void Start()
    // Offset: 0x1438CCC
    void Start();
    // private System.Void InteractionPause(RootMotion.FinalIK.FullBodyBipedEffector effector, RootMotion.FinalIK.InteractionObject interactionObject)
    // Offset: 0x1439480
    void InteractionPause(RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject* interactionObject);
    // private System.Void InteractionResume(RootMotion.FinalIK.FullBodyBipedEffector effector, RootMotion.FinalIK.InteractionObject interactionObject)
    // Offset: 0x14394A0
    void InteractionResume(RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject* interactionObject);
    // private System.Void InteractionStop(RootMotion.FinalIK.FullBodyBipedEffector effector, RootMotion.FinalIK.InteractionObject interactionObject)
    // Offset: 0x14394BC
    void InteractionStop(RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject* interactionObject);
    // private System.Void LookAtInteraction(RootMotion.FinalIK.FullBodyBipedEffector effector, RootMotion.FinalIK.InteractionObject interactionObject)
    // Offset: 0x14394D8
    void LookAtInteraction(RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject* interactionObject);
    // public System.Void OnTriggerEnter(UnityEngine.Collider c)
    // Offset: 0x1439538
    void OnTriggerEnter(UnityEngine::Collider* c);
    // public System.Void OnTriggerExit(UnityEngine.Collider c)
    // Offset: 0x1439654
    void OnTriggerExit(UnityEngine::Collider* c);
    // private System.Boolean ContactIsInRange(System.Int32 index, System.Int32 bestRangeIndex)
    // Offset: 0x1439750
    bool ContactIsInRange(int index, int& bestRangeIndex);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x14398F8
    void OnDrawGizmosSelected();
    // public System.Void Update()
    // Offset: 0x1439A10
    void Update();
    // private System.Void Raycasting()
    // Offset: 0x1439C5C
    void Raycasting();
    // private System.Void UpdateTriggerEventBroadcasting()
    // Offset: 0x14391E0
    void UpdateTriggerEventBroadcasting();
    // private System.Void UpdateEffectors()
    // Offset: 0x1439D9C
    void UpdateEffectors();
    // private System.Void OnPreFBBIK()
    // Offset: 0x1439EC8
    void OnPreFBBIK();
    // private System.Void OnPostFBBIK()
    // Offset: 0x1439F60
    void OnPostFBBIK();
    // private System.Void OnFixTransforms()
    // Offset: 0x143A038
    void OnFixTransforms();
    // private System.Void OnDestroy()
    // Offset: 0x143A050
    void OnDestroy();
    // private System.Boolean IsValid(System.Boolean log)
    // Offset: 0x1437100
    bool IsValid(bool log);
    // private System.Boolean TriggerIndexIsValid(System.Int32 index)
    // Offset: 0x1437D00
    bool TriggerIndexIsValid(int index);
    // public System.Void .ctor()
    // Offset: 0x143A414
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static InteractionSystem* New_ctor();
  }; // RootMotion.FinalIK.InteractionSystem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionSystem*, "RootMotion.FinalIK", "InteractionSystem");
#pragma pack(pop)