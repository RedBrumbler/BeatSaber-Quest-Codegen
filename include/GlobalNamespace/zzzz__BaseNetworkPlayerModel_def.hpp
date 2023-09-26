#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
namespace GlobalNamespace {
class INetworkPlayerModel;
}
namespace GlobalNamespace {
template<typename T>
class IConnectionInitParams_1;
}
namespace GlobalNamespace {
template<typename T>
class INetworkPlayerModelPartyConfig_1;
}
namespace GlobalNamespace {
class ConnectedPlayerManager;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseNetworkPlayerModel;
}
namespace GlobalNamespace {
class GlobalNamespace__BaseNetworkPlayerModel__PartyConfig;
}
namespace GlobalNamespace {
class GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56;
}
namespace GlobalNamespace {
class GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55;
}
// Type: ::PartyConfig
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4534))
// CS Name: BaseNetworkPlayerModel::PartyConfig
class CORDL_TYPE GlobalNamespace__BaseNetworkPlayerModel__PartyConfig : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~GlobalNamespace__BaseNetworkPlayerModel__PartyConfig() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BaseNetworkPlayerModel__PartyConfig", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BaseNetworkPlayerModel__PartyConfig(GlobalNamespace__BaseNetworkPlayerModel__PartyConfig const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BaseNetworkPlayerModel__PartyConfig", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BaseNetworkPlayerModel__PartyConfig(GlobalNamespace__BaseNetworkPlayerModel__PartyConfig&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BaseNetworkPlayerModel__PartyConfig(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BaseNetworkPlayerModel__PartyConfig& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BaseNetworkPlayerModel__PartyConfig& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BaseNetworkPlayerModel__PartyConfig& operator=(GlobalNamespace__BaseNetworkPlayerModel__PartyConfig&& o) noexcept = default;
  constexpr GlobalNamespace__BaseNetworkPlayerModel__PartyConfig& operator=(GlobalNamespace__BaseNetworkPlayerModel__PartyConfig const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_selectionMask, put=__set_selectionMask))  selectionMask;

constexpr void __set_selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get_selectionMask() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_configuration, put=__set_configuration))  configuration;

constexpr void __set_configuration(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get_configuration() const;

 GlobalNamespace::INetworkPlayerModel __declspec(property(get=__get_partyManager, put=__set_partyManager))  partyManager;

constexpr void __set_partyManager(GlobalNamespace::INetworkPlayerModel value) ;

constexpr GlobalNamespace::INetworkPlayerModel __get_partyManager() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BaseNetworkPlayerModel__PartyConfig() ;

/// @brief Method .ctor addr 0x223bb8c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetPartyPlayers>d__55
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4535))
// CS Name: BaseNetworkPlayerModel::<GetPartyPlayers>d__55
class CORDL_TYPE GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>
constexpr operator  System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>
constexpr operator  System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55(GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55(GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55& operator=(GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55&& o) noexcept = default;
  constexpr GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55& operator=(GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 GlobalNamespace::INetworkPlayer __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(GlobalNamespace::INetworkPlayer value) ;

constexpr GlobalNamespace::INetworkPlayer __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;


// Properties

 GlobalNamespace::INetworkPlayer __declspec(property(get=System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current))  System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55(int32_t __1__state) ;

/// @brief Method .ctor addr 0x223b88c size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x223bb94 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x223bb98 size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current addr 0x223bbb0 size 0x8 virtual true final true
 GlobalNamespace::INetworkPlayer System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x223bbb8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x223bbf8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator addr 0x223bc00 size 0x98 virtual true final true
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x223bc98 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetOtherPlayers>d__56
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4536))
// CS Name: BaseNetworkPlayerModel::<GetOtherPlayers>d__56
class CORDL_TYPE GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>
constexpr operator  System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>
constexpr operator  System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56(GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56(GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56& operator=(GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56&& o) noexcept = default;
  constexpr GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56& operator=(GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 GlobalNamespace::INetworkPlayer __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(GlobalNamespace::INetworkPlayer value) ;

constexpr GlobalNamespace::INetworkPlayer __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;


// Properties

 GlobalNamespace::INetworkPlayer __declspec(property(get=System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current))  System_Collections_Generic_IEnumerator_INetworkPlayer__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56(int32_t __1__state) ;

/// @brief Method .ctor addr 0x223b930 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x223bc9c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x223bca0 size 0x18 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<INetworkPlayer>.get_Current addr 0x223bcb8 size 0x8 virtual true final true
 GlobalNamespace::INetworkPlayer System_Collections_Generic_IEnumerator_INetworkPlayer__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x223bcc0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x223bd00 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<INetworkPlayer>.GetEnumerator addr 0x223bd08 size 0x98 virtual true final true
 System::Collections::Generic::IEnumerator_1<GlobalNamespace::INetworkPlayer> System_Collections_Generic_IEnumerable_INetworkPlayer__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x223bda0 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BaseNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12924))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4537))
