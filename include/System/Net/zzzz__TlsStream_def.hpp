#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Sockets/zzzz__NetworkStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace System::Net {
class TlsStream;
}
// Type: System.Net::TlsStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8194))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7896))
// CS Name: System.Net.TlsStream
class CORDL_TYPE TlsStream : public System::Net::Sockets::NetworkStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~TlsStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsStream", modifiers: " const&", def_value: None }]
constexpr TlsStream(TlsStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsStream", modifiers: "&&", def_value: None }]
constexpr TlsStream(TlsStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsStream(void* ptr) noexcept : System::Net::Sockets::NetworkStream(ptr) {
}


  constexpr TlsStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsStream& operator=(TlsStream&& o) noexcept = default;
  constexpr TlsStream& operator=(TlsStream const& o) noexcept = default;
                


// Fields

 System::Net::Security::SslStream __declspec(property(get=__get__sslStream, put=__set__sslStream))  _sslStream;

constexpr void __set__sslStream(System::Net::Security::SslStream value) ;

constexpr System::Net::Security::SslStream __get__sslStream() const;

 ::StringW __declspec(property(get=__get__host, put=__set__host))  _host;

constexpr void __set__host(::StringW value) ;

constexpr ::StringW __get__host() const;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=__get__clientCertificates, put=__set__clientCertificates))  _clientCertificates;

constexpr void __set__clientCertificates(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

constexpr System::Security::Cryptography::X509Certificates::X509CertificateCollection __get__clientCertificates() const;


// Methods

// Ctor Parameters [CppParam { name: "stream", ty: "System::Net::Sockets::NetworkStream", modifiers: "", def_value: None }, CppParam { name: "socket", ty: "System::Net::Sockets::Socket", modifiers: "", def_value: None }, CppParam { name: "host", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "clientCertificates", ty: "System::Security::Cryptography::X509Certificates::X509CertificateCollection", modifiers: "", def_value: None }]
explicit TlsStream(System::Net::Sockets::NetworkStream stream, System::Net::Sockets::Socket socket, ::StringW host, System::Security::Cryptography::X509Certificates::X509CertificateCollection clientCertificates) ;

/// @brief Method .ctor addr 0x2827d3c size 0xd4 virtual false final false
 void _ctor(System::Net::Sockets::NetworkStream stream, System::Net::Sockets::Socket socket, ::StringW host, System::Security::Cryptography::X509Certificates::X509CertificateCollection clientCertificates) ;

/// @brief Method AuthenticateAsClient addr 0x2827e10 size 0x100 virtual false final false
 void AuthenticateAsClient() ;

/// @brief Method BeginAuthenticateAsClient addr 0x2827f10 size 0x118 virtual false final false
 System::IAsyncResult BeginAuthenticateAsClient(System::AsyncCallback asyncCallback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndAuthenticateAsClient addr 0x2828028 size 0x24 virtual false final false
 void EndAuthenticateAsClient(System::IAsyncResult asyncResult) ;

/// @brief Method BeginWrite addr 0x282804c size 0x24 virtual true final false
 System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndWrite addr 0x2828070 size 0x24 virtual true final false
 void EndWrite(System::IAsyncResult result) ;

/// @brief Method Write addr 0x2828094 size 0x24 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method Read addr 0x28280b8 size 0x24 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method BeginRead addr 0x28280dc size 0x24 virtual true final false
 System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t count, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x2828100 size 0x24 virtual true final false
 int32_t EndRead(System::IAsyncResult asyncResult) ;

/// @brief Method Close addr 0x2828124 size 0x34 virtual true final false
 void Close() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::TlsStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::TlsStream, "System.Net", "TlsStream");
