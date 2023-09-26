#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerBmpString;
}
// Type: Org.BouncyCastle.Asn1::DerBmpString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(502))
// CS Name: Org.BouncyCastle.Asn1.DerBmpString
class CORDL_TYPE DerBmpString : public Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerBmpString() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerBmpString", modifiers: " const&", def_value: None }]
constexpr DerBmpString(DerBmpString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerBmpString", modifiers: "&&", def_value: None }]
constexpr DerBmpString(DerBmpString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerBmpString(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerStringBase(ptr) {
}


  constexpr DerBmpString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerBmpString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerBmpString& operator=(DerBmpString&& o) noexcept = default;
  constexpr DerBmpString& operator=(DerBmpString const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::StringW value) ;

constexpr ::StringW __get_str() const;


// Methods

/// @brief Method GetInstance addr 0x114323c size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::DerBmpString GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x114332c size 0xd8 virtual false final false
static Org::BouncyCastle::Asn1::DerBmpString GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "str", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerBmpString(::ArrayW<uint8_t> str) ;

/// @brief Method .ctor addr 0x1143404 size 0x198 virtual false final false
 void _ctor(::ArrayW<uint8_t> str) ;

// Ctor Parameters [CppParam { name: "str", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }]
explicit DerBmpString(::ArrayW<char16_t> str) ;

/// @brief Method .ctor addr 0x1139cb0 size 0x88 virtual false final false
 void _ctor(::ArrayW<char16_t> str) ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }]
explicit DerBmpString(::StringW str) ;

/// @brief Method .ctor addr 0x114359c size 0x78 virtual false final false
 void _ctor(::StringW str) ;

/// @brief Method GetString addr 0x1143614 size 0x8 virtual true final false
 ::StringW GetString() ;

/// @brief Method Asn1Equals addr 0x114361c size 0xa0 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method Encode addr 0x11436bc size 0xfc virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerBmpString);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerBmpString, "Org.BouncyCastle.Asn1", "DerBmpString");
