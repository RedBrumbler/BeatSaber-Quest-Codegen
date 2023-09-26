#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class FPSRecorder;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
struct GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class FPSRecordController;
}
// Type: ::FPSRecordController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5937))
// CS Name: FPSRecordController
class CORDL_TYPE FPSRecordController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~FPSRecordController() = default;

// Ctor Parameters [CppParam { name: "", ty: "FPSRecordController", modifiers: " const&", def_value: None }]
constexpr FPSRecordController(FPSRecordController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FPSRecordController", modifiers: "&&", def_value: None }]
constexpr FPSRecordController(FPSRecordController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FPSRecordController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FPSRecordController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FPSRecordController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FPSRecordController& operator=(FPSRecordController&& o) noexcept = default;
  constexpr FPSRecordController& operator=(FPSRecordController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FPSRecorder __declspec(property(get=__get__fpsRecorder, put=__set__fpsRecorder))  _fpsRecorder;

constexpr void __set__fpsRecorder(GlobalNamespace::FPSRecorder value) ;

constexpr GlobalNamespace::FPSRecorder __get__fpsRecorder() const;

 GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup __declspec(property(get=__get__csvRecordSetup, put=__set__csvRecordSetup))  _csvRecordSetup;

constexpr void __set__csvRecordSetup(GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup value) ;

constexpr GlobalNamespace::GlobalNamespace__CSVFPSRecordReporter__FPSReportSetup __get__csvRecordSetup() const;

 GlobalNamespace::PauseController __declspec(property(get=__get__pauseController, put=__set__pauseController))  _pauseController;

constexpr void __set__pauseController(GlobalNamespace::PauseController value) ;

constexpr GlobalNamespace::PauseController __get__pauseController() const;

 GlobalNamespace::GameplayCoreSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(GlobalNamespace::GameplayCoreSceneSetupData value) ;

constexpr GlobalNamespace::GameplayCoreSceneSetupData __get__sceneSetupData() const;


// Methods

/// @brief Method Start addr 0x21cb5c0 size 0x1a8 virtual false final false
 void Start() ;

/// @brief Method HandleDidResumeEvent addr 0x21cb7e8 size 0x20 virtual false final false
 void HandleDidResumeEvent() ;

/// @brief Method HandleDidPauseEvent addr 0x21cb814 size 0x1c virtual false final false
 void HandleDidPauseEvent() ;

/// @brief Method OnDisable addr 0x21cb838 size 0x134 virtual false final false
 void OnDisable() ;

/// @brief Method GenerateFPSReport addr 0x21cb96c size 0x30c virtual false final false
 void GenerateFPSReport() ;

// Ctor Parameters []
explicit FPSRecordController() ;

/// @brief Method .ctor addr 0x21cbc80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FPSRecordController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FPSRecordController, "", "FPSRecordController");
