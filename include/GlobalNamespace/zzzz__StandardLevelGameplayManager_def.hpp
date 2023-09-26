#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class PauseController;
}
namespace GlobalNamespace {
class ILevelStartController;
}
namespace GlobalNamespace {
class ILevelEndActions;
}
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__StandardLevelGameplayManager__GameState;
}
namespace GlobalNamespace {
class GlobalNamespace__StandardLevelGameplayManager__InitData;
}
namespace GlobalNamespace {
class GlobalNamespace__StandardLevelGameplayManager___Start_d__22;
}
namespace GlobalNamespace {
class StandardLevelGameplayManager;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5127))
// CS Name: StandardLevelGameplayManager::InitData
class CORDL_TYPE GlobalNamespace__StandardLevelGameplayManager__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__StandardLevelGameplayManager__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StandardLevelGameplayManager__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__StandardLevelGameplayManager__InitData(GlobalNamespace__StandardLevelGameplayManager__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StandardLevelGameplayManager__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__StandardLevelGameplayManager__InitData(GlobalNamespace__StandardLevelGameplayManager__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelGameplayManager__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__StandardLevelGameplayManager__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__StandardLevelGameplayManager__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__StandardLevelGameplayManager__InitData& operator=(GlobalNamespace__StandardLevelGameplayManager__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__StandardLevelGameplayManager__InitData& operator=(GlobalNamespace__StandardLevelGameplayManager__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_failOn0Energy, put=__set_failOn0Energy))  failOn0Energy;

constexpr void __set_failOn0Energy(bool value) ;

constexpr bool __get_failOn0Energy() const;


// Methods

// Ctor Parameters [CppParam { name: "failOn0Energy", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__StandardLevelGameplayManager__InitData(bool failOn0Energy) ;

/// @brief Method .ctor addr 0x22ac0f8 size 0x28 virtual false final false
 void _ctor(bool failOn0Energy) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5128))
