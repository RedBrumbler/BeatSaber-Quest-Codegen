// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelsModel/LevelDownloadingUpdate
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
// Including type: BeatmapLevelsModel/LevelDownloadingUpdate/DownloadingState
// Already included the same include: GlobalNamespace/BeatmapLevelsModel.hpp
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapLevelsModel/LevelDownloadingUpdate..ctor
GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate* GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::New_ctor(::CsString* levelID, uint bytesTotal, uint bytesTransferred, GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate::DownloadingState downloadingState) {
  return (BeatmapLevelsModel::LevelDownloadingUpdate*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapLevelsModel/LevelDownloadingUpdate", levelID, bytesTotal, bytesTransferred, downloadingState));
}
