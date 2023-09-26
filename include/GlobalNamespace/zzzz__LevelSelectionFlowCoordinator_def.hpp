#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
struct GlobalNamespace__SelectLevelCategoryViewController__LevelCategory;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace HMUI {
struct HMUI__ViewController__AnimationType;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class SearchFilterParamsViewController;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class LevelSearchViewController;
}
namespace HMUI {
class ViewController;
}
namespace GlobalNamespace {
class LevelFilterParams;
}
namespace GlobalNamespace {
class LevelSelectionNavigationController;
}
namespace GlobalNamespace {
struct GlobalNamespace__StandardLevelDetailViewController__ContentType;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__LevelSelectionFlowCoordinator__State;
}
namespace GlobalNamespace {
class LevelSelectionFlowCoordinator;
}
// Type: ::State
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5600))
// CS Name: LevelSelectionFlowCoordinator::State
class CORDL_TYPE GlobalNamespace__LevelSelectionFlowCoordinator__State : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__LevelSelectionFlowCoordinator__State() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LevelSelectionFlowCoordinator__State", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LevelSelectionFlowCoordinator__State(GlobalNamespace__LevelSelectionFlowCoordinator__State const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LevelSelectionFlowCoordinator__State", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LevelSelectionFlowCoordinator__State(GlobalNamespace__LevelSelectionFlowCoordinator__State&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LevelSelectionFlowCoordinator__State(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LevelSelectionFlowCoordinator__State& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LevelSelectionFlowCoordinator__State& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LevelSelectionFlowCoordinator__State& operator=(GlobalNamespace__LevelSelectionFlowCoordinator__State&& o) noexcept = default;
  constexpr GlobalNamespace__LevelSelectionFlowCoordinator__State& operator=(GlobalNamespace__LevelSelectionFlowCoordinator__State const& o) noexcept = default;
                


// Fields

 System::Nullable_1<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> __declspec(property(get=__get_levelCategory, put=__set_levelCategory))  levelCategory;

constexpr void __set_levelCategory(System::Nullable_1<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value) ;

constexpr System::Nullable_1<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> __get_levelCategory() const;

 GlobalNamespace::IBeatmapLevelPack __declspec(property(get=__get_beatmapLevelPack, put=__set_beatmapLevelPack))  beatmapLevelPack;

constexpr void __set_beatmapLevelPack(GlobalNamespace::IBeatmapLevelPack value) ;

constexpr GlobalNamespace::IBeatmapLevelPack __get_beatmapLevelPack() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get_previewBeatmapLevel, put=__set_previewBeatmapLevel))  previewBeatmapLevel;

constexpr void __set_previewBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get_previewBeatmapLevel() const;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=__get_difficultyBeatmap, put=__set_difficultyBeatmap))  difficultyBeatmap;

constexpr void __set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap value) ;

constexpr GlobalNamespace::IDifficultyBeatmap __get_difficultyBeatmap() const;


// Methods

