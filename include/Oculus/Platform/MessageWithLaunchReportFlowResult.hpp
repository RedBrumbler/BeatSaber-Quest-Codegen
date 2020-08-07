// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: LaunchReportFlowResult
  class LaunchReportFlowResult;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithLaunchReportFlowResult
  class MessageWithLaunchReportFlowResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::LaunchReportFlowResult*> {
    public:
    // protected Oculus.Platform.Models.LaunchReportFlowResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE8D26C
    Oculus::Platform::Models::LaunchReportFlowResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE8D1C8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithLaunchReportFlowResult* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.LaunchReportFlowResult GetLaunchReportFlowResult()
    // Offset: 0xE8D228
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.LaunchReportFlowResult Message::GetLaunchReportFlowResult()
    Oculus::Platform::Models::LaunchReportFlowResult* GetLaunchReportFlowResult();
  }; // Oculus.Platform.MessageWithLaunchReportFlowResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithLaunchReportFlowResult*, "Oculus.Platform", "MessageWithLaunchReportFlowResult");
#pragma pack(pop)