// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRGrabber
#include "GlobalNamespace/OVRGrabber.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: UnityEngine.Collider
#include "UnityEngine/Collider.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: OVRGrabbable
#include "GlobalNamespace/OVRGrabbable.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: OVRCameraRig
#include "GlobalNamespace/OVRCameraRig.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVRGrabber.get_grabbedObject
GlobalNamespace::OVRGrabbable* GlobalNamespace::OVRGrabber::get_grabbedObject() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRGrabbable*>(this, "get_grabbedObject"));
}
// Autogenerated method: OVRGrabber.ForceRelease
void GlobalNamespace::OVRGrabber::ForceRelease(GlobalNamespace::OVRGrabbable* grabbable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ForceRelease", grabbable));
}
// Autogenerated method: OVRGrabber.Awake
void GlobalNamespace::OVRGrabber::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: OVRGrabber.Start
void GlobalNamespace::OVRGrabber::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: OVRGrabber.Update
void GlobalNamespace::OVRGrabber::Update() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update"));
}
// Autogenerated method: OVRGrabber.FixedUpdate
void GlobalNamespace::OVRGrabber::FixedUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixedUpdate"));
}
// Autogenerated method: OVRGrabber.OnUpdatedAnchors
void GlobalNamespace::OVRGrabber::OnUpdatedAnchors() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnUpdatedAnchors"));
}
// Autogenerated method: OVRGrabber.OnDestroy
void GlobalNamespace::OVRGrabber::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: OVRGrabber.OnTriggerEnter
void GlobalNamespace::OVRGrabber::OnTriggerEnter(UnityEngine::Collider* otherCollider) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnTriggerEnter", otherCollider));
}
// Autogenerated method: OVRGrabber.OnTriggerExit
void GlobalNamespace::OVRGrabber::OnTriggerExit(UnityEngine::Collider* otherCollider) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnTriggerExit", otherCollider));
}
// Autogenerated method: OVRGrabber.CheckForGrabOrRelease
void GlobalNamespace::OVRGrabber::CheckForGrabOrRelease(float prevFlex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckForGrabOrRelease", prevFlex));
}
// Autogenerated method: OVRGrabber.GrabBegin
void GlobalNamespace::OVRGrabber::GrabBegin() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GrabBegin"));
}
// Autogenerated method: OVRGrabber.MoveGrabbedObject
void GlobalNamespace::OVRGrabber::MoveGrabbedObject(UnityEngine::Vector3 pos, UnityEngine::Quaternion rot, bool forceTeleport) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveGrabbedObject", pos, rot, forceTeleport));
}
// Autogenerated method: OVRGrabber.GrabEnd
void GlobalNamespace::OVRGrabber::GrabEnd() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GrabEnd"));
}
// Autogenerated method: OVRGrabber.GrabbableRelease
void GlobalNamespace::OVRGrabber::GrabbableRelease(UnityEngine::Vector3 linearVelocity, UnityEngine::Vector3 angularVelocity) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GrabbableRelease", linearVelocity, angularVelocity));
}
// Autogenerated method: OVRGrabber.GrabVolumeEnable
void GlobalNamespace::OVRGrabber::GrabVolumeEnable(bool enabled) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GrabVolumeEnable", enabled));
}
// Autogenerated method: OVRGrabber.OffhandGrabbed
void GlobalNamespace::OVRGrabber::OffhandGrabbed(GlobalNamespace::OVRGrabbable* grabbable) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OffhandGrabbed", grabbable));
}
// Autogenerated method: OVRGrabber.SetPlayerIgnoreCollision
void GlobalNamespace::OVRGrabber::SetPlayerIgnoreCollision(UnityEngine::GameObject* grabbable, bool ignore) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPlayerIgnoreCollision", grabbable, ignore));
}
// Autogenerated method: OVRGrabber.<Awake>b__24_0
void GlobalNamespace::OVRGrabber::$Awake$b__24_0(GlobalNamespace::OVRCameraRig* r) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "<Awake>b__24_0", r));
}
// Autogenerated method: OVRGrabber..ctor
GlobalNamespace::OVRGrabber* GlobalNamespace::OVRGrabber::New_ctor() {
  return (OVRGrabber*)THROW_UNLESS(il2cpp_utils::New("", "OVRGrabber"));
}