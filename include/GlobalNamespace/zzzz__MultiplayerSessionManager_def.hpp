#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
template<typename TData>
class INetworkPacketSubSerializer_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
template<typename TType,typename TData>
class NetworkPacketSerializer_2;
}
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct UpdateConnectionStateReason;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerSessionManager__ConnectionState;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerSessionManager__MessageType;
}
namespace GlobalNamespace {
struct GlobalNamespace__MultiplayerSessionManager__SessionType;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerSessionManager____c;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0;
}
namespace GlobalNamespace {
class MultiplayerSessionManager;
}
// Type: ::MessageType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12841))
// CS Name: MultiplayerSessionManager::MessageType
struct CORDL_TYPE GlobalNamespace__MultiplayerSessionManager__MessageType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplayerSessionManager__MessageType(uint8_t value__) noexcept;


                    constexpr GlobalNamespace__MultiplayerSessionManager__MessageType(GlobalNamespace__MultiplayerSessionManager__MessageType const&) = default;
                    constexpr GlobalNamespace__MultiplayerSessionManager__MessageType(GlobalNamespace__MultiplayerSessionManager__MessageType&&) = default;
                    constexpr GlobalNamespace__MultiplayerSessionManager__MessageType& operator=(GlobalNamespace__MultiplayerSessionManager__MessageType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplayerSessionManager__MessageType& operator=(GlobalNamespace__MultiplayerSessionManager__MessageType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerSessionManager__MessageType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MultiplayerSessionManager__MessageType_Unwrapped : uint8_t {
__MenuRpc = 0u,
__GameplayRpc = 1u,
__NodePoseSyncState = 2u,
__ScoreSyncState = 3u,
__NodePoseSyncStateDelta = 4u,
__ScoreSyncStateDelta = 5u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MultiplayerSessionManager__MessageType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MultiplayerSessionManager__MessageType_Unwrapped>(__instance);
}


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field MenuRpc offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType const MenuRpc;

/// @brief Field GameplayRpc offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType const GameplayRpc;

/// @brief Field NodePoseSyncState offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType const NodePoseSyncState;

/// @brief Field ScoreSyncState offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType const ScoreSyncState;

/// @brief Field NodePoseSyncStateDelta offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType const NodePoseSyncStateDelta;

/// @brief Field ScoreSyncStateDelta offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType const ScoreSyncStateDelta;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SessionType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12842))
// CS Name: MultiplayerSessionManager::SessionType
struct CORDL_TYPE GlobalNamespace__MultiplayerSessionManager__SessionType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplayerSessionManager__SessionType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MultiplayerSessionManager__SessionType(GlobalNamespace__MultiplayerSessionManager__SessionType const&) = default;
                    constexpr GlobalNamespace__MultiplayerSessionManager__SessionType(GlobalNamespace__MultiplayerSessionManager__SessionType&&) = default;
                    constexpr GlobalNamespace__MultiplayerSessionManager__SessionType& operator=(GlobalNamespace__MultiplayerSessionManager__SessionType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplayerSessionManager__SessionType& operator=(GlobalNamespace__MultiplayerSessionManager__SessionType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerSessionManager__SessionType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MultiplayerSessionManager__SessionType_Unwrapped : int32_t {
__Player = 0,
__Spectator = 1,
__DedicatedServer = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MultiplayerSessionManager__SessionType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MultiplayerSessionManager__SessionType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Player offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType const Player;

/// @brief Field Spectator offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType const Spectator;

/// @brief Field DedicatedServer offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType const DedicatedServer;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ConnectionState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12843))
// CS Name: MultiplayerSessionManager::ConnectionState
struct CORDL_TYPE GlobalNamespace__MultiplayerSessionManager__ConnectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MultiplayerSessionManager__ConnectionState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MultiplayerSessionManager__ConnectionState(GlobalNamespace__MultiplayerSessionManager__ConnectionState const&) = default;
                    constexpr GlobalNamespace__MultiplayerSessionManager__ConnectionState(GlobalNamespace__MultiplayerSessionManager__ConnectionState&&) = default;
                    constexpr GlobalNamespace__MultiplayerSessionManager__ConnectionState& operator=(GlobalNamespace__MultiplayerSessionManager__ConnectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MultiplayerSessionManager__ConnectionState& operator=(GlobalNamespace__MultiplayerSessionManager__ConnectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerSessionManager__ConnectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MultiplayerSessionManager__ConnectionState_Unwrapped : int32_t {
__Disconnected = 0,
__Connecting = 1,
__Connected = 2,
__Disconnecting = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MultiplayerSessionManager__ConnectionState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MultiplayerSessionManager__ConnectionState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Disconnected offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState const Disconnected;

/// @brief Field Connecting offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState const Connecting;

/// @brief Field Connected offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState const Connected;

/// @brief Field Disconnecting offset 0
static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState const Disconnecting;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass96_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12844))
// CS Name: MultiplayerSessionManager::<>c__DisplayClass96_0
class CORDL_TYPE GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0(GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0(GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0& operator=(GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0& operator=(GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0() ;

/// @brief Method .ctor addr 0xdcf5a4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetPlayerByUserId>b__0 addr 0xdcf998 size 0xb0 virtual false final false
 bool _GetPlayerByUserId_b__0(GlobalNamespace::IConnectedPlayer player) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12845))
// CS Name: MultiplayerSessionManager::<>c
class CORDL_TYPE GlobalNamespace__MultiplayerSessionManager____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__MultiplayerSessionManager____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerSessionManager____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerSessionManager____c(GlobalNamespace__MultiplayerSessionManager____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerSessionManager____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerSessionManager____c(GlobalNamespace__MultiplayerSessionManager____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerSessionManager____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerSessionManager____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerSessionManager____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerSessionManager____c& operator=(GlobalNamespace__MultiplayerSessionManager____c&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerSessionManager____c& operator=(GlobalNamespace__MultiplayerSessionManager____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c value) ;

static GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c __get___9() ;

static System::Func_2<GlobalNamespace::IConnectedPlayer,int32_t> __declspec(property(get=__get___9__102_0, put=__set___9__102_0))  __9__102_0;

static void __set___9__102_0(System::Func_2<GlobalNamespace::IConnectedPlayer,int32_t> value) ;

static System::Func_2<GlobalNamespace::IConnectedPlayer,int32_t> __get___9__102_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MultiplayerSessionManager____c() ;

/// @brief Method .ctor addr 0xdcfaac size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <TryUpdateConnectedPlayer>b__102_0 addr 0xdcfab4 size 0xa0 virtual false final false
 int32_t _TryUpdateConnectedPlayer_b__102_0(GlobalNamespace::IConnectedPlayer p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerSessionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12924))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12846))
// CS Name: MultiplayerSessionManager
class CORDL_TYPE MultiplayerSessionManager : public GlobalNamespace::StandaloneMonobehavior {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c;

using __c__DisplayClass96_0 = GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0;

using ConnectionState = GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState;

using SessionType = GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType;

using MessageType = GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType;

/// @brief Convert operator to GlobalNamespace::IMultiplayerSessionManager
constexpr operator  GlobalNamespace::IMultiplayerSessionManager() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb8};

virtual ~MultiplayerSessionManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager", modifiers: " const&", def_value: None }]
constexpr MultiplayerSessionManager(MultiplayerSessionManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerSessionManager", modifiers: "&&", def_value: None }]
constexpr MultiplayerSessionManager(MultiplayerSessionManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerSessionManager(void* ptr) noexcept : GlobalNamespace::StandaloneMonobehavior(ptr) {
}


  constexpr MultiplayerSessionManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerSessionManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerSessionManager& operator=(MultiplayerSessionManager&& o) noexcept = default;
  constexpr MultiplayerSessionManager& operator=(MultiplayerSessionManager const& o) noexcept = default;
                


// Fields

/// @brief Field kMultiplayerSessionState offset 0
static constexpr ::ConstString  kMultiplayerSessionState{u"multiplayer_session"};

 GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType,GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get__packetSerializer, put=__set__packetSerializer))  _packetSerializer;

constexpr void __set__packetSerializer(GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType,GlobalNamespace::IConnectedPlayer> value) ;

constexpr GlobalNamespace::NetworkPacketSerializer_2<GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType,GlobalNamespace::IConnectedPlayer> __get__packetSerializer() const;

 System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get__connectedPlayers, put=__set__connectedPlayers))  _connectedPlayers;

constexpr void __set__connectedPlayers(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer> __get__connectedPlayers() const;

 System::Collections::Generic::HashSet_1<::StringW> __declspec(property(get=__get__localPlayerState, put=__set__localPlayerState))  _localPlayerState;

constexpr void __set__localPlayerState(System::Collections::Generic::HashSet_1<::StringW> value) ;

constexpr System::Collections::Generic::HashSet_1<::StringW> __get__localPlayerState() const;

 int32_t __declspec(property(get=__get__maxPlayerCount, put=__set__maxPlayerCount))  _maxPlayerCount;

constexpr void __set__maxPlayerCount(int32_t value) ;

constexpr int32_t __get__maxPlayerCount() const;

 GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState __declspec(property(get=__get__connectionState, put=__set__connectionState))  _connectionState;

constexpr void __set__connectionState(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState __get__connectionState() const;

 System::Collections::Generic::Queue_1<int32_t> __declspec(property(get=__get__freeSortIndices, put=__set__freeSortIndices))  _freeSortIndices;

constexpr void __set__freeSortIndices(System::Collections::Generic::Queue_1<int32_t> value) ;

constexpr System::Collections::Generic::Queue_1<int32_t> __get__freeSortIndices() const;

 System::Action __declspec(property(get=__get_connectedEvent, put=__set_connectedEvent))  connectedEvent;

constexpr void __set_connectedEvent(System::Action value) ;

constexpr System::Action __get_connectedEvent() const;

 System::Action_1<GlobalNamespace::ConnectionFailedReason> __declspec(property(get=__get_connectionFailedEvent, put=__set_connectionFailedEvent))  connectionFailedEvent;

constexpr void __set_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

constexpr System::Action_1<GlobalNamespace::ConnectionFailedReason> __get_connectionFailedEvent() const;

 System::Action_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_playerConnectedEvent, put=__set_playerConnectedEvent))  playerConnectedEvent;

constexpr void __set_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> __get_playerConnectedEvent() const;

 System::Action_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_playerDisconnectedEvent, put=__set_playerDisconnectedEvent))  playerDisconnectedEvent;

constexpr void __set_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> __get_playerDisconnectedEvent() const;

 System::Action_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_playerAvatarChangedEvent, put=__set_playerAvatarChangedEvent))  playerAvatarChangedEvent;

constexpr void __set_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> __get_playerAvatarChangedEvent() const;

 System::Action_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_playerStateChangedEvent, put=__set_playerStateChangedEvent))  playerStateChangedEvent;

