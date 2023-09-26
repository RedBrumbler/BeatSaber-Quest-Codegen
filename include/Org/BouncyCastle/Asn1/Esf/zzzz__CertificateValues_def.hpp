#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1::X509 {
class X509CertificateStructure;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CertificateValues;
}
// Type: Org.BouncyCastle.Asn1.Esf::CertificateValues
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(134))
// CS Name: Org.BouncyCastle.Asn1.Esf.CertificateValues
class CORDL_TYPE CertificateValues : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CertificateValues() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateValues", modifiers: " const&", def_value: None }]
constexpr CertificateValues(CertificateValues const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateValues", modifiers: "&&", def_value: None }]
constexpr CertificateValues(CertificateValues&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateValues(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CertificateValues& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateValues& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateValues& operator=(CertificateValues&& o) noexcept = default;
  constexpr CertificateValues& operator=(CertificateValues const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_certificates, put=__set_certificates))  certificates;

constexpr void __set_certificates(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_certificates() const;


// Methods

/// @brief Method GetInstance addr 0xe11760 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::CertificateValues GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CertificateValues(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe118e8 size 0x350 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "certificates", ty: "::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure>", modifiers: "", def_value: None }]
explicit CertificateValues(::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> certificates) ;

/// @brief Method .ctor addr 0xe11c38 size 0xc4 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> certificates) ;

// Ctor Parameters [CppParam { name: "certificates", ty: "System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit CertificateValues(System::Collections::IEnumerable certificates) ;

/// @brief Method .ctor addr 0xe11cfc size 0x1a4 virtual false final false
 void _ctor(System::Collections::IEnumerable certificates) ;

/// @brief Method GetCertificates addr 0xe11ea0 size 0x114 virtual false final false
 ::ArrayW<Org::BouncyCastle::Asn1::X509::X509CertificateStructure> GetCertificates() ;

/// @brief Method ToAsn1Object addr 0xe11fb4 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::CertificateValues);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::CertificateValues, "Org.BouncyCastle.Asn1.Esf", "CertificateValues");