// CS Name: StandardLevelGameplayManager::GameState
struct CORDL_TYPE GlobalNamespace__StandardLevelGameplayManager__GameState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__StandardLevelGameplayManager__GameState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__StandardLevelGameplayManager__GameState(GlobalNamespace__StandardLevelGameplayManager__GameState const&) = default;
                    constexpr GlobalNamespace__StandardLevelGameplayManager__GameState(GlobalNamespace__StandardLevelGameplayManager__GameState&&) = default;
                    constexpr GlobalNamespace__StandardLevelGameplayManager__GameState& operator=(GlobalNamespace__StandardLevelGameplayManager__GameState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__StandardLevelGameplayManager__GameState& operator=(GlobalNamespace__StandardLevelGameplayManager__GameState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelGameplayManager__GameState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__StandardLevelGameplayManager__GameState_Unwrapped : int32_t {
__Intro = 0,
__Playing = 1,
__Paused = 2,
__Finished = 3,
__Failed = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__StandardLevelGameplayManager__GameState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__StandardLevelGameplayManager__GameState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Intro offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState const Intro;

/// @brief Field Playing offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState const Playing;

/// @brief Field Paused offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState const Paused;

/// @brief Field Finished offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState const Finished;

/// @brief Field Failed offset 0
static GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState const Failed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Start>d__22
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5129))
// CS Name: StandardLevelGameplayManager::<Start>d__22
class CORDL_TYPE GlobalNamespace__StandardLevelGameplayManager___Start_d__22 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__StandardLevelGameplayManager___Start_d__22() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StandardLevelGameplayManager___Start_d__22", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__StandardLevelGameplayManager___Start_d__22(GlobalNamespace__StandardLevelGameplayManager___Start_d__22 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StandardLevelGameplayManager___Start_d__22", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__StandardLevelGameplayManager___Start_d__22(GlobalNamespace__StandardLevelGameplayManager___Start_d__22&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StandardLevelGameplayManager___Start_d__22(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__StandardLevelGameplayManager___Start_d__22& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__StandardLevelGameplayManager___Start_d__22& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__StandardLevelGameplayManager___Start_d__22& operator=(GlobalNamespace__StandardLevelGameplayManager___Start_d__22&& o) noexcept = default;
  constexpr GlobalNamespace__StandardLevelGameplayManager___Start_d__22& operator=(GlobalNamespace__StandardLevelGameplayManager___Start_d__22 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::StandardLevelGameplayManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::StandardLevelGameplayManager value) ;

constexpr GlobalNamespace::StandardLevelGameplayManager __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__StandardLevelGameplayManager___Start_d__22(int32_t __1__state) ;

/// @brief Method .ctor addr 0x22abd40 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x22ac120 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x22ac124 size 0x380 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x22ac4a4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x22ac4ac size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x22ac4ec size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StandardLevelGameplayManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10185))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5130))
// CS Name: StandardLevelGameplayManager
class CORDL_TYPE StandardLevelGameplayManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__22 = GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager___Start_d__22;

using GameState = GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState;

using InitData = GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__InitData;

/// @brief Convert operator to GlobalNamespace::ILevelEndActions
constexpr operator  GlobalNamespace::ILevelEndActions() const noexcept;

/// @brief Convert operator to GlobalNamespace::ILevelStartController
constexpr operator  GlobalNamespace::ILevelStartController() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~StandardLevelGameplayManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelGameplayManager", modifiers: " const&", def_value: None }]
constexpr StandardLevelGameplayManager(StandardLevelGameplayManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandardLevelGameplayManager", modifiers: "&&", def_value: None }]
constexpr StandardLevelGameplayManager(StandardLevelGameplayManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandardLevelGameplayManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StandardLevelGameplayManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandardLevelGameplayManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandardLevelGameplayManager& operator=(StandardLevelGameplayManager&& o) noexcept = default;
  constexpr StandardLevelGameplayManager& operator=(StandardLevelGameplayManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 GlobalNamespace::GameSongController __declspec(property(get=__get__gameSongController, put=__set__gameSongController))  _gameSongController;

constexpr void __set__gameSongController(GlobalNamespace::GameSongController value) ;

constexpr GlobalNamespace::GameSongController __get__gameSongController() const;

 GlobalNamespace::GameEnergyCounter __declspec(property(get=__get__gameEnergyCounter, put=__set__gameEnergyCounter))  _gameEnergyCounter;

constexpr void __set__gameEnergyCounter(GlobalNamespace::GameEnergyCounter value) ;

constexpr GlobalNamespace::GameEnergyCounter __get__gameEnergyCounter() const;

 GlobalNamespace::PauseController __declspec(property(get=__get__pauseController, put=__set__pauseController))  _pauseController;

constexpr void __set__pauseController(GlobalNamespace::PauseController value) ;

constexpr GlobalNamespace::PauseController __get__pauseController() const;

 GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__InitData __get__initData() const;

 System::Action __declspec(property(get=__get_levelWillStartIntroEvent, put=__set_levelWillStartIntroEvent))  levelWillStartIntroEvent;

constexpr void __set_levelWillStartIntroEvent(System::Action value) ;

constexpr System::Action __get_levelWillStartIntroEvent() const;

 System::Action __declspec(property(get=__get_levelDidStartEvent, put=__set_levelDidStartEvent))  levelDidStartEvent;

constexpr void __set_levelDidStartEvent(System::Action value) ;

constexpr System::Action __get_levelDidStartEvent() const;

 System::Action __declspec(property(get=__get_levelFailedEvent, put=__set_levelFailedEvent))  levelFailedEvent;

constexpr void __set_levelFailedEvent(System::Action value) ;

constexpr System::Action __get_levelFailedEvent() const;

 System::Action __declspec(property(get=__get_levelFinishedEvent, put=__set_levelFinishedEvent))  levelFinishedEvent;

constexpr void __set_levelFinishedEvent(System::Action value) ;

constexpr System::Action __get_levelFinishedEvent() const;

 GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState __declspec(property(get=__get__gameState, put=__set__gameState))  _gameState;

constexpr void __set__gameState(GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState value) ;

constexpr GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState __get__gameState() const;

 GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState __declspec(property(get=__get__prePauseGameState, put=__set__prePauseGameState))  _prePauseGameState;

constexpr void __set__prePauseGameState(GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState value) ;

constexpr GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState __get__prePauseGameState() const;


// Methods

/// @brief Method add_levelWillStartIntroEvent addr 0x22ab7f0 size 0x9c virtual true final true
 void add_levelWillStartIntroEvent(System::Action value) ;

/// @brief Method remove_levelWillStartIntroEvent addr 0x22ab88c size 0x9c virtual true final true
 void remove_levelWillStartIntroEvent(System::Action value) ;

/// @brief Method add_levelDidStartEvent addr 0x22ab928 size 0x9c virtual true final true
 void add_levelDidStartEvent(System::Action value) ;

/// @brief Method remove_levelDidStartEvent addr 0x22ab9c4 size 0x9c virtual true final true
 void remove_levelDidStartEvent(System::Action value) ;

/// @brief Method add_levelFailedEvent addr 0x22aba60 size 0x9c virtual true final true
 void add_levelFailedEvent(System::Action value) ;

/// @brief Method remove_levelFailedEvent addr 0x22abafc size 0x9c virtual true final true
 void remove_levelFailedEvent(System::Action value) ;

/// @brief Method add_levelFinishedEvent addr 0x22abb98 size 0x9c virtual true final true
 void add_levelFinishedEvent(System::Action value) ;

/// @brief Method remove_levelFinishedEvent addr 0x22abc34 size 0x9c virtual true final true
 void remove_levelFinishedEvent(System::Action value) ;

/// @brief Method Awake addr 0x22abcd0 size 0x8 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x22abcd8 size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

/// @brief Method OnDestroy addr 0x22abd68 size 0x274 virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x22abfdc size 0x38 virtual false final false
 void Update() ;

/// @brief Method HandleGameEnergyDidReach0 addr 0x22ac014 size 0x54 virtual false final false
 void HandleGameEnergyDidReach0() ;

/// @brief Method HandleSongDidFinish addr 0x22ac068 size 0x34 virtual false final false
 void HandleSongDidFinish() ;

/// @brief Method HandlePauseControllerCanPause addr 0x22ac09c size 0x24 virtual false final false
 void HandlePauseControllerCanPause(System::Action_1<bool> canPause) ;

/// @brief Method HandlePauseControllerDidPause addr 0x22ac0c0 size 0x18 virtual false final false
 void HandlePauseControllerDidPause() ;

/// @brief Method HandlePauseControllerDidResume addr 0x22ac0d8 size 0x18 virtual false final false
 void HandlePauseControllerDidResume() ;

// Ctor Parameters []
explicit StandardLevelGameplayManager() ;

/// @brief Method .ctor addr 0x22ac0f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__GameState, "", "StandardLevelGameplayManager/GameState");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager__InitData, "", "StandardLevelGameplayManager/InitData");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager___Start_d__22);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StandardLevelGameplayManager___Start_d__22, "", "StandardLevelGameplayManager/<Start>d__22");
NEED_NO_BOX(GlobalNamespace::StandardLevelGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelGameplayManager, "", "StandardLevelGameplayManager");
