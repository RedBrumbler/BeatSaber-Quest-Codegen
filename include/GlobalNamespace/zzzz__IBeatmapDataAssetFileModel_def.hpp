#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
struct GetAssetBundleFileResult;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct LevelDataAssetDownloadUpdate;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapDataAssetFileModel;
}
// Type: ::IBeatmapDataAssetFileModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4432))
// CS Name: IBeatmapDataAssetFileModel
class CORDL_TYPE IBeatmapDataAssetFileModel : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IBeatmapDataAssetFileModel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBeatmapDataAssetFileModel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_levelDataAssetDownloadUpdateEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value) ;

/// @brief Method remove_levelDataAssetDownloadUpdateEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_levelDataAssetDownloadUpdateEvent(System::Action_1<GlobalNamespace::LevelDataAssetDownloadUpdate> value) ;

/// @brief Method GetAssetBundleFileForPreviewLevelAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GetAssetBundleFileResult> GetAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method TryDeleteAssetBundleFileForPreviewLevelAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<bool> TryDeleteAssetBundleFileForPreviewLevelAsync(GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IBeatmapDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatmapDataAssetFileModel, "", "IBeatmapDataAssetFileModel");
