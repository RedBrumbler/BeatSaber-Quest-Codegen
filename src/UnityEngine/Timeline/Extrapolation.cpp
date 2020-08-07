// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.Extrapolation
#include "UnityEngine/Timeline/Extrapolation.hpp"
// Including type: UnityEngine.Timeline.Extrapolation/<>c
#include "UnityEngine/Timeline/Extrapolation_--c.hpp"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
// Including type: UnityEngine.Timeline.TimelineClip
#include "UnityEngine/Timeline/TimelineClip.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly System.Double kMinExtrapolationTime
double UnityEngine::Timeline::Extrapolation::_get_kMinExtrapolationTime() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<double>("UnityEngine.Timeline", "Extrapolation", "kMinExtrapolationTime"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Double kMinExtrapolationTime
void UnityEngine::Timeline::Extrapolation::_set_kMinExtrapolationTime(double value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("UnityEngine.Timeline", "Extrapolation", "kMinExtrapolationTime", value));
}
// Autogenerated method: UnityEngine.Timeline.Extrapolation.CalculateExtrapolationTimes
void UnityEngine::Timeline::Extrapolation::CalculateExtrapolationTimes(UnityEngine::Timeline::TrackAsset* asset) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Timeline", "Extrapolation", "CalculateExtrapolationTimes", asset));
}
// Autogenerated method: UnityEngine.Timeline.Extrapolation.SortClipsByStartTime
::Array<UnityEngine::Timeline::TimelineClip*>* UnityEngine::Timeline::Extrapolation::SortClipsByStartTime(::Array<UnityEngine::Timeline::TimelineClip*>* clips) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<UnityEngine::Timeline::TimelineClip*>*>("UnityEngine.Timeline", "Extrapolation", "SortClipsByStartTime", clips));
}
// Autogenerated method: UnityEngine.Timeline.Extrapolation..cctor
void UnityEngine::Timeline::Extrapolation::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Timeline", "Extrapolation", ".cctor"));
}