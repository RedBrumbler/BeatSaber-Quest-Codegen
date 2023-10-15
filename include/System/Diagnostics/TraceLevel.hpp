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
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceLevel
  struct TraceLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceLevel, "System.Diagnostics", "TraceLevel");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.TraceLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct TraceLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TraceLevel
    constexpr TraceLevel(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public System.Diagnostics.TraceLevel Off
    static constexpr const int Off = 0;
    // Get static field: static public System.Diagnostics.TraceLevel Off
    static ::System::Diagnostics::TraceLevel _get_Off();
    // Set static field: static public System.Diagnostics.TraceLevel Off
    static void _set_Off(::System::Diagnostics::TraceLevel value);
    // static field const value: static public System.Diagnostics.TraceLevel Error
    static constexpr const int Error = 1;
    // Get static field: static public System.Diagnostics.TraceLevel Error
    static ::System::Diagnostics::TraceLevel _get_Error();
    // Set static field: static public System.Diagnostics.TraceLevel Error
    static void _set_Error(::System::Diagnostics::TraceLevel value);
    // static field const value: static public System.Diagnostics.TraceLevel Warning
    static constexpr const int Warning = 2;
    // Get static field: static public System.Diagnostics.TraceLevel Warning
    static ::System::Diagnostics::TraceLevel _get_Warning();
    // Set static field: static public System.Diagnostics.TraceLevel Warning
    static void _set_Warning(::System::Diagnostics::TraceLevel value);
    // static field const value: static public System.Diagnostics.TraceLevel Info
    static constexpr const int Info = 3;
    // Get static field: static public System.Diagnostics.TraceLevel Info
    static ::System::Diagnostics::TraceLevel _get_Info();
    // Set static field: static public System.Diagnostics.TraceLevel Info
    static void _set_Info(::System::Diagnostics::TraceLevel value);
    // static field const value: static public System.Diagnostics.TraceLevel Verbose
    static constexpr const int Verbose = 4;
    // Get static field: static public System.Diagnostics.TraceLevel Verbose
    static ::System::Diagnostics::TraceLevel _get_Verbose();
    // Set static field: static public System.Diagnostics.TraceLevel Verbose
    static void _set_Verbose(::System::Diagnostics::TraceLevel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Diagnostics.TraceLevel
  #pragma pack(pop)
  static check_size<sizeof(TraceLevel), 0 + sizeof(int)> __System_Diagnostics_TraceLevelSizeCheck;
  static_assert(sizeof(TraceLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"