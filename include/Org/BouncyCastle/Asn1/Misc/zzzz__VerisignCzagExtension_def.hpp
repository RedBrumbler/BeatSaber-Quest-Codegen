#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerIA5String_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class VerisignCzagExtension;
}
// Type: Org.BouncyCastle.Asn1.Misc::VerisignCzagExtension
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(199))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(201))
// CS Name: Org.BouncyCastle.Asn1.Misc.VerisignCzagExtension
class CORDL_TYPE VerisignCzagExtension : public Org::BouncyCastle::Asn1::DerIA5String {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~VerisignCzagExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "VerisignCzagExtension", modifiers: " const&", def_value: None }]
constexpr VerisignCzagExtension(VerisignCzagExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VerisignCzagExtension", modifiers: "&&", def_value: None }]
constexpr VerisignCzagExtension(VerisignCzagExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VerisignCzagExtension(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerIA5String(ptr) {
}


  constexpr VerisignCzagExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VerisignCzagExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VerisignCzagExtension& operator=(VerisignCzagExtension&& o) noexcept = default;
  constexpr VerisignCzagExtension& operator=(VerisignCzagExtension const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "str", ty: "Org::BouncyCastle::Asn1::DerIA5String", modifiers: "", def_value: None }]
explicit VerisignCzagExtension(Org::BouncyCastle::Asn1::DerIA5String str) ;

/// @brief Method .ctor addr 0xefe0e4 size 0x38 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerIA5String str) ;

/// @brief Method ToString addr 0xefe11c size 0x60 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Misc
NEED_NO_BOX(Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Misc::VerisignCzagExtension, "Org.BouncyCastle.Asn1.Misc", "VerisignCzagExtension");
