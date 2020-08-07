// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.Product
  class Product : public ::Il2CppObject {
    public:
    // public readonly System.String Description
    // Offset: 0x10
    ::Il2CppString* Description;
    // public readonly System.String FormattedPrice
    // Offset: 0x18
    ::Il2CppString* FormattedPrice;
    // public readonly System.String Name
    // Offset: 0x20
    ::Il2CppString* Name;
    // public readonly System.String Sku
    // Offset: 0x28
    ::Il2CppString* Sku;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE940F0
    static Product* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.Product
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Product*, "Oculus.Platform.Models", "Product");
#pragma pack(pop)