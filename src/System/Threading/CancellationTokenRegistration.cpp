// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.CancellationTokenRegistration
#include "System/Threading/CancellationTokenRegistration.hpp"
// Including type: System.Threading.CancellationCallbackInfo
#include "System/Threading/CancellationCallbackInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Threading.CancellationTokenRegistration..ctor
System::Threading::CancellationTokenRegistration* System::Threading::CancellationTokenRegistration::New_ctor(System::Threading::CancellationCallbackInfo* callbackInfo, System::Threading::SparselyPopulatedArrayAddInfo_1<System::Threading::CancellationCallbackInfo*> registrationInfo) {
  return (CancellationTokenRegistration*)THROW_UNLESS(il2cpp_utils::New("System.Threading", "CancellationTokenRegistration", callbackInfo, registrationInfo));
}
// Autogenerated method: System.Threading.CancellationTokenRegistration.TryDeregister
bool System::Threading::CancellationTokenRegistration::TryDeregister() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "TryDeregister"));
}
// Autogenerated method: System.Threading.CancellationTokenRegistration.Dispose
void System::Threading::CancellationTokenRegistration::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Dispose"));
}
void System::Threading::CancellationTokenRegistration::System_IDisposable_Dispose() {
  Dispose();
}
// Autogenerated method: System.Threading.CancellationTokenRegistration.Equals
bool System::Threading::CancellationTokenRegistration::Equals(::CsObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", obj));
}
// Autogenerated method: System.Threading.CancellationTokenRegistration.Equals
bool System::Threading::CancellationTokenRegistration::Equals(System::Threading::CancellationTokenRegistration other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
}
// Autogenerated method: System.Threading.CancellationTokenRegistration.GetHashCode
int System::Threading::CancellationTokenRegistration::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
}
