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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.RazorDirectiveAttribute
  class RazorDirectiveAttribute : public System::Attribute {
    public:
    // private System.String <Directive>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Directive;
    // public System.Void .ctor(System.String directive)
    // Offset: 0x1945748
    static RazorDirectiveAttribute* New_ctor(::Il2CppString* directive);
    // public System.String get_Directive()
    // Offset: 0x194577C
    ::Il2CppString* get_Directive();
    // private System.Void set_Directive(System.String value)
    // Offset: 0x1945784
    void set_Directive(::Il2CppString* value);
  }; // JetBrains.Annotations.RazorDirectiveAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorDirectiveAttribute*, "JetBrains.Annotations", "RazorDirectiveAttribute");
#pragma pack(pop)