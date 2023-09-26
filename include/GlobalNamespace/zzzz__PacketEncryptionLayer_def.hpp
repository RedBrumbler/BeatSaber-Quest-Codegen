#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class GlobalNamespace__EncryptionUtility__IEncryptionState;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace BGNet::Core {
class ITimeProvider;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace System::Net {
class IPEndPoint;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class ExpiringDictionary_2;
}
namespace System::Net {
class IPAddress;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics;
}
namespace GlobalNamespace {
class GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList;
}
namespace GlobalNamespace {
class GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c;
}
namespace GlobalNamespace {
class GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0;
}
namespace GlobalNamespace {
class GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class PacketEncryptionLayer;
}
namespace GlobalNamespace {
struct GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25;
}
namespace GlobalNamespace {
struct GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27;
}
// Type: ::EncryptionStatistics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12866))
// CS Name: PacketEncryptionLayer::EncryptionStatistics
class CORDL_TYPE GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics(GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics(GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics& operator=(GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics&& o) noexcept = default;
  constexpr GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics& operator=(GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get__packetsReceivedPlaintext, put=__set__packetsReceivedPlaintext))  _packetsReceivedPlaintext;

constexpr void __set__packetsReceivedPlaintext(int64_t value) ;

constexpr int64_t __get__packetsReceivedPlaintext() const;

 int64_t __declspec(property(get=__get__packetsReceivedEncrypted, put=__set__packetsReceivedEncrypted))  _packetsReceivedEncrypted;

constexpr void __set__packetsReceivedEncrypted(int64_t value) ;

constexpr int64_t __get__packetsReceivedEncrypted() const;

 int64_t __declspec(property(get=__get__packetsReceivedRejected, put=__set__packetsReceivedRejected))  _packetsReceivedRejected;

constexpr void __set__packetsReceivedRejected(int64_t value) ;

constexpr int64_t __get__packetsReceivedRejected() const;

 int64_t __declspec(property(get=__get__packetsSentPlaintext, put=__set__packetsSentPlaintext))  _packetsSentPlaintext;

constexpr void __set__packetsSentPlaintext(int64_t value) ;

constexpr int64_t __get__packetsSentPlaintext() const;

 int64_t __declspec(property(get=__get__packetsSentEncrypted, put=__set__packetsSentEncrypted))  _packetsSentEncrypted;

constexpr void __set__packetsSentEncrypted(int64_t value) ;

constexpr int64_t __get__packetsSentEncrypted() const;

 int64_t __declspec(property(get=__get__packetsSentRejected, put=__set__packetsSentRejected))  _packetsSentRejected;

constexpr void __set__packetsSentRejected(int64_t value) ;

constexpr int64_t __get__packetsSentRejected() const;

 int64_t __declspec(property(get=__get__encryptionProcessingTime, put=__set__encryptionProcessingTime))  _encryptionProcessingTime;

constexpr void __set__encryptionProcessingTime(int64_t value) ;

constexpr int64_t __get__encryptionProcessingTime() const;

 int64_t __declspec(property(get=__get__decryptionProcessingTime, put=__set__decryptionProcessingTime))  _decryptionProcessingTime;

constexpr void __set__decryptionProcessingTime(int64_t value) ;

constexpr int64_t __get__decryptionProcessingTime() const;


// Properties

 int64_t __declspec(property(get=get_packetsReceivedPlaintext))  packetsReceivedPlaintext;

 int64_t __declspec(property(get=get_packetsReceivedEncrypted))  packetsReceivedEncrypted;

 int64_t __declspec(property(get=get_packetsReceivedRejected))  packetsReceivedRejected;

 int64_t __declspec(property(get=get_packetsSentPlaintext))  packetsSentPlaintext;

 int64_t __declspec(property(get=get_packetsSentEncrypted))  packetsSentEncrypted;

 int64_t __declspec(property(get=get_packetsSentRejected))  packetsSentRejected;

 int64_t __declspec(property(get=get_encryptionProcessingTime))  encryptionProcessingTime;

 int64_t __declspec(property(get=get_decryptionProcessingTime))  decryptionProcessingTime;


// Methods

/// @brief Method get_packetsReceivedPlaintext addr 0xdd2d84 size 0xc virtual false final false
 int64_t get_packetsReceivedPlaintext() ;

/// @brief Method get_packetsReceivedEncrypted addr 0xdd2d90 size 0xc virtual false final false
 int64_t get_packetsReceivedEncrypted() ;

/// @brief Method get_packetsReceivedRejected addr 0xdd2d9c size 0xc virtual false final false
 int64_t get_packetsReceivedRejected() ;

/// @brief Method get_packetsSentPlaintext addr 0xdd2da8 size 0xc virtual false final false
 int64_t get_packetsSentPlaintext() ;

/// @brief Method get_packetsSentEncrypted addr 0xdd2db4 size 0xc virtual false final false
 int64_t get_packetsSentEncrypted() ;

/// @brief Method get_packetsSentRejected addr 0xdd2dc0 size 0xc virtual false final false
 int64_t get_packetsSentRejected() ;

/// @brief Method get_encryptionProcessingTime addr 0xdd2dcc size 0x7c virtual false final false
 int64_t get_encryptionProcessingTime() ;

/// @brief Method get_decryptionProcessingTime addr 0xdd2e48 size 0x7c virtual false final false
 int64_t get_decryptionProcessingTime() ;

/// @brief Method IncrementPacketsReceivedPlaintext addr 0xdd11c4 size 0xc virtual false final false
 void IncrementPacketsReceivedPlaintext() ;

/// @brief Method IncrementPacketsReceivedEncrypted addr 0xdd11ac size 0xc virtual false final false
 void IncrementPacketsReceivedEncrypted() ;

/// @brief Method IncrementPacketsReceivedRejected addr 0xdd11d0 size 0xc virtual false final false
 void IncrementPacketsReceivedRejected() ;

/// @brief Method IncrementPacketsSentPlaintext addr 0xdd1574 size 0xc virtual false final false
 void IncrementPacketsSentPlaintext() ;

/// @brief Method IncrementPacketsSentEncrypted addr 0xdd155c size 0xc virtual false final false
 void IncrementPacketsSentEncrypted() ;

/// @brief Method IncrementPacketsSentRejected addr 0xdd1580 size 0xc virtual false final false
 void IncrementPacketsSentRejected() ;

/// @brief Method AddEncryptionProcessingTime addr 0xdd1568 size 0xc virtual false final false
 void AddEncryptionProcessingTime(int64_t time) ;

/// @brief Method AddDecryptionProcessingTime addr 0xdd11b8 size 0xc virtual false final false
 void AddDecryptionProcessingTime(int64_t time) ;

// Ctor Parameters []
explicit GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics() ;

/// @brief Method .ctor addr 0xdd0cd0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass4_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12867))
// CS Name: PacketEncryptionLayer::PendingEncryptionStateList::<>c__DisplayClass4_0
class CORDL_TYPE GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0& operator=(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0&& o) noexcept = default;
  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0& operator=(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_port, put=__set_port))  port;