// Ctor Parameters [CppParam { name: "levelCategory", ty: "System::Nullable_1<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory>", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelPack", ty: "GlobalNamespace::IBeatmapLevelPack", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmap", ty: "GlobalNamespace::IDifficultyBeatmap", modifiers: "", def_value: None }]
explicit GlobalNamespace__LevelSelectionFlowCoordinator__State(System::Nullable_1<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> levelCategory, GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method .ctor addr 0x216c404 size 0x40 virtual false final false
 void _ctor(System::Nullable_1<GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> levelCategory, GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

// Ctor Parameters [CppParam { name: "beatmapLevelPack", ty: "GlobalNamespace::IBeatmapLevelPack", modifiers: "", def_value: None }]
explicit GlobalNamespace__LevelSelectionFlowCoordinator__State(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack) ;

/// @brief Method .ctor addr 0x216c444 size 0x2c virtual false final false
 void _ctor(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack) ;

// Ctor Parameters [CppParam { name: "beatmapLevelPack", ty: "GlobalNamespace::IBeatmapLevelPack", modifiers: "", def_value: None }, CppParam { name: "previewBeatmapLevel", ty: "GlobalNamespace::IPreviewBeatmapLevel", modifiers: "", def_value: None }]
explicit GlobalNamespace__LevelSelectionFlowCoordinator__State(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

/// @brief Method .ctor addr 0x216c470 size 0x30 virtual false final false
 void _ctor(GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, GlobalNamespace::IPreviewBeatmapLevel previewBeatmapLevel) ;

// Ctor Parameters [CppParam { name: "levelCategory", ty: "GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelPack", ty: "GlobalNamespace::IBeatmapLevelPack", modifiers: "", def_value: None }, CppParam { name: "difficultyBeatmap", ty: "GlobalNamespace::IDifficultyBeatmap", modifiers: "", def_value: None }]
explicit GlobalNamespace__LevelSelectionFlowCoordinator__State(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory levelCategory, GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

/// @brief Method .ctor addr 0x216c4a0 size 0x100 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory levelCategory, GlobalNamespace::IBeatmapLevelPack beatmapLevelPack, GlobalNamespace::IDifficultyBeatmap difficultyBeatmap) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelSelectionFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13652))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5601))
// CS Name: LevelSelectionFlowCoordinator
class CORDL_TYPE LevelSelectionFlowCoordinator : public HMUI::FlowCoordinator {
public:
// Declarations
using State = GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~LevelSelectionFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelSelectionFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr LevelSelectionFlowCoordinator(LevelSelectionFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LevelSelectionFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr LevelSelectionFlowCoordinator(LevelSelectionFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LevelSelectionFlowCoordinator(void* ptr) noexcept : HMUI::FlowCoordinator(ptr) {
}


  constexpr LevelSelectionFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LevelSelectionFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LevelSelectionFlowCoordinator& operator=(LevelSelectionFlowCoordinator&& o) noexcept = default;
  constexpr LevelSelectionFlowCoordinator& operator=(LevelSelectionFlowCoordinator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::PlayerDataModel __declspec(property(get=__get_playerDataModel, put=__set_playerDataModel))  playerDataModel;

constexpr void __set_playerDataModel(GlobalNamespace::PlayerDataModel value) ;

constexpr GlobalNamespace::PlayerDataModel __get_playerDataModel() const;

 GlobalNamespace::LevelSelectionNavigationController __declspec(property(get=__get_levelSelectionNavigationController, put=__set_levelSelectionNavigationController))  levelSelectionNavigationController;

constexpr void __set_levelSelectionNavigationController(GlobalNamespace::LevelSelectionNavigationController value) ;

constexpr GlobalNamespace::LevelSelectionNavigationController __get_levelSelectionNavigationController() const;

 GlobalNamespace::SearchFilterParamsViewController __declspec(property(get=__get__searchFilterParamsViewController, put=__set__searchFilterParamsViewController))  _searchFilterParamsViewController;

constexpr void __set__searchFilterParamsViewController(GlobalNamespace::SearchFilterParamsViewController value) ;

constexpr GlobalNamespace::SearchFilterParamsViewController __get__searchFilterParamsViewController() const;

 GlobalNamespace::LevelSearchViewController __declspec(property(get=__get__levelSearchViewController, put=__set__levelSearchViewController))  _levelSearchViewController;

constexpr void __set__levelSearchViewController(GlobalNamespace::LevelSearchViewController value) ;

constexpr GlobalNamespace::LevelSearchViewController __get__levelSearchViewController() const;

 GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State __declspec(property(get=__get__startState, put=__set__startState))  _startState;

constexpr void __set__startState(GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State value) ;

constexpr GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State __get__startState() const;


// Properties

 bool __declspec(property(get=get_isInRootViewController))  isInRootViewController;

 GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory __declspec(property(get=get_selectedLevelCategory))  selectedLevelCategory;

 GlobalNamespace::IBeatmapLevelPack __declspec(property(get=get_selectedBeatmapLevelPack))  selectedBeatmapLevelPack;

 GlobalNamespace::IDifficultyBeatmap __declspec(property(get=get_selectedDifficultyBeatmap))  selectedDifficultyBeatmap;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=get_selectedBeatmapLevel))  selectedBeatmapLevel;

 HMUI::ViewController __declspec(property(get=get_initialTopScreenViewController))  initialTopScreenViewController;

 HMUI::ViewController __declspec(property(get=get_initialLeftScreenViewController))  initialLeftScreenViewController;

 HMUI::ViewController __declspec(property(get=get_initialRightScreenViewController))  initialRightScreenViewController;

 bool __declspec(property(get=get_showBackButtonForMainViewController))  showBackButtonForMainViewController;

 bool __declspec(property(get=get_hidePacksIfOneOrNone))  hidePacksIfOneOrNone;

 bool __declspec(property(get=get_hidePracticeButton))  hidePracticeButton;

 ::StringW __declspec(property(get=get_actionButtonText))  actionButtonText;

 ::StringW __declspec(property(get=get_mainTitle))  mainTitle;

 bool __declspec(property(get=get_enableCustomLevels))  enableCustomLevels;

 GlobalNamespace::SongPackMask __declspec(property(get=get_songPackMask))  songPackMask;

 GlobalNamespace::BeatmapDifficultyMask __declspec(property(get=get_allowedBeatmapDifficultyMask))  allowedBeatmapDifficultyMask;

 ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=get_notAllowedCharacteristics))  notAllowedCharacteristics;


// Methods

/// @brief Method get_isInRootViewController addr 0x216b7c8 size 0x74 virtual false final false
 bool get_isInRootViewController() ;

/// @brief Method get_selectedLevelCategory addr 0x216b83c size 0x1c virtual false final false
 GlobalNamespace::GlobalNamespace__SelectLevelCategoryViewController__LevelCategory get_selectedLevelCategory() ;

/// @brief Method get_selectedBeatmapLevelPack addr 0x216b858 size 0x1c virtual false final false
 GlobalNamespace::IBeatmapLevelPack get_selectedBeatmapLevelPack() ;

/// @brief Method get_selectedDifficultyBeatmap addr 0x216b874 size 0x1c virtual false final false
 GlobalNamespace::IDifficultyBeatmap get_selectedDifficultyBeatmap() ;

/// @brief Method get_selectedBeatmapLevel addr 0x216b890 size 0x1c virtual false final false
 GlobalNamespace::IPreviewBeatmapLevel get_selectedBeatmapLevel() ;

/// @brief Method get_initialTopScreenViewController addr 0x216b8ac size 0x8 virtual true final false
 HMUI::ViewController get_initialTopScreenViewController() ;

/// @brief Method get_initialLeftScreenViewController addr 0x216b8b4 size 0x8 virtual true final false
 HMUI::ViewController get_initialLeftScreenViewController() ;

/// @brief Method get_initialRightScreenViewController addr 0x216b8bc size 0x8 virtual true final false
 HMUI::ViewController get_initialRightScreenViewController() ;

/// @brief Method get_showBackButtonForMainViewController addr 0x216b8c4 size 0x8 virtual true final false
 bool get_showBackButtonForMainViewController() ;

/// @brief Method get_hidePacksIfOneOrNone addr 0x216b8cc size 0x8 virtual true final false
 bool get_hidePacksIfOneOrNone() ;

/// @brief Method get_hidePracticeButton addr 0x216b8d4 size 0x8 virtual true final false
 bool get_hidePracticeButton() ;

/// @brief Method get_actionButtonText addr 0x216b8dc size 0x44 virtual true final false
 ::StringW get_actionButtonText() ;

/// @brief Method get_mainTitle addr 0x216b920 size 0x8 virtual true final false
 ::StringW get_mainTitle() ;

/// @brief Method get_enableCustomLevels addr 0x216b928 size 0x8 virtual true final false
 bool get_enableCustomLevels() ;

/// @brief Method get_songPackMask addr 0x216b930 size 0x8 virtual true final false
 GlobalNamespace::SongPackMask get_songPackMask() ;

/// @brief Method get_allowedBeatmapDifficultyMask addr 0x216b938 size 0x8 virtual true final false
 GlobalNamespace::BeatmapDifficultyMask get_allowedBeatmapDifficultyMask() ;

/// @brief Method get_notAllowedCharacteristics addr 0x216b940 size 0x44 virtual true final false
 ::ArrayW<GlobalNamespace::BeatmapCharacteristicSO> get_notAllowedCharacteristics() ;

/// @brief Method LevelSelectionFlowCoordinatorDidActivate addr 0x216b984 size 0x4 virtual true final false
 void LevelSelectionFlowCoordinatorDidActivate(bool firstActivation, bool addedToHierarchy) ;

/// @brief Method LevelSelectionFlowCoordinatorDidDeactivate addr 0x216b988 size 0x4 virtual true final false
 void LevelSelectionFlowCoordinatorDidDeactivate(bool removedFromHierarchy) ;

/// @brief Method LevelSelectionFlowCoordinatorTopViewControllerWillChange addr 0x216b98c size 0xfc virtual true final false
 void LevelSelectionFlowCoordinatorTopViewControllerWillChange(HMUI::ViewController oldViewController, HMUI::ViewController newViewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method ActionButtonWasPressed addr 0x216ba88 size 0x4 virtual true final false
 void ActionButtonWasPressed() ;

/// @brief Method PracticeButtonWasPressed addr 0x216ba8c size 0x4 virtual true final false
 void PracticeButtonWasPressed() ;

/// @brief Method SelectionDidChange addr 0x216ba90 size 0x4 virtual true final false
 void SelectionDidChange(GlobalNamespace::IBeatmapLevelPack pack, GlobalNamespace::IDifficultyBeatmap beatmap) ;

/// @brief Method Setup addr 0x216ba94 size 0x8 virtual false final false
 void Setup(GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State state) ;

/// @brief Method DidActivate addr 0x216ba9c size 0x4bc virtual true final true
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x216bf58 size 0x2c4 virtual true final true
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method TopViewControllerWillChange addr 0x216c21c size 0x10 virtual true final true
 void TopViewControllerWillChange(HMUI::ViewController oldViewController, HMUI::ViewController newViewController, HMUI::HMUI__ViewController__AnimationType animationType) ;

/// @brief Method HandleLevelSelectionNavigationControllerDidSelectPack addr 0x216c22c size 0x18 virtual false final false
 void HandleLevelSelectionNavigationControllerDidSelectPack(GlobalNamespace::LevelSelectionNavigationController viewController, GlobalNamespace::IBeatmapLevelPack pack) ;

/// @brief Method HandleSearchFilterParamsViewControllerDidFinish addr 0x216c244 size 0x48 virtual false final false
 void HandleSearchFilterParamsViewControllerDidFinish(GlobalNamespace::SearchFilterParamsViewController viewController, GlobalNamespace::LevelFilterParams levelFilterParams) ;

/// @brief Method HandleLevelSearchViewControllerDidPressSearchButton addr 0x216c28c size 0x40 virtual false final false
 void HandleLevelSearchViewControllerDidPressSearchButton(GlobalNamespace::LevelSearchViewController viewController, GlobalNamespace::LevelFilterParams levelFilterParams) ;

/// @brief Method HandleLevelSelectionNavigationControllerDidPressActionButton addr 0x216c2cc size 0x10 virtual false final false
 void HandleLevelSelectionNavigationControllerDidPressActionButton(GlobalNamespace::LevelSelectionNavigationController viewController) ;

/// @brief Method HandleLevelSelectionNavigationControllerDidPressPracticeButton addr 0x216c2dc size 0x10 virtual true final false
 void HandleLevelSelectionNavigationControllerDidPressPracticeButton(GlobalNamespace::LevelSelectionNavigationController viewController, GlobalNamespace::IBeatmapLevel level) ;

/// @brief Method HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap addr 0x216c2ec size 0x14 virtual true final false
 void HandleLevelSelectionNavigationControllerDidChangeDifficultyBeatmap(GlobalNamespace::LevelSelectionNavigationController viewController, GlobalNamespace::IDifficultyBeatmap beatmap) ;

/// @brief Method HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent addr 0x216c300 size 0x58 virtual true final false
 void HandleLevelSelectionNavigationControllerDidChangeLevelDetailContent(GlobalNamespace::LevelSelectionNavigationController viewController, GlobalNamespace::GlobalNamespace__StandardLevelDetailViewController__ContentType contentType) ;

/// @brief Method Refresh addr 0x216c358 size 0x1c virtual true final false
 void Refresh() ;

/// @brief Method IsMainViewController addr 0x216c374 size 0x6c virtual false final false
 bool IsMainViewController(HMUI::ViewController viewController) ;

/// @brief Method PresentMainViewController addr 0x216c3e0 size 0x1c virtual false final false
 void PresentMainViewController(System::Action finishedCallback, HMUI::HMUI__ViewController__AnimationType animationType) ;

// Ctor Parameters []
explicit LevelSelectionFlowCoordinator() ;

/// @brief Method .ctor addr 0x216c3fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LevelSelectionFlowCoordinator__State, "", "LevelSelectionFlowCoordinator/State");
NEED_NO_BOX(GlobalNamespace::LevelSelectionFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelSelectionFlowCoordinator, "", "LevelSelectionFlowCoordinator");
