// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.CVRChaperoneSetup
#include "OVR/OpenVR/CVRChaperoneSetup.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVR.OpenVR.EChaperoneConfigFile
#include "OVR/OpenVR/EChaperoneConfigFile.hpp"
// Including type: OVR.OpenVR.HmdQuad_t
#include "OVR/OpenVR/HmdQuad_t.hpp"
// Including type: OVR.OpenVR.HmdMatrix34_t
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup..ctor
OVR::OpenVR::CVRChaperoneSetup* OVR::OpenVR::CVRChaperoneSetup::New_ctor(System::IntPtr pInterface) {
  return (CVRChaperoneSetup*)THROW_UNLESS(il2cpp_utils::New("OVR.OpenVR", "CVRChaperoneSetup", pInterface));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.CommitWorkingCopy
bool OVR::OpenVR::CVRChaperoneSetup::CommitWorkingCopy(OVR::OpenVR::EChaperoneConfigFile configFile) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "CommitWorkingCopy", configFile));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.RevertWorkingCopy
void OVR::OpenVR::CVRChaperoneSetup::RevertWorkingCopy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RevertWorkingCopy"));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.GetWorkingPlayAreaSize
bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaSize(float& pSizeX, float& pSizeZ) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetWorkingPlayAreaSize", pSizeX, pSizeZ));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.GetWorkingPlayAreaRect
bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaRect(OVR::OpenVR::HmdQuad_t& rect) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetWorkingPlayAreaRect", rect));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.GetWorkingCollisionBoundsInfo
bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingCollisionBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetWorkingCollisionBoundsInfo", pQuadsBuffer));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.GetLiveCollisionBoundsInfo
bool OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetLiveCollisionBoundsInfo", pQuadsBuffer));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.GetWorkingSeatedZeroPoseToRawTrackingPose
bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetWorkingSeatedZeroPoseToRawTrackingPose", pmatSeatedZeroPoseToRawTrackingPose));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.GetWorkingStandingZeroPoseToRawTrackingPose
bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetWorkingStandingZeroPoseToRawTrackingPose", pmatStandingZeroPoseToRawTrackingPose));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.SetWorkingPlayAreaSize
void OVR::OpenVR::CVRChaperoneSetup::SetWorkingPlayAreaSize(float sizeX, float sizeZ) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetWorkingPlayAreaSize", sizeX, sizeZ));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.SetWorkingCollisionBoundsInfo
void OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>* pQuadsBuffer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetWorkingCollisionBoundsInfo", pQuadsBuffer));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.SetWorkingSeatedZeroPoseToRawTrackingPose
void OVR::OpenVR::CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetWorkingSeatedZeroPoseToRawTrackingPose", pMatSeatedZeroPoseToRawTrackingPose));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.SetWorkingStandingZeroPoseToRawTrackingPose
void OVR::OpenVR::CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pMatStandingZeroPoseToRawTrackingPose) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetWorkingStandingZeroPoseToRawTrackingPose", pMatStandingZeroPoseToRawTrackingPose));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.ReloadFromDisk
void OVR::OpenVR::CVRChaperoneSetup::ReloadFromDisk(OVR::OpenVR::EChaperoneConfigFile configFile) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReloadFromDisk", configFile));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.GetLiveSeatedZeroPoseToRawTrackingPose
bool OVR::OpenVR::CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetLiveSeatedZeroPoseToRawTrackingPose", pmatSeatedZeroPoseToRawTrackingPose));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.SetWorkingCollisionBoundsTagsInfo
void OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo(::Array<uint8_t>* pTagsBuffer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetWorkingCollisionBoundsTagsInfo", pTagsBuffer));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.GetLiveCollisionBoundsTagsInfo
bool OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo(::Array<uint8_t>*& pTagsBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetLiveCollisionBoundsTagsInfo", pTagsBuffer));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.SetWorkingPhysicalBoundsInfo
bool OVR::OpenVR::CVRChaperoneSetup::SetWorkingPhysicalBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>* pQuadsBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SetWorkingPhysicalBoundsInfo", pQuadsBuffer));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.GetLivePhysicalBoundsInfo
bool OVR::OpenVR::CVRChaperoneSetup::GetLivePhysicalBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "GetLivePhysicalBoundsInfo", pQuadsBuffer));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.ExportLiveToBuffer
bool OVR::OpenVR::CVRChaperoneSetup::ExportLiveToBuffer(System::Text::StringBuilder* pBuffer, uint& pnBufferLength) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ExportLiveToBuffer", pBuffer, pnBufferLength));
}
// Autogenerated method: OVR.OpenVR.CVRChaperoneSetup.ImportFromBufferToWorking
bool OVR::OpenVR::CVRChaperoneSetup::ImportFromBufferToWorking(::Il2CppString* pBuffer, uint nImportFlags) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ImportFromBufferToWorking", pBuffer, nImportFlags));
}