constexpr void __set_port(int32_t value) ;

constexpr int32_t __get_port() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0() ;

/// @brief Method .ctor addr 0xdd30c8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetSortedEncryptionStates>b__0 addr 0xdd31bc size 0x74 virtual false final false
 int32_t _GetSortedEncryptionStates_b__0(System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> kvp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12868))
// CS Name: PacketEncryptionLayer::PendingEncryptionStateList::<>c
class CORDL_TYPE GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c& operator=(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c&& o) noexcept = default;
  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c& operator=(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c value) ;

static GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c __get___9() ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __declspec(property(get=__get___9__4_1, put=__set___9__4_1))  __9__4_1;

static void __set___9__4_1(System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value) ;

static System::Func_2<System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __get___9__4_1() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c() ;

/// @brief Method .ctor addr 0xdd3294 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetSortedEncryptionStates>b__4_1 addr 0xdd329c size 0x3c virtual false final false
 GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState _GetSortedEncryptionStates_b__4_1(System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> kvp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass8_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12869))
// CS Name: PacketEncryptionLayer::PendingEncryptionStateList::<>c__DisplayClass8_0
class CORDL_TYPE GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0& operator=(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0&& o) noexcept = default;
  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0& operator=(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState __declspec(property(get=__get_encryptionState, put=__set_encryptionState))  encryptionState;

constexpr void __set_encryptionState(GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState value) ;

constexpr GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState __get_encryptionState() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0xdd3138 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Remove>b__0 addr 0xdd32d8 size 0x48 virtual false final false
 bool _Remove_b__0(System::Collections::Generic::KeyValuePair_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> kvp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PendingEncryptionStateList
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12870))
// CS Name: PacketEncryptionLayer::PendingEncryptionStateList
class CORDL_TYPE GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass8_0 = GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0;

