// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.ServerObjectReplySink
#include "System/Runtime/Remoting/Messaging/ServerObjectReplySink.hpp"
// Including type: System.Runtime.Remoting.ServerIdentity
#include "System/Runtime/Remoting/ServerIdentity.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageCtrl
#include "System/Runtime/Remoting/Messaging/IMessageCtrl.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Messaging.ServerObjectReplySink..ctor
System::Runtime::Remoting::Messaging::ServerObjectReplySink* System::Runtime::Remoting::Messaging::ServerObjectReplySink::New_ctor(System::Runtime::Remoting::ServerIdentity* identity, System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  return (ServerObjectReplySink*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "ServerObjectReplySink", identity, replySink));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ServerObjectReplySink.SyncProcessMessage
System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::ServerObjectReplySink::SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessage*>(this, "SyncProcessMessage", msg));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.ServerObjectReplySink.AsyncProcessMessage
System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::Messaging::ServerObjectReplySink::AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageCtrl*>(this, "AsyncProcessMessage", msg, replySink));
}