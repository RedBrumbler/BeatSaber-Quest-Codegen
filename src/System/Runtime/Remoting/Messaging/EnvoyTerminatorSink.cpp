// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
#include "System/Runtime/Remoting/Messaging/EnvoyTerminatorSink.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessage
#include "System/Runtime/Remoting/Messaging/IMessage.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageCtrl
#include "System/Runtime/Remoting/Messaging/IMessageCtrl.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.Runtime.Remoting.Messaging.EnvoyTerminatorSink Instance
System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::_get_Instance() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Runtime::Remoting::Messaging::EnvoyTerminatorSink*>("System.Runtime.Remoting.Messaging", "EnvoyTerminatorSink", "Instance"));
}
// Autogenerated static field setter
// Set static field: static public System.Runtime.Remoting.Messaging.EnvoyTerminatorSink Instance
void System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::_set_Instance(System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Runtime.Remoting.Messaging", "EnvoyTerminatorSink", "Instance", value));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.EnvoyTerminatorSink..cctor
void System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Runtime.Remoting.Messaging", "EnvoyTerminatorSink", ".cctor"));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.EnvoyTerminatorSink.SyncProcessMessage
System::Runtime::Remoting::Messaging::IMessage* System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessage*>(this, "SyncProcessMessage", msg));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.EnvoyTerminatorSink.AsyncProcessMessage
System::Runtime::Remoting::Messaging::IMessageCtrl* System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Messaging::IMessageCtrl*>(this, "AsyncProcessMessage", msg, replySink));
}
// Autogenerated method: System.Runtime.Remoting.Messaging.EnvoyTerminatorSink..ctor
System::Runtime::Remoting::Messaging::EnvoyTerminatorSink* System::Runtime::Remoting::Messaging::EnvoyTerminatorSink::New_ctor() {
  return (EnvoyTerminatorSink*)THROW_UNLESS(il2cpp_utils::New("System.Runtime.Remoting.Messaging", "EnvoyTerminatorSink"));
}
