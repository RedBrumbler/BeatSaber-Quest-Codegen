// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Including type: EnvironmentInfoSO
#include "GlobalNamespace/EnvironmentInfoSO.hpp"
// Including type: PreviewDifficultyBeatmapSet
#include "GlobalNamespace/PreviewDifficultyBeatmapSet.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: UnityEngine.Texture2D
#include "UnityEngine/Texture2D.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: IPreviewBeatmapLevel.get_levelID
::CsString* GlobalNamespace::IPreviewBeatmapLevel::get_levelID() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_levelID"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_songName
::CsString* GlobalNamespace::IPreviewBeatmapLevel::get_songName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_songName"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_songSubName
::CsString* GlobalNamespace::IPreviewBeatmapLevel::get_songSubName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_songSubName"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_songAuthorName
::CsString* GlobalNamespace::IPreviewBeatmapLevel::get_songAuthorName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_songAuthorName"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_levelAuthorName
::CsString* GlobalNamespace::IPreviewBeatmapLevel::get_levelAuthorName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_levelAuthorName"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_beatsPerMinute
float GlobalNamespace::IPreviewBeatmapLevel::get_beatsPerMinute() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_beatsPerMinute"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_songTimeOffset
float GlobalNamespace::IPreviewBeatmapLevel::get_songTimeOffset() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_songTimeOffset"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_shuffle
float GlobalNamespace::IPreviewBeatmapLevel::get_shuffle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_shuffle"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_shufflePeriod
float GlobalNamespace::IPreviewBeatmapLevel::get_shufflePeriod() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_shufflePeriod"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_previewStartTime
float GlobalNamespace::IPreviewBeatmapLevel::get_previewStartTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_previewStartTime"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_previewDuration
float GlobalNamespace::IPreviewBeatmapLevel::get_previewDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_previewDuration"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_songDuration
float GlobalNamespace::IPreviewBeatmapLevel::get_songDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_songDuration"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_environmentInfo
GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::IPreviewBeatmapLevel::get_environmentInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::EnvironmentInfoSO*>(this, "get_environmentInfo"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_allDirectionsEnvironmentInfo
GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::IPreviewBeatmapLevel::get_allDirectionsEnvironmentInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::EnvironmentInfoSO*>(this, "get_allDirectionsEnvironmentInfo"));
}
// Autogenerated method: IPreviewBeatmapLevel.get_previewDifficultyBeatmapSets
::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* GlobalNamespace::IPreviewBeatmapLevel::get_previewDifficultyBeatmapSets() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*>(this, "get_previewDifficultyBeatmapSets"));
}
// Autogenerated method: IPreviewBeatmapLevel.GetPreviewAudioClipAsync
System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GlobalNamespace::IPreviewBeatmapLevel::GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>*>(this, "GetPreviewAudioClipAsync", cancellationToken));
}
// Autogenerated method: IPreviewBeatmapLevel.GetCoverImageTexture2DAsync
System::Threading::Tasks::Task_1<UnityEngine::Texture2D*>* GlobalNamespace::IPreviewBeatmapLevel::GetCoverImageTexture2DAsync(System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<UnityEngine::Texture2D*>*>(this, "GetCoverImageTexture2DAsync", cancellationToken));
}
