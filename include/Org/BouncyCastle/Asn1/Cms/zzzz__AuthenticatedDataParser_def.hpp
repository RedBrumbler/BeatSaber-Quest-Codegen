#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class AuthenticatedDataParser;
}
// Type: Org.BouncyCastle.Asn1.Cms::AuthenticatedDataParser
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(59))
// CS Name: Org.BouncyCastle.Asn1.Cms.AuthenticatedDataParser
class CORDL_TYPE AuthenticatedDataParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AuthenticatedDataParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedDataParser", modifiers: " const&", def_value: None }]
constexpr AuthenticatedDataParser(AuthenticatedDataParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedDataParser", modifiers: "&&", def_value: None }]
constexpr AuthenticatedDataParser(AuthenticatedDataParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticatedDataParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AuthenticatedDataParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticatedDataParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticatedDataParser& operator=(AuthenticatedDataParser&& o) noexcept = default;
  constexpr AuthenticatedDataParser& operator=(AuthenticatedDataParser const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1SequenceParser __declspec(property(get=__get_seq, put=__set_seq))  seq;

constexpr void __set_seq(Org::BouncyCastle::Asn1::Asn1SequenceParser value) ;

constexpr Org::BouncyCastle::Asn1::Asn1SequenceParser __get_seq() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_version() const;

 Org::BouncyCastle::Asn1::IAsn1Convertible __declspec(property(get=__get_nextObject, put=__set_nextObject))  nextObject;

constexpr void __set_nextObject(Org::BouncyCastle::Asn1::IAsn1Convertible value) ;

constexpr Org::BouncyCastle::Asn1::IAsn1Convertible __get_nextObject() const;

 bool __declspec(property(get=__get_originatorInfoCalled, put=__set_originatorInfoCalled))  originatorInfoCalled;

constexpr void __set_originatorInfoCalled(bool value) ;

constexpr bool __get_originatorInfoCalled() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_Version))  Version;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1SequenceParser", modifiers: "", def_value: None }]
explicit AuthenticatedDataParser(Org::BouncyCastle::Asn1::Asn1SequenceParser seq) ;

/// @brief Method .ctor addr 0xdf6a58 size 0x124 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1SequenceParser seq) ;

/// @brief Method get_Version addr 0xdf6b7c size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerInteger get_Version() ;

/// @brief Method GetOriginatorInfo addr 0xdf6b84 size 0x2e0 virtual false final false
 Org::BouncyCastle::Asn1::Cms::OriginatorInfo GetOriginatorInfo() ;

/// @brief Method GetRecipientInfos addr 0xdf6fdc size 0x100 virtual false final false
 Org::BouncyCastle::Asn1::Asn1SetParser GetRecipientInfos() ;

/// @brief Method GetMacAlgorithm addr 0xdf70dc size 0x168 virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GetMacAlgorithm() ;

/// @brief Method GetDigestAlgorithm addr 0xdf7244 size 0x19c virtual false final false
 Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier GetDigestAlgorithm() ;

/// @brief Method GetEnapsulatedContentInfo addr 0xdf73e0 size 0x120 virtual false final false
 Org::BouncyCastle::Asn1::Cms::ContentInfoParser GetEnapsulatedContentInfo() ;

/// @brief Method GetAuthAttrs addr 0xdf76e0 size 0x1b8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1SetParser GetAuthAttrs() ;

/// @brief Method GetMac addr 0xdf7898 size 0x130 virtual false final false
 Org::BouncyCastle::Asn1::Asn1OctetString GetMac() ;

/// @brief Method GetUnauthAttrs addr 0xdf79c8 size 0x1ac virtual false final false
 Org::BouncyCastle::Asn1::Asn1SetParser GetUnauthAttrs() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cms::AuthenticatedDataParser, "Org.BouncyCastle.Asn1.Cms", "AuthenticatedDataParser");
