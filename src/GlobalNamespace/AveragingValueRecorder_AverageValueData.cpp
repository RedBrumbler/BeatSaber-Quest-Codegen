// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: AveragingValueRecorder/AverageValueData
#include "GlobalNamespace/AveragingValueRecorder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: AveragingValueRecorder/AverageValueData.get_value
float GlobalNamespace::AveragingValueRecorder::AverageValueData::get_value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(*this, "get_value"));
}
// Autogenerated method: AveragingValueRecorder/AverageValueData.set_value
void GlobalNamespace::AveragingValueRecorder::AverageValueData::set_value(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_value", value));
}
// Autogenerated method: AveragingValueRecorder/AverageValueData.get_time
float GlobalNamespace::AveragingValueRecorder::AverageValueData::get_time() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(*this, "get_time"));
}
// Autogenerated method: AveragingValueRecorder/AverageValueData.set_time
void GlobalNamespace::AveragingValueRecorder::AverageValueData::set_time(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_time", value));
}
// Autogenerated method: AveragingValueRecorder/AverageValueData..ctor
GlobalNamespace::AveragingValueRecorder::AverageValueData* GlobalNamespace::AveragingValueRecorder::AverageValueData::New_ctor(float value, float time) {
  return (AveragingValueRecorder::AverageValueData*)THROW_UNLESS(il2cpp_utils::New("", "AveragingValueRecorder/AverageValueData", value, time));
}
