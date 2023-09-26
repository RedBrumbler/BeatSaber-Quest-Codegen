#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/zzzz__CertificationRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactory;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Crypto {
class IVerifierFactoryProvider;
}
namespace Org::BouncyCastle::Asn1::Pkcs {
class RsassaPssParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs10CertificationRequest;
}
// Type: Org.BouncyCastle.Pkcs::Pkcs10CertificationRequest
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(229))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1696))
// CS Name: Org.BouncyCastle.Pkcs.Pkcs10CertificationRequest
class CORDL_TYPE Pkcs10CertificationRequest : public Org::BouncyCastle::Asn1::Pkcs::CertificationRequest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Pkcs10CertificationRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs10CertificationRequest", modifiers: " const&", def_value: None }]
constexpr Pkcs10CertificationRequest(Pkcs10CertificationRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs10CertificationRequest", modifiers: "&&", def_value: None }]
constexpr Pkcs10CertificationRequest(Pkcs10CertificationRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs10CertificationRequest(void* ptr) noexcept : Org::BouncyCastle::Asn1::Pkcs::CertificationRequest(ptr) {
}


  constexpr Pkcs10CertificationRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs10CertificationRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs10CertificationRequest& operator=(Pkcs10CertificationRequest&& o) noexcept = default;
  constexpr Pkcs10CertificationRequest& operator=(Pkcs10CertificationRequest const& o) noexcept = default;
                


// Fields

static System::Collections::IDictionary __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_algorithms() ;

static System::Collections::IDictionary __declspec(property(get=__get_exParams, put=__set_exParams))  exParams;

static void __set_exParams(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_exParams() ;

static System::Collections::IDictionary __declspec(property(get=__get_keyAlgorithms, put=__set_keyAlgorithms))  keyAlgorithms;

static void __set_keyAlgorithms(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_keyAlgorithms() ;

static System::Collections::IDictionary __declspec(property(get=__get_oids, put=__set_oids))  oids;

static void __set_oids(System::Collections::IDictionary value) ;

static System::Collections::IDictionary __get_oids() ;

static Org::BouncyCastle::Utilities::Collections::ISet __declspec(property(get=__get_noParams, put=__set_noParams))  noParams;

static void __set_noParams(Org::BouncyCastle::Utilities::Collections::ISet value) ;

static Org::BouncyCastle::Utilities::Collections::ISet __get_noParams() ;


// Methods

/// @brief Method CreatePssParams addr 0x105c494 size 0x12c virtual false final false
static Org::BouncyCastle::Asn1::Pkcs::RsassaPssParameters CreatePssParams(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier hashAlgId, int32_t saltSize) ;

// Ctor Parameters []
explicit Pkcs10CertificationRequest() ;

/// @brief Method .ctor addr 0x105c5c0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "encoded", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit Pkcs10CertificationRequest(::ArrayW<uint8_t> encoded) ;

/// @brief Method .ctor addr 0x1056550 size 0x98 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoded) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Pkcs10CertificationRequest(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x105c5c8 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit Pkcs10CertificationRequest(System::IO::Stream input) ;

/// @brief Method .ctor addr 0x105c5d0 size 0x98 virtual false final false
 void _ctor(System::IO::Stream input) ;

// Ctor Parameters [CppParam { name: "signatureAlgorithm", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "subject", ty: "Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "signingKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit Pkcs10CertificationRequest(::StringW signatureAlgorithm, Org::BouncyCastle::Asn1::X509::X509Name subject, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, Org::BouncyCastle::Asn1::Asn1Set attributes, Org::BouncyCastle::Crypto::AsymmetricKeyParameter signingKey) ;

/// @brief Method .ctor addr 0x105c668 size 0xa4 virtual false final false
 void _ctor(::StringW signatureAlgorithm, Org::BouncyCastle::Asn1::X509::X509Name subject, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, Org::BouncyCastle::Asn1::Asn1Set attributes, Org::BouncyCastle::Crypto::AsymmetricKeyParameter signingKey) ;

// Ctor Parameters [CppParam { name: "signatureFactory", ty: "Org::BouncyCastle::Crypto::ISignatureFactory", modifiers: "", def_value: None }, CppParam { name: "subject", ty: "Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }, CppParam { name: "signingKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }]
explicit Pkcs10CertificationRequest(Org::BouncyCastle::Crypto::ISignatureFactory signatureFactory, Org::BouncyCastle::Asn1::X509::X509Name subject, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, Org::BouncyCastle::Asn1::Asn1Set attributes, Org::BouncyCastle::Crypto::AsymmetricKeyParameter signingKey) ;

/// @brief Method .ctor addr 0x105c84c size 0x4 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::ISignatureFactory signatureFactory, Org::BouncyCastle::Asn1::X509::X509Name subject, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, Org::BouncyCastle::Asn1::Asn1Set attributes, Org::BouncyCastle::Crypto::AsymmetricKeyParameter signingKey) ;

// Ctor Parameters [CppParam { name: "signatureFactory", ty: "Org::BouncyCastle::Crypto::ISignatureFactory", modifiers: "", def_value: None }, CppParam { name: "subject", ty: "Org::BouncyCastle::Asn1::X509::X509Name", modifiers: "", def_value: None }, CppParam { name: "publicKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "attributes", ty: "Org::BouncyCastle::Asn1::Asn1Set", modifiers: "", def_value: None }]
explicit Pkcs10CertificationRequest(Org::BouncyCastle::Crypto::ISignatureFactory signatureFactory, Org::BouncyCastle::Asn1::X509::X509Name subject, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, Org::BouncyCastle::Asn1::Asn1Set attributes) ;

/// @brief Method .ctor addr 0x105c70c size 0x140 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::ISignatureFactory signatureFactory, Org::BouncyCastle::Asn1::X509::X509Name subject, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, Org::BouncyCastle::Asn1::Asn1Set attributes) ;

/// @brief Method Init addr 0x105c850 size 0x468 virtual false final false
 void Init(Org::BouncyCastle::Crypto::ISignatureFactory signatureFactory, Org::BouncyCastle::Asn1::X509::X509Name subject, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, Org::BouncyCastle::Asn1::Asn1Set attributes) ;

/// @brief Method GetPublicKey addr 0x105ccb8 size 0x20 virtual false final false
 Org::BouncyCastle::Crypto::AsymmetricKeyParameter GetPublicKey() ;

/// @brief Method Verify addr 0x105ccd8 size 0x1c virtual false final false
 bool Verify() ;

/// @brief Method Verify addr 0x105ccf4 size 0x74 virtual false final false
 bool Verify(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method Verify addr 0x105cd68 size 0xb4 virtual false final false
 bool Verify(Org::BouncyCastle::Crypto::IVerifierFactoryProvider verifierProvider) ;

/// @brief Method Verify addr 0x105ce1c size 0x420 virtual false final false
 bool Verify(Org::BouncyCastle::Crypto::IVerifierFactory verifier) ;

/// @brief Method SetSignatureParameters addr 0x105d23c size 0x17c virtual false final false
 void SetSignatureParameters(Org::BouncyCastle::Crypto::ISigner signature, Org::BouncyCastle::Asn1::Asn1Encodable asn1Params) ;

/// @brief Method GetSignatureName addr 0x105d3b8 size 0x1b0 virtual false final false
static ::StringW GetSignatureName(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier sigAlgId) ;

/// @brief Method GetDigestAlgName addr 0x105d568 size 0x370 virtual false final false
static ::StringW GetDigestAlgName(Org::BouncyCastle::Asn1::DerObjectIdentifier digestAlgOID) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkcs::Pkcs10CertificationRequest, "Org.BouncyCastle.Pkcs", "Pkcs10CertificationRequest");
