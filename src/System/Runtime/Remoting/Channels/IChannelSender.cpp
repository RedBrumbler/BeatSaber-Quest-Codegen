// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Channels.IChannelSender
#include "System/Runtime/Remoting/Channels/IChannelSender.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Channels.IChannelSender.CreateMessageSink
System::Runtime::Remoting::Messaging::IMessageSink* System::Runtime::Remoting::Channels::IChannelSender::CreateMessageSink(::Il2CppString* url, ::Il2CppObject* remoteChannelData, ::Il2CppString*& objectURI) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageSink*>(this, "CreateMessageSink", url, remoteChannelData, objectURI));
}