constexpr void __set_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> __get_playerStateChangedEvent() const;

 System::Action_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=__get_connectionOwnerStateChangedEvent, put=__set_connectionOwnerStateChangedEvent))  connectionOwnerStateChangedEvent;

constexpr void __set_connectionOwnerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

constexpr System::Action_1<GlobalNamespace::IConnectedPlayer> __get_connectionOwnerStateChangedEvent() const;

 System::Action_1<GlobalNamespace::DisconnectedReason> __declspec(property(get=__get_disconnectedEvent, put=__set_disconnectedEvent))  disconnectedEvent;

constexpr void __set_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

constexpr System::Action_1<GlobalNamespace::DisconnectedReason> __get_disconnectedEvent() const;

 System::Action __declspec(property(get=__get_pollUpdateEvent, put=__set_pollUpdateEvent))  pollUpdateEvent;

constexpr void __set_pollUpdateEvent(System::Action value) ;

constexpr System::Action __get_pollUpdateEvent() const;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=__get__connectionOwner_k__BackingField, put=__set__connectionOwner_k__BackingField))  _connectionOwner_k__BackingField;

constexpr void __set__connectionOwner_k__BackingField(GlobalNamespace::IConnectedPlayer value) ;

constexpr GlobalNamespace::IConnectedPlayer __get__connectionOwner_k__BackingField() const;

 GlobalNamespace::ConnectedPlayerManager __declspec(property(get=__get__connectedPlayerManager, put=__set__connectedPlayerManager))  _connectedPlayerManager;

