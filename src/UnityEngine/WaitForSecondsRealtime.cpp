// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.WaitForSecondsRealtime
#include "UnityEngine/WaitForSecondsRealtime.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.WaitForSecondsRealtime.get_waitTime
float UnityEngine::WaitForSecondsRealtime::get_waitTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_waitTime"));
}
// Autogenerated method: UnityEngine.WaitForSecondsRealtime.set_waitTime
void UnityEngine::WaitForSecondsRealtime::set_waitTime(float value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_waitTime", value));
}
// Autogenerated method: UnityEngine.WaitForSecondsRealtime..ctor
UnityEngine::WaitForSecondsRealtime* UnityEngine::WaitForSecondsRealtime::New_ctor(float time) {
  return (WaitForSecondsRealtime*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "WaitForSecondsRealtime", time));
}
// Autogenerated method: UnityEngine.WaitForSecondsRealtime.get_keepWaiting
bool UnityEngine::WaitForSecondsRealtime::get_keepWaiting() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_keepWaiting"));
}