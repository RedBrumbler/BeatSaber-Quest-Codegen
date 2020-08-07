// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.TimelineUndo
#include "UnityEngine/Timeline/TimelineUndo.hpp"
// Including type: UnityEngine.Timeline.TimelineAsset
#include "UnityEngine/Timeline/TimelineAsset.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Timeline.TimelineUndo.PushDestroyUndo
void UnityEngine::Timeline::TimelineUndo::PushDestroyUndo(UnityEngine::Timeline::TimelineAsset* timeline, UnityEngine::Object* thingToDirty, UnityEngine::Object* objectToDestroy, ::Il2CppString* operation) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Timeline", "TimelineUndo", "PushDestroyUndo", timeline, thingToDirty, objectToDestroy, operation));
}
// Autogenerated method: UnityEngine.Timeline.TimelineUndo.PushUndo
void UnityEngine::Timeline::TimelineUndo::PushUndo(UnityEngine::Object* thingToDirty, ::Il2CppString* operation) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Timeline", "TimelineUndo", "PushUndo", thingToDirty, operation));
}
// Autogenerated method: UnityEngine.Timeline.TimelineUndo.RegisterCreatedObjectUndo
void UnityEngine::Timeline::TimelineUndo::RegisterCreatedObjectUndo(UnityEngine::Object* thingCreated, ::Il2CppString* operation) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Timeline", "TimelineUndo", "RegisterCreatedObjectUndo", thingCreated, operation));
}