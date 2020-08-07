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
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadPoolWorkQueue
  class ThreadPoolWorkQueue;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ThreadPoolGlobals
  class ThreadPoolGlobals : public ::Il2CppObject {
    public:
    // Get static field: static public System.UInt32 tpQuantum
    static uint _get_tpQuantum();
    // Set static field: static public System.UInt32 tpQuantum
    static void _set_tpQuantum(uint value);
    // Get static field: static public System.Int32 processorCount
    static int _get_processorCount();
    // Set static field: static public System.Int32 processorCount
    static void _set_processorCount(int value);
    // Get static field: static public System.Boolean tpHosted
    static bool _get_tpHosted();
    // Set static field: static public System.Boolean tpHosted
    static void _set_tpHosted(bool value);
    // Get static field: static public System.Boolean vmTpInitialized
    static bool _get_vmTpInitialized();
    // Set static field: static public System.Boolean vmTpInitialized
    static void _set_vmTpInitialized(bool value);
    // Get static field: static public System.Boolean enableWorkerTracking
    static bool _get_enableWorkerTracking();
    // Set static field: static public System.Boolean enableWorkerTracking
    static void _set_enableWorkerTracking(bool value);
    // Get static field: static public System.Threading.ThreadPoolWorkQueue workQueue
    static System::Threading::ThreadPoolWorkQueue* _get_workQueue();
    // Set static field: static public System.Threading.ThreadPoolWorkQueue workQueue
    static void _set_workQueue(System::Threading::ThreadPoolWorkQueue* value);
    // static private System.Void .cctor()
    // Offset: 0xCD49AC
    static void _cctor();
  }; // System.Threading.ThreadPoolGlobals
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolGlobals*, "System.Threading", "ThreadPoolGlobals");
#pragma pack(pop)