using __c = GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c;

using __c__DisplayClass4_0 = GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList& operator=(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList&& o) noexcept = default;
  constexpr GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList& operator=(GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __declspec(property(get=__get__pendingStatesByPort, put=__set__pendingStatesByPort))  _pendingStatesByPort;

constexpr void __set__pendingStatesByPort(System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __get__pendingStatesByPort() const;


// Properties

 bool __declspec(property(get=get_isEmpty))  isEmpty;


// Methods

/// @brief Method get_isEmpty addr 0xdd1b7c size 0x5c virtual false final false
 bool get_isEmpty() ;

/// @brief Method Dispose addr 0xdd2ec4 size 0x204 virtual true final true
 void Dispose() ;

/// @brief Method GetSortedEncryptionStates addr 0xdd260c size 0x1c4 virtual false final false
 ::ArrayW<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> GetSortedEncryptionStates(int32_t port) ;

/// @brief Method TryGetEncryptionState addr 0xdd22c4 size 0x1ec virtual false final false
 bool TryGetEncryptionState(int32_t port, ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> encryptionState) ;

/// @brief Method Add addr 0xdd30d0 size 0x68 virtual false final false
 void Add(int32_t port, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState encryptionState) ;

/// @brief Method Remove addr 0xdd1b24 size 0x58 virtual false final false
 bool Remove(int32_t port) ;

/// @brief Method Remove addr 0xdd2a80 size 0x174 virtual false final false
 bool Remove(int32_t port, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState encryptionState) ;

// Ctor Parameters []
explicit GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList() ;

/// @brief Method .ctor addr 0xdd3140 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<AddEncryptedEndpointAsync>d__25
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12871))
// CS Name: PacketEncryptionLayer::<AddEncryptedEndpointAsync>d__25
struct CORDL_TYPE GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::PacketEncryptionLayer", modifiers: "", def_value: None }, CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "isClient", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __t__builder, GlobalNamespace::PacketEncryptionLayer __4__this, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient, System::Net::IPEndPoint endPoint, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __u__1) noexcept;


                    constexpr GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25(GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25 const&) = default;
                    constexpr GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25(GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25&&) = default;
                    constexpr GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25& operator=(GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25& operator=(GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __get___t__builder() const;

 GlobalNamespace::PacketEncryptionLayer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::PacketEncryptionLayer value) ;

constexpr GlobalNamespace::PacketEncryptionLayer __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_preMasterSecret, put=__set_preMasterSecret))  preMasterSecret;

constexpr void __set_preMasterSecret(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_preMasterSecret() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serverRandom, put=__set_serverRandom))  serverRandom;

constexpr void __set_serverRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serverRandom() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_clientRandom, put=__set_clientRandom))  clientRandom;

constexpr void __set_clientRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_clientRandom() const;

 bool __declspec(property(get=__get_isClient, put=__set_isClient))  isClient;

constexpr void __set_isClient(bool value) ;

constexpr bool __get_isClient() const;

 System::Net::IPEndPoint __declspec(property(get=__get_endPoint, put=__set_endPoint))  endPoint;

