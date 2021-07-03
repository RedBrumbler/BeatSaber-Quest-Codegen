// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.AnimationHumanStream
  // [RequiredByNativeCodeAttribute] Offset: DA9450
  // [MovedFromAttribute] Offset: DA9450
  // [NativeHeaderAttribute] Offset: DA9450
  // [NativeHeaderAttribute] Offset: DA9450
  struct AnimationHumanStream/*, public System::ValueType*/ {
    public:
    // private System.IntPtr stream
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr stream;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: AnimationHumanStream
    constexpr AnimationHumanStream(System::IntPtr stream_ = {}) noexcept : stream{stream_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return stream;
    }
  }; // UnityEngine.Animations.AnimationHumanStream
  #pragma pack(pop)
  static check_size<sizeof(AnimationHumanStream), 0 + sizeof(System::IntPtr)> __UnityEngine_Animations_AnimationHumanStreamSizeCheck;
  static_assert(sizeof(AnimationHumanStream) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationHumanStream, "UnityEngine.Animations", "AnimationHumanStream");
