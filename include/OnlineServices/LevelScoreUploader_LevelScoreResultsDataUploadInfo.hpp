// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OnlineServices.LevelScoreUploader
#include "OnlineServices/LevelScoreUploader.hpp"
// Including type: OnlineServices.LevelScoreResultsData
#include "OnlineServices/LevelScoreResultsData.hpp"
// Completed includes
// Type namespace: OnlineServices
namespace OnlineServices {
  // Autogenerated type: OnlineServices.LevelScoreUploader/LevelScoreResultsDataUploadInfo
  class LevelScoreUploader::LevelScoreResultsDataUploadInfo : public ::Il2CppObject {
    public:
    // public OnlineServices.LevelScoreResultsData levelScoreResultsData
    // Offset: 0x10
    OnlineServices::LevelScoreResultsData levelScoreResultsData;
    // public System.Int32 uploadAttemptCountLeft
    // Offset: 0x40
    int uploadAttemptCountLeft;
    // public System.Void .ctor()
    // Offset: 0xBB863C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LevelScoreUploader::LevelScoreResultsDataUploadInfo* New_ctor();
  }; // OnlineServices.LevelScoreUploader/LevelScoreResultsDataUploadInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*, "OnlineServices", "LevelScoreUploader/LevelScoreResultsDataUploadInfo");
#pragma pack(pop)