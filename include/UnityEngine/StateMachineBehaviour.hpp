// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: AnimatorStateInfo
  struct AnimatorStateInfo;
}
// Forward declaring namespace: UnityEngine::Animations
namespace UnityEngine::Animations {
  // Forward declaring type: AnimatorControllerPlayable
  struct AnimatorControllerPlayable;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.StateMachineBehaviour
  // [RequiredByNativeCodeAttribute] Offset: DA8B58
  class StateMachineBehaviour : public UnityEngine::ScriptableObject {
    public:
    // Creating value type constructor for type: StateMachineBehaviour
    StateMachineBehaviour() noexcept {}
    // public System.Void OnStateEnter(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex)
    // Offset: 0x235D6C0
    void OnStateEnter(UnityEngine::Animator* animator, UnityEngine::AnimatorStateInfo stateInfo, int layerIndex);
    // public System.Void OnStateUpdate(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex)
    // Offset: 0x235D6C4
    void OnStateUpdate(UnityEngine::Animator* animator, UnityEngine::AnimatorStateInfo stateInfo, int layerIndex);
    // public System.Void OnStateExit(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex)
    // Offset: 0x235D6C8
    void OnStateExit(UnityEngine::Animator* animator, UnityEngine::AnimatorStateInfo stateInfo, int layerIndex);
    // public System.Void OnStateMove(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex)
    // Offset: 0x235D6CC
    void OnStateMove(UnityEngine::Animator* animator, UnityEngine::AnimatorStateInfo stateInfo, int layerIndex);
    // public System.Void OnStateIK(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex)
    // Offset: 0x235D6D0
    void OnStateIK(UnityEngine::Animator* animator, UnityEngine::AnimatorStateInfo stateInfo, int layerIndex);
    // public System.Void OnStateMachineEnter(UnityEngine.Animator animator, System.Int32 stateMachinePathHash)
    // Offset: 0x235D6D4
    void OnStateMachineEnter(UnityEngine::Animator* animator, int stateMachinePathHash);
    // public System.Void OnStateMachineExit(UnityEngine.Animator animator, System.Int32 stateMachinePathHash)
    // Offset: 0x235D6D8
    void OnStateMachineExit(UnityEngine::Animator* animator, int stateMachinePathHash);
    // public System.Void OnStateEnter(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x235D6DC
    void OnStateEnter(UnityEngine::Animator* animator, UnityEngine::AnimatorStateInfo stateInfo, int layerIndex, UnityEngine::Animations::AnimatorControllerPlayable controller);
    // public System.Void OnStateUpdate(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x235D6E0
    void OnStateUpdate(UnityEngine::Animator* animator, UnityEngine::AnimatorStateInfo stateInfo, int layerIndex, UnityEngine::Animations::AnimatorControllerPlayable controller);
    // public System.Void OnStateExit(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x235D6E4
    void OnStateExit(UnityEngine::Animator* animator, UnityEngine::AnimatorStateInfo stateInfo, int layerIndex, UnityEngine::Animations::AnimatorControllerPlayable controller);
    // public System.Void OnStateMove(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x235D6E8
    void OnStateMove(UnityEngine::Animator* animator, UnityEngine::AnimatorStateInfo stateInfo, int layerIndex, UnityEngine::Animations::AnimatorControllerPlayable controller);
    // public System.Void OnStateIK(UnityEngine.Animator animator, UnityEngine.AnimatorStateInfo stateInfo, System.Int32 layerIndex, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x235D6EC
    void OnStateIK(UnityEngine::Animator* animator, UnityEngine::AnimatorStateInfo stateInfo, int layerIndex, UnityEngine::Animations::AnimatorControllerPlayable controller);
    // public System.Void OnStateMachineEnter(UnityEngine.Animator animator, System.Int32 stateMachinePathHash, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x235D6F0
    void OnStateMachineEnter(UnityEngine::Animator* animator, int stateMachinePathHash, UnityEngine::Animations::AnimatorControllerPlayable controller);
    // public System.Void OnStateMachineExit(UnityEngine.Animator animator, System.Int32 stateMachinePathHash, UnityEngine.Animations.AnimatorControllerPlayable controller)
    // Offset: 0x235D6F4
    void OnStateMachineExit(UnityEngine::Animator* animator, int stateMachinePathHash, UnityEngine::Animations::AnimatorControllerPlayable controller);
    // protected System.Void .ctor()
    // Offset: 0x235D6F8
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StateMachineBehaviour* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::StateMachineBehaviour::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StateMachineBehaviour*, creationType>()));
    }
  }; // UnityEngine.StateMachineBehaviour
  #pragma pack(pop)
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateEnter
  // Il2CppName: OnStateEnter
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, UnityEngine::AnimatorStateInfo, int)>(&StateMachineBehaviour::OnStateEnter)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimatorStateInfo>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateUpdate
  // Il2CppName: OnStateUpdate
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, UnityEngine::AnimatorStateInfo, int)>(&StateMachineBehaviour::OnStateUpdate)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimatorStateInfo>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateExit
  // Il2CppName: OnStateExit
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, UnityEngine::AnimatorStateInfo, int)>(&StateMachineBehaviour::OnStateExit)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimatorStateInfo>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateMove
  // Il2CppName: OnStateMove
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, UnityEngine::AnimatorStateInfo, int)>(&StateMachineBehaviour::OnStateMove)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimatorStateInfo>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateIK
  // Il2CppName: OnStateIK
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, UnityEngine::AnimatorStateInfo, int)>(&StateMachineBehaviour::OnStateIK)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimatorStateInfo>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateMachineEnter
  // Il2CppName: OnStateMachineEnter
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, int)>(&StateMachineBehaviour::OnStateMachineEnter)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateMachineEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateMachineExit
  // Il2CppName: OnStateMachineExit
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, int)>(&StateMachineBehaviour::OnStateMachineExit)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateMachineExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<int>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateEnter
  // Il2CppName: OnStateEnter
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, UnityEngine::AnimatorStateInfo, int, UnityEngine::Animations::AnimatorControllerPlayable)>(&StateMachineBehaviour::OnStateEnter)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimatorStateInfo>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Animations::AnimatorControllerPlayable>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateUpdate
  // Il2CppName: OnStateUpdate
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, UnityEngine::AnimatorStateInfo, int, UnityEngine::Animations::AnimatorControllerPlayable)>(&StateMachineBehaviour::OnStateUpdate)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimatorStateInfo>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Animations::AnimatorControllerPlayable>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateExit
  // Il2CppName: OnStateExit
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, UnityEngine::AnimatorStateInfo, int, UnityEngine::Animations::AnimatorControllerPlayable)>(&StateMachineBehaviour::OnStateExit)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimatorStateInfo>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Animations::AnimatorControllerPlayable>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateMove
  // Il2CppName: OnStateMove
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, UnityEngine::AnimatorStateInfo, int, UnityEngine::Animations::AnimatorControllerPlayable)>(&StateMachineBehaviour::OnStateMove)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimatorStateInfo>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Animations::AnimatorControllerPlayable>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateIK
  // Il2CppName: OnStateIK
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, UnityEngine::AnimatorStateInfo, int, UnityEngine::Animations::AnimatorControllerPlayable)>(&StateMachineBehaviour::OnStateIK)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateIK", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::AnimatorStateInfo>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Animations::AnimatorControllerPlayable>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateMachineEnter
  // Il2CppName: OnStateMachineEnter
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, int, UnityEngine::Animations::AnimatorControllerPlayable)>(&StateMachineBehaviour::OnStateMachineEnter)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateMachineEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Animations::AnimatorControllerPlayable>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::OnStateMachineExit
  // Il2CppName: OnStateMachineExit
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)(UnityEngine::Animator*, int, UnityEngine::Animations::AnimatorControllerPlayable)>(&StateMachineBehaviour::OnStateMachineExit)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), "OnStateMachineExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Animator*>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Animations::AnimatorControllerPlayable>()});
    }
  };
  // Writing MetadataGetter for method: StateMachineBehaviour::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)()>(&StateMachineBehaviour::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (StateMachineBehaviour::*)()>(&StateMachineBehaviour::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(StateMachineBehaviour*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::StateMachineBehaviour*, "UnityEngine", "StateMachineBehaviour");
