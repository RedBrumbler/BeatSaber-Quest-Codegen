// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.SignalAsset
#include "UnityEngine/Timeline/SignalAsset.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Action`1<UnityEngine.Timeline.SignalAsset> OnEnableCallback
System::Action_1<UnityEngine::Timeline::SignalAsset*>* UnityEngine::Timeline::SignalAsset::_get_OnEnableCallback() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Action_1<UnityEngine::Timeline::SignalAsset*>*>("UnityEngine.Timeline", "SignalAsset", "OnEnableCallback"));
}
// Autogenerated static field setter
// Set static field: static private System.Action`1<UnityEngine.Timeline.SignalAsset> OnEnableCallback
void UnityEngine::Timeline::SignalAsset::_set_OnEnableCallback(System::Action_1<UnityEngine::Timeline::SignalAsset*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Timeline", "SignalAsset", "OnEnableCallback", value));
}
// Autogenerated method: UnityEngine.Timeline.SignalAsset.add_OnEnableCallback
void UnityEngine::Timeline::SignalAsset::add_OnEnableCallback(System::Action_1<UnityEngine::Timeline::SignalAsset*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Timeline", "SignalAsset", "add_OnEnableCallback", value));
}
// Autogenerated method: UnityEngine.Timeline.SignalAsset.remove_OnEnableCallback
void UnityEngine::Timeline::SignalAsset::remove_OnEnableCallback(System::Action_1<UnityEngine::Timeline::SignalAsset*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Timeline", "SignalAsset", "remove_OnEnableCallback", value));
}
// Autogenerated method: UnityEngine.Timeline.SignalAsset.OnEnable
void UnityEngine::Timeline::SignalAsset::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: UnityEngine.Timeline.SignalAsset..ctor
UnityEngine::Timeline::SignalAsset* UnityEngine::Timeline::SignalAsset::New_ctor() {
  return (SignalAsset*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Timeline", "SignalAsset"));
}
