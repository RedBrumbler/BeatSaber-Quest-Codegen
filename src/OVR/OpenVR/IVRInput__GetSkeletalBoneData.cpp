// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRInput/_GetSkeletalBoneData
#include "OVR/OpenVR/IVRInput__GetSkeletalBoneData.hpp"
// Including type: OVR.OpenVR.EVRInputError
#include "OVR/OpenVR/EVRInputError.hpp"
// Including type: OVR.OpenVR.EVRSkeletalTransformSpace
#include "OVR/OpenVR/EVRSkeletalTransformSpace.hpp"
// Including type: OVR.OpenVR.EVRSkeletalMotionRange
#include "OVR/OpenVR/EVRSkeletalMotionRange.hpp"
// Including type: OVR.OpenVR.VRBoneTransform_t
#include "OVR/OpenVR/VRBoneTransform_t.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.IVRInput/_GetSkeletalBoneData..ctor
OVR::OpenVR::IVRInput::_GetSkeletalBoneData* OVR::OpenVR::IVRInput::_GetSkeletalBoneData::New_ctor(::CsObject* object, System::IntPtr method) {
  return (IVRInput::_GetSkeletalBoneData*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "IVRInput/_GetSkeletalBoneData", object, method));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_GetSkeletalBoneData.Invoke
OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput::_GetSkeletalBoneData::Invoke(uint64_t action, OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::Array<OVR::OpenVR::VRBoneTransform_t>*& pTransformArray, uint unTransformArrayCount, uint64_t ulRestrictToDevice) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRInputError>(this, "Invoke", action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount, ulRestrictToDevice));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_GetSkeletalBoneData.BeginInvoke
System::IAsyncResult* OVR::OpenVR::IVRInput::_GetSkeletalBoneData::BeginInvoke(uint64_t action, OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::Array<OVR::OpenVR::VRBoneTransform_t>*& pTransformArray, uint unTransformArrayCount, uint64_t ulRestrictToDevice, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount, ulRestrictToDevice, callback, object));
}
// Autogenerated method: OVR.OpenVR.IVRInput/_GetSkeletalBoneData.EndInvoke
OVR::OpenVR::EVRInputError OVR::OpenVR::IVRInput::_GetSkeletalBoneData::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<OVR::OpenVR::EVRInputError>(this, "EndInvoke", result));
}
