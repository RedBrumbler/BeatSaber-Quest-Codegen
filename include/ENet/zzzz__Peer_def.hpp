#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace ENet {
struct PeerState;
}
namespace ENet {
struct Packet;
}
// Forward declare root types
namespace ENet {
struct Peer;
}
// Type: ENet::Peer
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15294))
// CS Name: ENet.Peer
struct CORDL_TYPE Peer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nativePeer", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "nativeID", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Peer(::cordl_internals::intptr_t nativePeer, uint32_t nativeID) noexcept;


                    constexpr Peer(Peer const&) = default;
                    constexpr Peer(Peer&&) = default;
                    constexpr Peer& operator=(Peer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Peer& operator=(Peer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Peer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_nativePeer, put=__set_nativePeer))  nativePeer;

constexpr void __set_nativePeer(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_nativePeer() const;

 uint32_t __declspec(property(get=__get_nativeID, put=__set_nativeID))  nativeID;

constexpr void __set_nativeID(uint32_t value) ;

constexpr uint32_t __get_nativeID() const;


// Properties

 ::cordl_internals::intptr_t __declspec(property(get=get_NativeData, put=set_NativeData))  NativeData;

 bool __declspec(property(get=get_IsSet))  IsSet;

 uint32_t __declspec(property(get=get_ID))  ID;

 ::StringW __declspec(property(get=get_IP))  IP;

 uint16_t __declspec(property(get=get_Port))  Port;

 uint32_t __declspec(property(get=get_MTU))  MTU;

 ENet::PeerState __declspec(property(get=get_State))  State;

 uint32_t __declspec(property(get=get_RoundTripTime))  RoundTripTime;

 uint32_t __declspec(property(get=get_LastRoundTripTime))  LastRoundTripTime;

 uint32_t __declspec(property(get=get_LastSendTime))  LastSendTime;

 uint32_t __declspec(property(get=get_LastReceiveTime))  LastReceiveTime;

 uint64_t __declspec(property(get=get_PacketsSent))  PacketsSent;

 uint64_t __declspec(property(get=get_PacketsLost))  PacketsLost;

 float_t __declspec(property(get=get_PacketsThrottle))  PacketsThrottle;

 uint64_t __declspec(property(get=get_BytesSent))  BytesSent;

 uint64_t __declspec(property(get=get_BytesReceived))  BytesReceived;

 ::cordl_internals::intptr_t __declspec(property(get=get_Data, put=set_Data))  Data;


// Methods

/// @brief Method get_NativeData addr 0x20b8538 size 0x8 virtual false final false
 ::cordl_internals::intptr_t get_NativeData() ;

/// @brief Method set_NativeData addr 0x20b8540 size 0x8 virtual false final false
 void set_NativeData(::cordl_internals::intptr_t value) ;

/// @brief Method .ctor addr 0x20b5b2c size 0x80 virtual false final false
 void _ctor(::cordl_internals::intptr_t peer) ;

/// @brief Method get_IsSet addr 0x20b85c4 size 0x54 virtual false final false
 bool get_IsSet() ;

/// @brief Method get_ID addr 0x20b8618 size 0x8 virtual false final false
 uint32_t get_ID() ;

/// @brief Method get_IP addr 0x20b8620 size 0xc8 virtual false final false
 ::StringW get_IP() ;

/// @brief Method get_Port addr 0x20b88c8 size 0x18 virtual false final false
 uint16_t get_Port() ;

/// @brief Method get_MTU addr 0x20b895c size 0x18 virtual false final false
 uint32_t get_MTU() ;

/// @brief Method get_State addr 0x20b89f0 size 0x70 virtual false final false
 ENet::PeerState get_State() ;

/// @brief Method get_RoundTripTime addr 0x20b8adc size 0x18 virtual false final false
 uint32_t get_RoundTripTime() ;

/// @brief Method get_LastRoundTripTime addr 0x20b8b70 size 0x18 virtual false final false
 uint32_t get_LastRoundTripTime() ;

/// @brief Method get_LastSendTime addr 0x20b8c04 size 0x18 virtual false final false
 uint32_t get_LastSendTime() ;

/// @brief Method get_LastReceiveTime addr 0x20b8c98 size 0x18 virtual false final false
 uint32_t get_LastReceiveTime() ;

/// @brief Method get_PacketsSent addr 0x20b8d2c size 0x18 virtual false final false
 uint64_t get_PacketsSent() ;

/// @brief Method get_PacketsLost addr 0x20b8dc0 size 0x18 virtual false final false
 uint64_t get_PacketsLost() ;

/// @brief Method get_PacketsThrottle addr 0x20b8e54 size 0x18 virtual false final false
 float_t get_PacketsThrottle() ;

/// @brief Method get_BytesSent addr 0x20b8ee8 size 0x18 virtual false final false
 uint64_t get_BytesSent() ;

/// @brief Method get_BytesReceived addr 0x20b8f7c size 0x18 virtual false final false
 uint64_t get_BytesReceived() ;

/// @brief Method get_Data addr 0x20b9010 size 0x18 virtual false final false
 ::cordl_internals::intptr_t get_Data() ;

/// @brief Method set_Data addr 0x20b90a4 size 0x28 virtual false final false
 void set_Data(::cordl_internals::intptr_t value) ;

/// @brief Method ThrowIfNotCreated addr 0x20b86e8 size 0xa8 virtual false final false
 void ThrowIfNotCreated() ;

/// @brief Method ConfigureThrottle addr 0x20b9150 size 0x48 virtual false final false
 void ConfigureThrottle(uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold) ;

/// @brief Method Send addr 0x20b9244 size 0x38 virtual false final false
 int32_t Send(uint8_t channelID, ByRef<ENet::Packet> packet) ;

/// @brief Method Receive addr 0x20b9310 size 0x94 virtual false final false
 bool Receive(ByRef<uint8_t> channelID, ByRef<ENet::Packet> packet) ;

/// @brief Method Ping addr 0x20b9428 size 0x18 virtual false final false
 void Ping() ;

/// @brief Method PingInterval addr 0x20b94bc size 0x28 virtual false final false
 void PingInterval(uint32_t interval) ;

/// @brief Method Timeout addr 0x20b9568 size 0x40 virtual false final false
 void Timeout(uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum) ;

/// @brief Method Disconnect addr 0x20b9644 size 0x28 virtual false final false
 void Disconnect(uint32_t data) ;

/// @brief Method DisconnectNow addr 0x20b96f0 size 0x28 virtual false final false
 void DisconnectNow(uint32_t data) ;

/// @brief Method DisconnectLater addr 0x20b979c size 0x28 virtual false final false
 void DisconnectLater(uint32_t data) ;

/// @brief Method Reset addr 0x20b9848 size 0x18 virtual false final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(ENet::Peer, "ENet", "Peer");
