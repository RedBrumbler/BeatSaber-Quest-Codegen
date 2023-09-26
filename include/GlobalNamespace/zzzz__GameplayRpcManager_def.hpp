#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_def.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class ObstacleSpawnInfoNetSerializable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsNetSerializable;
}
namespace GlobalNamespace {
class SliderSpawnInfoNetSerializable;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class MultiplayerLevelCompletionResults;
}
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
namespace GlobalNamespace {
class PlayerSpecificSettingsAtStartNetSerializable;
}
namespace GlobalNamespace {
template<typename TType>
class RpcHandler_1;
}
namespace GlobalNamespace {
class IGameplayRpcManager;
}
namespace GlobalNamespace {
class NoteMissInfoNetSerializable;
}
namespace GlobalNamespace {
class NoteCutInfoNetSerializable;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__GameplayRpcManager__RpcType;
}
namespace GlobalNamespace {
class GameplayRpcManager;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__LevelFinishedRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__NoteCutRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__NoteMissedRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc;
}
// Type: ::RpcType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12702))
// CS Name: GameplayRpcManager::RpcType
struct CORDL_TYPE GlobalNamespace__GameplayRpcManager__RpcType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__RpcType(uint8_t value__) noexcept;


                    constexpr GlobalNamespace__GameplayRpcManager__RpcType(GlobalNamespace__GameplayRpcManager__RpcType const&) = default;
                    constexpr GlobalNamespace__GameplayRpcManager__RpcType(GlobalNamespace__GameplayRpcManager__RpcType&&) = default;
                    constexpr GlobalNamespace__GameplayRpcManager__RpcType& operator=(GlobalNamespace__GameplayRpcManager__RpcType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__GameplayRpcManager__RpcType& operator=(GlobalNamespace__GameplayRpcManager__RpcType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__RpcType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__GameplayRpcManager__RpcType_Unwrapped : uint8_t {
__SetGameplaySceneSyncFinish = 0u,
__SetGameplaySceneReady = 1u,
__GetGameplaySceneReady = 2u,
__SetActivePlayerFailedToConnect = 3u,
__SetGameplaySongReady = 4u,
__GetGameplaySongReady = 5u,
__SetSongStartTime = 6u,
__NoteCut = 7u,
__NoteMissed = 8u,
__LevelFinished = 9u,
__ReturnToMenu = 10u,
__RequestReturnToMenu = 11u,
__NoteSpawned = 12u,
__ObstacleSpawned = 13u,
__SliderSpawned = 14u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__GameplayRpcManager__RpcType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__GameplayRpcManager__RpcType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field SetGameplaySceneSyncFinish offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const SetGameplaySceneSyncFinish;

/// @brief Field SetGameplaySceneReady offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const SetGameplaySceneReady;

/// @brief Field GetGameplaySceneReady offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const GetGameplaySceneReady;

/// @brief Field SetActivePlayerFailedToConnect offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const SetActivePlayerFailedToConnect;

/// @brief Field SetGameplaySongReady offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const SetGameplaySongReady;

/// @brief Field GetGameplaySongReady offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const GetGameplaySongReady;

/// @brief Field SetSongStartTime offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const SetSongStartTime;

/// @brief Field NoteCut offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const NoteCut;

/// @brief Field NoteMissed offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const NoteMissed;

/// @brief Field LevelFinished offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const LevelFinished;

/// @brief Field ReturnToMenu offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const ReturnToMenu;

/// @brief Field RequestReturnToMenu offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const RequestReturnToMenu;

/// @brief Field NoteSpawned offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const NoteSpawned;

/// @brief Field ObstacleSpawned offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const ObstacleSpawned;

/// @brief Field SliderSpawned offset 0
static GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType const SliderSpawned;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetGameplaySceneSyncFinishedRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12896), inst: 4768 }), TypeDefinitionIndex(TypeDefinitionIndex(12896)), TypeDefinitionIndex(TypeDefinitionIndex(12884))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12703))
// CS Name: GameplayRpcManager::SetGameplaySceneSyncFinishedRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc : public GlobalNamespace::RemoteProcedureCall_2<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc(GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc(GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall_2<GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc& operator=(GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc& operator=(GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc() ;