// CS Name: BaseNetworkPlayerModel
class CORDL_TYPE BaseNetworkPlayerModel : public GlobalNamespace::StandaloneMonobehavior {
public:
// Declarations
using _GetOtherPlayers_d__56 = GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56;

using _GetPartyPlayers_d__55 = GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55;

using PartyConfig = GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig;

/// @brief Convert operator to GlobalNamespace::INetworkPlayerModel
constexpr operator  GlobalNamespace::INetworkPlayerModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~BaseNetworkPlayerModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseNetworkPlayerModel", modifiers: " const&", def_value: None }]
constexpr BaseNetworkPlayerModel(BaseNetworkPlayerModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseNetworkPlayerModel", modifiers: "&&", def_value: None }]
constexpr BaseNetworkPlayerModel(BaseNetworkPlayerModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseNetworkPlayerModel(void* ptr) noexcept : GlobalNamespace::StandaloneMonobehavior(ptr) {
}


  constexpr BaseNetworkPlayerModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseNetworkPlayerModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseNetworkPlayerModel& operator=(BaseNetworkPlayerModel&& o) noexcept = default;
  constexpr BaseNetworkPlayerModel& operator=(BaseNetworkPlayerModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ConnectedPlayerManager __declspec(property(get=__get__connectedPlayerManager, put=__set__connectedPlayerManager))  _connectedPlayerManager;

constexpr void __set__connectedPlayerManager(GlobalNamespace::ConnectedPlayerManager value) ;

constexpr GlobalNamespace::ConnectedPlayerManager __get__connectedPlayerManager() const;

 GlobalNamespace::INetworkPlayerModel __declspec(property(get=__get__partyManager, put=__set__partyManager))  _partyManager;

constexpr void __set__partyManager(GlobalNamespace::INetworkPlayerModel value) ;

constexpr GlobalNamespace::INetworkPlayerModel __get__partyManager() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get__configuration, put=__set__configuration))  _configuration;

constexpr void __set__configuration(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get__configuration() const;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get__selectionMask, put=__set__selectionMask))  _selectionMask;

constexpr void __set__selectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get__selectionMask() const;

 bool __declspec(property(get=__get__discoveryEnabled_k__BackingField, put=__set__discoveryEnabled_k__BackingField))  _discoveryEnabled_k__BackingField;

constexpr void __set__discoveryEnabled_k__BackingField(bool value) ;

constexpr bool __get__discoveryEnabled_k__BackingField() const;

 System::Action_1<GlobalNamespace::INetworkPlayerModel> __declspec(property(get=__get_connectedPlayerManagerCreatedEvent, put=__set_connectedPlayerManagerCreatedEvent))  connectedPlayerManagerCreatedEvent;

constexpr void __set_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

constexpr System::Action_1<GlobalNamespace::INetworkPlayerModel> __get_connectedPlayerManagerCreatedEvent() const;

 System::Action_1<GlobalNamespace::INetworkPlayerModel> __declspec(property(get=__get_connectedPlayerManagerDestroyedEvent, put=__set_connectedPlayerManagerDestroyedEvent))  connectedPlayerManagerDestroyedEvent;

constexpr void __set_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

constexpr System::Action_1<GlobalNamespace::INetworkPlayerModel> __get_connectedPlayerManagerDestroyedEvent() const;


// Properties

