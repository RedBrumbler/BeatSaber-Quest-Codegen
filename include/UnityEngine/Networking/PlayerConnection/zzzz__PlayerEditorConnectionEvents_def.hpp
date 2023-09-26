#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Networking/PlayerConnection/zzzz__MessageEventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct Guid;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
// Forward declare root types
namespace UnityEngine::Networking::PlayerConnection {
class PlayerEditorConnectionEvents;
}
namespace UnityEngine::Networking::PlayerConnection {
class UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent;
}
namespace UnityEngine::Networking::PlayerConnection {
class UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers;
}
namespace UnityEngine::Networking::PlayerConnection {
class UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0;
}
namespace UnityEngine::Networking::PlayerConnection {
class UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0;
}
// Type: ::MessageEvent
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10420)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10420), inst: 5059 }), TypeDefinitionIndex(TypeDefinitionIndex(10267))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10256))
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::MessageEvent
class CORDL_TYPE UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent : public UnityEngine::Events::UnityEvent_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs>(ptr) {
}


  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent& operator=(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent&& o) noexcept = default;
  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent& operator=(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent() ;

/// @brief Method .ctor addr 0x2ba0798 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
// Type: ::ConnectionChangeEvent
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10420), inst: 92 }), TypeDefinitionIndex(TypeDefinitionIndex(10420))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10257))
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::ConnectionChangeEvent
class CORDL_TYPE UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent : public UnityEngine::Events::UnityEvent_1<int32_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<int32_t>(ptr) {
}


  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent& operator=(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent&& o) noexcept = default;
  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent& operator=(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent() ;

/// @brief Method .ctor addr 0x2ba0a14 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
// Type: ::MessageTypeSubscribers
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10258))
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::MessageTypeSubscribers
class CORDL_TYPE UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers& operator=(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers&& o) noexcept = default;
  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers& operator=(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_messageTypeId, put=__set_m_messageTypeId))  m_messageTypeId;

constexpr void __set_m_messageTypeId(::StringW value) ;

constexpr ::StringW __get_m_messageTypeId() const;

 int32_t __declspec(property(get=__get_subscriberCount, put=__set_subscriberCount))  subscriberCount;

constexpr void __set_subscriberCount(int32_t value) ;

constexpr int32_t __get_subscriberCount() const;

 UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent __declspec(property(get=__get_messageCallback, put=__set_messageCallback))  messageCallback;

constexpr void __set_messageCallback(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent value) ;

constexpr UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent __get_messageCallback() const;


// Properties

 System::Guid __declspec(property(get=get_MessageTypeId, put=set_MessageTypeId))  MessageTypeId;


// Methods

/// @brief Method get_MessageTypeId addr 0x2ba0a5c size 0x2c virtual false final false
 System::Guid get_MessageTypeId() ;

/// @brief Method set_MessageTypeId addr 0x2ba076c size 0x2c virtual false final false
 void set_MessageTypeId(System::Guid value) ;

// Ctor Parameters []
explicit UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers() ;

/// @brief Method .ctor addr 0x2ba0704 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass6_0
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10259))
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::<>c__DisplayClass6_0
class CORDL_TYPE UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0& operator=(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0&& o) noexcept = default;
  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0& operator=(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0 const& o) noexcept = default;
                


// Fields

 System::Guid __declspec(property(get=__get_messageId, put=__set_messageId))  messageId;

constexpr void __set_messageId(System::Guid value) ;

constexpr System::Guid __get_messageId() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0() ;

