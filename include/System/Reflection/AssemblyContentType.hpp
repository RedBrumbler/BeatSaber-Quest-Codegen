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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.AssemblyContentType
  struct AssemblyContentType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Reflection.AssemblyContentType Default
    static constexpr const int Default = 0;
    // Get static field: static public System.Reflection.AssemblyContentType Default
    static System::Reflection::AssemblyContentType _get_Default();
    // Set static field: static public System.Reflection.AssemblyContentType Default
    static void _set_Default(System::Reflection::AssemblyContentType value);
    // static field const value: static public System.Reflection.AssemblyContentType WindowsRuntime
    static constexpr const int WindowsRuntime = 1;
    // Get static field: static public System.Reflection.AssemblyContentType WindowsRuntime
    static System::Reflection::AssemblyContentType _get_WindowsRuntime();
    // Set static field: static public System.Reflection.AssemblyContentType WindowsRuntime
    static void _set_WindowsRuntime(System::Reflection::AssemblyContentType value);
    // Creating value type constructor for type: AssemblyContentType
    AssemblyContentType(int value_ = {}) : value{value_} {}
  }; // System.Reflection.AssemblyContentType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyContentType, "System.Reflection", "AssemblyContentType");
#pragma pack(pop)