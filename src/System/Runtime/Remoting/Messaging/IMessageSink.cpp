// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageCtrl
#include "System/Runtime/Remoting/Messaging/IMessageCtrl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.IMessageSink.SyncProcessMessage
System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::IMessageSink::SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessage*>(this, "SyncProcessMessage", msg));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.IMessageSink.AsyncProcessMessage
System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::Messaging::IMessageSink::AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageCtrl*>(this, "AsyncProcessMessage", msg, replySink));
}
