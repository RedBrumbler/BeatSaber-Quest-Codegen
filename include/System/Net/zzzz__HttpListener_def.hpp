#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net {
class HttpListenerPrefixCollection;
}
namespace System {
class AsyncCallback;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Security::Authentication::ExtendedProtection {
class ExtendedProtectionPolicy;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class HttpListenerContext;
}
namespace System::Net {
class ServiceNameStore;
}
namespace Mono::Security::Interface {
class MonoTlsProvider;
}
namespace System::Net::Security {
class SslStream;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class HttpConnection;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::Net {
class AuthenticationSchemeSelector;
}
namespace System {
class IDisposable;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
struct AuthenticationSchemes;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Net::Security {
class RemoteCertificateValidationCallback;
}
// Forward declare root types
namespace System::Net {
class HttpListener;
}
// Type: System.Net::HttpListener
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8041))
// CS Name: System.Net.HttpListener
class CORDL_TYPE HttpListener : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~HttpListener() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListener", modifiers: " const&", def_value: None }]
constexpr HttpListener(HttpListener const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListener", modifiers: "&&", def_value: None }]
constexpr HttpListener(HttpListener&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpListener(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpListener& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpListener& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpListener& operator=(HttpListener&& o) noexcept = default;
  constexpr HttpListener& operator=(HttpListener const& o) noexcept = default;
                


// Fields

 Mono::Security::Interface::MonoTlsProvider __declspec(property(get=__get_tlsProvider, put=__set_tlsProvider))  tlsProvider;

constexpr void __set_tlsProvider(Mono::Security::Interface::MonoTlsProvider value) ;

constexpr Mono::Security::Interface::MonoTlsProvider __get_tlsProvider() const;

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=__get_tlsSettings, put=__set_tlsSettings))  tlsSettings;

constexpr void __set_tlsSettings(Mono::Security::Interface::MonoTlsSettings value) ;

constexpr Mono::Security::Interface::MonoTlsSettings __get_tlsSettings() const;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=__get_certificate, put=__set_certificate))  certificate;

constexpr void __set_certificate(System::Security::Cryptography::X509Certificates::X509Certificate value) ;

constexpr System::Security::Cryptography::X509Certificates::X509Certificate __get_certificate() const;

 System::Net::AuthenticationSchemes __declspec(property(get=__get_auth_schemes, put=__set_auth_schemes))  auth_schemes;

constexpr void __set_auth_schemes(System::Net::AuthenticationSchemes value) ;

constexpr System::Net::AuthenticationSchemes __get_auth_schemes() const;

 System::Net::HttpListenerPrefixCollection __declspec(property(get=__get_prefixes, put=__set_prefixes))  prefixes;

constexpr void __set_prefixes(System::Net::HttpListenerPrefixCollection value) ;

constexpr System::Net::HttpListenerPrefixCollection __get_prefixes() const;

 System::Net::AuthenticationSchemeSelector __declspec(property(get=__get_auth_selector, put=__set_auth_selector))  auth_selector;

constexpr void __set_auth_selector(System::Net::AuthenticationSchemeSelector value) ;

constexpr System::Net::AuthenticationSchemeSelector __get_auth_selector() const;

 ::StringW __declspec(property(get=__get_realm, put=__set_realm))  realm;

constexpr void __set_realm(::StringW value) ;

constexpr ::StringW __get_realm() const;

 bool __declspec(property(get=__get_ignore_write_exceptions, put=__set_ignore_write_exceptions))  ignore_write_exceptions;

constexpr void __set_ignore_write_exceptions(bool value) ;

constexpr bool __get_ignore_write_exceptions() const;

 bool __declspec(property(get=__get_listening, put=__set_listening))  listening;

constexpr void __set_listening(bool value) ;

constexpr bool __get_listening() const;

 bool __declspec(property(get=__get_disposed, put=__set_disposed))  disposed;

constexpr void __set_disposed(bool value) ;

constexpr bool __get_disposed() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__internalLock, put=__set__internalLock))  _internalLock;

constexpr void __set__internalLock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__internalLock() const;

 System::Collections::Hashtable __declspec(property(get=__get_registry, put=__set_registry))  registry;

