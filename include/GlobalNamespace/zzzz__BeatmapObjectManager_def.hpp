#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class INoteControllerNoteDidStartJumpEvent;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class INoteControllerNoteDidDissolveEvent;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class INoteControllerNoteWasCutEvent;
}
namespace GlobalNamespace {
class ISliderDidFinishJumpEvent;
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
class SliderController;
}
namespace GlobalNamespace {
struct GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData;
}
namespace GlobalNamespace {
class INoteControllerNoteWasMissedEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidFinishJumpEvent;
}
namespace GlobalNamespace {
class IBeatmapObjectSpawner;
}
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class ISliderDidDissolveEvent;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate;
}
// Type: ::NoteWasCutDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4834))
// CS Name: BeatmapObjectManager::NoteWasCutDelegate
class CORDL_TYPE GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate(GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate(GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate& operator=(GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate& operator=(GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x22700bc size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x22701ec size 0x14 virtual true final false
 void Invoke(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method BeginInvoke addr 0x2270200 size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2270294 size 0xc virtual true final false
 void EndInvoke(ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo, System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapObjectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4835))
// CS Name: BeatmapObjectManager
class CORDL_TYPE BeatmapObjectManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NoteWasCutDelegate = GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate;

/// @brief Convert operator to GlobalNamespace::IBeatmapObjectSpawner
constexpr operator  GlobalNamespace::IBeatmapObjectSpawner() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteControllerNoteDidStartJumpEvent
constexpr operator  GlobalNamespace::INoteControllerNoteDidStartJumpEvent() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteControllerNoteDidFinishJumpEvent
constexpr operator  GlobalNamespace::INoteControllerNoteDidFinishJumpEvent() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteControllerNoteWasCutEvent
constexpr operator  GlobalNamespace::INoteControllerNoteWasCutEvent() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteControllerNoteWasMissedEvent
constexpr operator  GlobalNamespace::INoteControllerNoteWasMissedEvent() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteControllerNoteDidDissolveEvent
constexpr operator  GlobalNamespace::INoteControllerNoteDidDissolveEvent() const noexcept;

/// @brief Convert operator to GlobalNamespace::ISliderDidFinishJumpEvent
constexpr operator  GlobalNamespace::ISliderDidFinishJumpEvent() const noexcept;

/// @brief Convert operator to GlobalNamespace::ISliderDidDissolveEvent
constexpr operator  GlobalNamespace::ISliderDidDissolveEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~BeatmapObjectManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectManager", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectManager(BeatmapObjectManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectManager", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectManager(BeatmapObjectManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BeatmapObjectManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectManager& operator=(BeatmapObjectManager&& o) noexcept = default;
  constexpr BeatmapObjectManager& operator=(BeatmapObjectManager const& o) noexcept = default;
                


// Fields

 System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t> __declspec(property(get=__get_noteWasAddedEvent, put=__set_noteWasAddedEvent))  noteWasAddedEvent;

constexpr void __set_noteWasAddedEvent(System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t> value) ;

constexpr System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t> __get_noteWasAddedEvent() const;

 System::Action_1<GlobalNamespace::NoteController> __declspec(property(get=__get_noteWasSpawnedEvent, put=__set_noteWasSpawnedEvent))  noteWasSpawnedEvent;

constexpr void __set_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController> value) ;

constexpr System::Action_1<GlobalNamespace::NoteController> __get_noteWasSpawnedEvent() const;

 System::Action_1<GlobalNamespace::NoteController> __declspec(property(get=__get_noteWasDespawnedEvent, put=__set_noteWasDespawnedEvent))  noteWasDespawnedEvent;

constexpr void __set_noteWasDespawnedEvent(System::Action_1<GlobalNamespace::NoteController> value) ;

constexpr System::Action_1<GlobalNamespace::NoteController> __get_noteWasDespawnedEvent() const;

 System::Action_1<GlobalNamespace::NoteController> __declspec(property(get=__get_noteWasMissedEvent, put=__set_noteWasMissedEvent))  noteWasMissedEvent;

constexpr void __set_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController> value) ;

constexpr System::Action_1<GlobalNamespace::NoteController> __get_noteWasMissedEvent() const;

 GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate __declspec(property(get=__get_noteWasCutEvent, put=__set_noteWasCutEvent))  noteWasCutEvent;

constexpr void __set_noteWasCutEvent(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate value) ;

constexpr GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate __get_noteWasCutEvent() const;

 System::Action_1<GlobalNamespace::NoteController> __declspec(property(get=__get_noteDidStartJumpEvent, put=__set_noteDidStartJumpEvent))  noteDidStartJumpEvent;

constexpr void __set_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController> value) ;

constexpr System::Action_1<GlobalNamespace::NoteController> __get_noteDidStartJumpEvent() const;

 System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t> __declspec(property(get=__get_obstacleWasAddedEvent, put=__set_obstacleWasAddedEvent))  obstacleWasAddedEvent;

constexpr void __set_obstacleWasAddedEvent(System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t> value) ;

constexpr System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t> __get_obstacleWasAddedEvent() const;

 System::Action_1<GlobalNamespace::ObstacleController> __declspec(property(get=__get_obstacleWasSpawnedEvent, put=__set_obstacleWasSpawnedEvent))  obstacleWasSpawnedEvent;

constexpr void __set_obstacleWasSpawnedEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

constexpr System::Action_1<GlobalNamespace::ObstacleController> __get_obstacleWasSpawnedEvent() const;

 System::Action_1<GlobalNamespace::ObstacleController> __declspec(property(get=__get_obstacleWasDespawnedEvent, put=__set_obstacleWasDespawnedEvent))  obstacleWasDespawnedEvent;

constexpr void __set_obstacleWasDespawnedEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

constexpr System::Action_1<GlobalNamespace::ObstacleController> __get_obstacleWasDespawnedEvent() const;

 System::Action_1<GlobalNamespace::ObstacleController> __declspec(property(get=__get_obstacleDidPassThreeQuartersOfMove2Event, put=__set_obstacleDidPassThreeQuartersOfMove2Event))  obstacleDidPassThreeQuartersOfMove2Event;

constexpr void __set_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController> value) ;

constexpr System::Action_1<GlobalNamespace::ObstacleController> __get_obstacleDidPassThreeQuartersOfMove2Event() const;

 System::Action_1<GlobalNamespace::ObstacleController> __declspec(property(get=__get_obstacleDidPassAvoidedMarkEvent, put=__set_obstacleDidPassAvoidedMarkEvent))  obstacleDidPassAvoidedMarkEvent;

constexpr void __set_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

constexpr System::Action_1<GlobalNamespace::ObstacleController> __get_obstacleDidPassAvoidedMarkEvent() const;

 System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t> __declspec(property(get=__get_sliderWasAddedEvent, put=__set_sliderWasAddedEvent))  sliderWasAddedEvent;

constexpr void __set_sliderWasAddedEvent(System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t> value) ;

constexpr System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t> __get_sliderWasAddedEvent() const;

 System::Action_1<GlobalNamespace::SliderController> __declspec(property(get=__get_sliderWasSpawnedEvent, put=__set_sliderWasSpawnedEvent))  sliderWasSpawnedEvent;

constexpr void __set_sliderWasSpawnedEvent(System::Action_1<GlobalNamespace::SliderController> value) ;

constexpr System::Action_1<GlobalNamespace::SliderController> __get_sliderWasSpawnedEvent() const;

 System::Action_1<GlobalNamespace::SliderController> __declspec(property(get=__get_sliderWasDespawnedEvent, put=__set_sliderWasDespawnedEvent))  sliderWasDespawnedEvent;

constexpr void __set_sliderWasDespawnedEvent(System::Action_1<GlobalNamespace::SliderController> value) ;

constexpr System::Action_1<GlobalNamespace::SliderController> __get_sliderWasDespawnedEvent() const;

 System::Action_1<bool> __declspec(property(get=__get_didHideAllBeatmapObjectsEvent, put=__set_didHideAllBeatmapObjectsEvent))  didHideAllBeatmapObjectsEvent;

constexpr void __set_didHideAllBeatmapObjectsEvent(System::Action_1<bool> value) ;

constexpr System::Action_1<bool> __get_didHideAllBeatmapObjectsEvent() const;

 System::Collections::Generic::List_1<GlobalNamespace::IBeatmapObjectController> __declspec(property(get=__get__allBeatmapObjects, put=__set__allBeatmapObjects))  _allBeatmapObjects;

constexpr void __set__allBeatmapObjects(System::Collections::Generic::List_1<GlobalNamespace::IBeatmapObjectController> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::IBeatmapObjectController> __get__allBeatmapObjects() const;

 bool __declspec(property(get=__get__spawnHidden_k__BackingField, put=__set__spawnHidden_k__BackingField))  _spawnHidden_k__BackingField;

constexpr void __set__spawnHidden_k__BackingField(bool value) ;

constexpr bool __get__spawnHidden_k__BackingField() const;


// Properties

 System::Collections::Generic::List_1<GlobalNamespace::ObstacleController> __declspec(property(get=get_activeObstacleControllers))  activeObstacleControllers;

 bool __declspec(property(get=get_spawnHidden, put=set_spawnHidden))  spawnHidden;


// Methods

/// @brief Method add_noteWasAddedEvent addr 0x226dc90 size 0xb0 virtual false final false
 void add_noteWasAddedEvent(System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t> value) ;

/// @brief Method remove_noteWasAddedEvent addr 0x226dd40 size 0xb0 virtual false final false
 void remove_noteWasAddedEvent(System::Action_3<GlobalNamespace::NoteData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData,float_t> value) ;

/// @brief Method add_noteWasSpawnedEvent addr 0x2267ec0 size 0xb0 virtual false final false
 void add_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController> value) ;

/// @brief Method remove_noteWasSpawnedEvent addr 0x2267ff8 size 0xb0 virtual false final false
 void remove_noteWasSpawnedEvent(System::Action_1<GlobalNamespace::NoteController> value) ;

/// @brief Method add_noteWasDespawnedEvent addr 0x226ddf0 size 0xb0 virtual false final false
 void add_noteWasDespawnedEvent(System::Action_1<GlobalNamespace::NoteController> value) ;

/// @brief Method remove_noteWasDespawnedEvent addr 0x226dea0 size 0xb0 virtual false final false
 void remove_noteWasDespawnedEvent(System::Action_1<GlobalNamespace::NoteController> value) ;

/// @brief Method add_noteWasMissedEvent addr 0x226df50 size 0xb0 virtual false final false
 void add_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController> value) ;

