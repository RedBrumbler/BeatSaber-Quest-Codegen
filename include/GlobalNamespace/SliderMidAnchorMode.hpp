// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SliderMidAnchorMode
  struct SliderMidAnchorMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderMidAnchorMode, "", "SliderMidAnchorMode");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: SliderMidAnchorMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct SliderMidAnchorMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SliderMidAnchorMode
    constexpr SliderMidAnchorMode(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public SliderMidAnchorMode Straight
    static constexpr const int Straight = 0;
    // Get static field: static public SliderMidAnchorMode Straight
    static ::GlobalNamespace::SliderMidAnchorMode _get_Straight();
    // Set static field: static public SliderMidAnchorMode Straight
    static void _set_Straight(::GlobalNamespace::SliderMidAnchorMode value);
    // static field const value: static public SliderMidAnchorMode Clockwise
    static constexpr const int Clockwise = 1;
    // Get static field: static public SliderMidAnchorMode Clockwise
    static ::GlobalNamespace::SliderMidAnchorMode _get_Clockwise();
    // Set static field: static public SliderMidAnchorMode Clockwise
    static void _set_Clockwise(::GlobalNamespace::SliderMidAnchorMode value);
    // static field const value: static public SliderMidAnchorMode CounterClockwise
    static constexpr const int CounterClockwise = 2;
    // Get static field: static public SliderMidAnchorMode CounterClockwise
    static ::GlobalNamespace::SliderMidAnchorMode _get_CounterClockwise();
    // Set static field: static public SliderMidAnchorMode CounterClockwise
    static void _set_CounterClockwise(::GlobalNamespace::SliderMidAnchorMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // SliderMidAnchorMode
  #pragma pack(pop)
  static check_size<sizeof(SliderMidAnchorMode), 0 + sizeof(int)> __GlobalNamespace_SliderMidAnchorModeSizeCheck;
  static_assert(sizeof(SliderMidAnchorMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"