// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Callback/RequestCallback
#include "Oculus/Platform/Callback_RequestCallback.hpp"
// Including type: Oculus.Platform.Message/Callback
#include "Oculus/Platform/Message_Callback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.Callback/RequestCallback..ctor
Oculus::Platform::Callback::RequestCallback* Oculus::Platform::Callback::RequestCallback::New_ctor(Oculus::Platform::Message::Callback* callback) {
  return (Callback::RequestCallback*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "Callback/RequestCallback", callback));
}
// Autogenerated method: Oculus.Platform.Callback/RequestCallback.HandleMessage
void Oculus::Platform::Callback::RequestCallback::HandleMessage(Oculus::Platform::Message* msg) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleMessage", msg));
}
// Autogenerated method: Oculus.Platform.Callback/RequestCallback..ctor
Oculus::Platform::Callback::RequestCallback* Oculus::Platform::Callback::RequestCallback::New_ctor() {
  return (Callback::RequestCallback*)THROW_UNLESS(il2cpp_utils::New("Oculus.Platform", "Callback/RequestCallback"));
}