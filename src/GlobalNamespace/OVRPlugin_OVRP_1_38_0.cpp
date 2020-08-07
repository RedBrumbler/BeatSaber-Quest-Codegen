// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin/OVRP_1_38_0
#include "GlobalNamespace/OVRPlugin_OVRP_1_38_0.hpp"
// Including type: System.Version
#include "System/Version.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVRPlugin/Result
#include "GlobalNamespace/OVRPlugin_Result.hpp"
// Including type: OVRPlugin/TrackingOrigin
#include "GlobalNamespace/OVRPlugin_TrackingOrigin.hpp"
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Including type: OVRPlugin/Media/MrcActivationMode
#include "GlobalNamespace/OVRPlugin_Media_MrcActivationMode.hpp"
// Including type: OVRPlugin/Media/InputVideoBufferType
#include "GlobalNamespace/OVRPlugin_Media_InputVideoBufferType.hpp"
// Including type: OVRPlugin/Node
#include "GlobalNamespace/OVRPlugin_Node.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly System.Version version
System::Version* GlobalNamespace::OVRPlugin::OVRP_1_38_0::_get_version() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Version*>("", "OVRPlugin/OVRP_1_38_0", "version"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Version version
void GlobalNamespace::OVRPlugin::OVRP_1_38_0::_set_version(System::Version* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OVRPlugin/OVRP_1_38_0", "version", value));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_GetTrackingTransformRelativePose
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_GetTrackingTransformRelativePose(GlobalNamespace::OVRPlugin::Posef& trackingTransformRelativePose, GlobalNamespace::OVRPlugin::TrackingOrigin trackingOrigin) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_GetTrackingTransformRelativePose", trackingTransformRelativePose, trackingOrigin));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_Initialize
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_Initialize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_Initialize"));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_Shutdown
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_Shutdown() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_Shutdown"));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_GetInitialized
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetInitialized(GlobalNamespace::OVRPlugin::Bool& initialized) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_GetInitialized", initialized));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_Update
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_Update() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_Update"));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_GetMrcActivationMode
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcActivationMode(GlobalNamespace::OVRPlugin::Media::MrcActivationMode& activationMode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_GetMrcActivationMode", activationMode));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_SetMrcActivationMode
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcActivationMode(GlobalNamespace::OVRPlugin::Media::MrcActivationMode activationMode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_SetMrcActivationMode", activationMode));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_IsMrcEnabled
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_IsMrcEnabled(GlobalNamespace::OVRPlugin::Bool& mrcEnabled) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_IsMrcEnabled", mrcEnabled));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_IsMrcActivated
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_IsMrcActivated(GlobalNamespace::OVRPlugin::Bool& mrcActivated) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_IsMrcActivated", mrcActivated));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_UseMrcDebugCamera
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_UseMrcDebugCamera(GlobalNamespace::OVRPlugin::Bool& useMrcDebugCamera) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_UseMrcDebugCamera", useMrcDebugCamera));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_SetMrcInputVideoBufferType
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcInputVideoBufferType(GlobalNamespace::OVRPlugin::Media::InputVideoBufferType inputVideoBufferType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_SetMrcInputVideoBufferType", inputVideoBufferType));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_GetMrcInputVideoBufferType
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcInputVideoBufferType(GlobalNamespace::OVRPlugin::Media::InputVideoBufferType& inputVideoBufferType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_GetMrcInputVideoBufferType", inputVideoBufferType));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_SetMrcFrameSize
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcFrameSize(int frameWidth, int frameHeight) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_SetMrcFrameSize", frameWidth, frameHeight));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_GetMrcFrameSize
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcFrameSize(int& frameWidth, int& frameHeight) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_GetMrcFrameSize", frameWidth, frameHeight));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_SetMrcAudioSampleRate
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcAudioSampleRate(int sampleRate) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_SetMrcAudioSampleRate", sampleRate));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_GetMrcAudioSampleRate
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcAudioSampleRate(int& sampleRate) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_GetMrcAudioSampleRate", sampleRate));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_SetMrcFrameImageFlipped
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SetMrcFrameImageFlipped(GlobalNamespace::OVRPlugin::Bool flipped) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_SetMrcFrameImageFlipped", flipped));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_GetMrcFrameImageFlipped
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_GetMrcFrameImageFlipped(GlobalNamespace::OVRPlugin::Bool& flipped) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_GetMrcFrameImageFlipped", flipped));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_EncodeMrcFrame
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_EncodeMrcFrame(System::IntPtr rawBuffer, System::IntPtr audioDataPtr, int audioDataLen, int audioChannels, double timestamp, int& outSyncId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_EncodeMrcFrame", rawBuffer, audioDataPtr, audioDataLen, audioChannels, timestamp, outSyncId));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_EncodeMrcFrameWithDualTextures
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_EncodeMrcFrameWithDualTextures(System::IntPtr backgroundTextureHandle, System::IntPtr foregroundTextureHandle, System::IntPtr audioData, int audioDataLen, int audioChannels, double timestamp, int& outSyncId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_EncodeMrcFrameWithDualTextures", backgroundTextureHandle, foregroundTextureHandle, audioData, audioDataLen, audioChannels, timestamp, outSyncId));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_Media_SyncMrcFrame
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_Media_SyncMrcFrame(int syncId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_Media_SyncMrcFrame", syncId));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_GetExternalCameraCalibrationRawPose
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_GetExternalCameraCalibrationRawPose(int cameraId, GlobalNamespace::OVRPlugin::Posef& rawPose) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_GetExternalCameraCalibrationRawPose", cameraId, rawPose));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_SetDeveloperMode
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_SetDeveloperMode(GlobalNamespace::OVRPlugin::Bool active) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_SetDeveloperMode", active));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_GetNodeOrientationValid
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_GetNodeOrientationValid(GlobalNamespace::OVRPlugin::Node nodeId, GlobalNamespace::OVRPlugin::Bool& nodeOrientationValid) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_GetNodeOrientationValid", nodeId, nodeOrientationValid));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0.ovrp_GetNodePositionValid
GlobalNamespace::OVRPlugin::Result GlobalNamespace::OVRPlugin::OVRP_1_38_0::ovrp_GetNodePositionValid(GlobalNamespace::OVRPlugin::Node nodeId, GlobalNamespace::OVRPlugin::Bool& nodePositionValid) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::OVRPlugin::Result>("", "OVRPlugin/OVRP_1_38_0", "ovrp_GetNodePositionValid", nodeId, nodePositionValid));
}
// Autogenerated method: OVRPlugin/OVRP_1_38_0..cctor
void GlobalNamespace::OVRPlugin::OVRP_1_38_0::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "OVRPlugin/OVRP_1_38_0", ".cctor"));
}