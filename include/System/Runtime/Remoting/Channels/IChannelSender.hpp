// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Runtime.Remoting.Channels.IChannel
#include "System/Runtime/Remoting/Channels/IChannel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Autogenerated type: System.Runtime.Remoting.Channels.IChannelSender
  class IChannelSender : public System::Runtime::Remoting::Channels::IChannel {
    public:
    // public System.Runtime.Remoting.Messaging.IMessageSink CreateMessageSink(System.String url, System.Object remoteChannelData, System.String objectURI)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::IMessageSink* CreateMessageSink(::Il2CppString* url, ::Il2CppObject* remoteChannelData, ::Il2CppString*& objectURI);
  }; // System.Runtime.Remoting.Channels.IChannelSender
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::IChannelSender*, "System.Runtime.Remoting.Channels", "IChannelSender");
#pragma pack(pop)