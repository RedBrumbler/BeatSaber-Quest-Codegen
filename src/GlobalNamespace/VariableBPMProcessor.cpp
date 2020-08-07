// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VariableBPMProcessor
#include "GlobalNamespace/VariableBPMProcessor.hpp"
// Including type: BeatmapEventData
#include "GlobalNamespace/BeatmapEventData.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: VariableBPMProcessor.get_currentBPM
float GlobalNamespace::VariableBPMProcessor::get_currentBPM() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_currentBPM"));
}
// Autogenerated method: VariableBPMProcessor.SetBPM
void GlobalNamespace::VariableBPMProcessor::SetBPM(float newBPM) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetBPM", newBPM));
}
// Autogenerated method: VariableBPMProcessor.ProcessBeatmapEventData
bool GlobalNamespace::VariableBPMProcessor::ProcessBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ProcessBeatmapEventData", beatmapEventData));
}
// Autogenerated method: VariableBPMProcessor..ctor
GlobalNamespace::VariableBPMProcessor* GlobalNamespace::VariableBPMProcessor::New_ctor() {
  return (VariableBPMProcessor*)THROW_UNLESS(il2cpp_utils::New("", "VariableBPMProcessor"));
}