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
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Autogenerated type: NUnit.Framework.Constraints.ToleranceMode
  struct ToleranceMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public NUnit.Framework.Constraints.ToleranceMode Unset
    static constexpr const int Unset = 0;
    // Get static field: static public NUnit.Framework.Constraints.ToleranceMode Unset
    static NUnit::Framework::Constraints::ToleranceMode _get_Unset();
    // Set static field: static public NUnit.Framework.Constraints.ToleranceMode Unset
    static void _set_Unset(NUnit::Framework::Constraints::ToleranceMode value);
    // static field const value: static public NUnit.Framework.Constraints.ToleranceMode Linear
    static constexpr const int Linear = 1;
    // Get static field: static public NUnit.Framework.Constraints.ToleranceMode Linear
    static NUnit::Framework::Constraints::ToleranceMode _get_Linear();
    // Set static field: static public NUnit.Framework.Constraints.ToleranceMode Linear
    static void _set_Linear(NUnit::Framework::Constraints::ToleranceMode value);
    // static field const value: static public NUnit.Framework.Constraints.ToleranceMode Percent
    static constexpr const int Percent = 2;
    // Get static field: static public NUnit.Framework.Constraints.ToleranceMode Percent
    static NUnit::Framework::Constraints::ToleranceMode _get_Percent();
    // Set static field: static public NUnit.Framework.Constraints.ToleranceMode Percent
    static void _set_Percent(NUnit::Framework::Constraints::ToleranceMode value);
    // static field const value: static public NUnit.Framework.Constraints.ToleranceMode Ulps
    static constexpr const int Ulps = 3;
    // Get static field: static public NUnit.Framework.Constraints.ToleranceMode Ulps
    static NUnit::Framework::Constraints::ToleranceMode _get_Ulps();
    // Set static field: static public NUnit.Framework.Constraints.ToleranceMode Ulps
    static void _set_Ulps(NUnit::Framework::Constraints::ToleranceMode value);
    // Creating value type constructor for type: ToleranceMode
    ToleranceMode(int value_ = {}) : value{value_} {}
  }; // NUnit.Framework.Constraints.ToleranceMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::ToleranceMode, "NUnit.Framework.Constraints", "ToleranceMode");
#pragma pack(pop)