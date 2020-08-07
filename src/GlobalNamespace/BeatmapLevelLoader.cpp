// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelLoader
#include "GlobalNamespace/BeatmapLevelLoader.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Including type: BeatmapLevelLoader/<LoadBeatmapLevelAsync>d__4
#include "GlobalNamespace/BeatmapLevelLoader_-LoadBeatmapLevelAsync-d__4.hpp"
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
// Including type: IBeatmapDataAssetFileModel
#include "GlobalNamespace/IBeatmapDataAssetFileModel.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapLevelLoader..ctor
GlobalNamespace::BeatmapLevelLoader* GlobalNamespace::BeatmapLevelLoader::New_ctor(GlobalNamespace::BeatmapLevelDataLoaderSO* beatmapLevelDataLoader, GlobalNamespace::IBeatmapDataAssetFileModel* beatmapDataAssetFileModel) {
  return (BeatmapLevelLoader*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapLevelLoader", beatmapLevelDataLoader, beatmapDataAssetFileModel));
}
// Autogenerated method: BeatmapLevelLoader.LoadBeatmapLevelAsync
System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult>* GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewLevel, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult>*>(this, "LoadBeatmapLevelAsync", previewLevel, cancellationToken));
}