/// @brief Method .ctor addr 0x2ba050c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InvokeMessageIdSubscribers>b__0 addr 0x2ba0a88 size 0x48 virtual false final false
 bool _InvokeMessageIdSubscribers_b__0(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass7_0
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10260))
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::<>c__DisplayClass7_0
class CORDL_TYPE UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0& operator=(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0&& o) noexcept = default;
  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0& operator=(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 System::Guid __declspec(property(get=__get_messageId, put=__set_messageId))  messageId;

constexpr void __set_messageId(System::Guid value) ;

constexpr System::Guid __get_messageId() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0() ;

/// @brief Method .ctor addr 0x2ba06fc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <AddAndCreate>b__0 addr 0x2ba0ad0 size 0x48 virtual false final false
 bool _AddAndCreate_b__0(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
// Type: ::<>c__DisplayClass8_0
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10261))
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents::<>c__DisplayClass8_0
class CORDL_TYPE UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0& operator=(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0&& o) noexcept = default;
  constexpr UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0& operator=(UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 System::Guid __declspec(property(get=__get_messageId, put=__set_messageId))  messageId;

constexpr void __set_messageId(System::Guid value) ;

constexpr System::Guid __get_messageId() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0x2ba094c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UnregisterManagedCallback>b__0 addr 0x2ba0b18 size 0x48 virtual false final false
 bool _UnregisterManagedCallback_b__0(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
// Type: UnityEngine.Networking.PlayerConnection::PlayerEditorConnectionEvents
namespace UnityEngine::Networking::PlayerConnection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10262))
// CS Name: UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
class CORDL_TYPE PlayerEditorConnectionEvents : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass8_0 = UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0;

using __c__DisplayClass7_0 = UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0;

using __c__DisplayClass6_0 = UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0;

using MessageTypeSubscribers = UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers;

using ConnectionChangeEvent = UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent;

using MessageEvent = UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PlayerEditorConnectionEvents() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents", modifiers: " const&", def_value: None }]
constexpr PlayerEditorConnectionEvents(PlayerEditorConnectionEvents const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlayerEditorConnectionEvents", modifiers: "&&", def_value: None }]
constexpr PlayerEditorConnectionEvents(PlayerEditorConnectionEvents&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlayerEditorConnectionEvents(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlayerEditorConnectionEvents& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlayerEditorConnectionEvents& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlayerEditorConnectionEvents& operator=(PlayerEditorConnectionEvents&& o) noexcept = default;
  constexpr PlayerEditorConnectionEvents& operator=(PlayerEditorConnectionEvents const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers> __declspec(property(get=__get_messageTypeSubscribers, put=__set_messageTypeSubscribers))  messageTypeSubscribers;

constexpr void __set_messageTypeSubscribers(System::Collections::Generic::List_1<UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers> __get_messageTypeSubscribers() const;

 UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent __declspec(property(get=__get_connectionEvent, put=__set_connectionEvent))  connectionEvent;

constexpr void __set_connectionEvent(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent value) ;

constexpr UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent __get_connectionEvent() const;

 UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent __declspec(property(get=__get_disconnectionEvent, put=__set_disconnectionEvent))  disconnectionEvent;

constexpr void __set_disconnectionEvent(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent value) ;

constexpr UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent __get_disconnectionEvent() const;


// Methods

/// @brief Method InvokeMessageIdSubscribers addr 0x2ba0068 size 0x4a4 virtual false final false
 void InvokeMessageIdSubscribers(System::Guid messageId, ::ArrayW<uint8_t> data, int32_t playerId) ;

/// @brief Method AddAndCreate addr 0x2ba051c size 0x1e0 virtual false final false
 UnityEngine::Events::UnityEvent_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs> AddAndCreate(System::Guid messageId) ;

/// @brief Method UnregisterManagedCallback addr 0x2ba07e0 size 0x16c virtual false final false
 void UnregisterManagedCallback(System::Guid messageId, UnityEngine::Events::UnityAction_1<UnityEngine::Networking::PlayerConnection::MessageEventArgs> callback) ;

// Ctor Parameters []
explicit PlayerEditorConnectionEvents() ;

/// @brief Method .ctor addr 0x2ba0954 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking::PlayerConnection
NEED_NO_BOX(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::PlayerEditorConnectionEvents, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents");
NEED_NO_BOX(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__ConnectionChangeEvent, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/ConnectionChangeEvent");
NEED_NO_BOX(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageEvent, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/MessageEvent");
NEED_NO_BOX(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents__MessageTypeSubscribers, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/MessageTypeSubscribers");
NEED_NO_BOX(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass6_0, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/<>c__DisplayClass6_0");
NEED_NO_BOX(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass7_0, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/<>c__DisplayClass7_0");
NEED_NO_BOX(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::PlayerConnection::UnityEngine__Networking__PlayerConnection__PlayerEditorConnectionEvents____c__DisplayClass8_0, "UnityEngine.Networking.PlayerConnection", "PlayerEditorConnectionEvents/<>c__DisplayClass8_0");