constexpr void __set__connectedPlayerManager(GlobalNamespace::ConnectedPlayerManager value) ;

constexpr GlobalNamespace::ConnectedPlayerManager __get__connectedPlayerManager() const;


// Properties

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_connectionOwner, put=set_connectionOwner))  connectionOwner;

 bool __declspec(property(get=get_isSpectating))  isSpectating;

 bool __declspec(property(get=get_isConnectingOrConnected))  isConnectingOrConnected;

 bool __declspec(property(get=get_isConnected))  isConnected;

 bool __declspec(property(get=get_isConnecting))  isConnecting;

 bool __declspec(property(get=get_isDisconnecting))  isDisconnecting;

 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> __declspec(property(get=get_connectedPlayers))  connectedPlayers;

 int32_t __declspec(property(get=get_connectedPlayerCount))  connectedPlayerCount;

 float_t __declspec(property(get=get_syncTime))  syncTime;

 bool __declspec(property(get=get_isSyncTimeInitialized))  isSyncTimeInitialized;

 GlobalNamespace::IConnectedPlayer __declspec(property(get=get_localPlayer))  localPlayer;

 GlobalNamespace::ConnectedPlayerManager __declspec(property(get=get_connectedPlayerManager))  connectedPlayerManager;

 int32_t __declspec(property(get=get_maxPlayerCount))  maxPlayerCount;


