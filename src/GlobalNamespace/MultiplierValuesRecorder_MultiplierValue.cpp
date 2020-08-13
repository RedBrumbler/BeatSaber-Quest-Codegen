// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MultiplierValuesRecorder/MultiplierValue
#include "GlobalNamespace/MultiplierValuesRecorder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MultiplierValuesRecorder/MultiplierValue.get_multiplier
int GlobalNamespace::MultiplierValuesRecorder::MultiplierValue::get_multiplier() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "get_multiplier"));
}
// Autogenerated method: MultiplierValuesRecorder/MultiplierValue.set_multiplier
void GlobalNamespace::MultiplierValuesRecorder::MultiplierValue::set_multiplier(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_multiplier", value));
}
// Autogenerated method: MultiplierValuesRecorder/MultiplierValue.get_time
float GlobalNamespace::MultiplierValuesRecorder::MultiplierValue::get_time() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(*this, "get_time"));
}
// Autogenerated method: MultiplierValuesRecorder/MultiplierValue.set_time
void GlobalNamespace::MultiplierValuesRecorder::MultiplierValue::set_time(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_time", value));
}
// Autogenerated method: MultiplierValuesRecorder/MultiplierValue..ctor
GlobalNamespace::MultiplierValuesRecorder::MultiplierValue* GlobalNamespace::MultiplierValuesRecorder::MultiplierValue::New_ctor(int multiplier, float time) {
  return (MultiplierValuesRecorder::MultiplierValue*)THROW_UNLESS(il2cpp_utils::New("", "MultiplierValuesRecorder/MultiplierValue", multiplier, time));
}