/// @brief Method remove_noteWasMissedEvent addr 0x226e000 size 0xb0 virtual false final false
 void remove_noteWasMissedEvent(System::Action_1<GlobalNamespace::NoteController> value) ;

/// @brief Method add_noteWasCutEvent addr 0x226e0b0 size 0x9c virtual false final false
 void add_noteWasCutEvent(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate value) ;

/// @brief Method remove_noteWasCutEvent addr 0x226e14c size 0x9c virtual false final false
 void remove_noteWasCutEvent(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate value) ;

/// @brief Method add_noteDidStartJumpEvent addr 0x226e1e8 size 0xb0 virtual false final false
 void add_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController> value) ;

/// @brief Method remove_noteDidStartJumpEvent addr 0x226e298 size 0xb0 virtual false final false
 void remove_noteDidStartJumpEvent(System::Action_1<GlobalNamespace::NoteController> value) ;

/// @brief Method add_obstacleWasAddedEvent addr 0x226e348 size 0xb0 virtual false final false
 void add_obstacleWasAddedEvent(System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t> value) ;

/// @brief Method remove_obstacleWasAddedEvent addr 0x226e3f8 size 0xb0 virtual false final false
 void remove_obstacleWasAddedEvent(System::Action_3<GlobalNamespace::ObstacleData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData,float_t> value) ;