// Methods

/// @brief Method add_connectedEvent addr 0xdcca88 size 0x9c virtual true final true
 void add_connectedEvent(System::Action value) ;

/// @brief Method remove_connectedEvent addr 0xdccb24 size 0x9c virtual true final true
 void remove_connectedEvent(System::Action value) ;

/// @brief Method add_connectionFailedEvent addr 0xdccbc0 size 0xb0 virtual true final true
 void add_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method remove_connectionFailedEvent addr 0xdccc70 size 0xb0 virtual true final true
 void remove_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason> value) ;

/// @brief Method add_playerConnectedEvent addr 0xdccd20 size 0xb0 virtual true final true
 void add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerConnectedEvent addr 0xdccdd0 size 0xb0 virtual true final true
 void remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerDisconnectedEvent addr 0xdcce80 size 0xb0 virtual true final true
 void add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerDisconnectedEvent addr 0xdccf30 size 0xb0 virtual true final true
 void remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerAvatarChangedEvent addr 0xdccfe0 size 0xb0 virtual true final true
 void add_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerAvatarChangedEvent addr 0xdcd090 size 0xb0 virtual true final true
 void remove_playerAvatarChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_playerStateChangedEvent addr 0xdcd140 size 0xb0 virtual true final true
 void add_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_playerStateChangedEvent addr 0xdcd1f0 size 0xb0 virtual true final true
 void remove_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_connectionOwnerStateChangedEvent addr 0xdcd2a0 size 0xb0 virtual true final true
 void add_connectionOwnerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method remove_connectionOwnerStateChangedEvent addr 0xdcd350 size 0xb0 virtual true final true
 void remove_connectionOwnerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer> value) ;

/// @brief Method add_disconnectedEvent addr 0xdcd400 size 0xb0 virtual true final true
 void add_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method remove_disconnectedEvent addr 0xdcd4b0 size 0xb0 virtual true final true
 void remove_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason> value) ;

/// @brief Method add_pollUpdateEvent addr 0xdcd560 size 0x9c virtual true final true
 void add_pollUpdateEvent(System::Action value) ;

/// @brief Method remove_pollUpdateEvent addr 0xdcd5fc size 0x9c virtual true final true
 void remove_pollUpdateEvent(System::Action value) ;

/// @brief Method get_isConnectionOwner addr 0xdcd698 size 0x18 virtual true final true
 bool get_isConnectionOwner() ;

