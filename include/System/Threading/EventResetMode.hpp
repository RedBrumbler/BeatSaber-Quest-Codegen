// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.EventResetMode
  struct EventResetMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Threading.EventResetMode AutoReset
    static constexpr const int AutoReset = 0;
    // Get static field: static public System.Threading.EventResetMode AutoReset
    static System::Threading::EventResetMode _get_AutoReset();
    // Set static field: static public System.Threading.EventResetMode AutoReset
    static void _set_AutoReset(System::Threading::EventResetMode value);
    // static field const value: static public System.Threading.EventResetMode ManualReset
    static constexpr const int ManualReset = 1;
    // Get static field: static public System.Threading.EventResetMode ManualReset
    static System::Threading::EventResetMode _get_ManualReset();
    // Set static field: static public System.Threading.EventResetMode ManualReset
    static void _set_ManualReset(System::Threading::EventResetMode value);
    // Creating value type constructor for type: EventResetMode
    EventResetMode(int value_ = {}) : value{value_} {}
  }; // System.Threading.EventResetMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::EventResetMode, "System.Threading", "EventResetMode");
#pragma pack(pop)