/// @brief Method .ctor addr 0xdbd698 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetGameplaySceneReadyRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12895), inst: 3684 }), TypeDefinitionIndex(TypeDefinitionIndex(12885)), TypeDefinitionIndex(TypeDefinitionIndex(12895))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12704))
// CS Name: GameplayRpcManager::SetGameplaySceneReadyRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc : public GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::PlayerSpecificSettingsNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc(GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc(GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::PlayerSpecificSettingsNetSerializable>(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc& operator=(GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc& operator=(GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc() ;

/// @brief Method .ctor addr 0xdbd6e0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetGameplaySceneReadyRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12894))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12705))
// CS Name: GameplayRpcManager::GetGameplaySceneReadyRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc(GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc(GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc& operator=(GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc& operator=(GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc() ;

/// @brief Method .ctor addr 0xdbd728 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetPlayerDidConnectLateRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12897), inst: 638 }), TypeDefinitionIndex(TypeDefinitionIndex(12884)), TypeDefinitionIndex(TypeDefinitionIndex(12897))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12706))
// CS Name: GameplayRpcManager::SetPlayerDidConnectLateRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc : public GlobalNamespace::RemoteProcedureCall_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc(GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc(GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW>(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc& operator=(GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc& operator=(GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc() ;

/// @brief Method .ctor addr 0xdbd730 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetGameplaySongReadyRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12894))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12707))
// CS Name: GameplayRpcManager::SetGameplaySongReadyRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc(GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc(GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc& operator=(GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc& operator=(GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc() ;

/// @brief Method .ctor addr 0xdbd778 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GetGameplaySongReadyRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12894))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12708))
// CS Name: GameplayRpcManager::GetGameplaySongReadyRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc(GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc(GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc& operator=(GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc& operator=(GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc() ;

/// @brief Method .ctor addr 0xdbd780 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SetSongStartTimeRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12895)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12895), inst: 374 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12709))
// CS Name: GameplayRpcManager::SetSongStartTimeRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc : public GlobalNamespace::RemoteProcedureCall_1<float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc(GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc(GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall_1<float_t>(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc& operator=(GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc& operator=(GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc() ;

/// @brief Method .ctor addr 0xdbd788 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteSpawnedRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15137)), TypeDefinitionIndex(TypeDefinitionIndex(12896)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12896), inst: 4771 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12710))
// CS Name: GameplayRpcManager::NoteSpawnedRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc : public GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::NoteSpawnInfoNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc(GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc(GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::NoteSpawnInfoNetSerializable>(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc& operator=(GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc& operator=(GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc() ;

/// @brief Method .ctor addr 0xdbd7d0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ObstacleSpawnedRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12896), inst: 4772 }), TypeDefinitionIndex(TypeDefinitionIndex(15138)), TypeDefinitionIndex(TypeDefinitionIndex(12896))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12711))
// CS Name: GameplayRpcManager::ObstacleSpawnedRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc : public GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc(GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc(GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable>(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc& operator=(GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc& operator=(GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc() ;

/// @brief Method .ctor addr 0xdbd818 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SliderSpawnedRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15155)), TypeDefinitionIndex(TypeDefinitionIndex(12896)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12896), inst: 4773 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12712))
// CS Name: GameplayRpcManager::SliderSpawnedRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc : public GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::SliderSpawnInfoNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc(GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc(GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::SliderSpawnInfoNetSerializable>(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc& operator=(GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc& operator=(GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc() ;

