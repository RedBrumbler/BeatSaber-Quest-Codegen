// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animation
  class Animation;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VFXAnimationEvents
  // [ExecuteAlways] Offset: DE2F7C
  class VFXAnimationEvents : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent
    class VFXAnimationEvent;
    // private UnityEngine.Animation _animation
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // private VFXAnimationEvents/VFXAnimationEvent[] _animationEvents
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent*>* animationEvents;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE3900
    // private System.Action animationDidPauseEvent
    // Size: 0x8
    // Offset: 0x28
    System::Action* animationDidPauseEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE3910
    // private System.Action spawnCharacterEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* spawnCharacterEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDE3920
    // private System.Action despawnCharacterEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* despawnCharacterEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: VFXAnimationEvents
    VFXAnimationEvents(UnityEngine::Animation* animation_ = {}, ::Array<GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent*>* animationEvents_ = {}, System::Action* animationDidPauseEvent_ = {}, System::Action* spawnCharacterEvent_ = {}, System::Action* despawnCharacterEvent_ = {}) noexcept : animation{animation_}, animationEvents{animationEvents_}, animationDidPauseEvent{animationDidPauseEvent_}, spawnCharacterEvent{spawnCharacterEvent_}, despawnCharacterEvent{despawnCharacterEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_animationDidPauseEvent(System.Action value)
    // Offset: 0x238C4E4
    void add_animationDidPauseEvent(System::Action* value);
    // public System.Void remove_animationDidPauseEvent(System.Action value)
    // Offset: 0x238C588
    void remove_animationDidPauseEvent(System::Action* value);
    // public System.Void add_spawnCharacterEvent(System.Action value)
    // Offset: 0x238C62C
    void add_spawnCharacterEvent(System::Action* value);
    // public System.Void remove_spawnCharacterEvent(System.Action value)
    // Offset: 0x238C6D0
    void remove_spawnCharacterEvent(System::Action* value);
    // public System.Void add_despawnCharacterEvent(System.Action value)
    // Offset: 0x238C774
    void add_despawnCharacterEvent(System::Action* value);
    // public System.Void remove_despawnCharacterEvent(System.Action value)
    // Offset: 0x238C818
    void remove_despawnCharacterEvent(System::Action* value);
    // private System.Void PlayEvent(System.String eventName)
    // Offset: 0x238C8BC
    void PlayEvent(::Il2CppString* eventName);
    // private System.Void PauseAnimation()
    // Offset: 0x238C994
    void PauseAnimation();
    // private System.Void SpawnCharacterEvent()
    // Offset: 0x238CBD4
    void SpawnCharacterEvent();
    // private System.Void DeSpawnCharacterEvent()
    // Offset: 0x238CBE8
    void DeSpawnCharacterEvent();
    // public System.Void ResumeAnimation()
    // Offset: 0x238CBFC
    void ResumeAnimation();
    // public System.Void .ctor()
    // Offset: 0x238CE2C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VFXAnimationEvents* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VFXAnimationEvents::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VFXAnimationEvents*, creationType>()));
    }
  }; // VFXAnimationEvents
  #pragma pack(pop)
  static check_size<sizeof(VFXAnimationEvents), 56 + sizeof(System::Action*)> __GlobalNamespace_VFXAnimationEventsSizeCheck;
  static_assert(sizeof(VFXAnimationEvents) == 0x40);
  // Writing MetadataGetter for method: VFXAnimationEvents::add_animationDidPauseEvent
  // Il2CppName: add_animationDidPauseEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)(System::Action*)>(&VFXAnimationEvents::add_animationDidPauseEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), "add_animationDidPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
    }
  };
  // Writing MetadataGetter for method: VFXAnimationEvents::remove_animationDidPauseEvent
  // Il2CppName: remove_animationDidPauseEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)(System::Action*)>(&VFXAnimationEvents::remove_animationDidPauseEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), "remove_animationDidPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
    }
  };
  // Writing MetadataGetter for method: VFXAnimationEvents::add_spawnCharacterEvent
  // Il2CppName: add_spawnCharacterEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)(System::Action*)>(&VFXAnimationEvents::add_spawnCharacterEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), "add_spawnCharacterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
    }
  };
  // Writing MetadataGetter for method: VFXAnimationEvents::remove_spawnCharacterEvent
  // Il2CppName: remove_spawnCharacterEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)(System::Action*)>(&VFXAnimationEvents::remove_spawnCharacterEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), "remove_spawnCharacterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
    }
  };
  // Writing MetadataGetter for method: VFXAnimationEvents::add_despawnCharacterEvent
  // Il2CppName: add_despawnCharacterEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)(System::Action*)>(&VFXAnimationEvents::add_despawnCharacterEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), "add_despawnCharacterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
    }
  };
  // Writing MetadataGetter for method: VFXAnimationEvents::remove_despawnCharacterEvent
  // Il2CppName: remove_despawnCharacterEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)(System::Action*)>(&VFXAnimationEvents::remove_despawnCharacterEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), "remove_despawnCharacterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action*>()});
    }
  };
  // Writing MetadataGetter for method: VFXAnimationEvents::PlayEvent
  // Il2CppName: PlayEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)(::Il2CppString*)>(&VFXAnimationEvents::PlayEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), "PlayEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
    }
  };
  // Writing MetadataGetter for method: VFXAnimationEvents::PauseAnimation
  // Il2CppName: PauseAnimation
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)()>(&VFXAnimationEvents::PauseAnimation)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), "PauseAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VFXAnimationEvents::SpawnCharacterEvent
  // Il2CppName: SpawnCharacterEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)()>(&VFXAnimationEvents::SpawnCharacterEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), "SpawnCharacterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VFXAnimationEvents::DeSpawnCharacterEvent
  // Il2CppName: DeSpawnCharacterEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)()>(&VFXAnimationEvents::DeSpawnCharacterEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), "DeSpawnCharacterEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VFXAnimationEvents::ResumeAnimation
  // Il2CppName: ResumeAnimation
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)()>(&VFXAnimationEvents::ResumeAnimation)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), "ResumeAnimation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  // Writing MetadataGetter for method: VFXAnimationEvents::New_ctor
  // Il2CppName: .ctor
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)()>(&VFXAnimationEvents::New_ctor<::il2cpp_utils::CreationType::Temporary>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VFXAnimationEvents::*)()>(&VFXAnimationEvents::New_ctor<::il2cpp_utils::CreationType::Manual>)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(VFXAnimationEvents*), ".ctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
    }
  };
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VFXAnimationEvents*, "", "VFXAnimationEvents");
