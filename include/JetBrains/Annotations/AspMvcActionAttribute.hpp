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
  // Autogenerated type: JetBrains.Annotations.AspMvcActionAttribute
  class AspMvcActionAttribute : public System::Attribute {
    public:
    // private System.String <AnonymousProperty>k__BackingField
    // Offset: 0x10
    ::Il2CppString* AnonymousProperty;
    // public System.Void .ctor(System.String anonymousProperty)
    // Offset: 0x1944ED4
    static AspMvcActionAttribute* New_ctor(::Il2CppString* anonymousProperty);
    // public System.String get_AnonymousProperty()
    // Offset: 0x1944F08
    ::Il2CppString* get_AnonymousProperty();
    // private System.Void set_AnonymousProperty(System.String value)
    // Offset: 0x1944F10
    void set_AnonymousProperty(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1944ECC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static AspMvcActionAttribute* New_ctor();
  }; // JetBrains.Annotations.AspMvcActionAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcActionAttribute*, "JetBrains.Annotations", "AspMvcActionAttribute");
#pragma pack(pop)