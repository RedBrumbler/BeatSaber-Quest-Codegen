// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.TimelineClip
#include "UnityEngine/Timeline/TimelineClip.hpp"
// Including type: UnityEngine.Timeline.TimelineClip/Versions
#include "UnityEngine/Timeline/TimelineClip_Versions.hpp"
// Including type: UnityEngine.Timeline.TimelineClip/TimelineClipUpgrade
#include "UnityEngine/Timeline/TimelineClip_TimelineClipUpgrade.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
// Including type: UnityEngine.AnimationCurve
#include "UnityEngine/AnimationCurve.hpp"
// Including type: UnityEngine.AnimationClip
#include "UnityEngine/AnimationClip.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int32 k_LatestVersion
int UnityEngine::Timeline::TimelineClip::_get_k_LatestVersion() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("UnityEngine.Timeline", "TimelineClip", "k_LatestVersion"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 k_LatestVersion
void UnityEngine::Timeline::TimelineClip::_set_k_LatestVersion(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Timeline", "TimelineClip", "k_LatestVersion", value));
}
// Autogenerated static field getter
// Get static field: static public readonly UnityEngine.Timeline.ClipCaps kDefaultClipCaps
UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::TimelineClip::_get_kDefaultClipCaps() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Timeline::ClipCaps>("UnityEngine.Timeline", "TimelineClip", "kDefaultClipCaps"));
}
// Autogenerated static field setter
// Set static field: static public readonly UnityEngine.Timeline.ClipCaps kDefaultClipCaps
void UnityEngine::Timeline::TimelineClip::_set_kDefaultClipCaps(UnityEngine::Timeline::ClipCaps value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Timeline", "TimelineClip", "kDefaultClipCaps", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.Single kDefaultClipDurationInSeconds
float UnityEngine::Timeline::TimelineClip::_get_kDefaultClipDurationInSeconds() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("UnityEngine.Timeline", "TimelineClip", "kDefaultClipDurationInSeconds"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Single kDefaultClipDurationInSeconds
void UnityEngine::Timeline::TimelineClip::_set_kDefaultClipDurationInSeconds(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Timeline", "TimelineClip", "kDefaultClipDurationInSeconds", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.Double kTimeScaleMin
double UnityEngine::Timeline::TimelineClip::_get_kTimeScaleMin() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("UnityEngine.Timeline", "TimelineClip", "kTimeScaleMin"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Double kTimeScaleMin
void UnityEngine::Timeline::TimelineClip::_set_kTimeScaleMin(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Timeline", "TimelineClip", "kTimeScaleMin", value));
}
// Autogenerated static field getter
// Get static field: static public readonly System.Double kTimeScaleMax
double UnityEngine::Timeline::TimelineClip::_get_kTimeScaleMax() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("UnityEngine.Timeline", "TimelineClip", "kTimeScaleMax"));
}
// Autogenerated static field setter
// Set static field: static public readonly System.Double kTimeScaleMax
void UnityEngine::Timeline::TimelineClip::_set_kTimeScaleMax(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Timeline", "TimelineClip", "kTimeScaleMax", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.String kDefaultCurvesName
::Il2CppString* UnityEngine::Timeline::TimelineClip::_get_kDefaultCurvesName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("UnityEngine.Timeline", "TimelineClip", "kDefaultCurvesName"));
}
// Autogenerated static field setter
// Set static field: static readonly System.String kDefaultCurvesName
void UnityEngine::Timeline::TimelineClip::_set_kDefaultCurvesName(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Timeline", "TimelineClip", "kDefaultCurvesName", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.Double kMinDuration
double UnityEngine::Timeline::TimelineClip::_get_kMinDuration() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("UnityEngine.Timeline", "TimelineClip", "kMinDuration"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Double kMinDuration
void UnityEngine::Timeline::TimelineClip::_set_kMinDuration(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Timeline", "TimelineClip", "kMinDuration", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.Double kMaxTimeValue
double UnityEngine::Timeline::TimelineClip::_get_kMaxTimeValue() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("UnityEngine.Timeline", "TimelineClip", "kMaxTimeValue"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Double kMaxTimeValue
void UnityEngine::Timeline::TimelineClip::_set_kMaxTimeValue(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Timeline", "TimelineClip", "kMaxTimeValue", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.UpgradeToLatestVersion
void UnityEngine::Timeline::TimelineClip::UpgradeToLatestVersion() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpgradeToLatestVersion"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip..ctor
UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TimelineClip::New_ctor(UnityEngine::Timeline::TrackAsset* parent) {
  return (TimelineClip*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Timeline", "TimelineClip", parent));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_hasPreExtrapolation
bool UnityEngine::Timeline::TimelineClip::get_hasPreExtrapolation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasPreExtrapolation"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_hasPostExtrapolation
bool UnityEngine::Timeline::TimelineClip::get_hasPostExtrapolation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasPostExtrapolation"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_timeScale
double UnityEngine::Timeline::TimelineClip::get_timeScale() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_timeScale"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_timeScale
void UnityEngine::Timeline::TimelineClip::set_timeScale(double value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_timeScale", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_start
double UnityEngine::Timeline::TimelineClip::get_start() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_start"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_start
void UnityEngine::Timeline::TimelineClip::set_start(double value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_start", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_duration
void UnityEngine::Timeline::TimelineClip::set_duration(double value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_duration", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_end
double UnityEngine::Timeline::TimelineClip::get_end() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_end"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_clipIn
double UnityEngine::Timeline::TimelineClip::get_clipIn() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_clipIn"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_clipIn
void UnityEngine::Timeline::TimelineClip::set_clipIn(double value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_clipIn", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_displayName
::Il2CppString* UnityEngine::Timeline::TimelineClip::get_displayName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_displayName"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_displayName
void UnityEngine::Timeline::TimelineClip::set_displayName(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_displayName", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_clipAssetDuration
double UnityEngine::Timeline::TimelineClip::get_clipAssetDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_clipAssetDuration"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_curves
void UnityEngine::Timeline::TimelineClip::set_curves(UnityEngine::AnimationClip* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_curves", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_asset
void UnityEngine::Timeline::TimelineClip::set_asset(UnityEngine::Object* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_asset", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_underlyingAsset
UnityEngine::Object* UnityEngine::Timeline::TimelineClip::get_underlyingAsset() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Object*>(this, "get_underlyingAsset"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_underlyingAsset
void UnityEngine::Timeline::TimelineClip::set_underlyingAsset(UnityEngine::Object* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_underlyingAsset", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_parentTrack
UnityEngine::Timeline::TrackAsset* UnityEngine::Timeline::TimelineClip::get_parentTrack() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Timeline::TrackAsset*>(this, "get_parentTrack"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_parentTrack
void UnityEngine::Timeline::TimelineClip::set_parentTrack(UnityEngine::Timeline::TrackAsset* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_parentTrack", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_easeInDuration
double UnityEngine::Timeline::TimelineClip::get_easeInDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_easeInDuration"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_easeInDuration
void UnityEngine::Timeline::TimelineClip::set_easeInDuration(double value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_easeInDuration", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_easeOutDuration
double UnityEngine::Timeline::TimelineClip::get_easeOutDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_easeOutDuration"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_easeOutDuration
void UnityEngine::Timeline::TimelineClip::set_easeOutDuration(double value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_easeOutDuration", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_eastOutTime
double UnityEngine::Timeline::TimelineClip::get_eastOutTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_eastOutTime"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_easeOutTime
double UnityEngine::Timeline::TimelineClip::get_easeOutTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_easeOutTime"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_blendInDuration
double UnityEngine::Timeline::TimelineClip::get_blendInDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_blendInDuration"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_blendInDuration
void UnityEngine::Timeline::TimelineClip::set_blendInDuration(double value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_blendInDuration", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_blendOutDuration
double UnityEngine::Timeline::TimelineClip::get_blendOutDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_blendOutDuration"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_blendOutDuration
void UnityEngine::Timeline::TimelineClip::set_blendOutDuration(double value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_blendOutDuration", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_blendInCurveMode
UnityEngine::Timeline::TimelineClip::BlendCurveMode UnityEngine::Timeline::TimelineClip::get_blendInCurveMode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Timeline::TimelineClip::BlendCurveMode>(this, "get_blendInCurveMode"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_blendInCurveMode
void UnityEngine::Timeline::TimelineClip::set_blendInCurveMode(UnityEngine::Timeline::TimelineClip::BlendCurveMode value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_blendInCurveMode", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_blendOutCurveMode
UnityEngine::Timeline::TimelineClip::BlendCurveMode UnityEngine::Timeline::TimelineClip::get_blendOutCurveMode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Timeline::TimelineClip::BlendCurveMode>(this, "get_blendOutCurveMode"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_blendOutCurveMode
void UnityEngine::Timeline::TimelineClip::set_blendOutCurveMode(UnityEngine::Timeline::TimelineClip::BlendCurveMode value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_blendOutCurveMode", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_hasBlendIn
bool UnityEngine::Timeline::TimelineClip::get_hasBlendIn() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasBlendIn"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_hasBlendOut
bool UnityEngine::Timeline::TimelineClip::get_hasBlendOut() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasBlendOut"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_mixInCurve
UnityEngine::AnimationCurve* UnityEngine::Timeline::TimelineClip::get_mixInCurve() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AnimationCurve*>(this, "get_mixInCurve"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_mixInCurve
void UnityEngine::Timeline::TimelineClip::set_mixInCurve(UnityEngine::AnimationCurve* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_mixInCurve", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_mixInPercentage
float UnityEngine::Timeline::TimelineClip::get_mixInPercentage() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_mixInPercentage"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_mixInDuration
double UnityEngine::Timeline::TimelineClip::get_mixInDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_mixInDuration"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_mixOutCurve
UnityEngine::AnimationCurve* UnityEngine::Timeline::TimelineClip::get_mixOutCurve() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AnimationCurve*>(this, "get_mixOutCurve"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_mixOutCurve
void UnityEngine::Timeline::TimelineClip::set_mixOutCurve(UnityEngine::AnimationCurve* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_mixOutCurve", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_mixOutTime
double UnityEngine::Timeline::TimelineClip::get_mixOutTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_mixOutTime"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_mixOutDuration
double UnityEngine::Timeline::TimelineClip::get_mixOutDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_mixOutDuration"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_mixOutPercentage
float UnityEngine::Timeline::TimelineClip::get_mixOutPercentage() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_mixOutPercentage"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_recordable
bool UnityEngine::Timeline::TimelineClip::get_recordable() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_recordable"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_recordable
void UnityEngine::Timeline::TimelineClip::set_recordable(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_recordable", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_exposedParameters
System::Collections::Generic::List_1<::Il2CppString*>* UnityEngine::Timeline::TimelineClip::get_exposedParameters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<::Il2CppString*>*>(this, "get_exposedParameters"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_clipCaps
UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::TimelineClip::get_clipCaps() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Timeline::ClipCaps>(this, "get_clipCaps"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.Hash
int UnityEngine::Timeline::TimelineClip::Hash() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Hash"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.EvaluateMixOut
float UnityEngine::Timeline::TimelineClip::EvaluateMixOut(double time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "EvaluateMixOut", time));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.EvaluateMixIn
float UnityEngine::Timeline::TimelineClip::EvaluateMixIn(double time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "EvaluateMixIn", time));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.GetDefaultMixInCurve
UnityEngine::AnimationCurve* UnityEngine::Timeline::TimelineClip::GetDefaultMixInCurve() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AnimationCurve*>("UnityEngine.Timeline", "TimelineClip", "GetDefaultMixInCurve"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.GetDefaultMixOutCurve
UnityEngine::AnimationCurve* UnityEngine::Timeline::TimelineClip::GetDefaultMixOutCurve() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AnimationCurve*>("UnityEngine.Timeline", "TimelineClip", "GetDefaultMixOutCurve"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.ToLocalTime
double UnityEngine::Timeline::TimelineClip::ToLocalTime(double time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "ToLocalTime", time));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.ToLocalTimeUnbound
double UnityEngine::Timeline::TimelineClip::ToLocalTimeUnbound(double time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "ToLocalTimeUnbound", time));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.FromLocalTimeUnbound
double UnityEngine::Timeline::TimelineClip::FromLocalTimeUnbound(double time) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "FromLocalTimeUnbound", time));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_animationClip
UnityEngine::AnimationClip* UnityEngine::Timeline::TimelineClip::get_animationClip() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AnimationClip*>(this, "get_animationClip"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.SanitizeTimeValue
double UnityEngine::Timeline::TimelineClip::SanitizeTimeValue(double value, double defaultValue) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>("UnityEngine.Timeline", "TimelineClip", "SanitizeTimeValue", value, defaultValue));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_postExtrapolationMode
UnityEngine::Timeline::TimelineClip::ClipExtrapolation UnityEngine::Timeline::TimelineClip::get_postExtrapolationMode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Timeline::TimelineClip::ClipExtrapolation>(this, "get_postExtrapolationMode"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_postExtrapolationMode
void UnityEngine::Timeline::TimelineClip::set_postExtrapolationMode(UnityEngine::Timeline::TimelineClip::ClipExtrapolation value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_postExtrapolationMode", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_preExtrapolationMode
UnityEngine::Timeline::TimelineClip::ClipExtrapolation UnityEngine::Timeline::TimelineClip::get_preExtrapolationMode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Timeline::TimelineClip::ClipExtrapolation>(this, "get_preExtrapolationMode"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.set_preExtrapolationMode
void UnityEngine::Timeline::TimelineClip::set_preExtrapolationMode(UnityEngine::Timeline::TimelineClip::ClipExtrapolation value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_preExtrapolationMode", value));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.SetPostExtrapolationTime
void UnityEngine::Timeline::TimelineClip::SetPostExtrapolationTime(double time) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPostExtrapolationTime", time));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.SetPreExtrapolationTime
void UnityEngine::Timeline::TimelineClip::SetPreExtrapolationTime(double time) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetPreExtrapolationTime", time));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.IsExtrapolatedTime
bool UnityEngine::Timeline::TimelineClip::IsExtrapolatedTime(double sequenceTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsExtrapolatedTime", sequenceTime));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.IsPreExtrapolatedTime
bool UnityEngine::Timeline::TimelineClip::IsPreExtrapolatedTime(double sequenceTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsPreExtrapolatedTime", sequenceTime));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.IsPostExtrapolatedTime
bool UnityEngine::Timeline::TimelineClip::IsPostExtrapolatedTime(double sequenceTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsPostExtrapolatedTime", sequenceTime));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_extrapolatedStart
double UnityEngine::Timeline::TimelineClip::get_extrapolatedStart() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_extrapolatedStart"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_extrapolatedDuration
double UnityEngine::Timeline::TimelineClip::get_extrapolatedDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_extrapolatedDuration"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.GetExtrapolatedTime
double UnityEngine::Timeline::TimelineClip::GetExtrapolatedTime(double time, UnityEngine::Timeline::TimelineClip::ClipExtrapolation mode, double duration) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>("UnityEngine.Timeline", "TimelineClip", "GetExtrapolatedTime", time, mode, duration));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.UpdateDirty
void UnityEngine::Timeline::TimelineClip::UpdateDirty(double oldValue, double newValue) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateDirty", oldValue, newValue));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip..cctor
void UnityEngine::Timeline::TimelineClip::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Timeline", "TimelineClip", ".cctor"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_duration
double UnityEngine::Timeline::TimelineClip::get_duration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<double>(this, "get_duration"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_curves
UnityEngine::AnimationClip* UnityEngine::Timeline::TimelineClip::get_curves() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AnimationClip*>(this, "get_curves"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName
::Il2CppString* UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_hasCurves
bool UnityEngine::Timeline::TimelineClip::get_hasCurves() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasCurves"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.get_asset
UnityEngine::Object* UnityEngine::Timeline::TimelineClip::get_asset() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Object*>(this, "get_asset"));
}
UnityEngine::Object* UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_asset() {
  return get_asset();
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.UnityEngine.Timeline.ICurvesOwner.get_assetOwner
UnityEngine::Object* UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_assetOwner() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Object*>(this, "UnityEngine.Timeline.ICurvesOwner.get_assetOwner"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.UnityEngine.Timeline.ICurvesOwner.get_targetTrack
UnityEngine::Timeline::TrackAsset* UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_targetTrack() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Timeline::TrackAsset*>(this, "UnityEngine.Timeline.ICurvesOwner.get_targetTrack"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.CreateCurves
void UnityEngine::Timeline::TimelineClip::CreateCurves(::Il2CppString* curvesClipName) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CreateCurves", curvesClipName));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
void UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
void UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize"));
}
// Autogenerated method: UnityEngine.Timeline.TimelineClip.ToString
::Il2CppString* UnityEngine::Timeline::TimelineClip::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}