#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net {
class ServerCertValidationCallback;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace Mono::Security::Interface {
class ValidationResult;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System {
template<typename T>
class WeakReference_1;
}
namespace System::Net::Security {
class LocalCertSelectionCallback;
}
namespace System::Net::Security {
class SslStream;
}
namespace Mono::Security::Interface {
class ICertificateValidator;
}
namespace Mono::Net::Security {
class MobileTlsProvider;
}
namespace Mono::Net::Security {
class MonoTlsStream;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace Mono::Net::Security {
class ChainValidationHelper;
}
namespace Mono::Net::Security {
class Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0;
}
// Type: ::<>c__DisplayClass11_0
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7697))
// CS Name: Mono.Net.Security.ChainValidationHelper::<>c__DisplayClass11_0
class CORDL_TYPE Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0", modifiers: " const&", def_value: None }]
constexpr Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0(Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
constexpr Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0(Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0& operator=(Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0&& o) noexcept = default;
  constexpr Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0& operator=(Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0 const& o) noexcept = default;
                


// Fields

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=__get_settings, put=__set_settings))  settings;

constexpr void __set_settings(Mono::Security::Interface::MonoTlsSettings value) ;

constexpr Mono::Security::Interface::MonoTlsSettings __get_settings() const;


// Methods

// Ctor Parameters []
explicit Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0() ;

/// @brief Method .ctor addr 0x26bfe04 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetValidationCallback>b__0 addr 0x26c0508 size 0x160 virtual false final false
 bool _GetValidationCallback_b__0(::bs_hook::Il2CppWrapperType s, System::Security::Cryptography::X509Certificates::X509Certificate c, System::Security::Cryptography::X509Certificates::X509Chain ch, System::Net::Security::SslPolicyErrors e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
// Type: Mono.Net.Security::ChainValidationHelper
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7698))
// CS Name: Mono.Net.Security.ChainValidationHelper
class CORDL_TYPE ChainValidationHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass11_0 = Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0;

/// @brief Convert operator to Mono::Security::Interface::ICertificateValidator
constexpr operator  Mono::Security::Interface::ICertificateValidator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ChainValidationHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChainValidationHelper", modifiers: " const&", def_value: None }]
constexpr ChainValidationHelper(ChainValidationHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChainValidationHelper", modifiers: "&&", def_value: None }]
constexpr ChainValidationHelper(ChainValidationHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChainValidationHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ChainValidationHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChainValidationHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChainValidationHelper& operator=(ChainValidationHelper&& o) noexcept = default;
  constexpr ChainValidationHelper& operator=(ChainValidationHelper const& o) noexcept = default;
                


// Fields

 System::WeakReference_1<System::Net::Security::SslStream> __declspec(property(get=__get_owner, put=__set_owner))  owner;

constexpr void __set_owner(System::WeakReference_1<System::Net::Security::SslStream> value) ;

constexpr System::WeakReference_1<System::Net::Security::SslStream> __get_owner() const;

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=__get_settings, put=__set_settings))  settings;

constexpr void __set_settings(Mono::Security::Interface::MonoTlsSettings value) ;

constexpr Mono::Security::Interface::MonoTlsSettings __get_settings() const;

 Mono::Net::Security::MobileTlsProvider __declspec(property(get=__get_provider, put=__set_provider))  provider;

constexpr void __set_provider(Mono::Net::Security::MobileTlsProvider value) ;

constexpr Mono::Net::Security::MobileTlsProvider __get_provider() const;

 System::Net::ServerCertValidationCallback __declspec(property(get=__get_certValidationCallback, put=__set_certValidationCallback))  certValidationCallback;

constexpr void __set_certValidationCallback(System::Net::ServerCertValidationCallback value) ;

constexpr System::Net::ServerCertValidationCallback __get_certValidationCallback() const;

 System::Net::Security::LocalCertSelectionCallback __declspec(property(get=__get_certSelectionCallback, put=__set_certSelectionCallback))  certSelectionCallback;

constexpr void __set_certSelectionCallback(System::Net::Security::LocalCertSelectionCallback value) ;

constexpr System::Net::Security::LocalCertSelectionCallback __get_certSelectionCallback() const;

 Mono::Net::Security::MonoTlsStream __declspec(property(get=__get_tlsStream, put=__set_tlsStream))  tlsStream;

constexpr void __set_tlsStream(Mono::Net::Security::MonoTlsStream value) ;

constexpr Mono::Net::Security::MonoTlsStream __get_tlsStream() const;

 System::Net::HttpWebRequest __declspec(property(get=__get_request, put=__set_request))  request;

constexpr void __set_request(System::Net::HttpWebRequest value) ;

