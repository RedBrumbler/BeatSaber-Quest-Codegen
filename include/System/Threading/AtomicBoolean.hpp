// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.AtomicBoolean
  class AtomicBoolean : public ::Il2CppObject {
    public:
    // private System.Int32 flag
    // Offset: 0x10
    int flag;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return flag;
    }
    // public System.Boolean TryRelaxedSet()
    // Offset: 0x17BE034
    bool TryRelaxedSet();
    // public System.Boolean Exchange(System.Boolean newVal)
    // Offset: 0x17BE064
    bool Exchange(bool newVal);
    // public System.Boolean Equals(System.Threading.AtomicBoolean rhs)
    // Offset: 0x17BE08C
    bool Equals(System::Threading::AtomicBoolean* rhs);
    // public override System.Boolean Equals(System.Object rhs)
    // Offset: 0x17BE0B0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object rhs)
    bool Equals(::Il2CppObject* rhs);
    // public override System.Int32 GetHashCode()
    // Offset: 0x17BE14C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public System.Void .ctor()
    // Offset: 0x17BE158
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AtomicBoolean* New_ctor();
  }; // System.Threading.AtomicBoolean
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::AtomicBoolean*, "System.Threading", "AtomicBoolean");
#pragma pack(pop)