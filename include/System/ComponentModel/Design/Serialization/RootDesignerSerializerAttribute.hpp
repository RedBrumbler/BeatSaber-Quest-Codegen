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
// Type namespace: System.ComponentModel.Design.Serialization
namespace System::ComponentModel::Design::Serialization {
  // Autogenerated type: System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
  class RootDesignerSerializerAttribute : public System::Attribute {
    public:
    // private System.Boolean reloadable
    // Offset: 0x10
    bool reloadable;
    // private System.String serializerTypeName
    // Offset: 0x18
    ::Il2CppString* serializerTypeName;
    // private System.String serializerBaseTypeName
    // Offset: 0x20
    ::Il2CppString* serializerBaseTypeName;
    // public System.Void .ctor(System.String serializerTypeName, System.String baseSerializerTypeName, System.Boolean reloadable)
    // Offset: 0xF45DAC
    static RootDesignerSerializerAttribute* New_ctor(::Il2CppString* serializerTypeName, ::Il2CppString* baseSerializerTypeName, bool reloadable);
  }; // System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Design::Serialization::RootDesignerSerializerAttribute*, "System.ComponentModel.Design.Serialization", "RootDesignerSerializerAttribute");
#pragma pack(pop)