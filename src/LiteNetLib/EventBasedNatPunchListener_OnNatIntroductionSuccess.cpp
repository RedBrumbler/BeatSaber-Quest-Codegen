// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess
#include "LiteNetLib/EventBasedNatPunchListener_OnNatIntroductionSuccess.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
// Including type: LiteNetLib.NatAddressType
#include "LiteNetLib/NatAddressType.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess..ctor
LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess* LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<EventBasedNatPunchListener::OnNatIntroductionSuccess*>(object, method));
}
// Autogenerated method: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess.Invoke
void LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::Invoke(System::Net::IPEndPoint* targetEndPoint, LiteNetLib::NatAddressType type, ::Il2CppString* token) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", targetEndPoint, type, token));
}
// Autogenerated method: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess.BeginInvoke
System::IAsyncResult* LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::BeginInvoke(System::Net::IPEndPoint* targetEndPoint, LiteNetLib::NatAddressType type, ::Il2CppString* token, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", targetEndPoint, type, token, callback, object));
}
// Autogenerated method: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess.EndInvoke
void LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}