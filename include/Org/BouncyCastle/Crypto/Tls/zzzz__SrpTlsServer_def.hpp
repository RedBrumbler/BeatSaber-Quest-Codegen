#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsServer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class TlsKeyExchange;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpIdentityManager;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipherFactory;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSrpLoginParameters;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCredentials;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsSignerCredentials;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class SrpTlsServer;
}
// Type: Org.BouncyCastle.Crypto.Tls::SrpTlsServer
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1173))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1281))
// CS Name: Org.BouncyCastle.Crypto.Tls.SrpTlsServer
class CORDL_TYPE SrpTlsServer : public Org::BouncyCastle::Crypto::Tls::AbstractTlsServer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~SrpTlsServer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SrpTlsServer", modifiers: " const&", def_value: None }]
constexpr SrpTlsServer(SrpTlsServer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SrpTlsServer", modifiers: "&&", def_value: None }]
constexpr SrpTlsServer(SrpTlsServer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SrpTlsServer(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsServer(ptr) {
}


  constexpr SrpTlsServer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SrpTlsServer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SrpTlsServer& operator=(SrpTlsServer&& o) noexcept = default;
  constexpr SrpTlsServer& operator=(SrpTlsServer const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager __declspec(property(get=__get_mSrpIdentityManager, put=__set_mSrpIdentityManager))  mSrpIdentityManager;

constexpr void __set_mSrpIdentityManager(Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager __get_mSrpIdentityManager() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mSrpIdentity, put=__set_mSrpIdentity))  mSrpIdentity;

constexpr void __set_mSrpIdentity(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mSrpIdentity() const;

 Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters __declspec(property(get=__get_mLoginParameters, put=__set_mLoginParameters))  mLoginParameters;

constexpr void __set_mLoginParameters(Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsSrpLoginParameters __get_mLoginParameters() const;


// Methods

// Ctor Parameters [CppParam { name: "srpIdentityManager", ty: "Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager", modifiers: "", def_value: None }]
explicit SrpTlsServer(Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager srpIdentityManager) ;

/// @brief Method .ctor addr 0xf19464 size 0x80 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager srpIdentityManager) ;

// Ctor Parameters [CppParam { name: "cipherFactory", ty: "Org::BouncyCastle::Crypto::Tls::TlsCipherFactory", modifiers: "", def_value: None }, CppParam { name: "srpIdentityManager", ty: "Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager", modifiers: "", def_value: None }]
explicit SrpTlsServer(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager srpIdentityManager) ;

/// @brief Method .ctor addr 0xf194e4 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::TlsCipherFactory cipherFactory, Org::BouncyCastle::Crypto::Tls::TlsSrpIdentityManager srpIdentityManager) ;

/// @brief Method GetDsaSignerCredentials addr 0xf19510 size 0x44 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials GetDsaSignerCredentials() ;

/// @brief Method GetRsaSignerCredentials addr 0xf19554 size 0x44 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsSignerCredentials GetRsaSignerCredentials() ;

/// @brief Method GetCipherSuites addr 0xf19598 size 0x70 virtual true final false
 ::ArrayW<int32_t> GetCipherSuites() ;

/// @brief Method ProcessClientExtensions addr 0xf19608 size 0x34 virtual true final false
 void ProcessClientExtensions(System::Collections::IDictionary clientExtensions) ;

/// @brief Method GetSelectedCipherSuite addr 0xf1963c size 0x12c virtual true final false
 int32_t GetSelectedCipherSuite() ;

/// @brief Method GetCredentials addr 0xf19768 size 0xe8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCredentials GetCredentials() ;

/// @brief Method GetKeyExchange addr 0xf19850 size 0xc0 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange GetKeyExchange() ;

/// @brief Method CreateSrpKeyExchange addr 0xf19910 size 0x84 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsKeyExchange CreateSrpKeyExchange(int32_t keyExchange) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::SrpTlsServer);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::SrpTlsServer, "Org.BouncyCastle.Crypto.Tls", "SrpTlsServer");
