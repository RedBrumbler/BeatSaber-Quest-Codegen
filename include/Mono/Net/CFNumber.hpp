// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.CFObject
#include "Mono/Net/CFObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Mono.Net
namespace Mono::Net {
  // Autogenerated type: Mono.Net.CFNumber
  class CFNumber : public Mono::Net::CFObject {
    public:
    // static private System.Boolean CFNumberGetValue(System.IntPtr handle, System.IntPtr type, out System.Int32 value)
    // Offset: 0x11EDD78
    static bool CFNumberGetValue(System::IntPtr handle, System::IntPtr type, int& value);
    // static public System.Int32 AsInt32(System.IntPtr handle)
    // Offset: 0x11EDE18
    static int AsInt32(System::IntPtr handle);
  }; // Mono.Net.CFNumber
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::CFNumber*, "Mono.Net", "CFNumber");
#pragma pack(pop)