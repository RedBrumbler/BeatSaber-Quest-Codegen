// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Parties
#include "Oculus/Platform/Parties.hpp"
// Including type: Oculus.Platform.Request`1
#include "Oculus/Platform/Request_1.hpp"
// Including type: Oculus.Platform.Models.Party
#include "Oculus/Platform/Models/Party.hpp"
// Including type: Oculus.Platform.Models.PartyUpdateNotification
#include "Oculus/Platform/Models/PartyUpdateNotification.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Oculus.Platform.Parties.GetCurrent
Oculus::Platform::Request_1<Oculus::Platform::Models::Party*>* Oculus::Platform::Parties::GetCurrent() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Oculus::Platform::Request_1<Oculus::Platform::Models::Party*>*>("Oculus.Platform", "Parties", "GetCurrent"));
}
// Autogenerated method: Oculus.Platform.Parties.SetPartyUpdateNotificationCallback
void Oculus::Platform::Parties::SetPartyUpdateNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::PartyUpdateNotification*>::Callback* callback) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Oculus.Platform", "Parties", "SetPartyUpdateNotificationCallback", callback));
}
