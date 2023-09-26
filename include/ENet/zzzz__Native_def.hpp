#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace ENet {
struct PeerState;
}
namespace ENet {
struct PacketFlags;
}
namespace ENet {
struct ENetSslConfiguration;
}
namespace ENet {
struct ENetCallbacks;
}
namespace ENet {
struct ENetAddress;
}
namespace ENet {
struct ENetEvent;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace ENet {
class Native;
}
// Type: ENet::Native
namespace ENet {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15297))
// CS Name: ENet.Native
class CORDL_TYPE Native : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Native() = default;

// Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: " const&", def_value: None }]
constexpr Native(Native const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "&&", def_value: None }]
constexpr Native(Native&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Native(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Native& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Native& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Native& operator=(Native&& o) noexcept = default;
  constexpr Native& operator=(Native const& o) noexcept = default;
                


// Fields

/// @brief Field nativeLibrary offset 0
static constexpr ::ConstString  nativeLibrary{u"enet"};

/// @brief Field cryptoNativeLibrary offset 0
static constexpr ::ConstString  cryptoNativeLibrary{u"crypto"};

/// @brief Field sslNativeLibrary offset 0
static constexpr ::ConstString  sslNativeLibrary{u"ssl"};


// Methods

/// @brief Method OPENSSL_init_crypto addr 0x20b99ac size 0x84 virtual false final false
static int32_t OPENSSL_init_crypto(uint64_t opts, ::cordl_internals::intptr_t settings) ;

/// @brief Method OPENSSL_init_ssl addr 0x20b9a30 size 0x80 virtual false final false
static int32_t OPENSSL_init_ssl(uint64_t opts, ::cordl_internals::intptr_t settings) ;

/// @brief Method enet_initialize addr 0x20b9b94 size 0x68 virtual false final false
static int32_t enet_initialize() ;

/// @brief Method enet_initialize_with_callbacks addr 0x20b9cec size 0xc4 virtual false final false
static int32_t enet_initialize_with_callbacks(uint32_t version, ByRef<ENet::ENetCallbacks> inits) ;

/// @brief Method enet_deinitialize addr 0x20b9db4 size 0x64 virtual false final false
static void enet_deinitialize() ;

/// @brief Method enet_linked_version addr 0x20b9b2c size 0x68 virtual false final false
static uint32_t enet_linked_version() ;

/// @brief Method enet_time_get addr 0x20b98e0 size 0x68 virtual false final false
static uint32_t enet_time_get() ;

/// @brief Method enet_crc64 addr 0x20b9e1c size 0x84 virtual false final false
static uint64_t enet_crc64(::cordl_internals::intptr_t buffers, int32_t bufferCount) ;

/// @brief Method enet_address_set_ip addr 0x20b56c8 size 0xa0 virtual false final false
static int32_t enet_address_set_ip(ByRef<ENet::ENetAddress> address, ::StringW ip) ;

/// @brief Method enet_address_set_hostname addr 0x20b594c size 0xa0 virtual false final false
static int32_t enet_address_set_hostname(ByRef<ENet::ENetAddress> address, ::StringW hostName) ;

/// @brief Method enet_address_get_ip addr 0x20b55a4 size 0xbc virtual false final false
static int32_t enet_address_get_ip(ByRef<ENet::ENetAddress> address, System::Text::StringBuilder ip, ::cordl_internals::intptr_t ipLength) ;

/// @brief Method enet_address_get_hostname addr 0x20b5828 size 0xbc virtual false final false
static int32_t enet_address_get_hostname(ByRef<ENet::ENetAddress> address, System::Text::StringBuilder hostName, ::cordl_internals::intptr_t nameLength) ;

/// @brief Method enet_packet_create addr 0x20b63d0 size 0x9c virtual false final false
static ::cordl_internals::intptr_t enet_packet_create(::ArrayW<uint8_t> data, ::cordl_internals::intptr_t dataLength, ENet::PacketFlags flags) ;

/// @brief Method enet_packet_create addr 0x20b658c size 0x94 virtual false final false
static ::cordl_internals::intptr_t enet_packet_create(::cordl_internals::intptr_t data, ::cordl_internals::intptr_t dataLength, ENet::PacketFlags flags) ;

/// @brief Method enet_packet_create_offset addr 0x20b6740 size 0xa4 virtual false final false
static ::cordl_internals::intptr_t enet_packet_create_offset(::ArrayW<uint8_t> data, ::cordl_internals::intptr_t dataLength, ::cordl_internals::intptr_t dataOffset, ENet::PacketFlags flags) ;

/// @brief Method enet_packet_create_offset addr 0x20b6944 size 0x9c virtual false final false
static ::cordl_internals::intptr_t enet_packet_create_offset(::cordl_internals::intptr_t data, ::cordl_internals::intptr_t dataLength, ::cordl_internals::intptr_t dataOffset, ENet::PacketFlags flags) ;

/// @brief Method enet_packet_check_references addr 0x20b60b8 size 0x7c virtual false final false
static int32_t enet_packet_check_references(::cordl_internals::intptr_t packet) ;

/// @brief Method enet_packet_get_data addr 0x20b5e44 size 0x7c virtual false final false
static ::cordl_internals::intptr_t enet_packet_get_data(::cordl_internals::intptr_t packet) ;

/// @brief Method enet_packet_get_user_data addr 0x20b5ed8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t enet_packet_get_user_data(::cordl_internals::intptr_t packet) ;

/// @brief Method enet_packet_set_user_data addr 0x20b5f7c size 0x84 virtual false final false
static ::cordl_internals::intptr_t enet_packet_set_user_data(::cordl_internals::intptr_t packet, ::cordl_internals::intptr_t userData) ;

/// @brief Method enet_packet_get_length addr 0x20b6018 size 0x7c virtual false final false
static int32_t enet_packet_get_length(::cordl_internals::intptr_t packet) ;

/// @brief Method enet_packet_set_free_callback addr 0x20b615c size 0x84 virtual false final false
static void enet_packet_set_free_callback(::cordl_internals::intptr_t packet, ::cordl_internals::intptr_t callback) ;

/// @brief Method enet_packet_dispose addr 0x20b5cb4 size 0x7c virtual false final false
static void enet_packet_dispose(::cordl_internals::intptr_t packet) ;

/// @brief Method enet_host_create addr 0x20b9ea0 size 0xb4 virtual false final false
static ::cordl_internals::intptr_t enet_host_create(ByRef<ENet::ENetAddress> address, ::cordl_internals::intptr_t peerLimit, ::cordl_internals::intptr_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize) ;

/// @brief Method enet_host_create addr 0x20b9f54 size 0xb4 virtual false final false
static ::cordl_internals::intptr_t enet_host_create(::cordl_internals::intptr_t address, ::cordl_internals::intptr_t peerLimit, ::cordl_internals::intptr_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize) ;

/// @brief Method enet_host_create_ssl addr 0x20b73c4 size 0x11c virtual false final false
static ::cordl_internals::intptr_t enet_host_create_ssl(ByRef<ENet::ENetAddress> address, ::cordl_internals::intptr_t peerLimit, ::cordl_internals::intptr_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize, ByRef<ENet::ENetSslConfiguration> sslConfiguration) ;

/// @brief Method enet_host_create_ssl addr 0x20b74e0 size 0x11c virtual false final false
static ::cordl_internals::intptr_t enet_host_create_ssl(::cordl_internals::intptr_t address, ::cordl_internals::intptr_t peerLimit, ::cordl_internals::intptr_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize, ByRef<ENet::ENetSslConfiguration> sslConfiguration) ;

/// @brief Method enet_host_connect addr 0x20b7e10 size 0x9c virtual false final false
static ::cordl_internals::intptr_t enet_host_connect(::cordl_internals::intptr_t host, ByRef<ENet::ENetAddress> address, ::cordl_internals::intptr_t channelCount, uint32_t data) ;

/// @brief Method enet_host_broadcast addr 0x20b7728 size 0x94 virtual false final false
static void enet_host_broadcast(::cordl_internals::intptr_t host, uint8_t channelID, ::cordl_internals::intptr_t packet) ;

/// @brief Method enet_host_broadcast_exclude addr 0x20b784c size 0x9c virtual false final false
static void enet_host_broadcast_exclude(::cordl_internals::intptr_t host, uint8_t channelID, ::cordl_internals::intptr_t packet, ::cordl_internals::intptr_t excludedPeer) ;

/// @brief Method enet_host_broadcast_selective addr 0x20b7a88 size 0xb4 virtual false final false
static void enet_host_broadcast_selective(::cordl_internals::intptr_t host, uint8_t channelID, ::cordl_internals::intptr_t packet, ::ArrayW<::cordl_internals::intptr_t> peers, ::cordl_internals::intptr_t peersLength) ;

/// @brief Method enet_host_service addr 0x20b7f5c size 0x94 virtual false final false
static int32_t enet_host_service(::cordl_internals::intptr_t host, ByRef<ENet::ENetEvent> event, uint32_t timeout) ;

/// @brief Method enet_host_check_events addr 0x20b7b94 size 0x84 virtual false final false
static int32_t enet_host_check_events(::cordl_internals::intptr_t host, ByRef<ENet::ENetEvent> event) ;

/// @brief Method enet_host_channel_limit addr 0x20b80f4 size 0x84 virtual false final false
static void enet_host_channel_limit(::cordl_internals::intptr_t host, ::cordl_internals::intptr_t channelLimit) ;

/// @brief Method enet_host_bandwidth_limit addr 0x20b8020 size 0x94 virtual false final false
static void enet_host_bandwidth_limit(::cordl_internals::intptr_t host, uint32_t incomingBandwidth, uint32_t outgoingBandwidth) ;

/// @brief Method enet_host_get_peers_count addr 0x20b6e00 size 0x7c virtual false final false
static uint32_t enet_host_get_peers_count(::cordl_internals::intptr_t host) ;

/// @brief Method enet_host_get_packets_sent addr 0x20b6e94 size 0x7c virtual false final false
static uint32_t enet_host_get_packets_sent(::cordl_internals::intptr_t host) ;

/// @brief Method enet_host_get_packets_received addr 0x20b6f28 size 0x7c virtual false final false
static uint32_t enet_host_get_packets_received(::cordl_internals::intptr_t host) ;

/// @brief Method enet_host_get_bytes_sent addr 0x20b6fbc size 0x7c virtual false final false
static uint32_t enet_host_get_bytes_sent(::cordl_internals::intptr_t host) ;

/// @brief Method enet_host_get_bytes_received addr 0x20b7050 size 0x7c virtual false final false
static uint32_t enet_host_get_bytes_received(::cordl_internals::intptr_t host) ;

/// @brief Method enet_host_set_max_duplicate_peers addr 0x20b81a0 size 0x84 virtual false final false
static void enet_host_set_max_duplicate_peers(::cordl_internals::intptr_t host, uint16_t number) ;

/// @brief Method enet_host_set_intercept_callback addr 0x20b824c size 0x84 virtual false final false
static void enet_host_set_intercept_callback(::cordl_internals::intptr_t host, ::cordl_internals::intptr_t callback) ;

/// @brief Method enet_host_set_checksum_callback addr 0x20b8388 size 0x84 virtual false final false
static void enet_host_set_checksum_callback(::cordl_internals::intptr_t host, ::cordl_internals::intptr_t callback) ;

/// @brief Method enet_host_flush addr 0x20b84b4 size 0x7c virtual false final false
static void enet_host_flush(::cordl_internals::intptr_t host) ;

/// @brief Method enet_host_destroy addr 0x20b6bd0 size 0x7c virtual false final false
static void enet_host_destroy(::cordl_internals::intptr_t host) ;

/// @brief Method enet_host_prevent_connections addr 0x20b7624 size 0x84 virtual false final false
static void enet_host_prevent_connections(::cordl_internals::intptr_t host, uint8_t state) ;

/// @brief Method enet_peer_throttle_configure addr 0x20b9198 size 0xac virtual false final false
static void enet_peer_throttle_configure(::cordl_internals::intptr_t peer, uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold) ;

/// @brief Method enet_peer_get_id addr 0x20b8548 size 0x7c virtual false final false
static uint32_t enet_peer_get_id(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_ip addr 0x20b8790 size 0x9c virtual false final false
static int32_t enet_peer_get_ip(::cordl_internals::intptr_t peer, ::ArrayW<uint8_t> ip, ::cordl_internals::intptr_t ipLength) ;

/// @brief Method enet_peer_get_port addr 0x20b88e0 size 0x7c virtual false final false
static uint16_t enet_peer_get_port(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_mtu addr 0x20b8974 size 0x7c virtual false final false
static uint32_t enet_peer_get_mtu(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_state addr 0x20b8a60 size 0x7c virtual false final false
static ENet::PeerState enet_peer_get_state(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_rtt addr 0x20b8af4 size 0x7c virtual false final false
static uint32_t enet_peer_get_rtt(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_last_rtt addr 0x20b8b88 size 0x7c virtual false final false
static uint32_t enet_peer_get_last_rtt(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_lastsendtime addr 0x20b8c1c size 0x7c virtual false final false
static uint32_t enet_peer_get_lastsendtime(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_lastreceivetime addr 0x20b8cb0 size 0x7c virtual false final false
static uint32_t enet_peer_get_lastreceivetime(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_packets_sent addr 0x20b8d44 size 0x7c virtual false final false
static uint64_t enet_peer_get_packets_sent(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_packets_lost addr 0x20b8dd8 size 0x7c virtual false final false
static uint64_t enet_peer_get_packets_lost(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_packets_throttle addr 0x20b8e6c size 0x7c virtual false final false
static float_t enet_peer_get_packets_throttle(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_bytes_sent addr 0x20b8f00 size 0x7c virtual false final false
static uint64_t enet_peer_get_bytes_sent(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_bytes_received addr 0x20b8f94 size 0x7c virtual false final false
static uint64_t enet_peer_get_bytes_received(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_get_data addr 0x20b9028 size 0x7c virtual false final false
static ::cordl_internals::intptr_t enet_peer_get_data(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_set_data addr 0x20b90cc size 0x84 virtual false final false
static void enet_peer_set_data(::cordl_internals::intptr_t peer, ::cordl_internals::intptr_t data) ;

/// @brief Method enet_peer_send addr 0x20b927c size 0x94 virtual false final false
static int32_t enet_peer_send(::cordl_internals::intptr_t peer, uint8_t channelID, ::cordl_internals::intptr_t packet) ;

/// @brief Method enet_peer_receive addr 0x20b93a4 size 0x84 virtual false final false
static ::cordl_internals::intptr_t enet_peer_receive(::cordl_internals::intptr_t peer, ByRef<uint8_t> channelID) ;

/// @brief Method enet_peer_ping addr 0x20b9440 size 0x7c virtual false final false
static void enet_peer_ping(::cordl_internals::intptr_t peer) ;

/// @brief Method enet_peer_ping_interval addr 0x20b94e4 size 0x84 virtual false final false
static void enet_peer_ping_interval(::cordl_internals::intptr_t peer, uint32_t pingInterval) ;

/// @brief Method enet_peer_timeout addr 0x20b95a8 size 0x9c virtual false final false
static void enet_peer_timeout(::cordl_internals::intptr_t peer, uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum) ;

/// @brief Method enet_peer_disconnect addr 0x20b966c size 0x84 virtual false final false
static void enet_peer_disconnect(::cordl_internals::intptr_t peer, uint32_t data) ;

/// @brief Method enet_peer_disconnect_now addr 0x20b9718 size 0x84 virtual false final false
static void enet_peer_disconnect_now(::cordl_internals::intptr_t peer, uint32_t data) ;

/// @brief Method enet_peer_disconnect_later addr 0x20b97c4 size 0x84 virtual false final false
static void enet_peer_disconnect_later(::cordl_internals::intptr_t peer, uint32_t data) ;

/// @brief Method enet_peer_reset addr 0x20b9860 size 0x7c virtual false final false
static void enet_peer_reset(::cordl_internals::intptr_t peer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ENet
NEED_NO_BOX(ENet::Native);
DEFINE_IL2CPP_ARG_TYPE(ENet::Native, "ENet", "Native");
