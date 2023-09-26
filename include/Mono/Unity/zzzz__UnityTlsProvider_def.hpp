#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "Mono/Net/Security/zzzz__MobileTlsProvider_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System {
struct Guid;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_x509_ref;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Security {
class SslStream;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace Mono::Unity {
struct Mono__Unity__UnityTls__unitytls_x509verify_result;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Security::Interface {
class MonoTlsSettings;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
namespace Mono::Net::Security {
class ChainValidationHelper;
}
// Forward declare root types
namespace Mono::Unity {
class UnityTlsProvider;
}
// Type: Mono.Unity::UnityTlsProvider
namespace Mono::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7708))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7682))
// CS Name: Mono.Unity.UnityTlsProvider
class CORDL_TYPE UnityTlsProvider : public Mono::Net::Security::MobileTlsProvider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityTlsProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityTlsProvider", modifiers: " const&", def_value: None }]
constexpr UnityTlsProvider(UnityTlsProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityTlsProvider", modifiers: "&&", def_value: None }]
constexpr UnityTlsProvider(UnityTlsProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityTlsProvider(void* ptr) noexcept : Mono::Net::Security::MobileTlsProvider(ptr) {
}


  constexpr UnityTlsProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityTlsProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityTlsProvider& operator=(UnityTlsProvider&& o) noexcept = default;
  constexpr UnityTlsProvider& operator=(UnityTlsProvider const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_Name))  Name;

 System::Guid __declspec(property(get=get_ID))  ID;

 bool __declspec(property(get=get_SupportsSslStream))  SupportsSslStream;

 bool __declspec(property(get=get_SupportsMonoExtensions))  SupportsMonoExtensions;

 bool __declspec(property(get=get_SupportsConnectionInfo))  SupportsConnectionInfo;

 bool __declspec(property(get=get_SupportsCleanShutdown))  SupportsCleanShutdown;

 System::Security::Authentication::SslProtocols __declspec(property(get=get_SupportedProtocols))  SupportedProtocols;


// Methods

/// @brief Method get_Name addr 0x26bc3c4 size 0x40 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_ID addr 0x26bc404 size 0x58 virtual true final false
 System::Guid get_ID() ;

/// @brief Method get_SupportsSslStream addr 0x26bc45c size 0x8 virtual true final false
 bool get_SupportsSslStream() ;

/// @brief Method get_SupportsMonoExtensions addr 0x26bc464 size 0x8 virtual true final false
 bool get_SupportsMonoExtensions() ;

/// @brief Method get_SupportsConnectionInfo addr 0x26bc46c size 0x8 virtual true final false
 bool get_SupportsConnectionInfo() ;

/// @brief Method get_SupportsCleanShutdown addr 0x26bc474 size 0x8 virtual true final false
 bool get_SupportsCleanShutdown() ;

/// @brief Method get_SupportedProtocols addr 0x26bc47c size 0x8 virtual true final false
 System::Security::Authentication::SslProtocols get_SupportedProtocols() ;

/// @brief Method CreateSslStream addr 0x26bc484 size 0x90 virtual true final false
 Mono::Net::Security::MobileAuthenticatedStream CreateSslStream(System::Net::Security::SslStream sslStream, System::IO::Stream innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsSettings settings) ;

/// @brief Method x509verify_callback addr 0x26bc360 size 0x64 virtual false final false
static Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result x509verify_callback(void* userData, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509_ref cert, Mono::Unity::Mono__Unity__UnityTls__unitytls_x509verify_result result, void* errorState) ;

/// @brief Method ValidateCertificate addr 0x26bc5a8 size 0x978 virtual true final false
 bool ValidateCertificate(Mono::Net::Security::ChainValidationHelper validator, ::StringW targetHost, bool serverMode, System::Security::Cryptography::X509Certificates::X509CertificateCollection certificates, bool wantsChain, ByRef<System::Security::Cryptography::X509Certificates::X509Chain> chain, ByRef<System::Net::Security::SslPolicyErrors> errors, ByRef<int32_t> status11) ;

// Ctor Parameters []
explicit UnityTlsProvider() ;

/// @brief Method .ctor addr 0x26bcf20 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Unity
NEED_NO_BOX(Mono::Unity::UnityTlsProvider);
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTlsProvider, "Mono.Unity", "UnityTlsProvider");
