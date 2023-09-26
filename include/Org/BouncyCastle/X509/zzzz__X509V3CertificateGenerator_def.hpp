#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1::X509 {
class X509ExtensionsGenerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class V3TbsCertificateGenerator;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509V3CertificateGenerator;
}
// Type: Org.BouncyCastle.X509::X509V3CertificateGenerator
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1874))
// CS Name: Org.BouncyCastle.X509.X509V3CertificateGenerator
class CORDL_TYPE X509V3CertificateGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~X509V3CertificateGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509V3CertificateGenerator", modifiers: " const&", def_value: None }]
constexpr X509V3CertificateGenerator(X509V3CertificateGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509V3CertificateGenerator", modifiers: "&&", def_value: None }]
constexpr X509V3CertificateGenerator(X509V3CertificateGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509V3CertificateGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509V3CertificateGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509V3CertificateGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509V3CertificateGenerator& operator=(X509V3CertificateGenerator&& o) noexcept = default;
  constexpr X509V3CertificateGenerator& operator=(X509V3CertificateGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator __declspec(property(get=__get_extGenerator, put=__set_extGenerator))  extGenerator;

constexpr void __set_extGenerator(Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator value) ;

constexpr Org::BouncyCastle::Asn1::X509::X509ExtensionsGenerator __get_extGenerator() const;

 Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator __declspec(property(get=__get_tbsGen, put=__set_tbsGen))  tbsGen;

constexpr void __set_tbsGen(Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator value) ;

constexpr Org::BouncyCastle::Asn1::X509::V3TbsCertificateGenerator __get_tbsGen() const;

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_sigOid, put=__set_sigOid))  sigOid;

constexpr void __set_sigOid(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_sigOid() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_sigAlgId, put=__set_sigAlgId))  sigAlgId;

constexpr void __set_sigAlgId(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_sigAlgId() const;

 ::StringW __declspec(property(get=__get_signatureAlgorithm, put=__set_signatureAlgorithm))  signatureAlgorithm;

constexpr void __set_signatureAlgorithm(::StringW value) ;

constexpr ::StringW __get_signatureAlgorithm() const;


// Properties

 System::Collections::IEnumerable __declspec(property(get=get_SignatureAlgNames))  SignatureAlgNames;


// Methods

// Ctor Parameters []
explicit X509V3CertificateGenerator() ;

/// @brief Method .ctor addr 0x1108fd0 size 0x9c virtual false final false
 void _ctor() ;

/// @brief Method Reset addr 0x110906c size 0x6c virtual false final false
 void Reset() ;

/// @brief Method SetSerialNumber addr 0x11090d8 size 0xe0 virtual false final false
 void SetSerialNumber(Org::BouncyCastle::Math::BigInteger serialNumber) ;

/// @brief Method SetIssuerDN addr 0x11091b8 size 0x1c virtual false final false
 void SetIssuerDN(Org::BouncyCastle::Asn1::X509::X509Name issuer) ;

/// @brief Method SetNotBefore addr 0x11091d4 size 0x78 virtual false final false
 void SetNotBefore(System::DateTime date) ;

/// @brief Method SetNotAfter addr 0x110924c size 0x78 virtual false final false
 void SetNotAfter(System::DateTime date) ;

/// @brief Method SetSubjectDN addr 0x11092c4 size 0x1c virtual false final false
 void SetSubjectDN(Org::BouncyCastle::Asn1::X509::X509Name subject) ;

/// @brief Method SetPublicKey addr 0x11092e0 size 0x24 virtual false final false
 void SetPublicKey(Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method SetSignatureAlgorithm addr 0x1109304 size 0x16c virtual false final false
 void SetSignatureAlgorithm(::StringW signatureAlgorithm) ;

/// @brief Method SetSubjectUniqueID addr 0x1109470 size 0x20 virtual false final false
 void SetSubjectUniqueID(::ArrayW<bool> uniqueID) ;

/// @brief Method SetIssuerUniqueID addr 0x11095e8 size 0x20 virtual false final false
 void SetIssuerUniqueID(::ArrayW<bool> uniqueID) ;

/// @brief Method booleanToBitString addr 0x1109490 size 0x158 virtual false final false
 Org::BouncyCastle::Asn1::DerBitString booleanToBitString(::ArrayW<bool> id) ;

/// @brief Method AddExtension addr 0x1109608 size 0x98 virtual false final false
 void AddExtension(::StringW oid, bool critical, Org::BouncyCastle::Asn1::Asn1Encodable extensionValue) ;

/// @brief Method AddExtension addr 0x11096a0 size 0x20 virtual false final false
 void AddExtension(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, Org::BouncyCastle::Asn1::Asn1Encodable extensionValue) ;

/// @brief Method AddExtension addr 0x11096c0 size 0xc8 virtual false final false
 void AddExtension(::StringW oid, bool critical, ::ArrayW<uint8_t> extensionValue) ;

/// @brief Method AddExtension addr 0x1109788 size 0x98 virtual false final false
 void AddExtension(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, ::ArrayW<uint8_t> extensionValue) ;

/// @brief Method CopyAndAddExtension addr 0x1109820 size 0x8c virtual false final false
 void CopyAndAddExtension(::StringW oid, bool critical, Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method CopyAndAddExtension addr 0x11098ac size 0x1ac virtual false final false
 void CopyAndAddExtension(Org::BouncyCastle::Asn1::DerObjectIdentifier oid, bool critical, Org::BouncyCastle::X509::X509Certificate cert) ;

/// @brief Method Generate addr 0x1109a58 size 0x8 virtual false final false
 Org::BouncyCastle::X509::X509Certificate Generate(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method Generate addr 0x1109a60 size 0x84 virtual false final false
 Org::BouncyCastle::X509::X509Certificate Generate(Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, Org::BouncyCastle::Security::SecureRandom random) ;

/// @brief Method Generate addr 0x1109ae4 size 0x4a8 virtual false final false
 Org::BouncyCastle::X509::X509Certificate Generate(Org::BouncyCastle::Crypto::ISignatureFactory signatureCalculatorFactory) ;

/// @brief Method GenerateJcaObject addr 0x1109f8c size 0xd8 virtual false final false
 Org::BouncyCastle::X509::X509Certificate GenerateJcaObject(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure tbsCert, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier sigAlg, ::ArrayW<uint8_t> signature) ;

/// @brief Method get_SignatureAlgNames addr 0x110a064 size 0x4c virtual false final false
 System::Collections::IEnumerable get_SignatureAlgNames() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
NEED_NO_BOX(Org::BouncyCastle::X509::X509V3CertificateGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509V3CertificateGenerator, "Org.BouncyCastle.X509", "X509V3CertificateGenerator");