/// @brief Method .ctor addr 0xdbd860 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteCutRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12896), inst: 4769 }), TypeDefinitionIndex(TypeDefinitionIndex(15135)), TypeDefinitionIndex(TypeDefinitionIndex(12896))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12713))
// CS Name: GameplayRpcManager::NoteCutRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__NoteCutRpc : public GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::NoteCutInfoNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__GameplayRpcManager__NoteCutRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__NoteCutRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__NoteCutRpc(GlobalNamespace__GameplayRpcManager__NoteCutRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__NoteCutRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__NoteCutRpc(GlobalNamespace__GameplayRpcManager__NoteCutRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__NoteCutRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::NoteCutInfoNetSerializable>(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__NoteCutRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__NoteCutRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__NoteCutRpc& operator=(GlobalNamespace__GameplayRpcManager__NoteCutRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__NoteCutRpc& operator=(GlobalNamespace__GameplayRpcManager__NoteCutRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__NoteCutRpc() ;

/// @brief Method .ctor addr 0xdbd8a8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NoteMissedRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12896), inst: 4770 }), TypeDefinitionIndex(TypeDefinitionIndex(12896)), TypeDefinitionIndex(TypeDefinitionIndex(15136))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12714))
// CS Name: GameplayRpcManager::NoteMissedRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__NoteMissedRpc : public GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::NoteMissInfoNetSerializable> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__GameplayRpcManager__NoteMissedRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__NoteMissedRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__NoteMissedRpc(GlobalNamespace__GameplayRpcManager__NoteMissedRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__NoteMissedRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__NoteMissedRpc(GlobalNamespace__GameplayRpcManager__NoteMissedRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__NoteMissedRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall_2<float_t,GlobalNamespace::NoteMissInfoNetSerializable>(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__NoteMissedRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__NoteMissedRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__NoteMissedRpc& operator=(GlobalNamespace__GameplayRpcManager__NoteMissedRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__NoteMissedRpc& operator=(GlobalNamespace__GameplayRpcManager__NoteMissedRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__NoteMissedRpc() ;

/// @brief Method .ctor addr 0xdbd8f0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelFinishedRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12895)), TypeDefinitionIndex(TypeDefinitionIndex(12838)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12895), inst: 342 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12715))
// CS Name: GameplayRpcManager::LevelFinishedRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__LevelFinishedRpc : public GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::MultiplayerLevelCompletionResults> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__GameplayRpcManager__LevelFinishedRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__LevelFinishedRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__LevelFinishedRpc(GlobalNamespace__GameplayRpcManager__LevelFinishedRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__LevelFinishedRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__LevelFinishedRpc(GlobalNamespace__GameplayRpcManager__LevelFinishedRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__LevelFinishedRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::MultiplayerLevelCompletionResults>(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__LevelFinishedRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__LevelFinishedRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__LevelFinishedRpc& operator=(GlobalNamespace__GameplayRpcManager__LevelFinishedRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__LevelFinishedRpc& operator=(GlobalNamespace__GameplayRpcManager__LevelFinishedRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__LevelFinishedRpc() ;

/// @brief Method .ctor addr 0xdbd938 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ReturnToMenuRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12894))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12716))
// CS Name: GameplayRpcManager::ReturnToMenuRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc(GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc(GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc& operator=(GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc& operator=(GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc() ;

