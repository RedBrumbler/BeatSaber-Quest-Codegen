// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRGrabbable
#include "GlobalNamespace/OVRGrabbable.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
// Including type: OVRGrabber
#include "GlobalNamespace/OVRGrabber.hpp"
// Including type: UnityEngine.Rigidbody
#include "UnityEngine/Rigidbody.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVRGrabbable.get_allowOffhandGrab
bool GlobalNamespace::OVRGrabbable::get_allowOffhandGrab() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_allowOffhandGrab"));
}
// Autogenerated method: OVRGrabbable.get_isGrabbed
bool GlobalNamespace::OVRGrabbable::get_isGrabbed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isGrabbed"));
}
// Autogenerated method: OVRGrabbable.get_snapPosition
bool GlobalNamespace::OVRGrabbable::get_snapPosition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_snapPosition"));
}
// Autogenerated method: OVRGrabbable.get_snapOrientation
bool GlobalNamespace::OVRGrabbable::get_snapOrientation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_snapOrientation"));
}
// Autogenerated method: OVRGrabbable.get_snapOffset
UnityEngine::Transform* GlobalNamespace::OVRGrabbable::get_snapOffset() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Transform*>(this, "get_snapOffset"));
}
// Autogenerated method: OVRGrabbable.get_grabbedBy
GlobalNamespace::OVRGrabber* GlobalNamespace::OVRGrabbable::get_grabbedBy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRGrabber*>(this, "get_grabbedBy"));
}
// Autogenerated method: OVRGrabbable.get_grabbedTransform
UnityEngine::Transform* GlobalNamespace::OVRGrabbable::get_grabbedTransform() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Transform*>(this, "get_grabbedTransform"));
}
// Autogenerated method: OVRGrabbable.get_grabbedRigidbody
UnityEngine::Rigidbody* GlobalNamespace::OVRGrabbable::get_grabbedRigidbody() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Rigidbody*>(this, "get_grabbedRigidbody"));
}
// Autogenerated method: OVRGrabbable.get_grabPoints
::Array<UnityEngine::Collider*>* GlobalNamespace::OVRGrabbable::get_grabPoints() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Collider*>*>(this, "get_grabPoints"));
}
// Autogenerated method: OVRGrabbable.GrabBegin
void GlobalNamespace::OVRGrabbable::GrabBegin(GlobalNamespace::OVRGrabber* hand, UnityEngine::Collider* grabPoint) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GrabBegin", hand, grabPoint));
}
// Autogenerated method: OVRGrabbable.GrabEnd
void GlobalNamespace::OVRGrabbable::GrabEnd(UnityEngine::Vector3 linearVelocity, UnityEngine::Vector3 angularVelocity) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GrabEnd", linearVelocity, angularVelocity));
}
// Autogenerated method: OVRGrabbable.Awake
void GlobalNamespace::OVRGrabbable::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: OVRGrabbable.Start
void GlobalNamespace::OVRGrabbable::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: OVRGrabbable.OnDestroy
void GlobalNamespace::OVRGrabbable::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: OVRGrabbable..ctor
GlobalNamespace::OVRGrabbable* GlobalNamespace::OVRGrabbable::New_ctor() {
  return (OVRGrabbable*)THROW_UNLESS(il2cpp_utils::New("", "OVRGrabbable"));
}