// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Contexts.CrossContextChannel/ContextRestoreSink
#include "System/Runtime/Remoting/Contexts/CrossContextChannel_ContextRestoreSink.hpp"
// Including type: System.Runtime.Remoting.Contexts.Context
#include "System/Runtime/Remoting/Contexts/Context.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageCtrl
#include "System/Runtime/Remoting/Messaging/IMessageCtrl.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Contexts.CrossContextChannel/ContextRestoreSink..ctor
System::Runtime::Remoting::Contexts::CrossContextChannel::ContextRestoreSink* System::Runtime::Remoting::Contexts::CrossContextChannel::ContextRestoreSink::New_ctor(System::Runtime::Remoting::Messaging::IMessageSink* next, System::Runtime::Remoting::Contexts::Context* context, System::Runtime::Remoting::Messaging::IMessage* call) {
  return (CrossContextChannel::ContextRestoreSink*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Contexts", "CrossContextChannel/ContextRestoreSink", next, context, call));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.CrossContextChannel/ContextRestoreSink.SyncProcessMessage
System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Contexts::CrossContextChannel::ContextRestoreSink::SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessage*>(this, "SyncProcessMessage", msg));
}
// Autogenerated method: System.Runtime.Remoting.Contexts.CrossContextChannel/ContextRestoreSink.AsyncProcessMessage
System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::Contexts::CrossContextChannel::ContextRestoreSink::AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageCtrl*>(this, "AsyncProcessMessage", msg, replySink));
}