/// @brief Method get_connectionOwner addr 0xdcd6b0 size 0x8 virtual true final true
 GlobalNamespace::IConnectedPlayer get_connectionOwner() ;

/// @brief Method set_connectionOwner addr 0xdcd6b8 size 0x8 virtual false final false
 void set_connectionOwner(GlobalNamespace::IConnectedPlayer value) ;

/// @brief Method get_isSpectating addr 0xdcd6c0 size 0x118 virtual true final true
 bool get_isSpectating() ;

/// @brief Method get_isConnectingOrConnected addr 0xdcd7d8 size 0x14 virtual true final true
 bool get_isConnectingOrConnected() ;

/// @brief Method get_isConnected addr 0xdcd7fc size 0x10 virtual true final true
 bool get_isConnected() ;

/// @brief Method get_isConnecting addr 0xdcd7ec size 0x10 virtual true final true
 bool get_isConnecting() ;

/// @brief Method get_isDisconnecting addr 0xdcd80c size 0x10 virtual true final true
 bool get_isDisconnecting() ;

/// @brief Method get_connectedPlayers addr 0xdcd81c size 0x8 virtual true final true
 System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer> get_connectedPlayers() ;

/// @brief Method get_connectedPlayerCount addr 0xdcd824 size 0x48 virtual true final true
 int32_t get_connectedPlayerCount() ;

/// @brief Method get_syncTime addr 0xdcd86c size 0x18 virtual true final true
 float_t get_syncTime() ;

/// @brief Method get_isSyncTimeInitialized addr 0xdcd884 size 0x14 virtual true final true
 bool get_isSyncTimeInitialized() ;

/// @brief Method get_localPlayer addr 0xdcd898 size 0x18 virtual true final true
 GlobalNamespace::IConnectedPlayer get_localPlayer() ;

/// @brief Method get_connectedPlayerManager addr 0xdcd8b0 size 0x8 virtual false final false
 GlobalNamespace::ConnectedPlayerManager get_connectedPlayerManager() ;

/// @brief Method get_maxPlayerCount addr 0xdcd8b8 size 0x8 virtual true final true
 int32_t get_maxPlayerCount() ;

/// @brief Method Start addr 0xdcd8c0 size 0x4c virtual true final false
 void Start() ;

/// @brief Method Update addr 0xdcd9c0 size 0x58 virtual true final false
 void Update() ;

/// @brief Method LateUpdate addr 0xdcda20 size 0x14 virtual false final false
 void LateUpdate() ;

/// @brief Method OnDestroy addr 0xdcda34 size 0x24 virtual true final false
 void OnDestroy() ;

/// @brief Method OnApplicationPause addr 0xdce2dc size 0x58 virtual true final false
 void OnApplicationPause(bool pauseStatus) ;

/// @brief Method RegisterSerializer addr 0xdce334 size 0x68 virtual true final true
 void RegisterSerializer(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer> subSerializer) ;

/// @brief Method UnregisterSerializer addr 0xdce39c size 0x68 virtual true final true
 void UnregisterSerializer(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer> subSerializer) ;

/// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 void RegisterCallback(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType serializerType, System::Action_2<T,GlobalNamespace::IConnectedPlayer> callback, System::Func_1<T> constructor) ;

/// @brief Method UnregisterCallback addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 void UnregisterCallback(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType serializerType) ;

/// @brief Method StartSession addr 0xdce404 size 0x5e8 virtual true final true
 void StartSession(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType sessionType, GlobalNamespace::ConnectedPlayerManager connectedPlayerManager) ;

/// @brief Method SetMaxPlayerCount addr 0xdce9ec size 0x8 virtual true final true
 void SetMaxPlayerCount(int32_t maxPlayerCount) ;

/// @brief Method EndSession addr 0xdcde18 size 0x4c4 virtual true final true
 void EndSession() ;

/// @brief Method Disconnect addr 0xdce9f4 size 0x10 virtual true final true
 void Disconnect() ;

/// @brief Method Send addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 void Send(T message) ;

