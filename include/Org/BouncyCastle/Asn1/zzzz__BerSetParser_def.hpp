#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerSetParser;
}
// Type: Org.BouncyCastle.Asn1::BerSetParser
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(494))
// CS Name: Org.BouncyCastle.Asn1.BerSetParser
class CORDL_TYPE BerSetParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Asn1::Asn1SetParser
constexpr operator  Org::BouncyCastle::Asn1::Asn1SetParser() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Asn1::IAsn1Convertible
constexpr operator  Org::BouncyCastle::Asn1::IAsn1Convertible() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BerSetParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "BerSetParser", modifiers: " const&", def_value: None }]
constexpr BerSetParser(BerSetParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BerSetParser", modifiers: "&&", def_value: None }]
constexpr BerSetParser(BerSetParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BerSetParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BerSetParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BerSetParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BerSetParser& operator=(BerSetParser&& o) noexcept = default;
  constexpr BerSetParser& operator=(BerSetParser const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1StreamParser __declspec(property(get=__get__parser, put=__set__parser))  _parser;

constexpr void __set__parser(Org::BouncyCastle::Asn1::Asn1StreamParser value) ;

constexpr Org::BouncyCastle::Asn1::Asn1StreamParser __get__parser() const;


// Methods

// Ctor Parameters [CppParam { name: "parser", ty: "Org::BouncyCastle::Asn1::Asn1StreamParser", modifiers: "", def_value: None }]
explicit BerSetParser(Org::BouncyCastle::Asn1::Asn1StreamParser parser) ;

/// @brief Method .ctor addr 0x1139444 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1StreamParser parser) ;

/// @brief Method ReadObject addr 0x1141c64 size 0x20 virtual true final true
 Org::BouncyCastle::Asn1::IAsn1Convertible ReadObject() ;

/// @brief Method ToAsn1Object addr 0x113946c size 0x78 virtual true final true
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::BerSetParser);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerSetParser, "Org.BouncyCastle.Asn1", "BerSetParser");
