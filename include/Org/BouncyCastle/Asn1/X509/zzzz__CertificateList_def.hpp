#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1::X509 {
class TbsCertificateList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
namespace Org::BouncyCastle::Asn1::X509 {
class Time;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CrlEntry;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class CertificateList;
}
// Type: Org.BouncyCastle.Asn1.X509::CertificateList
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(347))
// CS Name: Org.BouncyCastle.Asn1.X509.CertificateList
class CORDL_TYPE CertificateList : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CertificateList() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateList", modifiers: " const&", def_value: None }]
constexpr CertificateList(CertificateList const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateList", modifiers: "&&", def_value: None }]
constexpr CertificateList(CertificateList&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateList(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertificateList& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateList& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateList& operator=(CertificateList&& o) noexcept = default;
  constexpr CertificateList& operator=(CertificateList const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::X509::TbsCertificateList __declspec(property(get=__get_tbsCertList, put=__set_tbsCertList))  tbsCertList;

constexpr void __set_tbsCertList(Org::BouncyCastle::Asn1::X509::TbsCertificateList value) ;

constexpr Org::BouncyCastle::Asn1::X509::TbsCertificateList __get_tbsCertList() const;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_sigAlgID, put=__set_sigAlgID))  sigAlgID;

constexpr void __set_sigAlgID(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_sigAlgID() const;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=__get_sig, put=__set_sig))  sig;

constexpr void __set_sig(Org::BouncyCastle::Asn1::DerBitString value) ;

constexpr Org::BouncyCastle::Asn1::DerBitString __get_sig() const;


// Properties

 Org::BouncyCastle::Asn1::X509::TbsCertificateList __declspec(property(get=get_TbsCertList))  TbsCertList;

 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;

 Org::BouncyCastle::Asn1::DerBitString __declspec(property(get=get_Signature))  Signature;

 int32_t __declspec(property(get=get_Version))  Version;

 Org::BouncyCastle::Asn1::X509::X509Name __declspec(property(get=get_Issuer))  Issuer;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=get_ThisUpdate))  ThisUpdate;

 Org::BouncyCastle::Asn1::X509::Time __declspec(property(get=get_NextUpdate))  NextUpdate;


// Methods

/// @brief Method GetInstance addr 0x10088f8 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::CertificateList GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x1008910 size 0xa4 virtual false final false
static Org::BouncyCastle::Asn1::X509::CertificateList GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertificateList(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x10089b4 size 0x150 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_TbsCertList addr 0x1008b04 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::TbsCertificateList get_TbsCertList() ;

/// @brief Method GetRevokedCertificates addr 0x1008b0c size 0x1c virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::CrlEntry> GetRevokedCertificates() ;

/// @brief Method GetRevokedCertificateEnumeration addr 0x1008b28 size 0x1c virtual false final false
 System::Collections::IEnumerable GetRevokedCertificateEnumeration() ;

/// @brief Method get_SignatureAlgorithm addr 0x1008b44 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_SignatureAlgorithm() ;

/// @brief Method get_Signature addr 0x1008b4c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerBitString get_Signature() ;

/// @brief Method GetSignatureOctets addr 0x1008b54 size 0x20 virtual false final false
 ::ArrayW<uint8_t> GetSignatureOctets() ;

/// @brief Method get_Version addr 0x1008b74 size 0x1c virtual false final false
 int32_t get_Version() ;

/// @brief Method get_Issuer addr 0x1008b90 size 0x1c virtual false final false
 Org::BouncyCastle::Asn1::X509::X509Name get_Issuer() ;

/// @brief Method get_ThisUpdate addr 0x1008bac size 0x1c virtual false final false
 Org::BouncyCastle::Asn1::X509::Time get_ThisUpdate() ;

/// @brief Method get_NextUpdate addr 0x1008bc8 size 0x1c virtual false final false
 Org::BouncyCastle::Asn1::X509::Time get_NextUpdate() ;

/// @brief Method ToAsn1Object addr 0x1008be4 size 0x11c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::CertificateList);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::CertificateList, "Org.BouncyCastle.Asn1.X509", "CertificateList");
