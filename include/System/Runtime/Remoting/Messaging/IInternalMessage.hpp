// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.IInternalMessage
  class IInternalMessage {
    public:
    // public System.Runtime.Remoting.Identity get_TargetIdentity()
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
    // public System.Void set_TargetIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0xFFFFFFFF
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value);
    // public System.String get_Uri()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
    // public System.Void set_Uri(System.String value)
    // Offset: 0xFFFFFFFF
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::Il2CppString* value);
  }; // System.Runtime.Remoting.Messaging.IInternalMessage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::IInternalMessage*, "System.Runtime.Remoting.Messaging", "IInternalMessage");
#pragma pack(pop)