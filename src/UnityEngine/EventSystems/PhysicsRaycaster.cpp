// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.PhysicsRaycaster
#include "UnityEngine/EventSystems/PhysicsRaycaster.hpp"
// Including type: UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer
#include "UnityEngine/EventSystems/PhysicsRaycaster_RaycastHitComparer.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData
#include "UnityEngine/EventSystems/PointerEventData.hpp"
// Including type: UnityEngine.Ray
#include "UnityEngine/Ray.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static protected System.Int32 kNoEventMaskSet
int UnityEngine::EventSystems::PhysicsRaycaster::_get_kNoEventMaskSet() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("UnityEngine.EventSystems", "PhysicsRaycaster", "kNoEventMaskSet"));
}
// Autogenerated static field setter
// Set static field: static protected System.Int32 kNoEventMaskSet
void UnityEngine::EventSystems::PhysicsRaycaster::_set_kNoEventMaskSet(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.EventSystems", "PhysicsRaycaster", "kNoEventMaskSet", value));
}
// Autogenerated method: UnityEngine.EventSystems.PhysicsRaycaster.get_depth
int UnityEngine::EventSystems::PhysicsRaycaster::get_depth() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_depth"));
}
// Autogenerated method: UnityEngine.EventSystems.PhysicsRaycaster.get_finalEventMask
int UnityEngine::EventSystems::PhysicsRaycaster::get_finalEventMask() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_finalEventMask"));
}
// Autogenerated method: UnityEngine.EventSystems.PhysicsRaycaster.get_eventMask
UnityEngine::LayerMask UnityEngine::EventSystems::PhysicsRaycaster::get_eventMask() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::LayerMask>(this, "get_eventMask"));
}
// Autogenerated method: UnityEngine.EventSystems.PhysicsRaycaster.set_eventMask
void UnityEngine::EventSystems::PhysicsRaycaster::set_eventMask(UnityEngine::LayerMask value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_eventMask", value));
}
// Autogenerated method: UnityEngine.EventSystems.PhysicsRaycaster.get_maxRayIntersections
int UnityEngine::EventSystems::PhysicsRaycaster::get_maxRayIntersections() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_maxRayIntersections"));
}
// Autogenerated method: UnityEngine.EventSystems.PhysicsRaycaster.set_maxRayIntersections
void UnityEngine::EventSystems::PhysicsRaycaster::set_maxRayIntersections(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_maxRayIntersections", value));
}
// Autogenerated method: UnityEngine.EventSystems.PhysicsRaycaster.ComputeRayAndDistance
bool UnityEngine::EventSystems::PhysicsRaycaster::ComputeRayAndDistance(UnityEngine::EventSystems::PointerEventData* eventData, UnityEngine::Ray& ray, int& eventDisplayIndex, float& distanceToClipPlane) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ComputeRayAndDistance", eventData, ray, eventDisplayIndex, distanceToClipPlane));
}
// Autogenerated method: UnityEngine.EventSystems.PhysicsRaycaster..ctor
UnityEngine::EventSystems::PhysicsRaycaster* UnityEngine::EventSystems::PhysicsRaycaster::New_ctor() {
  return (PhysicsRaycaster*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.EventSystems", "PhysicsRaycaster"));
}
// Autogenerated method: UnityEngine.EventSystems.PhysicsRaycaster.get_eventCamera
UnityEngine::Camera* UnityEngine::EventSystems::PhysicsRaycaster::get_eventCamera() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Camera*>(this, "get_eventCamera"));
}
// Autogenerated method: UnityEngine.EventSystems.PhysicsRaycaster.Raycast
void UnityEngine::EventSystems::PhysicsRaycaster::Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Raycast", eventData, resultAppendList));
}
