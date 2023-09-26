#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class Signature;
}
// Type: Org.BouncyCastle.Asn1.Ocsp::Signature
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(221))
// CS Name: Org.BouncyCastle.Asn1.Ocsp.Signature
class CORDL_TYPE Signature : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Signature() = default;

// Ctor Parameters [CppParam { name: "", ty: "Signature", modifiers: " const&", def_value: None }]
constexpr Signature(Signature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Signature", modifiers: "&&", def_value: None }]
constexpr Signature(Signature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Signature(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr Signature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Signature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Signature& operator=(Signature&& o) noexcept = default;
  constexpr Signature& operator=(Signature const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_signatureAlgorithm, put=__set_signatureAlgorithm))  signatureAlgorithm;

constexpr void __set_signatureAlgorithm(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_signatureAlgorithm() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_signatureValue, put=__set_signatureValue))  signatureValue;

constexpr void __set_signatureValue(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_signatureValue() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_certs, put=__set_certs))  certs;

constexpr void __set_certs(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_certs() const;


// Properties

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_SignatureValue))  SignatureValue;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_Certs))  Certs;


// Methods

/// @brief Method GetInstance addr 0xf01bc0 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::Signature GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0xf04b00 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Ocsp::Signature GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "signatureAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "signatureValue", ty: "Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
explicit Signature(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier signatureAlgorithm, Org::BouncyCastle::Asn1::DerBitString signatureValue) ;

/// @brief Method .ctor addr 0xf04df4 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier signatureAlgorithm, Org::BouncyCastle::Asn1::DerBitString signatureValue) ;

// Ctor Parameters [CppParam { name: "signatureAlgorithm", ty: "Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "signatureValue", ty: "Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }, CppParam { name: "certs", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Signature(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier signatureAlgorithm, Org::BouncyCastle::Asn1::DerBitString signatureValue, Org::BouncyCastle::Asn1::Asn1Sequence certs) ;

/// @brief Method .ctor addr 0xf04dfc size 0xb4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier signatureAlgorithm, Org::BouncyCastle::Asn1::DerBitString signatureValue, Org::BouncyCastle::Asn1::Asn1Sequence certs) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit Signature(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xf04c88 size 0x16c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_SignatureAlgorithm addr 0xf04eb0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_SignatureAlgorithm() ;

/// @brief Method get_SignatureValue addr 0xf04eb8 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBitString get_SignatureValue() ;

/// @brief Method GetSignatureOctets addr 0xf04ec0 size 0x20 virtual false final false
 ::ArrayW<uint8_t> GetSignatureOctets() ;

/// @brief Method get_Certs addr 0xf04ee0 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Sequence get_Certs() ;

/// @brief Method ToAsn1Object addr 0xf04ee8 size 0x140 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Ocsp::Signature);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Ocsp::Signature, "Org.BouncyCastle.Asn1.Ocsp", "Signature");
