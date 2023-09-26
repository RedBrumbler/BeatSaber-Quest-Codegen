#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsaPrivateKeyStructure;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace System::Security::Cryptography {
class CspParameters;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace System::Security::Cryptography {
class DSA;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaPrivateCrtKeyParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DsaPublicKeyParameters;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class DotNetUtilities;
}
// Type: Org.BouncyCastle.Security::DotNetUtilities
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1746))
// CS Name: Org.BouncyCastle.Security.DotNetUtilities
class CORDL_TYPE DotNetUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DotNetUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "DotNetUtilities", modifiers: " const&", def_value: None }]
constexpr DotNetUtilities(DotNetUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DotNetUtilities", modifiers: "&&", def_value: None }]
constexpr DotNetUtilities(DotNetUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DotNetUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DotNetUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DotNetUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DotNetUtilities& operator=(DotNetUtilities&& o) noexcept = default;
  constexpr DotNetUtilities& operator=(DotNetUtilities const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DotNetUtilities() ;

/// @brief Method .ctor addr 0x10abca0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ToX509Certificate addr 0x10abca8 size 0x7c virtual false final false
static System::Security::Cryptography::X509Certificates::X509Certificate ToX509Certificate(Org::BouncyCastle::Asn1::X509::X509CertificateStructure x509Struct) ;

/// @brief Method ToX509Certificate addr 0x10abd24 size 0x84 virtual false final false
static System::Security::Cryptography::X509Certificates::X509Certificate ToX509Certificate(Org::BouncyCastle::X509::X509Certificate x509Cert) ;

/// @brief Method FromX509Certificate addr 0x10abda8 size 0x7c virtual false final false
static Org::BouncyCastle::X509::X509Certificate FromX509Certificate(System::Security::Cryptography::X509Certificates::X509Certificate x509Cert) ;

/// @brief Method GetDsaKeyPair addr 0x10abe24 size 0x50 virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GetDsaKeyPair(System::Security::Cryptography::DSA dsa) ;

/// @brief Method GetDsaKeyPair addr 0x10abe74 size 0x234 virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GetDsaKeyPair(System::Security::Cryptography::DSAParameters dp) ;

/// @brief Method GetDsaPublicKey addr 0x10ac0a8 size 0x50 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters GetDsaPublicKey(System::Security::Cryptography::DSA dsa) ;

/// @brief Method GetDsaPublicKey addr 0x10ac0f8 size 0x1a8 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters GetDsaPublicKey(System::Security::Cryptography::DSAParameters dp) ;

/// @brief Method GetRsaKeyPair addr 0x10ac2a0 size 0x50 virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GetRsaKeyPair(System::Security::Cryptography::RSA rsa) ;

/// @brief Method GetRsaKeyPair addr 0x10ac2f0 size 0x244 virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GetRsaKeyPair(System::Security::Cryptography::RSAParameters rp) ;

/// @brief Method GetRsaPublicKey addr 0x10ac534 size 0x50 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters GetRsaPublicKey(System::Security::Cryptography::RSA rsa) ;

/// @brief Method GetRsaPublicKey addr 0x10ac584 size 0xd0 virtual false final false
static Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters GetRsaPublicKey(System::Security::Cryptography::RSAParameters rp) ;

/// @brief Method GetKeyPair addr 0x10ac654 size 0x11c virtual false final false
static Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GetKeyPair(System::Security::Cryptography::AsymmetricAlgorithm privateKey) ;

/// @brief Method ToRSA addr 0x10ac770 size 0x24 virtual false final false
static System::Security::Cryptography::RSA ToRSA(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters rsaKey) ;

/// @brief Method ToRSA addr 0x10ac964 size 0x2c virtual false final false
static System::Security::Cryptography::RSA ToRSA(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters rsaKey, System::Security::Cryptography::CspParameters csp) ;

/// @brief Method ToRSA addr 0x10aca40 size 0x24 virtual false final false
static System::Security::Cryptography::RSA ToRSA(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters privKey) ;

/// @brief Method ToRSA addr 0x10acb58 size 0x2c virtual false final false
static System::Security::Cryptography::RSA ToRSA(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters privKey, System::Security::Cryptography::CspParameters csp) ;

/// @brief Method ToRSA addr 0x10acb84 size 0x24 virtual false final false
static System::Security::Cryptography::RSA ToRSA(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure privKey) ;

/// @brief Method ToRSA addr 0x10acc9c size 0x2c virtual false final false
static System::Security::Cryptography::RSA ToRSA(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure privKey, System::Security::Cryptography::CspParameters csp) ;

/// @brief Method ToRSAParameters addr 0x10ac794 size 0x9c virtual false final false
static System::Security::Cryptography::RSAParameters ToRSAParameters(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters rsaKey) ;

/// @brief Method ToRSAParameters addr 0x10aca64 size 0xf4 virtual false final false
static System::Security::Cryptography::RSAParameters ToRSAParameters(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters privKey) ;

/// @brief Method ToRSAParameters addr 0x10acba8 size 0xf4 virtual false final false
static System::Security::Cryptography::RSAParameters ToRSAParameters(Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure privKey) ;

/// @brief Method ConvertRSAParametersField addr 0x10accc8 size 0x104 virtual false final false
static ::ArrayW<uint8_t> ConvertRSAParametersField(Org::BouncyCastle::Math::BigInteger n, int32_t size) ;

/// @brief Method CreateRSAProvider addr 0x10ac830 size 0x134 virtual false final false
static System::Security::Cryptography::RSA CreateRSAProvider(System::Security::Cryptography::RSAParameters rp) ;

/// @brief Method CreateRSAProvider addr 0x10ac990 size 0xb0 virtual false final false
static System::Security::Cryptography::RSA CreateRSAProvider(System::Security::Cryptography::RSAParameters rp, System::Security::Cryptography::CspParameters csp) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
NEED_NO_BOX(Org::BouncyCastle::Security::DotNetUtilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::DotNetUtilities, "Org.BouncyCastle.Security", "DotNetUtilities");
