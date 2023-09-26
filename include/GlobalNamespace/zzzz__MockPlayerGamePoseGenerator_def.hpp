#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
struct GlobalNamespace__LevelCompletionResults__LevelEndStateType;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class MockScoreSyncStateSender;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class MockNodePoseSyncStateSender;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerGamePoseGenerator;
}
// Type: ::MockPlayerGamePoseGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15512))
// CS Name: MockPlayerGamePoseGenerator
class CORDL_TYPE MockPlayerGamePoseGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MockPlayerGamePoseGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGenerator", modifiers: " const&", def_value: None }]
constexpr MockPlayerGamePoseGenerator(MockPlayerGamePoseGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerGamePoseGenerator", modifiers: "&&", def_value: None }]
constexpr MockPlayerGamePoseGenerator(MockPlayerGamePoseGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayerGamePoseGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockPlayerGamePoseGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayerGamePoseGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayerGamePoseGenerator& operator=(MockPlayerGamePoseGenerator&& o) noexcept = default;
  constexpr MockPlayerGamePoseGenerator& operator=(MockPlayerGamePoseGenerator const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get_multiplayerSessionManager, put=__set_multiplayerSessionManager))  multiplayerSessionManager;

constexpr void __set_multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get_multiplayerSessionManager() const;

 GlobalNamespace::IGameplayRpcManager __declspec(property(get=__get_gameplayRpcManager, put=__set_gameplayRpcManager))  gameplayRpcManager;

constexpr void __set_gameplayRpcManager(GlobalNamespace::IGameplayRpcManager value) ;

constexpr GlobalNamespace::IGameplayRpcManager __get_gameplayRpcManager() const;

 bool __declspec(property(get=__get_leftHanded, put=__set_leftHanded))  leftHanded;

constexpr void __set_leftHanded(bool value) ;

constexpr bool __get_leftHanded() const;

 GlobalNamespace::MockNodePoseSyncStateSender __declspec(property(get=__get_mockNodePoseSyncStateSender, put=__set_mockNodePoseSyncStateSender))  mockNodePoseSyncStateSender;

constexpr void __set_mockNodePoseSyncStateSender(GlobalNamespace::MockNodePoseSyncStateSender value) ;

constexpr GlobalNamespace::MockNodePoseSyncStateSender __get_mockNodePoseSyncStateSender() const;

 GlobalNamespace::MockScoreSyncStateSender __declspec(property(get=__get_mockScoreSyncStateSender, put=__set_mockScoreSyncStateSender))  mockScoreSyncStateSender;

constexpr void __set_mockScoreSyncStateSender(GlobalNamespace::MockScoreSyncStateSender value) ;

constexpr GlobalNamespace::MockScoreSyncStateSender __get_mockScoreSyncStateSender() const;


// Methods

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }, CppParam { name: "gameplayRpcManager", ty: "GlobalNamespace::IGameplayRpcManager", modifiers: "", def_value: None }, CppParam { name: "leftHanded", ty: "bool", modifiers: "", def_value: None }]
explicit MockPlayerGamePoseGenerator(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, bool leftHanded) ;

/// @brief Method .ctor addr 0x22b37e8 size 0xc0 virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, bool leftHanded) ;

/// @brief Method Dispose addr 0x22b3a24 size 0x2c virtual true final false
 void Dispose() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(float_t introStartTime, GlobalNamespace::MockBeatmapData beatmapData, GlobalNamespace::GameplayModifiers gameplayModifiers, System::Action onSongFinished) ;

/// @brief Method Tick addr 0x0 size 0xffffffffffffffff virtual true final false
 void Tick() ;

/// @brief Method SimulateFail addr 0x22b3b18 size 0xf0 virtual true final false
 void SimulateFail() ;

/// @brief Method SimulateGiveUp addr 0x22b3d10 size 0xf0 virtual false final false
 void SimulateGiveUp() ;

/// @brief Method CreateEmptyLevelCompletionResults addr 0x22b3c08 size 0x108 virtual false final false
static GlobalNamespace::LevelCompletionResults CreateEmptyLevelCompletionResults(GlobalNamespace::GlobalNamespace__LevelCompletionResults__LevelEndStateType levelEndStateType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockPlayerGamePoseGenerator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerGamePoseGenerator, "", "MockPlayerGamePoseGenerator");
