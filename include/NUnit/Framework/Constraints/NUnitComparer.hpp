// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.NUnitComparer
  // [] Offset: FFFFFFFF
  class NUnitComparer : public ::Il2CppObject/*, public System::Collections::IComparer*/ {
    public:
    // Creating value type constructor for type: NUnitComparer
    NUnitComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // static public NUnit.Framework.Constraints.NUnitComparer get_Default()
    // Offset: 0x159D5C4
    static NUnit::Framework::Constraints::NUnitComparer* get_Default();
    // public System.Int32 Compare(System.Object x, System.Object y)
    // Offset: 0x15A3968
    int Compare_NEW(::Il2CppObject* x, ::Il2CppObject* y);
    // public System.Void .ctor()
    // Offset: 0x15A3960
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NUnitComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::NUnitComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NUnitComparer*, creationType>()));
    }
  }; // NUnit.Framework.Constraints.NUnitComparer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::NUnitComparer*, "NUnit.Framework.Constraints", "NUnitComparer");