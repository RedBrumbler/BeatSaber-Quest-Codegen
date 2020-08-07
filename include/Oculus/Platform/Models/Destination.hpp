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
  // Autogenerated type: Oculus.Platform.Models.Destination
  class Destination : public ::Il2CppObject {
    public:
    // public readonly System.String ApiName
    // Offset: 0x10
    ::Il2CppString* ApiName;
    // public readonly System.String DeeplinkMessage
    // Offset: 0x18
    ::Il2CppString* DeeplinkMessage;
    // public readonly System.String DisplayName
    // Offset: 0x20
    ::Il2CppString* DisplayName;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE9343C
    static Destination* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.Destination
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Destination*, "Oculus.Platform.Models", "Destination");
#pragma pack(pop)