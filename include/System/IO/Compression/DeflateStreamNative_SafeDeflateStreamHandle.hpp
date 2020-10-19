// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Compression.DeflateStreamNative
#include "System/IO/Compression/DeflateStreamNative.hpp"
// Including type: System.Runtime.InteropServices.SafeHandle
#include "System/Runtime/InteropServices/SafeHandle.hpp"
// Completed includes
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Autogenerated type: System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
  class DeflateStreamNative::SafeDeflateStreamHandle : public System::Runtime::InteropServices::SafeHandle {
    public:
    // public override System.Boolean get_IsInvalid()
    // Offset: 0x14EC3B0
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::get_IsInvalid()
    bool get_IsInvalid();
    // private System.Void .ctor()
    // Offset: 0x14EC35C
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static DeflateStreamNative::SafeDeflateStreamHandle* New_ctor();
    // protected override System.Boolean ReleaseHandle()
    // Offset: 0x14EC3FC
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::ReleaseHandle()
    bool ReleaseHandle();
  }; // System.IO.Compression.DeflateStreamNative/SafeDeflateStreamHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::Compression::DeflateStreamNative::SafeDeflateStreamHandle*, "System.IO.Compression", "DeflateStreamNative/SafeDeflateStreamHandle");
#pragma pack(pop)