/// @brief Method add_obstacleWasSpawnedEvent addr 0x226e4a8 size 0xb0 virtual false final false
 void add_obstacleWasSpawnedEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method remove_obstacleWasSpawnedEvent addr 0x226e558 size 0xb0 virtual false final false
 void remove_obstacleWasSpawnedEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method add_obstacleWasDespawnedEvent addr 0x226e608 size 0xb0 virtual false final false
 void add_obstacleWasDespawnedEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method remove_obstacleWasDespawnedEvent addr 0x226e6b8 size 0xb0 virtual false final false
 void remove_obstacleWasDespawnedEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method add_obstacleDidPassThreeQuartersOfMove2Event addr 0x226e768 size 0xb0 virtual false final false
 void add_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method remove_obstacleDidPassThreeQuartersOfMove2Event addr 0x226e818 size 0xb0 virtual false final false
 void remove_obstacleDidPassThreeQuartersOfMove2Event(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method add_obstacleDidPassAvoidedMarkEvent addr 0x226d190 size 0xb0 virtual false final false
 void add_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method remove_obstacleDidPassAvoidedMarkEvent addr 0x226d42c size 0xb0 virtual false final false
 void remove_obstacleDidPassAvoidedMarkEvent(System::Action_1<GlobalNamespace::ObstacleController> value) ;

/// @brief Method add_sliderWasAddedEvent addr 0x226e8c8 size 0xb0 virtual false final false
 void add_sliderWasAddedEvent(System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t> value) ;

/// @brief Method remove_sliderWasAddedEvent addr 0x226e978 size 0xb0 virtual false final false
 void remove_sliderWasAddedEvent(System::Action_3<GlobalNamespace::SliderData,GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData,float_t> value) ;

/// @brief Method add_sliderWasSpawnedEvent addr 0x226ea28 size 0xb0 virtual false final false
 void add_sliderWasSpawnedEvent(System::Action_1<GlobalNamespace::SliderController> value) ;

/// @brief Method remove_sliderWasSpawnedEvent addr 0x226ead8 size 0xb0 virtual false final false
 void remove_sliderWasSpawnedEvent(System::Action_1<GlobalNamespace::SliderController> value) ;

/// @brief Method add_sliderWasDespawnedEvent addr 0x226eb88 size 0xb0 virtual false final false
 void add_sliderWasDespawnedEvent(System::Action_1<GlobalNamespace::SliderController> value) ;

/// @brief Method remove_sliderWasDespawnedEvent addr 0x226ec38 size 0xb0 virtual false final false
 void remove_sliderWasDespawnedEvent(System::Action_1<GlobalNamespace::SliderController> value) ;

/// @brief Method add_didHideAllBeatmapObjectsEvent addr 0x226ece8 size 0xb0 virtual false final false
 void add_didHideAllBeatmapObjectsEvent(System::Action_1<bool> value) ;

/// @brief Method remove_didHideAllBeatmapObjectsEvent addr 0x226ed98 size 0xb0 virtual false final false
 void remove_didHideAllBeatmapObjectsEvent(System::Action_1<bool> value) ;

/// @brief Method get_activeObstacleControllers addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::List_1<GlobalNamespace::ObstacleController> get_activeObstacleControllers() ;

/// @brief Method ProcessObstacleData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessObstacleData(GlobalNamespace::ObstacleData obstacleData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData> obstacleSpawnData, float_t rotation) ;

/// @brief Method ProcessNoteData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessNoteData(GlobalNamespace::NoteData noteData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, float_t rotation, bool forceIsFirstNoteBehaviour) ;

/// @brief Method ProcessSliderData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessSliderData(GlobalNamespace::SliderData sliderData, ByRef<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, float_t rotation) ;

/// @brief Method DespawnInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 void DespawnInternal(GlobalNamespace::NoteController noteController) ;

/// @brief Method DespawnInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 void DespawnInternal(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method DespawnInternal addr 0x0 size 0xffffffffffffffff virtual true final false
 void DespawnInternal(GlobalNamespace::SliderController sliderNoteController) ;

/// @brief Method get_spawnHidden addr 0x226ee48 size 0x8 virtual false final false
 bool get_spawnHidden() ;

/// @brief Method set_spawnHidden addr 0x226ee50 size 0xc virtual false final false
 void set_spawnHidden(bool value) ;

/// @brief Method AddSpawnedObstacleController addr 0x2268f40 size 0x198 virtual false final false
 void AddSpawnedObstacleController(GlobalNamespace::ObstacleController obstacleController, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__ObstacleSpawnData obstacleSpawnData, float_t rotation) ;

/// @brief Method AddSpawnedNoteController addr 0x2269528 size 0x1ac virtual false final false
 void AddSpawnedNoteController(GlobalNamespace::NoteController noteController, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__NoteSpawnData noteSpawnData, float_t rotation) ;

/// @brief Method AddSpawnedSliderController addr 0x226a3b0 size 0x1a0 virtual false final false
 void AddSpawnedSliderController(GlobalNamespace::SliderController sliderController, GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnMovementData__SliderSpawnData sliderSpawnData, float_t rotation) ;

/// @brief Method SetNoteControllerEventCallbacks addr 0x226efbc size 0x28c virtual false final false
 void SetNoteControllerEventCallbacks(GlobalNamespace::NoteController noteController) ;

/// @brief Method RemoveNoteControllerEventCallbacks addr 0x226f36c size 0x2a0 virtual false final false
 void RemoveNoteControllerEventCallbacks(GlobalNamespace::NoteController noteController) ;

/// @brief Method SetSliderNoteControllerEventCallbacks addr 0x226f248 size 0x124 virtual false final false
 void SetSliderNoteControllerEventCallbacks(GlobalNamespace::SliderController sliderNoteController) ;

/// @brief Method RemoveSliderNoteControllerEventCallbacks addr 0x226f60c size 0x12c virtual false final false
 void RemoveSliderNoteControllerEventCallbacks(GlobalNamespace::SliderController sliderNoteController) ;

/// @brief Method SetObstacleEventCallbacks addr 0x226ee5c size 0x160 virtual false final false
 void SetObstacleEventCallbacks(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method RemoveObstacleEventCallbacks addr 0x226f738 size 0x160 virtual false final false
 void RemoveObstacleEventCallbacks(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method Despawn addr 0x226f898 size 0xa4 virtual false final false
 void Despawn(GlobalNamespace::NoteController noteController) ;

/// @brief Method Despawn addr 0x226f93c size 0xa4 virtual false final false
 void Despawn(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method Despawn addr 0x226f9e0 size 0xa4 virtual false final false
 void Despawn(GlobalNamespace::SliderController sliderNoteController) ;

/// @brief Method HandleNoteControllerNoteDidStartJump addr 0x226fa84 size 0x1c virtual true final true
 void HandleNoteControllerNoteDidStartJump(GlobalNamespace::NoteController noteController) ;

/// @brief Method HandleNoteControllerNoteWasMissed addr 0x226faa0 size 0x1c virtual true final true
 void HandleNoteControllerNoteWasMissed(GlobalNamespace::NoteController noteController) ;

/// @brief Method HandleNoteControllerNoteDidFinishJump addr 0x226fabc size 0x4 virtual true final true
 void HandleNoteControllerNoteDidFinishJump(GlobalNamespace::NoteController noteController) ;

/// @brief Method HandleNoteControllerNoteDidDissolve addr 0x226fac0 size 0x4 virtual true final true
 void HandleNoteControllerNoteDidDissolve(GlobalNamespace::NoteController noteController) ;

/// @brief Method HandleNoteControllerNoteWasCut addr 0x226fac4 size 0x40 virtual false final false
 void HandleNoteControllerNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method HandleObstaclePassedThreeQuartersOfMove2 addr 0x226fb04 size 0x1c virtual false final false
 void HandleObstaclePassedThreeQuartersOfMove2(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method HandleObstaclePassedAvoidedMark addr 0x226fb20 size 0x1c virtual false final false
 void HandleObstaclePassedAvoidedMark(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method HandleObstacleFinishedMovement addr 0x226fb3c size 0x4 virtual false final false
 void HandleObstacleFinishedMovement(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method HandleObstacleDidDissolve addr 0x226fb40 size 0x4 virtual false final false
 void HandleObstacleDidDissolve(GlobalNamespace::ObstacleController obstacleController) ;

/// @brief Method HandleSliderDidFinishJump addr 0x226fb44 size 0x4 virtual true final true
 void HandleSliderDidFinishJump(GlobalNamespace::SliderController sliderController) ;

/// @brief Method HandleSliderDidDissolve addr 0x226fb48 size 0x4 virtual true final true
 void HandleSliderDidDissolve(GlobalNamespace::SliderController sliderController) ;

/// @brief Method DissolveAllObjects addr 0x226fb4c size 0x1c4 virtual false final false
 void DissolveAllObjects() ;

/// @brief Method HideAllBeatmapObjects addr 0x226fd10 size 0x1f0 virtual false final false
 void HideAllBeatmapObjects(bool hide) ;

/// @brief Method PauseAllBeatmapObjects addr 0x226ff00 size 0x1b8 virtual false final false
 void PauseAllBeatmapObjects(bool pause) ;

// Ctor Parameters []
explicit BeatmapObjectManager() ;

/// @brief Method .ctor addr 0x226a5f0 size 0x7c virtual false final false
 void _ctor() ;

/// @brief Method INoteControllerNoteWasCutEvent.HandleNoteControllerNoteWasCut addr 0x22700b8 size 0x4 virtual true final true
 void INoteControllerNoteWasCutEvent_HandleNoteControllerNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapObjectManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectManager, "", "BeatmapObjectManager");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapObjectManager__NoteWasCutDelegate, "", "BeatmapObjectManager/NoteWasCutDelegate");
