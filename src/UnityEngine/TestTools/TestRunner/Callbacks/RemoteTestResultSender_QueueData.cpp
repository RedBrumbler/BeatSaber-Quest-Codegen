// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData
#include "UnityEngine/TestTools/TestRunner/Callbacks/RemoteTestResultSender_QueueData.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData.get_id
System::Guid UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::get_id() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Guid>(this, "get_id"));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData.set_id
void UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::set_id(System::Guid value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_id", value));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData.get_data
::Array<uint8_t>* UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::get_data() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_data"));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData.set_data
void UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::set_data(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_data", value));
}
// Autogenerated method: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData..ctor
UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData* UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData::New_ctor() {
  return (RemoteTestResultSender::QueueData*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.TestTools.TestRunner.Callbacks", "RemoteTestResultSender/QueueData"));
}