constexpr void __set_endPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_endPoint() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdd3320 size 0x35c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdd367c size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<AddPendingEncryptedEndpointAsync>d__27
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12872))
// CS Name: PacketEncryptionLayer::<AddPendingEncryptedEndpointAsync>d__27
struct CORDL_TYPE GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::PacketEncryptionLayer", modifiers: "", def_value: None }, CppParam { name: "preMasterSecret", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "serverRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "clientRandom", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "isClient", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, GlobalNamespace::PacketEncryptionLayer __4__this, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient, System::Net::IPEndPoint endPoint, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __u__1) noexcept;


                    constexpr GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27(GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27 const&) = default;
                    constexpr GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27(GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27&&) = default;
                    constexpr GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27& operator=(GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27& operator=(GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x58};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder __get___t__builder() const;

 GlobalNamespace::PacketEncryptionLayer __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::PacketEncryptionLayer value) ;

constexpr GlobalNamespace::PacketEncryptionLayer __get___4__this() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_preMasterSecret, put=__set_preMasterSecret))  preMasterSecret;

constexpr void __set_preMasterSecret(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_preMasterSecret() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_serverRandom, put=__set_serverRandom))  serverRandom;

constexpr void __set_serverRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_serverRandom() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_clientRandom, put=__set_clientRandom))  clientRandom;

constexpr void __set_clientRandom(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_clientRandom() const;

 bool __declspec(property(get=__get_isClient, put=__set_isClient))  isClient;

constexpr void __set_isClient(bool value) ;

constexpr bool __get_isClient() const;

 System::Net::IPEndPoint __declspec(property(get=__get_endPoint, put=__set_endPoint))  endPoint;

constexpr void __set_endPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_endPoint() const;

 System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0xdd36d4 size 0x434 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0xdd3b08 size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PacketEncryptionLayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14543))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12873))
// CS Name: PacketEncryptionLayer
class CORDL_TYPE PacketEncryptionLayer : public LiteNetLib::Layers::PacketLayerBase {
public:
// Declarations
using _AddPendingEncryptedEndpointAsync_d__27 = GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27;

using _AddEncryptedEndpointAsync_d__25 = GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25;

using PendingEncryptionStateList = GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList;

using EncryptionStatistics = GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~PacketEncryptionLayer() = default;

// Ctor Parameters [CppParam { name: "", ty: "PacketEncryptionLayer", modifiers: " const&", def_value: None }]
constexpr PacketEncryptionLayer(PacketEncryptionLayer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PacketEncryptionLayer", modifiers: "&&", def_value: None }]
constexpr PacketEncryptionLayer(PacketEncryptionLayer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PacketEncryptionLayer(void* ptr) noexcept : LiteNetLib::Layers::PacketLayerBase(ptr) {
}


  constexpr PacketEncryptionLayer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PacketEncryptionLayer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PacketEncryptionLayer& operator=(PacketEncryptionLayer&& o) noexcept = default;
  constexpr PacketEncryptionLayer& operator=(PacketEncryptionLayer const& o) noexcept = default;
                


// Fields

/// @brief Field kEncryptedPacketType offset 0
static constexpr uint8_t  kEncryptedPacketType{1u};

/// @brief Field kPlaintextPacketType offset 0
static constexpr uint8_t  kPlaintextPacketType{0u};

/// @brief Field kEncryptionStateTimeoutMs offset 0
static constexpr int64_t  kEncryptionStateTimeoutMs{300000};

/// @brief Field kPendingEncryptionStateTimeoutMs offset 0
static constexpr int64_t  kPendingEncryptionStateTimeoutMs{10000};

static System::Diagnostics::Stopwatch __declspec(property(get=__get__stopwatch, put=__set__stopwatch))  _stopwatch;

static void __set__stopwatch(System::Diagnostics::Stopwatch value) ;

static System::Diagnostics::Stopwatch __get__stopwatch() ;

 GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics __declspec(property(get=__get_statistics, put=__set_statistics))  statistics;

constexpr void __set_statistics(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics value) ;

constexpr GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics __get_statistics() const;

 BGNet::Core::ITaskUtility __declspec(property(get=__get__taskUtility, put=__set__taskUtility))  _taskUtility;

constexpr void __set__taskUtility(BGNet::Core::ITaskUtility value) ;

constexpr BGNet::Core::ITaskUtility __get__taskUtility() const;

 GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __declspec(property(get=__get__encryptionStates, put=__set__encryptionStates))  _encryptionStates;

constexpr void __set__encryptionStates(GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> value) ;

constexpr GlobalNamespace::ExpiringDictionary_2<System::Net::IPEndPoint,GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> __get__encryptionStates() const;

 GlobalNamespace::ExpiringDictionary_2<System::Net::IPAddress,GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList> __declspec(property(get=__get__pendingEncryptionStates, put=__set__pendingEncryptionStates))  _pendingEncryptionStates;

constexpr void __set__pendingEncryptionStates(GlobalNamespace::ExpiringDictionary_2<System::Net::IPAddress,GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList> value) ;

constexpr GlobalNamespace::ExpiringDictionary_2<System::Net::IPAddress,GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList> __get__pendingEncryptionStates() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__unencryptedTrafficFilter, put=__set__unencryptedTrafficFilter))  _unencryptedTrafficFilter;

constexpr void __set__unencryptedTrafficFilter(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__unencryptedTrafficFilter() const;

 bool __declspec(property(get=__get__filterUnencryptedTraffic_k__BackingField, put=__set__filterUnencryptedTraffic_k__BackingField))  _filterUnencryptedTraffic_k__BackingField;

constexpr void __set__filterUnencryptedTraffic_k__BackingField(bool value) ;

constexpr bool __get__filterUnencryptedTraffic_k__BackingField() const;

 bool __declspec(property(get=__get__enableStatistics_k__BackingField, put=__set__enableStatistics_k__BackingField))  _enableStatistics_k__BackingField;

constexpr void __set__enableStatistics_k__BackingField(bool value) ;

constexpr bool __get__enableStatistics_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_filterUnencryptedTraffic, put=set_filterUnencryptedTraffic))  filterUnencryptedTraffic;

 bool __declspec(property(get=get_enableStatistics, put=set_enableStatistics))  enableStatistics;


