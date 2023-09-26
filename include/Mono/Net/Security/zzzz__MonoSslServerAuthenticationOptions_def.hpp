#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509RevocationMode;
}
namespace System::Net::Security {
class SslServerAuthenticationOptions;
}
namespace System::Net::Security {
struct EncryptionPolicy;
}
// Forward declare root types
namespace Mono::Net::Security {
class MonoSslServerAuthenticationOptions;
}
// Type: Mono.Net.Security::MonoSslServerAuthenticationOptions
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7709))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7711))
// CS Name: Mono.Net.Security.MonoSslServerAuthenticationOptions
class CORDL_TYPE MonoSslServerAuthenticationOptions : public Mono::Net::Security::MonoSslAuthenticationOptions {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MonoSslServerAuthenticationOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoSslServerAuthenticationOptions", modifiers: " const&", def_value: None }]
constexpr MonoSslServerAuthenticationOptions(MonoSslServerAuthenticationOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoSslServerAuthenticationOptions", modifiers: "&&", def_value: None }]
constexpr MonoSslServerAuthenticationOptions(MonoSslServerAuthenticationOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoSslServerAuthenticationOptions(void* ptr) noexcept : Mono::Net::Security::MonoSslAuthenticationOptions(ptr) {
}


  constexpr MonoSslServerAuthenticationOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoSslServerAuthenticationOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoSslServerAuthenticationOptions& operator=(MonoSslServerAuthenticationOptions&& o) noexcept = default;
  constexpr MonoSslServerAuthenticationOptions& operator=(MonoSslServerAuthenticationOptions const& o) noexcept = default;
                


// Fields

 System::Net::Security::SslServerAuthenticationOptions __declspec(property(get=__get__Options_k__BackingField, put=__set__Options_k__BackingField))  _Options_k__BackingField;

constexpr void __set__Options_k__BackingField(System::Net::Security::SslServerAuthenticationOptions value) ;

constexpr System::Net::Security::SslServerAuthenticationOptions __get__Options_k__BackingField() const;


// Properties

 System::Net::Security::SslServerAuthenticationOptions __declspec(property(get=get_Options))  Options;

 bool __declspec(property(get=get_ServerMode))  ServerMode;

 System::Security::Cryptography::X509Certificates::X509RevocationMode __declspec(property(put=set_CertificateRevocationCheckMode))  CertificateRevocationCheckMode;

 System::Net::Security::EncryptionPolicy __declspec(property(put=set_EncryptionPolicy))  EncryptionPolicy;

 System::Security::Authentication::SslProtocols __declspec(property(get=get_EnabledSslProtocols, put=set_EnabledSslProtocols))  EnabledSslProtocols;

 bool __declspec(property(get=get_ClientCertificateRequired, put=set_ClientCertificateRequired))  ClientCertificateRequired;

 ::StringW __declspec(property(get=get_TargetHost, put=set_TargetHost))  TargetHost;

 System::Security::Cryptography::X509Certificates::X509Certificate __declspec(property(get=get_ServerCertificate, put=set_ServerCertificate))  ServerCertificate;

 System::Security::Cryptography::X509Certificates::X509CertificateCollection __declspec(property(get=get_ClientCertificates, put=set_ClientCertificates))  ClientCertificates;


// Methods

/// @brief Method get_Options addr 0x26c39c8 size 0x8 virtual false final false
 System::Net::Security::SslServerAuthenticationOptions get_Options() ;

/// @brief Method get_ServerMode addr 0x26c39d0 size 0x8 virtual true final false
 bool get_ServerMode() ;

// Ctor Parameters []
explicit MonoSslServerAuthenticationOptions() ;

/// @brief Method .ctor addr 0x26c0e8c size 0x6c virtual false final false
 void _ctor() ;

/// @brief Method set_CertificateRevocationCheckMode addr 0x26c39d8 size 0x1c virtual true final false
 void set_CertificateRevocationCheckMode(System::Security::Cryptography::X509Certificates::X509RevocationMode value) ;

/// @brief Method set_EncryptionPolicy addr 0x26c39f4 size 0x1c virtual true final false
 void set_EncryptionPolicy(System::Net::Security::EncryptionPolicy value) ;

/// @brief Method get_EnabledSslProtocols addr 0x26c3a10 size 0x1c virtual true final false
 System::Security::Authentication::SslProtocols get_EnabledSslProtocols() ;

/// @brief Method set_EnabledSslProtocols addr 0x26c3a2c size 0x1c virtual true final false
 void set_EnabledSslProtocols(System::Security::Authentication::SslProtocols value) ;

/// @brief Method get_ClientCertificateRequired addr 0x26c3a48 size 0x1c virtual true final false
 bool get_ClientCertificateRequired() ;

/// @brief Method set_ClientCertificateRequired addr 0x26c3a64 size 0x20 virtual true final false
 void set_ClientCertificateRequired(bool value) ;

/// @brief Method get_TargetHost addr 0x26c3a84 size 0x40 virtual true final false
 ::StringW get_TargetHost() ;

/// @brief Method set_TargetHost addr 0x26c3ac4 size 0x40 virtual true final false
 void set_TargetHost(::StringW value) ;

/// @brief Method get_ServerCertificate addr 0x26c3b04 size 0x1c virtual true final false
 System::Security::Cryptography::X509Certificates::X509Certificate get_ServerCertificate() ;

/// @brief Method set_ServerCertificate addr 0x26c3b20 size 0x1c virtual true final false
 void set_ServerCertificate(System::Security::Cryptography::X509Certificates::X509Certificate value) ;

/// @brief Method get_ClientCertificates addr 0x26c3b3c size 0x40 virtual true final false
 System::Security::Cryptography::X509Certificates::X509CertificateCollection get_ClientCertificates() ;

/// @brief Method set_ClientCertificates addr 0x26c3b7c size 0x40 virtual true final false
 void set_ClientCertificates(System::Security::Cryptography::X509Certificates::X509CertificateCollection value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::MonoSslServerAuthenticationOptions);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MonoSslServerAuthenticationOptions, "Mono.Net.Security", "MonoSslServerAuthenticationOptions");
