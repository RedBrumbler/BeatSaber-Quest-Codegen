#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerPrintableString;
}
// Type: Org.BouncyCastle.Asn1::DerPrintableString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(512))
// CS Name: Org.BouncyCastle.Asn1.DerPrintableString
class CORDL_TYPE DerPrintableString : public Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerPrintableString() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerPrintableString", modifiers: " const&", def_value: None }]
constexpr DerPrintableString(DerPrintableString const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerPrintableString", modifiers: "&&", def_value: None }]
constexpr DerPrintableString(DerPrintableString&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerPrintableString(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerStringBase(ptr) {
}


  constexpr DerPrintableString& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerPrintableString& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerPrintableString& operator=(DerPrintableString&& o) noexcept = default;
  constexpr DerPrintableString& operator=(DerPrintableString const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::StringW value) ;

constexpr ::StringW __get_str() const;


// Methods

/// @brief Method GetInstance addr 0x114649c size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::DerPrintableString GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0x114658c size 0xec virtual false final false
static Org::BouncyCastle::Asn1::DerPrintableString GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "str", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerPrintableString(::ArrayW<uint8_t> str) ;

/// @brief Method .ctor addr 0x1139f50 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> str) ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }]
explicit DerPrintableString(::StringW str) ;

/// @brief Method .ctor addr 0x1146750 size 0x8 virtual false final false
 void _ctor(::StringW str) ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "validate", ty: "bool", modifiers: "", def_value: None }]
explicit DerPrintableString(::StringW str, bool validate) ;

/// @brief Method .ctor addr 0x1146678 size 0xd8 virtual false final false
 void _ctor(::StringW str, bool validate) ;

/// @brief Method GetString addr 0x1146848 size 0x8 virtual true final false
 ::StringW GetString() ;

/// @brief Method GetOctets addr 0x1146850 size 0xc virtual false final false
 ::ArrayW<uint8_t> GetOctets() ;

/// @brief Method Encode addr 0x114685c size 0x30 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1Equals addr 0x114688c size 0xa0 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method IsPrintableString addr 0x1146758 size 0xf0 virtual false final false
static bool IsPrintableString(::StringW str) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerPrintableString);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerPrintableString, "Org.BouncyCastle.Asn1", "DerPrintableString");
