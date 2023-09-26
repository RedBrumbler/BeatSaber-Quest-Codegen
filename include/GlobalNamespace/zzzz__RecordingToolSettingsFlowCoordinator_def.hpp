#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class RecordingToolLoggingViewController;
}
namespace GlobalNamespace {
class RecordingToolConfigViewController;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class RecordingToolSettingsViewController;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData;
}
namespace GlobalNamespace {
class RecordingToolSettingsFlowCoordinator;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5616))
// CS Name: RecordingToolSettingsFlowCoordinator::InitData
class CORDL_TYPE GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData(GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData(GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData& operator=(GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData& operator=(GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ScenesTransitionSetupDataSO __declspec(property(get=__get_nextScenesTransitionSetupData, put=__set_nextScenesTransitionSetupData))  nextScenesTransitionSetupData;

constexpr void __set_nextScenesTransitionSetupData(GlobalNamespace::ScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::ScenesTransitionSetupDataSO __get_nextScenesTransitionSetupData() const;


// Methods

// Ctor Parameters [CppParam { name: "nextScenesTransitionSetupData", ty: "GlobalNamespace::ScenesTransitionSetupDataSO", modifiers: "", def_value: None }]
explicit GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData(GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData) ;

/// @brief Method .ctor addr 0x217b51c size 0x28 virtual false final false
 void _ctor(GlobalNamespace::ScenesTransitionSetupDataSO nextScenesTransitionSetupData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RecordingToolSettingsFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13652))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5617))
// CS Name: RecordingToolSettingsFlowCoordinator
class CORDL_TYPE RecordingToolSettingsFlowCoordinator : public HMUI::FlowCoordinator {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~RecordingToolSettingsFlowCoordinator() = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsFlowCoordinator", modifiers: " const&", def_value: None }]
constexpr RecordingToolSettingsFlowCoordinator(RecordingToolSettingsFlowCoordinator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsFlowCoordinator", modifiers: "&&", def_value: None }]
constexpr RecordingToolSettingsFlowCoordinator(RecordingToolSettingsFlowCoordinator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RecordingToolSettingsFlowCoordinator(void* ptr) noexcept : HMUI::FlowCoordinator(ptr) {
}


  constexpr RecordingToolSettingsFlowCoordinator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RecordingToolSettingsFlowCoordinator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RecordingToolSettingsFlowCoordinator& operator=(RecordingToolSettingsFlowCoordinator&& o) noexcept = default;
  constexpr RecordingToolSettingsFlowCoordinator& operator=(RecordingToolSettingsFlowCoordinator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::RecordingToolConfigViewController __declspec(property(get=__get__recordingToolConfigViewController, put=__set__recordingToolConfigViewController))  _recordingToolConfigViewController;

constexpr void __set__recordingToolConfigViewController(GlobalNamespace::RecordingToolConfigViewController value) ;

constexpr GlobalNamespace::RecordingToolConfigViewController __get__recordingToolConfigViewController() const;

 GlobalNamespace::RecordingToolSettingsViewController __declspec(property(get=__get__recordingToolSettingsViewController, put=__set__recordingToolSettingsViewController))  _recordingToolSettingsViewController;

constexpr void __set__recordingToolSettingsViewController(GlobalNamespace::RecordingToolSettingsViewController value) ;

constexpr GlobalNamespace::RecordingToolSettingsViewController __get__recordingToolSettingsViewController() const;

 GlobalNamespace::RecordingToolLoggingViewController __declspec(property(get=__get__recordingToolLoggingViewController, put=__set__recordingToolLoggingViewController))  _recordingToolLoggingViewController;

constexpr void __set__recordingToolLoggingViewController(GlobalNamespace::RecordingToolLoggingViewController value) ;

constexpr GlobalNamespace::RecordingToolLoggingViewController __get__recordingToolLoggingViewController() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData __get__initData() const;


// Methods

/// @brief Method DidActivate addr 0x217b314 size 0xf4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x217b408 size 0xa0 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method Update addr 0x217b4a8 size 0x2c virtual false final false
 void Update() ;

/// @brief Method HandleRecordingToolSettingsViewControllerDidFinish addr 0x217b4d4 size 0x4 virtual false final false
 void HandleRecordingToolSettingsViewControllerDidFinish() ;

/// @brief Method GoToNextScene addr 0x217b4d8 size 0x3c virtual false final false
 void GoToNextScene() ;

// Ctor Parameters []
explicit RecordingToolSettingsFlowCoordinator() ;

/// @brief Method .ctor addr 0x217b514 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__RecordingToolSettingsFlowCoordinator__InitData, "", "RecordingToolSettingsFlowCoordinator/InitData");
NEED_NO_BOX(GlobalNamespace::RecordingToolSettingsFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RecordingToolSettingsFlowCoordinator, "", "RecordingToolSettingsFlowCoordinator");
