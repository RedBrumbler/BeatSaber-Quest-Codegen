#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectKeyIdentifier;
}
// Type: Org.BouncyCastle.Asn1.X509::SubjectKeyIdentifier
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(383))
// CS Name: Org.BouncyCastle.Asn1.X509.SubjectKeyIdentifier
class CORDL_TYPE SubjectKeyIdentifier : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SubjectKeyIdentifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubjectKeyIdentifier", modifiers: " const&", def_value: None }]
constexpr SubjectKeyIdentifier(SubjectKeyIdentifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubjectKeyIdentifier", modifiers: "&&", def_value: None }]
constexpr SubjectKeyIdentifier(SubjectKeyIdentifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubjectKeyIdentifier(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr SubjectKeyIdentifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubjectKeyIdentifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubjectKeyIdentifier& operator=(SubjectKeyIdentifier&& o) noexcept = default;
  constexpr SubjectKeyIdentifier& operator=(SubjectKeyIdentifier const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_keyIdentifier, put=__set_keyIdentifier))  keyIdentifier;

constexpr void __set_keyIdentifier(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_keyIdentifier() const;


// Methods

/// @brief Method GetInstance addr 0x1119b38 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x1119b50 size 0x184 virtual false final false
static Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method FromExtensions addr 0x1119d38 size 0x74 virtual false final false
static Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier FromExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

// Ctor Parameters [CppParam { name: "keyID", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit SubjectKeyIdentifier(::ArrayW<uint8_t> keyID) ;

/// @brief Method .ctor addr 0x1119dac size 0xc0 virtual false final false
 void _ctor(::ArrayW<uint8_t> keyID) ;

// Ctor Parameters [CppParam { name: "keyID", ty: "Org::BouncyCastle::Asn1::Asn1OctetString", modifiers: "", def_value: None }]
explicit SubjectKeyIdentifier(Org::BouncyCastle::Asn1::Asn1OctetString keyID) ;

/// @brief Method .ctor addr 0x1119d04 size 0x34 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1OctetString keyID) ;

// Ctor Parameters [CppParam { name: "spki", ty: "Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo", modifiers: "", def_value: None }]
explicit SubjectKeyIdentifier(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo spki) ;

/// @brief Method .ctor addr 0x1119cd4 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo spki) ;

/// @brief Method GetKeyIdentifier addr 0x111a05c size 0x5c virtual false final false
 ::ArrayW<uint8_t> GetKeyIdentifier() ;

/// @brief Method ToAsn1Object addr 0x111a0b8 size 0x74 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

/// @brief Method CreateSha1KeyIdentifier addr 0x111a12c size 0x6c virtual false final false
static Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier CreateSha1KeyIdentifier(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo keyInfo) ;

/// @brief Method CreateTruncatedSha1KeyIdentifier addr 0x111a198 size 0xd8 virtual false final false
static Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier CreateTruncatedSha1KeyIdentifier(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo keyInfo) ;

/// @brief Method GetDigest addr 0x1119e6c size 0x1f0 virtual false final false
static ::ArrayW<uint8_t> GetDigest(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo spki) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::SubjectKeyIdentifier, "Org.BouncyCastle.Asn1.X509", "SubjectKeyIdentifier");
