// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.OVRInputModule
#include "UnityEngine/EventSystems/OVRInputModule.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::OVRInputModule::InputMode, "UnityEngine.EventSystems", "OVRInputModule/InputMode");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.OVRInputModule/UnityEngine.EventSystems.InputMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: 10D02D4
  struct OVRInputModule::InputMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InputMode
    constexpr InputMode(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public UnityEngine.EventSystems.OVRInputModule/UnityEngine.EventSystems.InputMode Mouse
    static constexpr const int Mouse = 0;
    // Get static field: static public UnityEngine.EventSystems.OVRInputModule/UnityEngine.EventSystems.InputMode Mouse
    static ::UnityEngine::EventSystems::OVRInputModule::InputMode _get_Mouse();
    // Set static field: static public UnityEngine.EventSystems.OVRInputModule/UnityEngine.EventSystems.InputMode Mouse
    static void _set_Mouse(::UnityEngine::EventSystems::OVRInputModule::InputMode value);
    // static field const value: static public UnityEngine.EventSystems.OVRInputModule/UnityEngine.EventSystems.InputMode Buttons
    static constexpr const int Buttons = 1;
    // Get static field: static public UnityEngine.EventSystems.OVRInputModule/UnityEngine.EventSystems.InputMode Buttons
    static ::UnityEngine::EventSystems::OVRInputModule::InputMode _get_Buttons();
    // Set static field: static public UnityEngine.EventSystems.OVRInputModule/UnityEngine.EventSystems.InputMode Buttons
    static void _set_Buttons(::UnityEngine::EventSystems::OVRInputModule::InputMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.EventSystems.OVRInputModule/UnityEngine.EventSystems.InputMode
  #pragma pack(pop)
  static check_size<sizeof(OVRInputModule::InputMode), 0 + sizeof(int)> __UnityEngine_EventSystems_OVRInputModule_InputModeSizeCheck;
  static_assert(sizeof(OVRInputModule::InputMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
