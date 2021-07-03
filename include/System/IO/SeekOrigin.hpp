// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.SeekOrigin
  // [ComVisibleAttribute] Offset: D7CAE4
  struct SeekOrigin/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SeekOrigin
    constexpr SeekOrigin(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.SeekOrigin Begin
    static constexpr const int Begin = 0;
    // Get static field: static public System.IO.SeekOrigin Begin
    static System::IO::SeekOrigin _get_Begin();
    // Set static field: static public System.IO.SeekOrigin Begin
    static void _set_Begin(System::IO::SeekOrigin value);
    // static field const value: static public System.IO.SeekOrigin Current
    static constexpr const int Current = 1;
    // Get static field: static public System.IO.SeekOrigin Current
    static System::IO::SeekOrigin _get_Current();
    // Set static field: static public System.IO.SeekOrigin Current
    static void _set_Current(System::IO::SeekOrigin value);
    // static field const value: static public System.IO.SeekOrigin End
    static constexpr const int End = 2;
    // Get static field: static public System.IO.SeekOrigin End
    static System::IO::SeekOrigin _get_End();
    // Set static field: static public System.IO.SeekOrigin End
    static void _set_End(System::IO::SeekOrigin value);
  }; // System.IO.SeekOrigin
  #pragma pack(pop)
  static check_size<sizeof(SeekOrigin), 0 + sizeof(int)> __System_IO_SeekOriginSizeCheck;
  static_assert(sizeof(SeekOrigin) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::SeekOrigin, "System.IO", "SeekOrigin");
