// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.Guid/GuidParseThrowStyle
  struct Guid::GuidParseThrowStyle : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Guid/GuidParseThrowStyle None
    static constexpr const int None = 0;
    // Get static field: static public System.Guid/GuidParseThrowStyle None
    static System::Guid::GuidParseThrowStyle _get_None();
    // Set static field: static public System.Guid/GuidParseThrowStyle None
    static void _set_None(System::Guid::GuidParseThrowStyle value);
    // static field const value: static public System.Guid/GuidParseThrowStyle All
    static constexpr const int All = 1;
    // Get static field: static public System.Guid/GuidParseThrowStyle All
    static System::Guid::GuidParseThrowStyle _get_All();
    // Set static field: static public System.Guid/GuidParseThrowStyle All
    static void _set_All(System::Guid::GuidParseThrowStyle value);
    // static field const value: static public System.Guid/GuidParseThrowStyle AllButOverflow
    static constexpr const int AllButOverflow = 2;
    // Get static field: static public System.Guid/GuidParseThrowStyle AllButOverflow
    static System::Guid::GuidParseThrowStyle _get_AllButOverflow();
    // Set static field: static public System.Guid/GuidParseThrowStyle AllButOverflow
    static void _set_AllButOverflow(System::Guid::GuidParseThrowStyle value);
    // Creating value type constructor for type: GuidParseThrowStyle
    GuidParseThrowStyle(int value_ = {}) : value{value_} {}
  }; // System.Guid/GuidParseThrowStyle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Guid::GuidParseThrowStyle, "System", "Guid/GuidParseThrowStyle");
#pragma pack(pop)