// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Valve.VR.IVRDriverManager
#include "Valve/VR/IVRDriverManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRDriverManager
  class CVRDriverManager : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRDriverManager FnTable
    // Offset: 0x10
    Valve::VR::IVRDriverManager FnTable;
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xFCDAD8
    static CVRDriverManager* New_ctor(System::IntPtr pInterface);
    // public System.UInt32 GetDriverCount()
    // Offset: 0xFCDBE0
    uint GetDriverCount();
    // public System.UInt32 GetDriverName(System.UInt32 nDriver, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0xFCDBFC
    uint GetDriverName(uint nDriver, System::Text::StringBuilder* pchValue, uint unBufferSize);
  }; // Valve.VR.CVRDriverManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRDriverManager*, "Valve.VR", "CVRDriverManager");
#pragma pack(pop)