 GlobalNamespace::ConnectedPlayerManager __declspec(property(get=get_connectedPlayerManager))  connectedPlayerManager;

 GlobalNamespace::INetworkPlayerModel __declspec(property(get=get_partyManager))  partyManager;

 bool __declspec(property(get=get_isConnectedOrConnecting))  isConnectedOrConnecting;

 bool __declspec(property(get=get_isConnectionOwner))  isConnectionOwner;

 bool __declspec(property(get=get_discoveryEnabled, put=set_discoveryEnabled))  discoveryEnabled;

 bool __declspec(property(get=get_hasNetworkingFailed))  hasNetworkingFailed;

 int32_t __declspec(property(get=get_currentPartySize))  currentPartySize;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=get_configuration))  configuration;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=get_selectionMask))  selectionMask;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=get_partyPlayers))  partyPlayers;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> __declspec(property(get=INetworkPlayerModel_get_otherPlayers))  INetworkPlayerModel_otherPlayers;

 bool __declspec(property(get=get_localPlayerIsPartyOwner))  localPlayerIsPartyOwner;

 bool __declspec(property(get=get_isServer))  isServer;

 bool __declspec(property(get=get_isClient))  isClient;


// Methods

/// @brief Method get_connectedPlayerManager addr 0x223b0f4 size 0x8 virtual true final true
 GlobalNamespace::ConnectedPlayerManager get_connectedPlayerManager() ;

/// @brief Method get_partyManager addr 0x223b0fc size 0x10 virtual false final false
 GlobalNamespace::INetworkPlayerModel get_partyManager() ;

/// @brief Method get_isConnectedOrConnecting addr 0x223b10c size 0x14 virtual false final false
 bool get_isConnectedOrConnecting() ;

/// @brief Method get_isConnectionOwner addr 0x223b120 size 0x14 virtual false final false
 bool get_isConnectionOwner() ;

/// @brief Method get_discoveryEnabled addr 0x223b134 size 0x8 virtual true final false
 bool get_discoveryEnabled() ;

/// @brief Method set_discoveryEnabled addr 0x223b13c size 0xc virtual true final false
 void set_discoveryEnabled(bool value) ;

/// @brief Method get_hasNetworkingFailed addr 0x223b148 size 0x8 virtual true final false
 bool get_hasNetworkingFailed() ;

/// @brief Method get_currentPartySize addr 0x223b150 size 0x8 virtual true final false
 int32_t get_currentPartySize() ;

/// @brief Method get_configuration addr 0x223b158 size 0x14 virtual true final false
 GlobalNamespace::GameplayServerConfiguration get_configuration() ;

/// @brief Method get_selectionMask addr 0x223b16c size 0x14 virtual true final false
 GlobalNamespace::BeatmapLevelSelectionMask get_selectionMask() ;

/// @brief Method add_connectedPlayerManagerCreatedEvent addr 0x223b180 size 0xb0 virtual true final true
 void add_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method remove_connectedPlayerManagerCreatedEvent addr 0x223b230 size 0xb0 virtual true final true
 void remove_connectedPlayerManagerCreatedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method add_connectedPlayerManagerDestroyedEvent addr 0x223b2e0 size 0xb0 virtual true final true
 void add_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method remove_connectedPlayerManagerDestroyedEvent addr 0x223b390 size 0xb0 virtual true final true
 void remove_connectedPlayerManagerDestroyedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method add_partyChangedEvent addr 0x223b440 size 0x4 virtual true final false
 void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method remove_partyChangedEvent addr 0x223b444 size 0x4 virtual true final false
 void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel> value) ;

/// @brief Method add_partySizeChangedEvent addr 0x223b448 size 0x4 virtual true final false
 void add_partySizeChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_partySizeChangedEvent addr 0x223b44c size 0x4 virtual true final false
 void remove_partySizeChangedEvent(System::Action_1<int32_t> value) ;

