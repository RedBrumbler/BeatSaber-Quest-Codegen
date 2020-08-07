// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRBone
#include "GlobalNamespace/OVRBone.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVRBone.get_Id
GlobalNamespace::OVRSkeleton::BoneId GlobalNamespace::OVRBone::get_Id() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRSkeleton::BoneId>(this, "get_Id"));
}
// Autogenerated method: OVRBone.set_Id
void GlobalNamespace::OVRBone::set_Id(GlobalNamespace::OVRSkeleton::BoneId value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Id", value));
}
// Autogenerated method: OVRBone.get_ParentBoneIndex
int16_t GlobalNamespace::OVRBone::get_ParentBoneIndex() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int16_t>(this, "get_ParentBoneIndex"));
}
// Autogenerated method: OVRBone.set_ParentBoneIndex
void GlobalNamespace::OVRBone::set_ParentBoneIndex(int16_t value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ParentBoneIndex", value));
}
// Autogenerated method: OVRBone.get_Transform
UnityEngine::Transform* GlobalNamespace::OVRBone::get_Transform() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Transform*>(this, "get_Transform"));
}
// Autogenerated method: OVRBone.set_Transform
void GlobalNamespace::OVRBone::set_Transform(UnityEngine::Transform* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Transform", value));
}
// Autogenerated method: OVRBone..ctor
GlobalNamespace::OVRBone* GlobalNamespace::OVRBone::New_ctor(GlobalNamespace::OVRSkeleton::BoneId id, int16_t parentBoneIndex, UnityEngine::Transform* trans) {
  return (OVRBone*)THROW_UNLESS(il2cpp_utils::New("", "OVRBone", id, parentBoneIndex, trans));
}