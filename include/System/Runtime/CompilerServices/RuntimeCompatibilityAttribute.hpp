// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
  class RuntimeCompatibilityAttribute : public System::Attribute {
    public:
    // private System.Boolean m_wrapNonExceptionThrows
    // Offset: 0x10
    bool m_wrapNonExceptionThrows;
    // public System.Void set_WrapNonExceptionThrows(System.Boolean value)
    // Offset: 0x114FCF8
    void set_WrapNonExceptionThrows(bool value);
    // public System.Void .ctor()
    // Offset: 0x114FCF0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static RuntimeCompatibilityAttribute* New_ctor();
  }; // System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::RuntimeCompatibilityAttribute*, "System.Runtime.CompilerServices", "RuntimeCompatibilityAttribute");
#pragma pack(pop)