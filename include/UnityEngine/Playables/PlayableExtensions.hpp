// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Including type: UnityEngine.Playables.PlayState
#include "UnityEngine/Playables/PlayState.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
// Including type: UnityEngine.Playables.PlayableTraversalMode
#include "UnityEngine/Playables/PlayableTraversalMode.hpp"
// Including type: UnityEngine.Playables.DirectorWrapMode
#include "UnityEngine/Playables/DirectorWrapMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Skipping declaration: IPlayable because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.PlayableExtensions
  class PlayableExtensions : public ::CsObject {
    public:
    // static public System.Boolean IsValid(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static bool IsValid(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>("UnityEngine.Playables", "PlayableExtensions", "IsValid", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable)));
    }
    // static public UnityEngine.Playables.PlayableGraph GetGraph(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static UnityEngine::Playables::PlayableGraph GetGraph(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<UnityEngine::Playables::PlayableGraph>("UnityEngine.Playables", "PlayableExtensions", "GetGraph", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable)));
    }
    // static public UnityEngine.Playables.PlayState GetPlayState(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static UnityEngine::Playables::PlayState GetPlayState(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<UnityEngine::Playables::PlayState>("UnityEngine.Playables", "PlayableExtensions", "GetPlayState", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable)));
    }
    // static public System.Void Play(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void Play(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableExtensions", "Play", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable));
    }
    // static public System.Void Pause(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void Pause(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableExtensions", "Pause", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable));
    }
    // static public System.Void SetSpeed(U playable, System.Double value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetSpeed(U playable, double value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableExtensions", "SetSpeed", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable, value));
    }
    // static public System.Void SetDuration(U playable, System.Double value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetDuration(U playable, double value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableExtensions", "SetDuration", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable, value));
    }
    // static public System.Double GetDuration(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static double GetDuration(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<double>("UnityEngine.Playables", "PlayableExtensions", "GetDuration", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable)));
    }
    // static public System.Void SetTime(U playable, System.Double value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetTime(U playable, double value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableExtensions", "SetTime", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable, value));
    }
    // static public System.Double GetTime(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static double GetTime(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<double>("UnityEngine.Playables", "PlayableExtensions", "GetTime", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable)));
    }
    // static public System.Double GetPreviousTime(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static double GetPreviousTime(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<double>("UnityEngine.Playables", "PlayableExtensions", "GetPreviousTime", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable)));
    }
    // static public System.Boolean IsDone(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static bool IsDone(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>("UnityEngine.Playables", "PlayableExtensions", "IsDone", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable)));
    }
    // static public System.Void SetPropagateSetTime(U playable, System.Boolean value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetPropagateSetTime(U playable, bool value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableExtensions", "SetPropagateSetTime", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable, value));
    }
    // static public System.Void SetInputCount(U playable, System.Int32 value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetInputCount(U playable, int value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableExtensions", "SetInputCount", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable, value));
    }
    // static public System.Int32 GetInputCount(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static int GetInputCount(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<int>("UnityEngine.Playables", "PlayableExtensions", "GetInputCount", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable)));
    }
    // static public UnityEngine.Playables.Playable GetInput(U playable, System.Int32 inputPort)
    // Offset: 0xFFFFFFFF
    template<class U>
    static UnityEngine::Playables::Playable GetInput(U playable, int inputPort) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<UnityEngine::Playables::Playable>("UnityEngine.Playables", "PlayableExtensions", "GetInput", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable, inputPort)));
    }
    // static public System.Void SetInputWeight(U playable, System.Int32 inputIndex, System.Single weight)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetInputWeight(U playable, int inputIndex, float weight) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableExtensions", "SetInputWeight", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable, inputIndex, weight));
    }
    // static public System.Void SetInputWeight(U playable, V input, System.Single weight)
    // Offset: 0xFFFFFFFF
    template<class U, class V>
    static void SetInputWeight(U playable, V input, float weight) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<V>> && is_value_type_v<V>);
      THROW_UNLESS((il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableExtensions", "SetInputWeight", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<V>::get()}, playable, input, weight)));
    }
    // static public System.Single GetInputWeight(U playable, System.Int32 inputIndex)
    // Offset: 0xFFFFFFFF
    template<class U>
    static float GetInputWeight(U playable, int inputIndex) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<float>("UnityEngine.Playables", "PlayableExtensions", "GetInputWeight", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable, inputIndex)));
    }
    // static public System.Void SetTraversalMode(U playable, UnityEngine.Playables.PlayableTraversalMode mode)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetTraversalMode(U playable, UnityEngine::Playables::PlayableTraversalMode mode) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableExtensions", "SetTraversalMode", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable, mode));
    }
    // static UnityEngine.Playables.DirectorWrapMode GetTimeWrapMode(U playable)
    // Offset: 0xFFFFFFFF
    template<class U>
    static UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode(U playable) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<UnityEngine::Playables::DirectorWrapMode>("UnityEngine.Playables", "PlayableExtensions", "GetTimeWrapMode", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable)));
    }
    // static System.Void SetTimeWrapMode(U playable, UnityEngine.Playables.DirectorWrapMode value)
    // Offset: 0xFFFFFFFF
    template<class U>
    static void SetTimeWrapMode(U playable, UnityEngine::Playables::DirectorWrapMode value) {
      static_assert(std::is_base_of_v<UnityEngine::Playables::IPlayable, std::remove_pointer_t<U>> && is_value_type_v<U>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine.Playables", "PlayableExtensions", "SetTimeWrapMode", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, playable, value));
    }
  }; // UnityEngine.Playables.PlayableExtensions
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableExtensions*, "UnityEngine.Playables", "PlayableExtensions");
#pragma pack(pop)
