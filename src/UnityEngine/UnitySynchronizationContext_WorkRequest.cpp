// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UnitySynchronizationContext/WorkRequest
#include "UnityEngine/UnitySynchronizationContext.hpp"
// Including type: System.Threading.SendOrPostCallback
#include "System/Threading/SendOrPostCallback.hpp"
// Including type: System.Threading.ManualResetEvent
#include "System/Threading/ManualResetEvent.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.UnitySynchronizationContext/WorkRequest..ctor
UnityEngine::UnitySynchronizationContext::WorkRequest* UnityEngine::UnitySynchronizationContext::WorkRequest::New_ctor(System::Threading::SendOrPostCallback* callback, ::Il2CppObject* state, System::Threading::ManualResetEvent* waitHandle) {
  return (UnitySynchronizationContext::WorkRequest*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "UnitySynchronizationContext/WorkRequest", callback, state, waitHandle));
}
// Autogenerated method: UnityEngine.UnitySynchronizationContext/WorkRequest.Invoke
void UnityEngine::UnitySynchronizationContext::WorkRequest::Invoke() {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Invoke"));
}