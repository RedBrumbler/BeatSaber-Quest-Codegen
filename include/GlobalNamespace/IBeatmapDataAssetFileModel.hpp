// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LevelDataAssetDownloadUpdate
#include "GlobalNamespace/LevelDataAssetDownloadUpdate.hpp"
// Including type: GetAssetBundleFileResult
#include "GlobalNamespace/GetAssetBundleFileResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IBeatmapDataAssetFileModel
  class IBeatmapDataAssetFileModel {
    public:
    // Creating value type constructor for type: IBeatmapDataAssetFileModel
    IBeatmapDataAssetFileModel() noexcept {}
    // public System.Void add_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0xFFFFFFFF
    void add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Void remove_levelDataAssetDownloadUpdateEvent(System.Action`1<LevelDataAssetDownloadUpdate> value)
    // Offset: 0xFFFFFFFF
    void remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>* value);
    // public System.Threading.Tasks.Task`1<GetAssetBundleFileResult> GetAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<System.Boolean> TryDeleteAssetBundleFileForPreviewLevelAsync(IPreviewBeatmapLevel previewBeatmapLevel, System.Threading.CancellationToken cancellationToken)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<bool>* TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, System::Threading::CancellationToken cancellationToken);
  }; // IBeatmapDataAssetFileModel
  #pragma pack(pop)
  // Writing MetadataGetter for method: IBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent
  // Il2CppName: add_levelDataAssetDownloadUpdateEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IBeatmapDataAssetFileModel::*)(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&IBeatmapDataAssetFileModel::add_levelDataAssetDownloadUpdateEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IBeatmapDataAssetFileModel*), "add_levelDataAssetDownloadUpdateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*>()});
    }
  };
  // Writing MetadataGetter for method: IBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent
  // Il2CppName: remove_levelDataAssetDownloadUpdateEvent
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (IBeatmapDataAssetFileModel::*)(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*)>(&IBeatmapDataAssetFileModel::remove_levelDataAssetDownloadUpdateEvent)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IBeatmapDataAssetFileModel*), "remove_levelDataAssetDownloadUpdateEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate>*>()});
    }
  };
  // Writing MetadataGetter for method: IBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync
  // Il2CppName: GetAssetBundleFileForPreviewLevelAsync
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult>* (IBeatmapDataAssetFileModel::*)(GlobalNamespace::IPreviewBeatmapLevel*, System::Threading::CancellationToken)>(&IBeatmapDataAssetFileModel::GetAssetBundleFileForPreviewLevelAsync)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IBeatmapDataAssetFileModel*), "GetAssetBundleFileForPreviewLevelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IPreviewBeatmapLevel*>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
    }
  };
  // Writing MetadataGetter for method: IBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync
  // Il2CppName: TryDeleteAssetBundleFileForPreviewLevelAsync
  template<>
  struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<bool>* (IBeatmapDataAssetFileModel::*)(GlobalNamespace::IPreviewBeatmapLevel*, System::Threading::CancellationToken)>(&IBeatmapDataAssetFileModel::TryDeleteAssetBundleFileForPreviewLevelAsync)> {
    const MethodInfo* get() {
      return ::il2cpp_utils::FindMethod(classof(IBeatmapDataAssetFileModel*), "TryDeleteAssetBundleFileForPreviewLevelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::IPreviewBeatmapLevel*>(), ::il2cpp_utils::ExtractIndependentType<System::Threading::CancellationToken>()});
    }
  };
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatmapDataAssetFileModel*, "", "IBeatmapDataAssetFileModel");
