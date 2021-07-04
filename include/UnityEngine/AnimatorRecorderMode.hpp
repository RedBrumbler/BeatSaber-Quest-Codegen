// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AnimatorRecorderMode
  struct AnimatorRecorderMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AnimatorRecorderMode
    constexpr AnimatorRecorderMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AnimatorRecorderMode Offline
    static constexpr const int Offline = 0;
    // Get static field: static public UnityEngine.AnimatorRecorderMode Offline
    static UnityEngine::AnimatorRecorderMode _get_Offline();
    // Set static field: static public UnityEngine.AnimatorRecorderMode Offline
    static void _set_Offline(UnityEngine::AnimatorRecorderMode value);
    // static field const value: static public UnityEngine.AnimatorRecorderMode Playback
    static constexpr const int Playback = 1;
    // Get static field: static public UnityEngine.AnimatorRecorderMode Playback
    static UnityEngine::AnimatorRecorderMode _get_Playback();
    // Set static field: static public UnityEngine.AnimatorRecorderMode Playback
    static void _set_Playback(UnityEngine::AnimatorRecorderMode value);
    // static field const value: static public UnityEngine.AnimatorRecorderMode Record
    static constexpr const int Record = 2;
    // Get static field: static public UnityEngine.AnimatorRecorderMode Record
    static UnityEngine::AnimatorRecorderMode _get_Record();
    // Set static field: static public UnityEngine.AnimatorRecorderMode Record
    static void _set_Record(UnityEngine::AnimatorRecorderMode value);
  }; // UnityEngine.AnimatorRecorderMode
  #pragma pack(pop)
  static check_size<sizeof(AnimatorRecorderMode), 0 + sizeof(int)> __UnityEngine_AnimatorRecorderModeSizeCheck;
  static_assert(sizeof(AnimatorRecorderMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorRecorderMode, "UnityEngine", "AnimatorRecorderMode");