/// @brief Method add_joinRequestedEvent addr 0x223b450 size 0x4 virtual true final false
 void add_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_joinRequestedEvent addr 0x223b454 size 0x4 virtual true final false
 void remove_joinRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method add_inviteRequestedEvent addr 0x223b458 size 0x4 virtual true final false
 void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method remove_inviteRequestedEvent addr 0x223b45c size 0x4 virtual true final false
 void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer> value) ;

/// @brief Method get_partyPlayers addr 0x223b460 size 0x10 virtual true final true
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> get_partyPlayers() ;

/// @brief Method INetworkPlayerModel.get_otherPlayers addr 0x223b470 size 0x10 virtual true final true
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> INetworkPlayerModel_get_otherPlayers() ;

/// @brief Method get_localPlayerIsPartyOwner addr 0x223b480 size 0x8 virtual true final false
 bool get_localPlayerIsPartyOwner() ;

/// @brief Method get_isServer addr 0x223b488 size 0x3c virtual false final false
 bool get_isServer() ;

/// @brief Method get_isClient addr 0x223b4c4 size 0x4c virtual false final false
 bool get_isClient() ;

/// @brief Method OnDestroy addr 0x223b510 size 0x4 virtual true final false
 void OnDestroy() ;

/// @brief Method Update addr 0x223b7ec size 0x30 virtual true final false
 void Update() ;

/// @brief Method GetPartyPlayers addr 0x223b81c size 0x70 virtual true final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GetPartyPlayers() ;

/// @brief Method GetOtherPlayers addr 0x223b8c0 size 0x70 virtual true final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer> GetOtherPlayers() ;

/// @brief Method ConnectionFailed addr 0x223b964 size 0x10 virtual true final false
 void ConnectionFailed(GlobalNamespace::ConnectionFailedReason reason) ;

/// @brief Method PlayerConnected addr 0x223b974 size 0x4 virtual true final false
 void PlayerConnected(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method PlayerDisconnected addr 0x223b978 size 0x4 virtual true final false
 void PlayerDisconnected(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method PlayerStateChanged addr 0x223b97c size 0x4 virtual true final false
 void PlayerStateChanged(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method ConnectedPlayerManagerChanged addr 0x223b980 size 0x4 virtual true final false
 void ConnectedPlayerManagerChanged() ;

/// @brief Method PlayerOrderChanged addr 0x223b984 size 0x4 virtual true final false
 void PlayerOrderChanged(GlobalNamespace::IConnectedPlayer player) ;

/// @brief Method PartySizeChanged addr 0x223b988 size 0x4 virtual true final false
 void PartySizeChanged(int32_t currentPartySize) ;

/// @brief Method Connected addr 0x223b98c size 0x4 virtual true final false
 void Connected() ;

/// @brief Method Disconnected addr 0x223b990 size 0x10 virtual true final false
 void Disconnected(GlobalNamespace::DisconnectedReason disconnectedReason) ;

/// @brief Method CreatePartyConnection addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 bool CreatePartyConnection(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T> createConfig) ;

/// @brief Method DestroyPartyConnection addr 0x223b9a0 size 0x114 virtual true final false
 void DestroyPartyConnection() ;

/// @brief Method DestroyConnectedPlayerManager addr 0x223b514 size 0x2d8 virtual false final false
 void DestroyConnectedPlayerManager() ;

/// @brief Method CreateConnectedPlayerManager addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool CreateConnectedPlayerManager(GlobalNamespace::IConnectionInitParams_1<T> initParams) ;

/// @brief Method Log addr 0x223bab4 size 0xd0 virtual false final false
 void Log(::StringW message) ;

// Ctor Parameters []
explicit BaseNetworkPlayerModel() ;

/// @brief Method .ctor addr 0x223bb84 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BaseNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseNetworkPlayerModel, "", "BaseNetworkPlayerModel");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel__PartyConfig, "", "BaseNetworkPlayerModel/PartyConfig");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetOtherPlayers_d__56, "", "BaseNetworkPlayerModel/<GetOtherPlayers>d__56");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BaseNetworkPlayerModel___GetPartyPlayers_d__55, "", "BaseNetworkPlayerModel/<GetPartyPlayers>d__55");
