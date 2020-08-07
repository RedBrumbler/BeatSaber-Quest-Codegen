// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.PathConstraint
#include "NUnit/Framework/Constraints/PathConstraint.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Autogenerated type: NUnit.Framework.Constraints.SamePathConstraint
  class SamePathConstraint : public NUnit::Framework::Constraints::PathConstraint {
    public:
    // public System.Void .ctor(System.String expected)
    // Offset: 0x1068A20
    // Implemented from: NUnit.Framework.Constraints.PathConstraint
    // Base method: System.Void PathConstraint::.ctor(System.String expected)
    // Base method: System.Void StringConstraint::.ctor(System.String expected)
    static SamePathConstraint* New_ctor(::Il2CppString* expected);
    // public override System.String get_Description()
    // Offset: 0x106A400
    // Implemented from: NUnit.Framework.Constraints.StringConstraint
    // Base method: System.String StringConstraint::get_Description()
    ::Il2CppString* get_Description();
    // protected override System.Boolean Matches(System.String actual)
    // Offset: 0x106A484
    // Implemented from: NUnit.Framework.Constraints.StringConstraint
    // Base method: System.Boolean StringConstraint::Matches(System.String actual)
    bool Matches(::Il2CppString* actual);
  }; // NUnit.Framework.Constraints.SamePathConstraint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::SamePathConstraint*, "NUnit.Framework.Constraints", "SamePathConstraint");
#pragma pack(pop)