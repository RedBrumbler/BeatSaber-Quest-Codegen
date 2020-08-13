// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.SignalReceiver
#include "UnityEngine/Timeline/SignalReceiver.hpp"
// Including type: UnityEngine.Timeline.SignalReceiver/EventKeyValue
#include "UnityEngine/Timeline/SignalReceiver_EventKeyValue.hpp"
// Including type: UnityEngine.Timeline.SignalAsset
#include "UnityEngine/Timeline/SignalAsset.hpp"
// Including type: UnityEngine.Events.UnityEvent
#include "UnityEngine/Events/UnityEvent.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
// Including type: UnityEngine.Playables.INotification
#include "UnityEngine/Playables/INotification.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.AddReaction
void UnityEngine::Timeline::SignalReceiver::AddReaction(UnityEngine::Timeline::SignalAsset* asset, UnityEngine::Events::UnityEvent* reaction) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddReaction", asset, reaction));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.AddEmptyReaction
int UnityEngine::Timeline::SignalReceiver::AddEmptyReaction(UnityEngine::Events::UnityEvent* reaction) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "AddEmptyReaction", reaction));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.Remove
void UnityEngine::Timeline::SignalReceiver::Remove(UnityEngine::Timeline::SignalAsset* asset) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Remove", asset));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.GetRegisteredSignals
System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::SignalAsset*>* UnityEngine::Timeline::SignalReceiver::GetRegisteredSignals() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::SignalAsset*>*>(this, "GetRegisteredSignals"));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.GetReaction
UnityEngine::Events::UnityEvent* UnityEngine::Timeline::SignalReceiver::GetReaction(UnityEngine::Timeline::SignalAsset* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Events::UnityEvent*>(this, "GetReaction", key));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.Count
int UnityEngine::Timeline::SignalReceiver::Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Count"));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.ChangeSignalAtIndex
void UnityEngine::Timeline::SignalReceiver::ChangeSignalAtIndex(int idx, UnityEngine::Timeline::SignalAsset* newKey) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ChangeSignalAtIndex", idx, newKey));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.RemoveAtIndex
void UnityEngine::Timeline::SignalReceiver::RemoveAtIndex(int idx) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveAtIndex", idx));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.ChangeReactionAtIndex
void UnityEngine::Timeline::SignalReceiver::ChangeReactionAtIndex(int idx, UnityEngine::Events::UnityEvent* reaction) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ChangeReactionAtIndex", idx, reaction));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.GetReactionAtIndex
UnityEngine::Events::UnityEvent* UnityEngine::Timeline::SignalReceiver::GetReactionAtIndex(int idx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Events::UnityEvent*>(this, "GetReactionAtIndex", idx));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.GetSignalAssetAtIndex
UnityEngine::Timeline::SignalAsset* UnityEngine::Timeline::SignalReceiver::GetSignalAssetAtIndex(int idx) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Timeline::SignalAsset*>(this, "GetSignalAssetAtIndex", idx));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.OnEnable
void UnityEngine::Timeline::SignalReceiver::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver.OnNotify
void UnityEngine::Timeline::SignalReceiver::OnNotify(UnityEngine::Playables::Playable origin, UnityEngine::Playables::INotification* notification, ::CsObject* context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnNotify", origin, notification, context));
}
// Autogenerated method: UnityEngine.Timeline.SignalReceiver..ctor
UnityEngine::Timeline::SignalReceiver* UnityEngine::Timeline::SignalReceiver::New_ctor() {
  return (SignalReceiver*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Timeline", "SignalReceiver"));
}