// Methods

/// @brief Method get_filterUnencryptedTraffic addr 0xdd0b88 size 0x8 virtual false final false
 bool get_filterUnencryptedTraffic() ;

/// @brief Method set_filterUnencryptedTraffic addr 0xdd0b90 size 0xc virtual false final false
 void set_filterUnencryptedTraffic(bool value) ;

/// @brief Method get_enableStatistics addr 0xdd0b9c size 0x8 virtual false final false
 bool get_enableStatistics() ;

/// @brief Method set_enableStatistics addr 0xdd0ba4 size 0xc virtual false final false
 void set_enableStatistics(bool value) ;

// Ctor Parameters [CppParam { name: "timeProvider", ty: "BGNet::Core::ITimeProvider", modifiers: "", def_value: None }, CppParam { name: "taskUtility", ty: "BGNet::Core::ITaskUtility", modifiers: "", def_value: None }]
explicit PacketEncryptionLayer(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility) ;

/// @brief Method .ctor addr 0xdd0bb0 size 0x120 virtual false final false
 void _ctor(BGNet::Core::ITimeProvider timeProvider, BGNet::Core::ITaskUtility taskUtility) ;

/// @brief Method ProcessInboundPacket addr 0xdd0cd8 size 0x1b8 virtual true final false
 void ProcessInboundPacket(System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length) ;

/// @brief Method ProcessOutBoundPacket addr 0xdd11dc size 0x198 virtual true final false
 void ProcessOutBoundPacket(System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length) ;

/// @brief Method SetUnencryptedTrafficFilter addr 0xdd158c size 0x8 virtual false final false
 void SetUnencryptedTrafficFilter(::ArrayW<uint8_t> unencryptedTrafficFilter) ;

/// @brief Method AddEncryptedEndpoint addr 0xdd1594 size 0x168 virtual false final false
 GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState AddEncryptedEndpoint(System::Net::IPEndPoint endPoint, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient) ;

