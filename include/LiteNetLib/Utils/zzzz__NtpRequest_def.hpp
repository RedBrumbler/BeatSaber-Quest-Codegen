#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::Sockets {
struct SocketError;
}
namespace System {
template<typename T>
class Action_1;
}
namespace LiteNetLib {
class NetSocket;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib {
class INetSocketListener;
}
namespace LiteNetLib::Utils {
class NtpPacket;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NtpRequest;
}
// Type: LiteNetLib.Utils::NtpRequest
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14541))
// CS Name: LiteNetLib.Utils.NtpRequest
class CORDL_TYPE NtpRequest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to LiteNetLib::INetSocketListener
constexpr operator  LiteNetLib::INetSocketListener() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NtpRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "NtpRequest", modifiers: " const&", def_value: None }]
constexpr NtpRequest(NtpRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NtpRequest", modifiers: "&&", def_value: None }]
constexpr NtpRequest(NtpRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NtpRequest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NtpRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NtpRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NtpRequest& operator=(NtpRequest&& o) noexcept = default;
  constexpr NtpRequest& operator=(NtpRequest const& o) noexcept = default;
                


// Fields

/// @brief Field DefaultPort offset 0
static constexpr int32_t  DefaultPort{123};

 LiteNetLib::NetSocket __declspec(property(get=__get__socket, put=__set__socket))  _socket;

constexpr void __set__socket(LiteNetLib::NetSocket value) ;

constexpr LiteNetLib::NetSocket __get__socket() const;

 System::Action_1<LiteNetLib::Utils::NtpPacket> __declspec(property(get=__get__onRequestComplete, put=__set__onRequestComplete))  _onRequestComplete;

constexpr void __set__onRequestComplete(System::Action_1<LiteNetLib::Utils::NtpPacket> value) ;

constexpr System::Action_1<LiteNetLib::Utils::NtpPacket> __get__onRequestComplete() const;

 System::Net::IPEndPoint __declspec(property(get=__get__ntpEndPoint, put=__set__ntpEndPoint))  _ntpEndPoint;

constexpr void __set__ntpEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get__ntpEndPoint() const;


// Methods

// Ctor Parameters [CppParam { name: "endPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "onRequestComplete", ty: "System::Action_1<LiteNetLib::Utils::NtpPacket>", modifiers: "", def_value: None }]
explicit NtpRequest(System::Net::IPEndPoint endPoint, System::Action_1<LiteNetLib::Utils::NtpPacket> onRequestComplete) ;

/// @brief Method .ctor addr 0x20d1a28 size 0xf0 virtual false final false
 void _ctor(System::Net::IPEndPoint endPoint, System::Action_1<LiteNetLib::Utils::NtpPacket> onRequestComplete) ;

/// @brief Method Create addr 0x20d1b18 size 0x70 virtual false final false
static LiteNetLib::Utils::NtpRequest Create(System::Net::IPEndPoint endPoint, System::Action_1<LiteNetLib::Utils::NtpPacket> onRequestComplete) ;

/// @brief Method Create addr 0x20d1b88 size 0x78 virtual false final false
static LiteNetLib::Utils::NtpRequest Create(System::Net::IPAddress ipAddress, System::Action_1<LiteNetLib::Utils::NtpPacket> onRequestComplete) ;

/// @brief Method Create addr 0x20d1c00 size 0x74 virtual false final false
static LiteNetLib::Utils::NtpRequest Create(::StringW ntpServerAddress, int32_t port, System::Action_1<LiteNetLib::Utils::NtpPacket> onRequestComplete) ;

/// @brief Method Create addr 0x20d1c74 size 0x70 virtual false final false
static LiteNetLib::Utils::NtpRequest Create(::StringW ntpServerAddress, System::Action_1<LiteNetLib::Utils::NtpPacket> onRequestComplete) ;

/// @brief Method Send addr 0x20d1ce4 size 0xc8 virtual false final false
 void Send() ;

/// @brief Method Close addr 0x20d1dac size 0x20 virtual false final false
 void Close() ;

/// @brief Method LiteNetLib.INetSocketListener.OnMessageReceived addr 0x20d1dcc size 0x19c virtual true final true
 void LiteNetLib_INetSocketListener_OnMessageReceived(::ArrayW<uint8_t> data, int32_t length, System::Net::Sockets::SocketError errorCode, System::Net::IPEndPoint remoteEndPoint) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(LiteNetLib::Utils::NtpRequest);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NtpRequest, "LiteNetLib.Utils", "NtpRequest");