/// @brief Method SendToPlayer addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 void SendToPlayer(T message, GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method SendUnreliable addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 void SendUnreliable(T message) ;

/// @brief Method SendUnreliableEncryptedToPlayer addr 0x0 size 0xffffffffffffffff virtual true final true
template<typename T>
 void SendUnreliableEncryptedToPlayer(T message, GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandleInitialized addr 0xdcea04 size 0x10 virtual false final false
 void HandleInitialized() ;

/// @brief Method HandleConnected addr 0xdcea14 size 0x10 virtual false final false
 void HandleConnected() ;

/// @brief Method HandleDisconnected addr 0xdcea24 size 0x10 virtual false final false
 void HandleDisconnected(GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method HandleConnectionFailed addr 0xdcea34 size 0x10 virtual false final false
 void HandleConnectionFailed(GlobalNamespace::ConnectionFailedReason reason) ;

/// @brief Method HandleSyncTimeInitialized addr 0xdcea44 size 0x10 virtual false final false
 void HandleSyncTimeInitialized() ;

/// @brief Method HandlePlayerConnected addr 0xdcea54 size 0xbc virtual false final false
 void HandlePlayerConnected(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandlePlayerDisconnected addr 0xdcf0dc size 0xbc virtual false final false
 void HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandlePlayerStateChanged addr 0xdcf198 size 0x1a8 virtual false final false
 void HandlePlayerStateChanged(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandlePlayerAvatarChanged addr 0xdcf340 size 0x84 virtual false final false
 void HandlePlayerAvatarChanged(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandlePlayerOrderChanged addr 0xdcf3c4 size 0x3c virtual false final false
 void HandlePlayerOrderChanged(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method HandlePlayerLatencyInitialized addr 0xdcf400 size 0x8 virtual false final false
 void HandlePlayerLatencyInitialized(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method GetPlayerByUserId addr 0xdcf408 size 0x19c virtual true final true
 GlobalNamespace::IConnectedPlayer GetPlayerByUserId(::StringW userId) ;

/// @brief Method GetConnectedPlayer addr 0xdcf5ac size 0x58 virtual true final true
 GlobalNamespace::IConnectedPlayer GetConnectedPlayer(int32_t i) ;

/// @brief Method SetLocalPlayerState addr 0xdcd90c size 0xb4 virtual true final true
 void SetLocalPlayerState(::StringW state, bool hasState) ;

/// @brief Method KickPlayer addr 0xdcf604 size 0x18 virtual true final true
 void KickPlayer(::StringW userId) ;

/// @brief Method LocalPlayerHasState addr 0xdcf61c size 0xe4 virtual true final true
 bool LocalPlayerHasState(::StringW state) ;

/// @brief Method UpdateConnectionState addr 0xdcda58 size 0x3c0 virtual false final false
 void UpdateConnectionState(GlobalNamespace::UpdateConnectionStateReason updateReason, GlobalNamespace::DisconnectedReason disconnectedReason, GlobalNamespace::ConnectionFailedReason connectionFailedReason) ;

/// @brief Method TryUpdateConnectedPlayer addr 0xdceb10 size 0x5cc virtual false final false
 bool TryUpdateConnectedPlayer(GlobalNamespace::IConnectedPlayer player, bool isPlayerConnected) ;

/// @brief Method GetNextAvailableSortIndex addr 0xdcf700 size 0xb4 virtual false final false
 int32_t GetNextAvailableSortIndex() ;

// Ctor Parameters []
explicit MultiplayerSessionManager() ;

/// @brief Method .ctor addr 0xdcf7b4 size 0x144 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__ConnectionState, "", "MultiplayerSessionManager/ConnectionState");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__MessageType, "", "MultiplayerSessionManager/MessageType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager__SessionType, "", "MultiplayerSessionManager/SessionType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c, "", "MultiplayerSessionManager/<>c");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerSessionManager____c__DisplayClass96_0, "", "MultiplayerSessionManager/<>c__DisplayClass96_0");
NEED_NO_BOX(GlobalNamespace::MultiplayerSessionManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerSessionManager, "", "MultiplayerSessionManager");