/// @brief Method AddEncryptedEndpointAsync addr 0xdd16fc size 0x12c virtual false final false
 System::Threading::Tasks::Task_1<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> AddEncryptedEndpointAsync(System::Net::IPEndPoint endPoint, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient) ;

/// @brief Method RemoveEncryptedEndpoint addr 0xdd1828 size 0x2fc virtual false final false
 bool RemoveEncryptedEndpoint(System::Net::IPEndPoint endPoint, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState encryptedState) ;

/// @brief Method AddPendingEncryptedEndpointAsync addr 0xdd1bd8 size 0x10c virtual false final false
 System::Threading::Tasks::Task AddPendingEncryptedEndpointAsync(System::Net::IPEndPoint endPoint, ::ArrayW<uint8_t> preMasterSecret, ::ArrayW<uint8_t> serverRandom, ::ArrayW<uint8_t> clientRandom, bool isClient) ;

/// @brief Method PollUpdate addr 0xdd1ce4 size 0x1b4 virtual false final false
 void PollUpdate() ;

/// @brief Method RemoveAllEndpoints addr 0xdd1e98 size 0x1b4 virtual false final false
 void RemoveAllEndpoints() ;

/// @brief Method TryGetEncryptionState addr 0xdd204c size 0x120 virtual false final false
 bool TryGetEncryptionState(System::Net::IPEndPoint endPoint, ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> state) ;

/// @brief Method TryGetPendingEncryptionState addr 0xdd216c size 0x158 virtual false final false
 bool TryGetPendingEncryptionState(System::Net::IPEndPoint endPoint, ByRef<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState> state) ;

/// @brief Method TryGetPotentialPendingEncryptionStates addr 0xdd24b0 size 0x15c virtual false final false
 bool TryGetPotentialPendingEncryptionStates(System::Net::IPEndPoint endPoint, ByRef<::ArrayW<GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState>> encryptionStates) ;

/// @brief Method PromotePendingEncryptionState addr 0xdd27d0 size 0x2b0 virtual false final false
 void PromotePendingEncryptionState(System::Net::IPEndPoint endPoint, GlobalNamespace::GlobalNamespace__EncryptionUtility__IEncryptionState state) ;

/// @brief Method MatchesFilter addr 0xdd2bf4 size 0x78 virtual false final false
 bool MatchesFilter(::ArrayW<uint8_t> data, int32_t offset, int32_t length) ;

/// @brief Method ProcessInboundPacketInternal addr 0xdd0e90 size 0x31c virtual false final false
 bool ProcessInboundPacketInternal(System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length, ByRef<bool> encrypted) ;

/// @brief Method ProcessOutBoundPacketInternal addr 0xdd1374 size 0x1e8 virtual false final false
 bool ProcessOutBoundPacketInternal(System::Net::IPEndPoint remoteEndPoint, ByRef<::ArrayW<uint8_t>> data, ByRef<int32_t> offset, ByRef<int32_t> length, ByRef<bool> encrypted) ;

/// @brief Method Log addr 0xdd2c6c size 0x8c virtual false final false
static void Log(::StringW message) ;

/// @brief Method LogV addr 0xdd2cf8 size 0x8c virtual false final false
static void LogV(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__EncryptionStatistics, "", "PacketEncryptionLayer/EncryptionStatistics");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList, "", "PacketEncryptionLayer/PendingEncryptionStateList");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass4_0, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass4_0");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer__PendingEncryptionStateList____c__DisplayClass8_0, "", "PacketEncryptionLayer/PendingEncryptionStateList/<>c__DisplayClass8_0");
NEED_NO_BOX(GlobalNamespace::PacketEncryptionLayer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer, "", "PacketEncryptionLayer");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddEncryptedEndpointAsync_d__25, "", "PacketEncryptionLayer/<AddEncryptedEndpointAsync>d__25");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PacketEncryptionLayer___AddPendingEncryptedEndpointAsync_d__27, "", "PacketEncryptionLayer/<AddPendingEncryptedEndpointAsync>d__27");