/// @brief Method .ctor addr 0xdbd980 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RequestReturnToMenuRpc
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12894))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12717))
// CS Name: GameplayRpcManager::RequestReturnToMenuRpc
class CORDL_TYPE GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc : public GlobalNamespace::RemoteProcedureCall {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc(GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc(GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc(void* ptr) noexcept : GlobalNamespace::RemoteProcedureCall(ptr) {
}


  constexpr GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc& operator=(GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc& operator=(GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc() ;

/// @brief Method .ctor addr 0xdbd988 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayRpcManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12718))
// CS Name: GameplayRpcManager
class CORDL_TYPE GameplayRpcManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using RequestReturnToMenuRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc;

using ReturnToMenuRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc;

using LevelFinishedRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__LevelFinishedRpc;

using NoteMissedRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteMissedRpc;

using NoteCutRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteCutRpc;

using SliderSpawnedRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc;

using ObstacleSpawnedRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc;

using NoteSpawnedRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc;

using SetSongStartTimeRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc;

using GetGameplaySongReadyRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc;

using SetGameplaySongReadyRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc;

using SetPlayerDidConnectLateRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc;

using GetGameplaySceneReadyRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc;

using SetGameplaySceneReadyRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc;

using SetGameplaySceneSyncFinishedRpc = GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc;

using RpcType = GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IGameplayRpcManager
constexpr operator  GlobalNamespace::IGameplayRpcManager() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~GameplayRpcManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager", modifiers: " const&", def_value: None }]
constexpr GameplayRpcManager(GameplayRpcManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayRpcManager", modifiers: "&&", def_value: None }]
constexpr GameplayRpcManager(GameplayRpcManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayRpcManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GameplayRpcManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayRpcManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayRpcManager& operator=(GameplayRpcManager&& o) noexcept = default;
  constexpr GameplayRpcManager& operator=(GameplayRpcManager const& o) noexcept = default;
                


// Fields

/// @brief Field kGameplayState offset 0
static constexpr ::ConstString  kGameplayState{u"in_gameplay"};

 GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;

 GlobalNamespace::RpcHandler_1<GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType> __declspec(property(get=__get__rpcHandler, put=__set__rpcHandler))  _rpcHandler;

constexpr void __set__rpcHandler(GlobalNamespace::RpcHandler_1<GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType> value) ;

constexpr GlobalNamespace::RpcHandler_1<GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType> __get__rpcHandler() const;

 System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> __declspec(property(get=__get_setGameplaySceneSyncFinishedEvent, put=__set_setGameplaySceneSyncFinishedEvent))  setGameplaySceneSyncFinishedEvent;

constexpr void __set_setGameplaySceneSyncFinishedEvent(System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

constexpr System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> __get_setGameplaySceneSyncFinishedEvent() const;

 System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> __declspec(property(get=__get_setGameplaySceneReadyEvent, put=__set_setGameplaySceneReadyEvent))  setGameplaySceneReadyEvent;

constexpr void __set_setGameplaySceneReadyEvent(System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> value) ;

constexpr System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> __get_setGameplaySceneReadyEvent() const;

 System::Action_1<::StringW> __declspec(property(get=__get_getGameplaySceneReadyEvent, put=__set_getGameplaySceneReadyEvent))  getGameplaySceneReadyEvent;

constexpr void __set_getGameplaySceneReadyEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_getGameplaySceneReadyEvent() const;

 System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> __declspec(property(get=__get_setPlayerDidConnectLateEvent, put=__set_setPlayerDidConnectLateEvent))  setPlayerDidConnectLateEvent;

constexpr void __set_setPlayerDidConnectLateEvent(System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

constexpr System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> __get_setPlayerDidConnectLateEvent() const;

 System::Action_1<::StringW> __declspec(property(get=__get_setGameplaySongReadyEvent, put=__set_setGameplaySongReadyEvent))  setGameplaySongReadyEvent;

constexpr void __set_setGameplaySongReadyEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_setGameplaySongReadyEvent() const;

 System::Action_1<::StringW> __declspec(property(get=__get_getGameplaySongReadyEvent, put=__set_getGameplaySongReadyEvent))  getGameplaySongReadyEvent;

constexpr void __set_getGameplaySongReadyEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_getGameplaySongReadyEvent() const;

 System::Action_2<::StringW,float_t> __declspec(property(get=__get_setSongStartTimeEvent, put=__set_setSongStartTimeEvent))  setSongStartTimeEvent;

constexpr void __set_setSongStartTimeEvent(System::Action_2<::StringW,float_t> value) ;

constexpr System::Action_2<::StringW,float_t> __get_setSongStartTimeEvent() const;

 System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable> __declspec(property(get=__get_noteWasSpawnedEvent, put=__set_noteWasSpawnedEvent))  noteWasSpawnedEvent;

constexpr void __set_noteWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

constexpr System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable> __get_noteWasSpawnedEvent() const;

 System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable> __declspec(property(get=__get_obstacleWasSpawnedEvent, put=__set_obstacleWasSpawnedEvent))  obstacleWasSpawnedEvent;

constexpr void __set_obstacleWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

constexpr System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable> __get_obstacleWasSpawnedEvent() const;

 System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable> __declspec(property(get=__get_sliderWasSpawnedEvent, put=__set_sliderWasSpawnedEvent))  sliderWasSpawnedEvent;

constexpr void __set_sliderWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

constexpr System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable> __get_sliderWasSpawnedEvent() const;

 System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable> __declspec(property(get=__get_noteWasCutEvent, put=__set_noteWasCutEvent))  noteWasCutEvent;

constexpr void __set_noteWasCutEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable> value) ;

constexpr System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable> __get_noteWasCutEvent() const;

 System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable> __declspec(property(get=__get_noteWasMissedEvent, put=__set_noteWasMissedEvent))  noteWasMissedEvent;

constexpr void __set_noteWasMissedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable> value) ;

constexpr System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable> __get_noteWasMissedEvent() const;

 System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> __declspec(property(get=__get_levelFinishedEvent, put=__set_levelFinishedEvent))  levelFinishedEvent;

constexpr void __set_levelFinishedEvent(System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

constexpr System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> __get_levelFinishedEvent() const;

 System::Action_1<::StringW> __declspec(property(get=__get_returnToMenuEvent, put=__set_returnToMenuEvent))  returnToMenuEvent;

constexpr void __set_returnToMenuEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_returnToMenuEvent() const;

 System::Action_1<::StringW> __declspec(property(get=__get_requestReturnToMenuEvent, put=__set_requestReturnToMenuEvent))  requestReturnToMenuEvent;

constexpr void __set_requestReturnToMenuEvent(System::Action_1<::StringW> value) ;

constexpr System::Action_1<::StringW> __get_requestReturnToMenuEvent() const;


// Properties

 bool __declspec(property(get=get_enabled, put=set_enabled))  enabled;


// Methods

/// @brief Method get_enabled addr 0xdbb1a0 size 0xc0 virtual true final true
 bool get_enabled() ;

/// @brief Method set_enabled addr 0xdbb260 size 0xc8 virtual true final true
 void set_enabled(bool value) ;

// Ctor Parameters [CppParam { name: "multiplayerSessionManager", ty: "GlobalNamespace::IMultiplayerSessionManager", modifiers: "", def_value: None }]
explicit GameplayRpcManager(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method .ctor addr 0xdbb328 size 0x750 virtual false final false
 void _ctor(GlobalNamespace::IMultiplayerSessionManager multiplayerSessionManager) ;

/// @brief Method Dispose addr 0xdbba78 size 0x5c virtual true final true
 void Dispose() ;

/// @brief Method add_setGameplaySceneSyncFinishedEvent addr 0xdbbad4 size 0xb0 virtual true final true
 void add_setGameplaySceneSyncFinishedEvent(System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

/// @brief Method remove_setGameplaySceneSyncFinishedEvent addr 0xdbbb84 size 0xb0 virtual true final true
 void remove_setGameplaySceneSyncFinishedEvent(System::Action_3<::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

/// @brief Method SetGameplaySceneSyncFinished addr 0xdbbc34 size 0x68 virtual true final true
 void SetGameplaySceneSyncFinished(GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, ::StringW sessionGameId) ;

/// @brief Method InvokeSetGameplaySceneSyncFinishCallback addr 0xdbbc9c size 0x1c virtual false final false
 void InvokeSetGameplaySceneSyncFinishCallback(::StringW userId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStart, ::StringW sessionGameId) ;

/// @brief Method add_setGameplaySceneReadyEvent addr 0xdbbcb8 size 0xb0 virtual true final true
 void add_setGameplaySceneReadyEvent(System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> value) ;

/// @brief Method remove_setGameplaySceneReadyEvent addr 0xdbbd68 size 0xb0 virtual true final true
 void remove_setGameplaySceneReadyEvent(System::Action_2<::StringW,GlobalNamespace::PlayerSpecificSettingsNetSerializable> value) ;

/// @brief Method SetGameplaySceneReady addr 0xdbbe18 size 0x58 virtual true final true
 void SetGameplaySceneReady(GlobalNamespace::PlayerSpecificSettingsNetSerializable playerSpecificSettings) ;

/// @brief Method InvokeSetGameplaySceneReadyCallback addr 0xdbbe70 size 0x1c virtual false final false
 void InvokeSetGameplaySceneReadyCallback(::StringW userId, GlobalNamespace::PlayerSpecificSettingsNetSerializable playerSpecificSettingsNetSerializable) ;

/// @brief Method add_getGameplaySceneReadyEvent addr 0xdbbe8c size 0xb0 virtual true final true
 void add_getGameplaySceneReadyEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_getGameplaySceneReadyEvent addr 0xdbbf3c size 0xb0 virtual true final true
 void remove_getGameplaySceneReadyEvent(System::Action_1<::StringW> value) ;

/// @brief Method GetGameplaySceneReady addr 0xdbbfec size 0x50 virtual true final true
 void GetGameplaySceneReady() ;

/// @brief Method InvokeGetGameplaySceneReadyCallback addr 0xdbc03c size 0x1c virtual false final false
 void InvokeGetGameplaySceneReadyCallback(::StringW userId) ;

/// @brief Method add_setPlayerDidConnectLateEvent addr 0xdbc058 size 0xb0 virtual true final true
 void add_setPlayerDidConnectLateEvent(System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

/// @brief Method remove_setPlayerDidConnectLateEvent addr 0xdbc108 size 0xb0 virtual true final true
 void remove_setPlayerDidConnectLateEvent(System::Action_4<::StringW,::StringW,GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable,::StringW> value) ;

/// @brief Method SetPlayerDidConnectLate addr 0xdbc1b8 size 0x70 virtual true final true
 void SetPlayerDidConnectLate(::StringW usedId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, ::StringW sessionGameId) ;

/// @brief Method InvokeSetPlayerDidConnectLate addr 0xdbc228 size 0x1c virtual false final false
 void InvokeSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId, GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable playersAtGameStartNetSerializable, ::StringW sessionGameId) ;

/// @brief Method add_setGameplaySongReadyEvent addr 0xdbc244 size 0xb0 virtual true final true
 void add_setGameplaySongReadyEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_setGameplaySongReadyEvent addr 0xdbc2f4 size 0xb0 virtual true final true
 void remove_setGameplaySongReadyEvent(System::Action_1<::StringW> value) ;

/// @brief Method SetGameplaySongReady addr 0xdbc3a4 size 0x50 virtual true final true
 void SetGameplaySongReady() ;

/// @brief Method InvokeSetGameplaySongReadyCallback addr 0xdbc3f4 size 0x1c virtual false final false
 void InvokeSetGameplaySongReadyCallback(::StringW userId) ;

/// @brief Method add_getGameplaySongReadyEvent addr 0xdbc410 size 0xb0 virtual true final true
 void add_getGameplaySongReadyEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_getGameplaySongReadyEvent addr 0xdbc4c0 size 0xb0 virtual true final true
 void remove_getGameplaySongReadyEvent(System::Action_1<::StringW> value) ;

/// @brief Method GetGameplaySongReady addr 0xdbc570 size 0x50 virtual true final true
 void GetGameplaySongReady() ;

/// @brief Method InvokeGetGameplayLevelReadyCallback addr 0xdbc5c0 size 0x1c virtual false final false
 void InvokeGetGameplayLevelReadyCallback(::StringW userId) ;

/// @brief Method add_setSongStartTimeEvent addr 0xdbc5dc size 0xb0 virtual true final true
 void add_setSongStartTimeEvent(System::Action_2<::StringW,float_t> value) ;

/// @brief Method remove_setSongStartTimeEvent addr 0xdbc68c size 0xb0 virtual true final true
 void remove_setSongStartTimeEvent(System::Action_2<::StringW,float_t> value) ;

/// @brief Method SetSongStartTime addr 0xdbc73c size 0x60 virtual true final true
 void SetSongStartTime(float_t startTime) ;

/// @brief Method InvokeSetSongStartTimeCallback addr 0xdbc79c size 0x1c virtual false final false
 void InvokeSetSongStartTimeCallback(::StringW userId, float_t startTime) ;

/// @brief Method add_noteWasSpawnedEvent addr 0xdbc7b8 size 0xb0 virtual true final true
 void add_noteWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

/// @brief Method remove_noteWasSpawnedEvent addr 0xdbc868 size 0xb0 virtual true final true
 void remove_noteWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteSpawnInfoNetSerializable> value) ;

/// @brief Method NoteSpawned addr 0xdbc918 size 0x68 virtual true final true
 void NoteSpawned(float_t songTime, GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfoNetSerializable) ;

/// @brief Method InvokeNoteWasSpawnedCallback addr 0xdbc980 size 0x1c virtual false final false
 void InvokeNoteWasSpawnedCallback(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteSpawnInfoNetSerializable noteSpawnInfo) ;

/// @brief Method add_obstacleWasSpawnedEvent addr 0xdbc99c size 0xb0 virtual true final true
 void add_obstacleWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

/// @brief Method remove_obstacleWasSpawnedEvent addr 0xdbca4c size 0xb0 virtual true final true
 void remove_obstacleWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::ObstacleSpawnInfoNetSerializable> value) ;

/// @brief Method ObstacleSpawned addr 0xdbcafc size 0x68 virtual true final true
 void ObstacleSpawned(float_t songTime, GlobalNamespace::ObstacleSpawnInfoNetSerializable obstacleSpawnInfoNetSerializable) ;

/// @brief Method InvokeObstacleWasSpawnedCallback addr 0xdbcb64 size 0x1c virtual false final false
 void InvokeObstacleWasSpawnedCallback(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::ObstacleSpawnInfoNetSerializable obstacleSpawnInfo) ;

/// @brief Method add_sliderWasSpawnedEvent addr 0xdbcb80 size 0xb0 virtual true final true
 void add_sliderWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

/// @brief Method remove_sliderWasSpawnedEvent addr 0xdbcc30 size 0xb0 virtual true final true
 void remove_sliderWasSpawnedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::SliderSpawnInfoNetSerializable> value) ;

/// @brief Method SliderSpawned addr 0xdbcce0 size 0x68 virtual true final true
 void SliderSpawned(float_t songTime, GlobalNamespace::SliderSpawnInfoNetSerializable sliderSpawnInfoNetSerializable) ;

/// @brief Method InvokeSliderWasSpawnedCallback addr 0xdbcd48 size 0x1c virtual false final false
 void InvokeSliderWasSpawnedCallback(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::SliderSpawnInfoNetSerializable sliderSpawnInfo) ;

/// @brief Method add_noteWasCutEvent addr 0xdbcd64 size 0xb0 virtual true final true
 void add_noteWasCutEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable> value) ;

/// @brief Method remove_noteWasCutEvent addr 0xdbce14 size 0xb0 virtual true final true
 void remove_noteWasCutEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteCutInfoNetSerializable> value) ;

/// @brief Method NoteCut addr 0xdbcec4 size 0x68 virtual true final true
 void NoteCut(float_t songTime, GlobalNamespace::NoteCutInfoNetSerializable noteCutInfoNetSerializable) ;

/// @brief Method InvokeNoteWasCutCallback addr 0xdbcf2c size 0x1c virtual false final false
 void InvokeNoteWasCutCallback(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteCutInfoNetSerializable noteCutInfo) ;

/// @brief Method add_noteWasMissedEvent addr 0xdbcf48 size 0xb0 virtual true final true
 void add_noteWasMissedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable> value) ;

/// @brief Method remove_noteWasMissedEvent addr 0xdbcff8 size 0xb0 virtual true final true
 void remove_noteWasMissedEvent(System::Action_4<::StringW,float_t,float_t,GlobalNamespace::NoteMissInfoNetSerializable> value) ;

/// @brief Method NoteMissed addr 0xdbd0a8 size 0x68 virtual true final true
 void NoteMissed(float_t songTime, GlobalNamespace::NoteMissInfoNetSerializable noteMissInfoNetSerializable) ;

/// @brief Method InvokeNoteWasMissedCallback addr 0xdbd110 size 0x1c virtual false final false
 void InvokeNoteWasMissedCallback(::StringW userId, float_t syncTime, float_t songTime, GlobalNamespace::NoteMissInfoNetSerializable noteMissInfo) ;

/// @brief Method add_levelFinishedEvent addr 0xdbd12c size 0xb0 virtual true final true
 void add_levelFinishedEvent(System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method remove_levelFinishedEvent addr 0xdbd1dc size 0xb0 virtual true final true
 void remove_levelFinishedEvent(System::Action_2<::StringW,GlobalNamespace::MultiplayerLevelCompletionResults> value) ;

/// @brief Method LevelFinished addr 0xdbd28c size 0x58 virtual true final true
 void LevelFinished(GlobalNamespace::MultiplayerLevelCompletionResults results) ;

/// @brief Method InvokeLevelFinishedCallback addr 0xdbd2e4 size 0x1c virtual false final false
 void InvokeLevelFinishedCallback(::StringW userId, GlobalNamespace::MultiplayerLevelCompletionResults results) ;

/// @brief Method add_returnToMenuEvent addr 0xdbd300 size 0xb0 virtual true final true
 void add_returnToMenuEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_returnToMenuEvent addr 0xdbd3b0 size 0xb0 virtual true final true
 void remove_returnToMenuEvent(System::Action_1<::StringW> value) ;

/// @brief Method ReturnToMenu addr 0xdbd460 size 0x50 virtual true final true
 void ReturnToMenu() ;

/// @brief Method InvokeReturnToMenuCallback addr 0xdbd4b0 size 0x1c virtual false final false
 void InvokeReturnToMenuCallback(::StringW userId) ;

/// @brief Method add_requestReturnToMenuEvent addr 0xdbd4cc size 0xb0 virtual true final true
 void add_requestReturnToMenuEvent(System::Action_1<::StringW> value) ;

/// @brief Method remove_requestReturnToMenuEvent addr 0xdbd57c size 0xb0 virtual true final true
 void remove_requestReturnToMenuEvent(System::Action_1<::StringW> value) ;

/// @brief Method RequestReturnToMenu addr 0xdbd62c size 0x50 virtual true final true
 void RequestReturnToMenu() ;

/// @brief Method InvokeRequestReturnToMenuCallback addr 0xdbd67c size 0x1c virtual false final false
 void InvokeRequestReturnToMenuCallback(::StringW userId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__RpcType, "", "GameplayRpcManager/RpcType");
NEED_NO_BOX(GlobalNamespace::GameplayRpcManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayRpcManager, "", "GameplayRpcManager");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySceneReadyRpc, "", "GameplayRpcManager/GetGameplaySceneReadyRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__GetGameplaySongReadyRpc, "", "GameplayRpcManager/GetGameplaySongReadyRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__LevelFinishedRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__LevelFinishedRpc, "", "GameplayRpcManager/LevelFinishedRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteCutRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteCutRpc, "", "GameplayRpcManager/NoteCutRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteMissedRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteMissedRpc, "", "GameplayRpcManager/NoteMissedRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__NoteSpawnedRpc, "", "GameplayRpcManager/NoteSpawnedRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__ObstacleSpawnedRpc, "", "GameplayRpcManager/ObstacleSpawnedRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__RequestReturnToMenuRpc, "", "GameplayRpcManager/RequestReturnToMenuRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__ReturnToMenuRpc, "", "GameplayRpcManager/ReturnToMenuRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneReadyRpc, "", "GameplayRpcManager/SetGameplaySceneReadyRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc, "", "GameplayRpcManager/SetGameplaySceneSyncFinishedRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetGameplaySongReadyRpc, "", "GameplayRpcManager/SetGameplaySongReadyRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetPlayerDidConnectLateRpc, "", "GameplayRpcManager/SetPlayerDidConnectLateRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__SetSongStartTimeRpc, "", "GameplayRpcManager/SetSongStartTimeRpc");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayRpcManager__SliderSpawnedRpc, "", "GameplayRpcManager/SliderSpawnedRpc");
