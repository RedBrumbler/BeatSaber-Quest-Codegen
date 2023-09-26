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
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
// Type: Org.BouncyCastle.Asn1::DerIA5String
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(199))
// CS Name: Org.BouncyCastle.Asn1.DerIA5String
class CORDL_TYPE DerIA5String : public Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerIA5String() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerIA5String", modifiers: " const&", def_value: None }]
constexpr DerIA5String(DerIA5String const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerIA5String", modifiers: "&&", def_value: None }]
constexpr DerIA5String(DerIA5String&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerIA5String(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerStringBase(ptr) {
}


  constexpr DerIA5String& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerIA5String& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerIA5String& operator=(DerIA5String&& o) noexcept = default;
  constexpr DerIA5String& operator=(DerIA5String const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_str, put=__set_str))  str;

constexpr void __set_str(::StringW value) ;

constexpr ::StringW __get_str() const;


// Methods

/// @brief Method GetInstance addr 0xef9d84 size 0xf0 virtual false final false
static Org::BouncyCastle::Asn1::DerIA5String GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetInstance addr 0xefdd74 size 0x13c virtual false final false
static Org::BouncyCastle::Asn1::DerIA5String GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit) ;

// Ctor Parameters [CppParam { name: "str", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit DerIA5String(::ArrayW<uint8_t> str) ;

/// @brief Method .ctor addr 0xefdeb0 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> str) ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }]
explicit DerIA5String(::StringW str) ;

/// @brief Method .ctor addr 0xefded8 size 0x8 virtual false final false
 void _ctor(::StringW str) ;

// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "validate", ty: "bool", modifiers: "", def_value: None }]
explicit DerIA5String(::StringW str, bool validate) ;

/// @brief Method .ctor addr 0xefa064 size 0xd8 virtual false final false
 void _ctor(::StringW str, bool validate) ;

/// @brief Method GetString addr 0xefdf48 size 0x8 virtual true final false
 ::StringW GetString() ;

/// @brief Method GetOctets addr 0xefdf50 size 0xc virtual false final false
 ::ArrayW<uint8_t> GetOctets() ;

/// @brief Method Encode addr 0xefdf5c size 0x34 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

/// @brief Method Asn1GetHashCode addr 0xefdf90 size 0x1c virtual true final false
 int32_t Asn1GetHashCode() ;

/// @brief Method Asn1Equals addr 0xefdfac size 0xa0 virtual true final false
 bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object asn1Object) ;

/// @brief Method IsIA5String addr 0xefdee0 size 0x68 virtual false final false
static bool IsIA5String(::StringW str) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerIA5String);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerIA5String, "Org.BouncyCastle.Asn1", "DerIA5String");