constexpr void __set_registry(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_registry() const;

 System::Collections::ArrayList __declspec(property(get=__get_ctx_queue, put=__set_ctx_queue))  ctx_queue;

constexpr void __set_ctx_queue(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_ctx_queue() const;

 System::Collections::ArrayList __declspec(property(get=__get_wait_queue, put=__set_wait_queue))  wait_queue;

constexpr void __set_wait_queue(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get_wait_queue() const;

 System::Collections::Hashtable __declspec(property(get=__get_connections, put=__set_connections))  connections;

constexpr void __set_connections(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_connections() const;

 System::Net::ServiceNameStore __declspec(property(get=__get_defaultServiceNames, put=__set_defaultServiceNames))  defaultServiceNames;

constexpr void __set_defaultServiceNames(System::Net::ServiceNameStore value) ;

constexpr System::Net::ServiceNameStore __get_defaultServiceNames() const;

 System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy __declspec(property(get=__get_extendedProtectionPolicy, put=__set_extendedProtectionPolicy))  extendedProtectionPolicy;

constexpr void __set_extendedProtectionPolicy(System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy value) ;

constexpr System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy __get_extendedProtectionPolicy() const;


// Properties

 System::Net::AuthenticationSchemes __declspec(property(get=get_AuthenticationSchemes))  AuthenticationSchemes;

 System::Net::AuthenticationSchemeSelector __declspec(property(get=get_AuthenticationSchemeSelectorDelegate))  AuthenticationSchemeSelectorDelegate;

 bool __declspec(property(get=get_IgnoreWriteExceptions))  IgnoreWriteExceptions;

 bool __declspec(property(get=get_IsListening))  IsListening;

 System::Net::HttpListenerPrefixCollection __declspec(property(get=get_Prefixes))  Prefixes;

 ::StringW __declspec(property(get=get_Realm))  Realm;


// Methods

/// @brief Method LoadCertificateAndKey addr 0x285f4cc size 0x40c virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate LoadCertificateAndKey(System::Net::IPAddress addr, int32_t port) ;

/// @brief Method CreateSslStream addr 0x28638b0 size 0x190 virtual false final false
 System::Net::Security::SslStream CreateSslStream(System::IO::Stream innerStream, bool ownsStream, System::Net::Security::RemoteCertificateValidationCallback callback) ;

// Ctor Parameters []
explicit HttpListener() ;

/// @brief Method .ctor addr 0x28667f4 size 0x1ac virtual false final false
 void _ctor() ;

/// @brief Method get_AuthenticationSchemes addr 0x2866a30 size 0x8 virtual false final false
 System::Net::AuthenticationSchemes get_AuthenticationSchemes() ;

/// @brief Method get_AuthenticationSchemeSelectorDelegate addr 0x2866a38 size 0x8 virtual false final false
 System::Net::AuthenticationSchemeSelector get_AuthenticationSchemeSelectorDelegate() ;

/// @brief Method get_IgnoreWriteExceptions addr 0x2866a40 size 0x8 virtual false final false
 bool get_IgnoreWriteExceptions() ;

/// @brief Method get_IsListening addr 0x2866a48 size 0x8 virtual false final false
 bool get_IsListening() ;

/// @brief Method get_Prefixes addr 0x286271c size 0x18 virtual false final false
 System::Net::HttpListenerPrefixCollection get_Prefixes() ;

/// @brief Method get_Realm addr 0x2866ad0 size 0x8 virtual false final false
 ::StringW get_Realm() ;

/// @brief Method Close addr 0x2866ad8 size 0x34 virtual false final false
 void Close() ;

/// @brief Method Close addr 0x2866b0c size 0x74 virtual false final false
 void Close(bool force) ;

/// @brief Method Cleanup addr 0x2866b80 size 0xa90 virtual false final false
 void Cleanup(bool close_existing) ;

/// @brief Method BeginGetContext addr 0x2867610 size 0x2b4 virtual false final false
 System::IAsyncResult BeginGetContext(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndGetContext addr 0x2867988 size 0x2c8 virtual false final false
 System::Net::HttpListenerContext EndGetContext(System::IAsyncResult asyncResult) ;

/// @brief Method SelectAuthenticationScheme addr 0x2867c50 size 0x38 virtual false final false
 System::Net::AuthenticationSchemes SelectAuthenticationScheme(System::Net::HttpListenerContext context) ;

/// @brief Method GetContext addr 0x2867da8 size 0xfc virtual false final false
 System::Net::HttpListenerContext GetContext() ;

/// @brief Method Start addr 0x2867eec size 0x70 virtual false final false
 void Start() ;

/// @brief Method Stop addr 0x2867f5c size 0x20 virtual false final false
 void Stop() ;

/// @brief Method System.IDisposable.Dispose addr 0x2867f7c size 0x30 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method CheckDisposed addr 0x2866a50 size 0x80 virtual false final false
 void CheckDisposed() ;

/// @brief Method GetContextFromQueue addr 0x28678c4 size 0xc4 virtual false final false
 System::Net::HttpListenerContext GetContextFromQueue() ;

/// @brief Method RegisterContext addr 0x2864e28 size 0x36c virtual false final false
 void RegisterContext(System::Net::HttpListenerContext context) ;

/// @brief Method UnregisterContext addr 0x2860854 size 0x1c8 virtual false final false
 void UnregisterContext(System::Net::HttpListenerContext context) ;

/// @brief Method AddConnection addr 0x2864e00 size 0x28 virtual false final false
 void AddConnection(System::Net::HttpConnection cnc) ;

/// @brief Method RemoveConnection addr 0x2865194 size 0x24 virtual false final false
 void RemoveConnection(System::Net::HttpConnection cnc) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::HttpListener);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListener, "System.Net", "HttpListener");
