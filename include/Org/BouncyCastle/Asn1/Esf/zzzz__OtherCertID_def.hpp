#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHash;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class IssuerSerial;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class OtherCertID;
}
// Type: Org.BouncyCastle.Asn1.Esf::OtherCertID
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(148))
// CS Name: Org.BouncyCastle.Asn1.Esf.OtherCertID
class CORDL_TYPE OtherCertID : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OtherCertID() = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherCertID", modifiers: " const&", def_value: None }]
constexpr OtherCertID(OtherCertID const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OtherCertID", modifiers: "&&", def_value: None }]
constexpr OtherCertID(OtherCertID&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OtherCertID(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr OtherCertID& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OtherCertID& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OtherCertID& operator=(OtherCertID&& o) noexcept = default;
  constexpr OtherCertID& operator=(OtherCertID const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Esf::OtherHash __declspec(property(get=__get_otherCertHash, put=__set_otherCertHash))  otherCertHash;

constexpr void __set_otherCertHash(Org::BouncyCastle::Asn1::Esf::OtherHash value) ;

constexpr Org::BouncyCastle::Asn1::Esf::OtherHash __get_otherCertHash() const;

 Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=__get_issuerSerial, put=__set_issuerSerial))  issuerSerial;

constexpr void __set_issuerSerial(Org::BouncyCastle::Asn1::X509::IssuerSerial value) ;

constexpr Org::BouncyCastle::Asn1::X509::IssuerSerial __get_issuerSerial() const;


// Properties

 Org::BouncyCastle::Asn1::Esf::OtherHash __declspec(property(get=get_OtherCertHash))  OtherCertHash;

 Org::BouncyCastle::Asn1::X509::IssuerSerial __declspec(property(get=get_IssuerSerial))  IssuerSerial;


// Methods

/// @brief Method GetInstance addr 0xe13124 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::OtherCertID GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit OtherCertID(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe173d0 size 0x1cc virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "otherCertHash", ty: "Org::BouncyCastle::Asn1::Esf::OtherHash", modifiers: "", def_value: None }]
explicit OtherCertID(Org::BouncyCastle::Asn1::Esf::OtherHash otherCertHash) ;

/// @brief Method .ctor addr 0xe1759c size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Esf::OtherHash otherCertHash) ;

// Ctor Parameters [CppParam { name: "otherCertHash", ty: "Org::BouncyCastle::Asn1::Esf::OtherHash", modifiers: "", def_value: None }, CppParam { name: "issuerSerial", ty: "Org::BouncyCastle::Asn1::X509::IssuerSerial", modifiers: "", def_value: None }]
explicit OtherCertID(Org::BouncyCastle::Asn1::Esf::OtherHash otherCertHash, Org::BouncyCastle::Asn1::X509::IssuerSerial issuerSerial) ;

/// @brief Method .ctor addr 0xe175a4 size 0x7c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Esf::OtherHash otherCertHash, Org::BouncyCastle::Asn1::X509::IssuerSerial issuerSerial) ;

/// @brief Method get_OtherCertHash addr 0xe17620 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Esf::OtherHash get_OtherCertHash() ;

/// @brief Method get_IssuerSerial addr 0xe17628 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::X509::IssuerSerial get_IssuerSerial() ;

/// @brief Method ToAsn1Object addr 0xe17630 size 0x138 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::OtherCertID);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::OtherCertID, "Org.BouncyCastle.Asn1.Esf", "OtherCertID");