constexpr System::Net::HttpWebRequest __get_request() const;


// Properties

 Mono::Security::Interface::MonoTlsSettings __declspec(property(get=get_Settings))  Settings;


// Methods

/// @brief Method GetInternalValidator addr 0x26bf768 size 0xe0 virtual false final false
static Mono::Net::Security::ChainValidationHelper GetInternalValidator(System::Net::Security::SslStream owner, Mono::Net::Security::MobileTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings) ;

/// @brief Method Create addr 0x26bfabc size 0x8c virtual false final false
static Mono::Net::Security::ChainValidationHelper Create(Mono::Net::Security::MobileTlsProvider provider, ByRef<Mono::Security::Interface::MonoTlsSettings> settings, Mono::Net::Security::MonoTlsStream stream) ;

// Ctor Parameters [CppParam { name: "owner", ty: "System::Net::Security::SslStream", modifiers: "", def_value: None }, CppParam { name: "provider", ty: "Mono::Net::Security::MobileTlsProvider", modifiers: "", def_value: None }, CppParam { name: "settings", ty: "Mono::Security::Interface::MonoTlsSettings", modifiers: "", def_value: None }, CppParam { name: "cloneSettings", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "Mono::Net::Security::MonoTlsStream", modifiers: "", def_value: None }]
explicit ChainValidationHelper(System::Net::Security::SslStream owner, Mono::Net::Security::MobileTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings, bool cloneSettings, Mono::Net::Security::MonoTlsStream stream) ;

/// @brief Method .ctor addr 0x26bf848 size 0x274 virtual false final false
 void _ctor(System::Net::Security::SslStream owner, Mono::Net::Security::MobileTlsProvider provider, Mono::Security::Interface::MonoTlsSettings settings, bool cloneSettings, Mono::Net::Security::MonoTlsStream stream) ;

/// @brief Method GetValidationCallback addr 0x26bfc64 size 0xf0 virtual false final false
static System::Net::ServerCertValidationCallback GetValidationCallback(Mono::Security::Interface::MonoTlsSettings settings) ;

/// @brief Method DefaultSelectionCallback addr 0x26bfe0c size 0x3c virtual false final false
static System::Security::Cryptography::X509Certificates::X509Certificate DefaultSelectionCallback(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers) ;

/// @brief Method get_Settings addr 0x26bfe48 size 0x8 virtual true final true
 Mono::Security::Interface::MonoTlsSettings get_Settings() ;

/// @brief Method SelectClientCertificate addr 0x26bfe50 size 0x3c virtual true final true
 bool SelectClientCertificate(::StringW targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate remoteCertificate, ::ArrayW<::StringW> acceptableIssuers, ByRef<System::Security::Cryptography::X509Certificates::X509Certificate> clientCertificate) ;

/// @brief Method ValidateCertificate addr 0x26bfe8c size 0xd4 virtual false final false
 Mono::Security::Interface::ValidationResult ValidateCertificate(::StringW host, bool serverMode, System::Security::Cryptography::X509Certificates::X509Certificate leaf, System::Security::Cryptography::X509Certificates::X509Chain chain) ;

/// @brief Method ValidateChain addr 0x26bff60 size 0xdc virtual false final false
 Mono::Security::Interface::ValidationResult ValidateChain(::StringW host, bool server, System::Security::Cryptography::X509Certificates::X509Certificate leaf, System::Security::Cryptography::X509Certificates::X509Chain chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection certs, System::Net::Security::SslPolicyErrors errors) ;

/// @brief Method ValidateChain addr 0x26c003c size 0x410 virtual false final false
 Mono::Security::Interface::ValidationResult ValidateChain(::StringW host, bool server, System::Security::Cryptography::X509Certificates::X509Certificate leaf, ByRef<System::Security::Cryptography::X509Certificates::X509Chain> chain, System::Security::Cryptography::X509Certificates::X509CertificateCollection certs, System::Net::Security::SslPolicyErrors errors) ;

/// @brief Method InvokeCallback addr 0x26c044c size 0xb4 virtual false final false
 bool InvokeCallback(System::Security::Cryptography::X509Certificates::X509Certificate leaf, System::Security::Cryptography::X509Certificates::X509Chain chain, System::Net::Security::SslPolicyErrors errors) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Net::Security
NEED_NO_BOX(Mono::Net::Security::ChainValidationHelper);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::ChainValidationHelper, "Mono.Net.Security", "ChainValidationHelper");
NEED_NO_BOX(Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Mono__Net__Security__ChainValidationHelper____c__DisplayClass11_0, "Mono.Net.Security", "ChainValidationHelper/<>c__DisplayClass11_0");
