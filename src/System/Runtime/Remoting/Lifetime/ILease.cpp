// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Runtime.Remoting.Lifetime.ILease
#include "System/Runtime/Remoting/Lifetime/ILease.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Including type: System.Runtime.Remoting.Lifetime.LeaseState
#include "System/Runtime/Remoting/Lifetime/LeaseState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Lifetime.ILease.get_CurrentLeaseTime
System::TimeSpan System::Runtime::Remoting::Lifetime::ILease::get_CurrentLeaseTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(this, "get_CurrentLeaseTime"));
}
// Autogenerated method: System.Runtime.Remoting.Lifetime.ILease.get_CurrentState
System::Runtime::Remoting::Lifetime::LeaseState System::Runtime::Remoting::Lifetime::ILease::get_CurrentState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Lifetime::LeaseState>(this, "get_CurrentState"));
}
// Autogenerated method: System.Runtime.Remoting.Lifetime.ILease.get_RenewOnCallTime
System::TimeSpan System::Runtime::Remoting::Lifetime::ILease::get_RenewOnCallTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(this, "get_RenewOnCallTime"));
}
// Autogenerated method: System.Runtime.Remoting.Lifetime.ILease.Renew
System::TimeSpan System::Runtime::Remoting::Lifetime::ILease::Renew(System::TimeSpan renewalTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(this, "Renew", renewalTime));
}
