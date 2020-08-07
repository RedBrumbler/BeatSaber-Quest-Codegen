// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.StackGuard
  class StackGuard : public ::Il2CppObject {
    public:
    // private System.Int32 m_inliningDepth
    // Offset: 0x10
    int m_inliningDepth;
    // static field const value: static private System.Int32 MAX_UNCHECKED_INLINING_DEPTH
    static constexpr const int MAX_UNCHECKED_INLINING_DEPTH = 20;
    // Get static field: static private System.Int32 MAX_UNCHECKED_INLINING_DEPTH
    static int _get_MAX_UNCHECKED_INLINING_DEPTH();
    // Set static field: static private System.Int32 MAX_UNCHECKED_INLINING_DEPTH
    static void _set_MAX_UNCHECKED_INLINING_DEPTH(int value);
    // System.Boolean TryBeginInliningScope()
    // Offset: 0xCC8F9C
    bool TryBeginInliningScope();
    // System.Void EndInliningScope()
    // Offset: 0xCC8FBC
    void EndInliningScope();
    // private System.Boolean CheckForSufficientStack()
    // Offset: 0xCC8FB4
    bool CheckForSufficientStack();
    // public System.Void .ctor()
    // Offset: 0xCC8FD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static StackGuard* New_ctor();
  }; // System.Threading.Tasks.StackGuard
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::StackGuard*, "System.Threading.Tasks", "StackGuard");
#pragma pack(pop)