// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMAsyncRequest
#include "GlobalNamespace/HMAsyncRequest.hpp"
// Including type: HMAsyncRequest/CancelHander
#include "GlobalNamespace/HMAsyncRequest_CancelHander.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: HMAsyncRequest.get_CancelHandler
GlobalNamespace::HMAsyncRequest::CancelHander* GlobalNamespace::HMAsyncRequest::get_CancelHandler() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::HMAsyncRequest::CancelHander*>(this, "get_CancelHandler"));
}
// Autogenerated method: HMAsyncRequest.set_CancelHandler
void GlobalNamespace::HMAsyncRequest::set_CancelHandler(GlobalNamespace::HMAsyncRequest::CancelHander* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_CancelHandler", value));
}
// Autogenerated method: HMAsyncRequest.get_cancelled
bool GlobalNamespace::HMAsyncRequest::get_cancelled() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_cancelled"));
}
// Autogenerated method: HMAsyncRequest.Cancel
void GlobalNamespace::HMAsyncRequest::Cancel() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Cancel"));
}
// Autogenerated method: HMAsyncRequest..ctor
GlobalNamespace::HMAsyncRequest* GlobalNamespace::HMAsyncRequest::New_ctor() {
  return (HMAsyncRequest*)THROW_UNLESS(il2cpp_utils::New("", "HMAsyncRequest"));
}
