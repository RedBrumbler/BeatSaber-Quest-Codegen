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
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: HandleRef
  struct HandleRef;
  // Forward declaring type: SafeHandle
  class SafeHandle;
}
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeWaitHandle
  class SafeWaitHandle;
  // Forward declaring type: SafeProcessHandle
  class SafeProcessHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Autogenerated type: Microsoft.Win32.NativeMethods
  class NativeMethods : public ::Il2CppObject {
    public:
    // static public System.Boolean DuplicateHandle(System.Runtime.InteropServices.HandleRef hSourceProcessHandle, System.Runtime.InteropServices.SafeHandle hSourceHandle, System.Runtime.InteropServices.HandleRef hTargetProcess, Microsoft.Win32.SafeHandles.SafeWaitHandle targetHandle, System.Int32 dwDesiredAccess, System.Boolean bInheritHandle, System.Int32 dwOptions)
    // Offset: 0xF44768
    static bool DuplicateHandle(System::Runtime::InteropServices::HandleRef hSourceProcessHandle, System::Runtime::InteropServices::SafeHandle* hSourceHandle, System::Runtime::InteropServices::HandleRef hTargetProcess, Microsoft::Win32::SafeHandles::SafeWaitHandle*& targetHandle, int dwDesiredAccess, bool bInheritHandle, int dwOptions);
    // static public System.Boolean DuplicateHandle(System.Runtime.InteropServices.HandleRef hSourceProcessHandle, System.Runtime.InteropServices.HandleRef hSourceHandle, System.Runtime.InteropServices.HandleRef hTargetProcess, Microsoft.Win32.SafeHandles.SafeProcessHandle targetHandle, System.Int32 dwDesiredAccess, System.Boolean bInheritHandle, System.Int32 dwOptions)
    // Offset: 0xF4493C
    static bool DuplicateHandle(System::Runtime::InteropServices::HandleRef hSourceProcessHandle, System::Runtime::InteropServices::HandleRef hSourceHandle, System::Runtime::InteropServices::HandleRef hTargetProcess, Microsoft::Win32::SafeHandles::SafeProcessHandle*& targetHandle, int dwDesiredAccess, bool bInheritHandle, int dwOptions);
    // static public System.IntPtr GetCurrentProcess()
    // Offset: 0xF44AB4
    static System::IntPtr GetCurrentProcess();
    // static public System.Boolean GetExitCodeProcess(System.IntPtr processHandle, System.Int32 exitCode)
    // Offset: 0xF44AB8
    static bool GetExitCodeProcess(System::IntPtr processHandle, int& exitCode);
    // static public System.Boolean GetExitCodeProcess(Microsoft.Win32.SafeHandles.SafeProcessHandle processHandle, System.Int32 exitCode)
    // Offset: 0xF44ABC
    static bool GetExitCodeProcess(Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, int& exitCode);
    // static public System.Boolean TerminateProcess(System.IntPtr processHandle, System.Int32 exitCode)
    // Offset: 0xF44B80
    static bool TerminateProcess(System::IntPtr processHandle, int exitCode);
    // static public System.Boolean TerminateProcess(Microsoft.Win32.SafeHandles.SafeProcessHandle processHandle, System.Int32 exitCode)
    // Offset: 0xF44B84
    static bool TerminateProcess(Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, int exitCode);
    // static public System.Int32 GetCurrentProcessId()
    // Offset: 0xF44C48
    static int GetCurrentProcessId();
    // static public System.Boolean CloseProcess(System.IntPtr handle)
    // Offset: 0xF44C4C
    static bool CloseProcess(System::IntPtr handle);
  }; // Microsoft.Win32.NativeMethods
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::NativeMethods*, "Microsoft.Win32", "NativeMethods");
#pragma pack(pop)