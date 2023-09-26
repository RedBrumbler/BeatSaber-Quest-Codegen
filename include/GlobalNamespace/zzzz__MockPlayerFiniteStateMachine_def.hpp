#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class MockPlayerLobbyPoseGenerator;
}
namespace GlobalNamespace {
class IMenuRpcManager;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class MockPlayerGamePoseGenerator;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlayerFiniteStateMachine;
}
// Type: ::MockPlayerFiniteStateMachine
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15511))
// CS Name: MockPlayerFiniteStateMachine
class CORDL_TYPE MockPlayerFiniteStateMachine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MockPlayerFiniteStateMachine() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerFiniteStateMachine", modifiers: " const&", def_value: None }]
constexpr MockPlayerFiniteStateMachine(MockPlayerFiniteStateMachine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPlayerFiniteStateMachine", modifiers: "&&", def_value: None }]
constexpr MockPlayerFiniteStateMachine(MockPlayerFiniteStateMachine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPlayerFiniteStateMachine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockPlayerFiniteStateMachine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPlayerFiniteStateMachine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPlayerFiniteStateMachine& operator=(MockPlayerFiniteStateMachine&& o) noexcept = default;
  constexpr MockPlayerFiniteStateMachine& operator=(MockPlayerFiniteStateMachine const& o) noexcept = default;
                


// Properties

 UnityEngine::Color __declspec(property(get=get_saberAColor, put=set_saberAColor))  saberAColor;

 UnityEngine::Color __declspec(property(get=get_saberBColor, put=set_saberBColor))  saberBColor;

 UnityEngine::Color __declspec(property(get=get_obstaclesColor, put=set_obstaclesColor))  obstaclesColor;

 bool __declspec(property(get=get_leftHanded, put=set_leftHanded))  leftHanded;

 bool __declspec(property(get=get_inactiveByDefault, put=set_inactiveByDefault))  inactiveByDefault;

 GlobalNamespace::MockPlayerGamePoseGenerator __declspec(property(get=get_gamePoseGenerator))  gamePoseGenerator;


// Methods

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }, CppParam { name: "gameplayRpcManager", ty: "GlobalNamespace::IGameplayRpcManager", modifiers: "", def_value: None }, CppParam { name: "menuRpcManager", ty: "GlobalNamespace::IMenuRpcManager", modifiers: "", def_value: None }, CppParam { name: "beatmapDataProvider", ty: "GlobalNamespace::IMockBeatmapDataProvider", modifiers: "", def_value: None }, CppParam { name: "lobbyPoseGenerator", ty: "GlobalNamespace::MockPlayerLobbyPoseGenerator", modifiers: "", def_value: None }, CppParam { name: "gamePoseGenerator", ty: "GlobalNamespace::MockPlayerGamePoseGenerator", modifiers: "", def_value: None }]
explicit MockPlayerFiniteStateMachine(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, GlobalNamespace::IMenuRpcManager menuRpcManager, GlobalNamespace::IMockBeatmapDataProvider beatmapDataProvider, GlobalNamespace::MockPlayerLobbyPoseGenerator lobbyPoseGenerator, GlobalNamespace::MockPlayerGamePoseGenerator gamePoseGenerator) ;

/// @brief Method .ctor addr 0x22b376c size 0x8 virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager gameplayRpcManager, GlobalNamespace::IMenuRpcManager menuRpcManager, GlobalNamespace::IMockBeatmapDataProvider beatmapDataProvider, GlobalNamespace::MockPlayerLobbyPoseGenerator lobbyPoseGenerator, GlobalNamespace::MockPlayerGamePoseGenerator gamePoseGenerator) ;

/// @brief Method get_saberAColor addr 0x22b3774 size 0x14 virtual false final false
 UnityEngine::Color get_saberAColor() ;

/// @brief Method set_saberAColor addr 0x22b3788 size 0x4 virtual false final false
 void set_saberAColor(UnityEngine::Color value) ;

/// @brief Method get_saberBColor addr 0x22b378c size 0x14 virtual false final false
 UnityEngine::Color get_saberBColor() ;

/// @brief Method set_saberBColor addr 0x22b37a0 size 0x4 virtual false final false
 void set_saberBColor(UnityEngine::Color value) ;

/// @brief Method get_obstaclesColor addr 0x22b37a4 size 0x14 virtual false final false
 UnityEngine::Color get_obstaclesColor() ;

/// @brief Method set_obstaclesColor addr 0x22b37b8 size 0x4 virtual false final false
 void set_obstaclesColor(UnityEngine::Color value) ;

/// @brief Method get_leftHanded addr 0x22b37bc size 0x8 virtual false final false
 bool get_leftHanded() ;

/// @brief Method set_leftHanded addr 0x22b37c4 size 0x4 virtual false final false
 void set_leftHanded(bool value) ;

/// @brief Method get_inactiveByDefault addr 0x22b37c8 size 0x8 virtual false final false
 bool get_inactiveByDefault() ;

/// @brief Method set_inactiveByDefault addr 0x22b37d0 size 0x4 virtual false final false
 void set_inactiveByDefault(bool value) ;

/// @brief Method get_gamePoseGenerator addr 0x22b37d4 size 0x8 virtual false final false
 GlobalNamespace::MockPlayerGamePoseGenerator get_gamePoseGenerator() ;

/// @brief Method Tick addr 0x22b37dc size 0x4 virtual false final false
 void Tick() ;

/// @brief Method Dispose addr 0x22b37e0 size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method SetIsReady addr 0x22b37e4 size 0x4 virtual false final false
 void SetIsReady(bool isReady) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockPlayerFiniteStateMachine);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPlayerFiniteStateMachine, "", "MockPlayerFiniteStateMachine");
