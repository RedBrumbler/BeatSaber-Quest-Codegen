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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.AssemblyTrademarkAttribute
  class AssemblyTrademarkAttribute : public System::Attribute {
    public:
    // private System.String m_trademark
    // Offset: 0x10
    ::Il2CppString* m_trademark;
    // public System.Void .ctor(System.String trademark)
    // Offset: 0x134DE88
    static AssemblyTrademarkAttribute* New_ctor(::Il2CppString* trademark);
  }; // System.Reflection.AssemblyTrademarkAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyTrademarkAttribute*, "System.Reflection", "AssemblyTrademarkAttribute");
#pragma pack(pop)