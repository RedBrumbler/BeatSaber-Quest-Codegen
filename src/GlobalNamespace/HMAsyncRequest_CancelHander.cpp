// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMAsyncRequest/CancelHander
#include "GlobalNamespace/HMAsyncRequest_CancelHander.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMAsyncRequest/CancelHander..ctor
GlobalNamespace::HMAsyncRequest::CancelHander* GlobalNamespace::HMAsyncRequest::CancelHander::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return (HMAsyncRequest::CancelHander*)THROW_UNLESS(il2cpp_utils::New("", "HMAsyncRequest/CancelHander", object, method));
}
// Autogenerated method: HMAsyncRequest/CancelHander.Invoke
void GlobalNamespace::HMAsyncRequest::CancelHander::Invoke(GlobalNamespace::HMAsyncRequest* request) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", request));
}
// Autogenerated method: HMAsyncRequest/CancelHander.BeginInvoke
System::IAsyncResult* GlobalNamespace::HMAsyncRequest::CancelHander::BeginInvoke(GlobalNamespace::HMAsyncRequest* request, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", request, callback, object));
}
// Autogenerated method: HMAsyncRequest/CancelHander.EndInvoke
void GlobalNamespace::HMAsyncRequest::CancelHander::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}