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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.CharSet
  struct CharSet : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Runtime.InteropServices.CharSet None
    static constexpr const int None = 1;
    // Get static field: static public System.Runtime.InteropServices.CharSet None
    static System::Runtime::InteropServices::CharSet _get_None();
    // Set static field: static public System.Runtime.InteropServices.CharSet None
    static void _set_None(System::Runtime::InteropServices::CharSet value);
    // static field const value: static public System.Runtime.InteropServices.CharSet Ansi
    static constexpr const int Ansi = 2;
    // Get static field: static public System.Runtime.InteropServices.CharSet Ansi
    static System::Runtime::InteropServices::CharSet _get_Ansi();
    // Set static field: static public System.Runtime.InteropServices.CharSet Ansi
    static void _set_Ansi(System::Runtime::InteropServices::CharSet value);
    // static field const value: static public System.Runtime.InteropServices.CharSet Unicode
    static constexpr const int Unicode = 3;
    // Get static field: static public System.Runtime.InteropServices.CharSet Unicode
    static System::Runtime::InteropServices::CharSet _get_Unicode();
    // Set static field: static public System.Runtime.InteropServices.CharSet Unicode
    static void _set_Unicode(System::Runtime::InteropServices::CharSet value);
    // static field const value: static public System.Runtime.InteropServices.CharSet Auto
    static constexpr const int Auto = 4;
    // Get static field: static public System.Runtime.InteropServices.CharSet Auto
    static System::Runtime::InteropServices::CharSet _get_Auto();
    // Set static field: static public System.Runtime.InteropServices.CharSet Auto
    static void _set_Auto(System::Runtime::InteropServices::CharSet value);
    // Creating value type constructor for type: CharSet
    CharSet(int value_ = {}) : value{value_} {}
  }; // System.Runtime.InteropServices.CharSet
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::CharSet, "System.Runtime.InteropServices", "CharSet");
#pragma pack(pop)