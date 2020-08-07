// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusBeatmapDataAssetFileModel
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
// Including type: OculusBeatmapDataAssetFileModel/LevelDownloadingData
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel_LevelDownloadingData.hpp"
// Including type: OculusBeatmapDataAssetFileModel/<>c__DisplayClass13_0
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel_--c__DisplayClass13_0.hpp"
// Including type: OculusBeatmapDataAssetFileModel/<TryDeleteAssetBundleFileForPreviewLevelAsync>d__13
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel_-TryDeleteAssetBundleFileForPreviewLevelAsync-d__13.hpp"
// Including type: OculusBeatmapDataAssetFileModel/<GetAssetBundleFileForPreviewLevelAsync>d__14
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel_-GetAssetBundleFileForPreviewLevelAsync-d__14.hpp"
// Including type: OculusBeatmapDataAssetFileModel/<>c__DisplayClass15_0
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel_--c__DisplayClass15_0.hpp"
// Including type: OculusBeatmapDataAssetFileModel/<ReloadAssetDetailsForAllLevelsAsync>d__15
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel_-ReloadAssetDetailsForAllLevelsAsync-d__15.hpp"
// Including type: OculusBeatmapDataAssetFileModel/<>c__DisplayClass16_0
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel_--c__DisplayClass16_0.hpp"
// Including type: OculusBeatmapDataAssetFileModel/<GetDownloadAssetBundleFileAsync>d__16
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel_-GetDownloadAssetBundleFileAsync-d__16.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: Oculus.Platform.Models.AssetFileDownloadUpdate
#include "Oculus/Platform/Models/AssetFileDownloadUpdate.hpp"
// Including type: System.Threading.SemaphoreSlim
#include "System/Threading/SemaphoreSlim.hpp"
// Including type: Oculus.Platform.Models.AssetDetails
#include "Oculus/Platform/Models/AssetDetails.hpp"
// Including type: OculusLevelProductsModelSO
#include "GlobalNamespace/OculusLevelProductsModelSO.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Threading.Tasks.TaskCompletionSource`1
#include "System/Threading/Tasks/TaskCompletionSource_1.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kMaxTimeOutBeforeFail
float GlobalNamespace::OculusBeatmapDataAssetFileModel::_get_kMaxTimeOutBeforeFail() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "OculusBeatmapDataAssetFileModel", "kMaxTimeOutBeforeFail"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kMaxTimeOutBeforeFail
void GlobalNamespace::OculusBeatmapDataAssetFileModel::_set_kMaxTimeOutBeforeFail(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "OculusBeatmapDataAssetFileModel", "kMaxTimeOutBeforeFail", value));
}
// Autogenerated method: OculusBeatmapDataAssetFileModel..ctor
GlobalNamespace::OculusBeatmapDataAssetFileModel* GlobalNamespace::OculusBeatmapDataAssetFileModel::New_ctor(GlobalNamespace::OculusLevelProductsModelSO* oculusLevelProductsModel) {
  return (OculusBeatmapDataAssetFileModel*)THROW_UNLESS(il2cpp_utils::New("", "OculusBeatmapDataAssetFileModel", oculusLevelProductsModel));
}
// Autogenerated method: OculusBeatmapDataAssetFileModel.ReloadAssetDetailsForAllLevelsAsync
System::Threading::Tasks::Task_1<bool>* GlobalNamespace::OculusBeatmapDataAssetFileModel::ReloadAssetDetailsForAllLevelsAsync(System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<bool>*>(this, "ReloadAssetDetailsForAllLevelsAsync", cancellationToken));
}
// Autogenerated method: OculusBeatmapDataAssetFileModel.GetDownloadAssetBundleFileAsync
System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* GlobalNamespace::OculusBeatmapDataAssetFileModel::GetDownloadAssetBundleFileAsync(::Il2CppString* levelId, Oculus::Platform::Models::AssetDetails* assetDetails, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>*>(this, "GetDownloadAssetBundleFileAsync", levelId, assetDetails, cancellationToken));
}
// Autogenerated method: OculusBeatmapDataAssetFileModel.GetTaskCompletionSourceForDownload
System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>* GlobalNamespace::OculusBeatmapDataAssetFileModel::GetTaskCompletionSourceForDownload(::Il2CppString* levelId, Oculus::Platform::Models::AssetDetails* assetDetail) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::GetAssetBundleFileResult>*>(this, "GetTaskCompletionSourceForDownload", levelId, assetDetail));
}
// Autogenerated method: OculusBeatmapDataAssetFileModel.HandleAssetFileDownloadUpdate
void GlobalNamespace::OculusBeatmapDataAssetFileModel::HandleAssetFileDownloadUpdate(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleAssetFileDownloadUpdate", msg));
}
// Autogenerated method: OculusBeatmapDataAssetFileModel.<.ctor>b__12_0
void GlobalNamespace::OculusBeatmapDataAssetFileModel::$_ctor$b__12_0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate*>* msg) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "<.ctor>b__12_0", msg));
}
// Autogenerated method: OculusBeatmapDataAssetFileModel.add_levelDataAssetDownloadUpdateEvent
void GlobalNamespace::OculusBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_levelDataAssetDownloadUpdateEvent", value));
}
// Autogenerated method: OculusBeatmapDataAssetFileModel.remove_levelDataAssetDownloadUpdateEvent
void GlobalNamespace::OculusBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_levelDataAssetDownloadUpdateEvent", value));
}
// Autogenerated method: OculusBeatmapDataAssetFileModel.TryDeleteAssetBundleFileForPreviewLevelAsync
System::Threading::Tasks::Task_1<bool>* GlobalNamespace::OculusBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<bool>*>(this, "TryDeleteAssetBundleFileForPreviewLevelAsync", previewBeatmapLevel, cancellationToken));
}
// Autogenerated method: OculusBeatmapDataAssetFileModel.GetAssetBundleFileForPreviewLevelAsync
System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* GlobalNamespace::OculusBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>*>(this, "GetAssetBundleFileForPreviewLevelAsync", previewBeatmapLevel, cancellationToken));
}