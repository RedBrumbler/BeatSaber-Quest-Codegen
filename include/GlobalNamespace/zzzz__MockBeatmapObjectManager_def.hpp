#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
class SliderController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class ObstacleController;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapObjectManager;
}
// Type: ::MockBeatmapObjectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4835))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4852))
// CS Name: MockBeatmapObjectManager
class CORDL_TYPE MockBeatmapObjectManager : public GlobalNamespace::BeatmapObjectManager {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~MockBeatmapObjectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapObjectManager", modifiers: " const&", def_value: None }]
constexpr MockBeatmapObjectManager(MockBeatmapObjectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockBeatmapObjectManager", modifiers: "&&", def_value: None }]
constexpr MockBeatmapObjectManager(MockBeatmapObjectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockBeatmapObjectManager(void* ptr) noexcept : GlobalNamespace::BeatmapObjectManager(ptr) {
}


  constexpr MockBeatmapObjectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockBeatmapObjectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockBeatmapObjectManager& operator=(MockBeatmapObjectManager&& o) noexcept = default;
  constexpr MockBeatmapObjectManager& operator=(MockBeatmapObjectManager const& o) noexcept = default;
                


// Properties

 System::Collections::Generic::List_1<GlobalNamespace::ObstacleController> __declspec(property(get=get_activeObstacleControllers))  activeObstacleControllers;


// Methods

/// @brief Method get_activeObstacleControllers addr 0x2273334 size 0x8 virtual true final false
 System::Collections::Generic::List_1<GlobalNamespace::ObstacleController> get_activeObstacleControllers() ;

/// @brief Method ProcessObstacleData addr 0x227333c size 0x4 virtual true final false
 void ProcessObstacleData(GlobalNamespace::ObstacleData obstacleData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation) ;

/// @brief Method ProcessNoteData addr 0x2273340 size 0x4 virtual true final false
 void ProcessNoteData(GlobalNamespace::NoteData noteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation, bool forceIsFirstNoteBehaviour) ;

/// @brief Method ProcessSliderData addr 0x2273344 size 0x4 virtual true final false
 void ProcessSliderData(GlobalNamespace::SliderData sliderData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation) ;

/// @brief Method DespawnInternal addr 0x2273348 size 0x4 virtual true final false
 void DespawnInternal(GlobalNamespace::NoteController noteController) ;

/// @brief Method DespawnInternal addr 0x227334c size 0x4 virtual true final false
 void DespawnInternal(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method DespawnInternal addr 0x2273350 size 0x4 virtual true final false
 void DespawnInternal(GlobalNamespace::SliderController sliderNoteController) ;

// Ctor Parameters []
explicit MockBeatmapObjectManager() ;

/// @brief Method .ctor addr 0x2273354 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockBeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockBeatmapObjectManager, "", "MockBeatmapObjectManager");
