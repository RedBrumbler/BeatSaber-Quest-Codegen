// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Skipping declaration: PostPlaybackState because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: ActivationControlPlayable
  class ActivationControlPlayable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::ActivationControlPlayable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationControlPlayable*, "UnityEngine.Timeline", "ActivationControlPlayable");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.ActivationControlPlayable
  // [TokenAttribute] Offset: FFFFFFFF
  class ActivationControlPlayable : public ::UnityEngine::Playables::PlayableBehaviour {
    public:
    // Nested type: ::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState
    struct PostPlaybackState;
    // Nested type: ::UnityEngine::Timeline::ActivationControlPlayable::InitialState
    struct InitialState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState
    // [TokenAttribute] Offset: FFFFFFFF
    struct PostPlaybackState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: PostPlaybackState
      constexpr PostPlaybackState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState Active
      static constexpr const int Active = 0;
      // Get static field: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState Active
      static ::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState _get_Active();
      // Set static field: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState Active
      static void _set_Active(::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState value);
      // static field const value: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState Inactive
      static constexpr const int Inactive = 1;
      // Get static field: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState Inactive
      static ::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState _get_Inactive();
      // Set static field: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState Inactive
      static void _set_Inactive(::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState value);
      // static field const value: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState Revert
      static constexpr const int Revert = 2;
      // Get static field: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState Revert
      static ::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState _get_Revert();
      // Set static field: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState Revert
      static void _set_Revert(::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState
    #pragma pack(pop)
    static check_size<sizeof(ActivationControlPlayable::PostPlaybackState), 0 + sizeof(int)> __UnityEngine_Timeline_ActivationControlPlayable_PostPlaybackStateSizeCheck;
    static_assert(sizeof(ActivationControlPlayable::PostPlaybackState) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState
    // [TokenAttribute] Offset: FFFFFFFF
    struct InitialState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: InitialState
      constexpr InitialState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating interface conversion operator: i_Enum
      inline ::System::Enum* i_Enum() noexcept {
        return reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState Unset
      static constexpr const int Unset = 0;
      // Get static field: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState Unset
      static ::UnityEngine::Timeline::ActivationControlPlayable::InitialState _get_Unset();
      // Set static field: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState Unset
      static void _set_Unset(::UnityEngine::Timeline::ActivationControlPlayable::InitialState value);
      // static field const value: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState Active
      static constexpr const int Active = 1;
      // Get static field: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState Active
      static ::UnityEngine::Timeline::ActivationControlPlayable::InitialState _get_Active();
      // Set static field: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState Active
      static void _set_Active(::UnityEngine::Timeline::ActivationControlPlayable::InitialState value);
      // static field const value: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState Inactive
      static constexpr const int Inactive = 2;
      // Get static field: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState Inactive
      static ::UnityEngine::Timeline::ActivationControlPlayable::InitialState _get_Inactive();
      // Set static field: static public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState Inactive
      static void _set_Inactive(::UnityEngine::Timeline::ActivationControlPlayable::InitialState value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState
    #pragma pack(pop)
    static check_size<sizeof(ActivationControlPlayable::InitialState), 0 + sizeof(int)> __UnityEngine_Timeline_ActivationControlPlayable_InitialStateSizeCheck;
    static_assert(sizeof(ActivationControlPlayable::InitialState) == 0x4);
    public:
    // public UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState postPlayback
    // Size: 0x4
    // Offset: 0x18
    ::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState postPlayback;
    // Field size check
    static_assert(sizeof(::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState) == 0x4);
    // private UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState m_InitialState
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::Timeline::ActivationControlPlayable::InitialState m_InitialState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Timeline::ActivationControlPlayable::InitialState) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.GameObject gameObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_gameObject();
    // Get instance field reference: public UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState postPlayback
    [[deprecated("Use field access instead!")]] ::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState& dyn_postPlayback();
    // Get instance field reference: private UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.InitialState m_InitialState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Timeline::ActivationControlPlayable::InitialState& dyn_m_InitialState();
    // public System.Void .ctor()
    // Offset: 0x1E650B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivationControlPlayable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::ActivationControlPlayable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivationControlPlayable*, creationType>()));
    }
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.ActivationControlPlayable> Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.GameObject gameObject, UnityEngine.Timeline.ActivationControlPlayable/UnityEngine.Timeline.PostPlaybackState postPlaybackState)
    // Offset: 0x1E64C18
    static ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*> Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState postPlaybackState);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1E64D4C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1E64DE4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info);
    // public override System.Void ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object userData)
    // Offset: 0x1E64E9C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::ProcessFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info, System.Object userData)
    void ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::Il2CppObject* userData);
    // public override System.Void OnGraphStart(UnityEngine.Playables.Playable playable)
    // Offset: 0x1E64F34
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnGraphStart(UnityEngine.Playables.Playable playable)
    void OnGraphStart(::UnityEngine::Playables::Playable playable);
    // public override System.Void OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    // Offset: 0x1E64FD8
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnPlayableDestroy(UnityEngine.Playables.Playable playable)
    void OnPlayableDestroy(::UnityEngine::Playables::Playable playable);
  }; // UnityEngine.Timeline.ActivationControlPlayable
  #pragma pack(pop)
  static check_size<sizeof(ActivationControlPlayable), 28 + sizeof(::UnityEngine::Timeline::ActivationControlPlayable::InitialState)> __UnityEngine_Timeline_ActivationControlPlayableSizeCheck;
  static_assert(sizeof(ActivationControlPlayable) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationControlPlayable::InitialState, "UnityEngine.Timeline", "ActivationControlPlayable/InitialState");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState, "UnityEngine.Timeline", "ActivationControlPlayable/PostPlaybackState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationControlPlayable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationControlPlayable::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::ActivationControlPlayable*> (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::ActivationControlPlayable::PostPlaybackState)>(&UnityEngine::Timeline::ActivationControlPlayable::Create)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* gameObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    static auto* postPlaybackState = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "ActivationControlPlayable/PostPlaybackState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationControlPlayable*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, gameObject, postPlaybackState});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPlay
// Il2CppName: OnBehaviourPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPlay)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationControlPlayable*), "OnBehaviourPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPause
// Il2CppName: OnBehaviourPause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&UnityEngine::Timeline::ActivationControlPlayable::OnBehaviourPause)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationControlPlayable*), "OnBehaviourPause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationControlPlayable::ProcessFrame
// Il2CppName: ProcessFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::Il2CppObject*)>(&UnityEngine::Timeline::ActivationControlPlayable::ProcessFrame)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "FrameData")->byval_arg;
    static auto* userData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationControlPlayable*), "ProcessFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable, info, userData});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationControlPlayable::OnGraphStart
// Il2CppName: OnGraphStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::ActivationControlPlayable::OnGraphStart)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationControlPlayable*), "OnGraphStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::ActivationControlPlayable::OnPlayableDestroy
// Il2CppName: OnPlayableDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::ActivationControlPlayable::*)(::UnityEngine::Playables::Playable)>(&UnityEngine::Timeline::ActivationControlPlayable::OnPlayableDestroy)> {
  static const MethodInfo* get() {
    static auto* playable = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "Playable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::ActivationControlPlayable*), "OnPlayableDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{playable});
  }
};
