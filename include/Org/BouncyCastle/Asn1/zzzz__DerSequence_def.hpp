#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerSequence;
}
// Type: Org.BouncyCastle.Asn1::DerSequence
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(461))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(487))
// CS Name: Org.BouncyCastle.Asn1.DerSequence
class CORDL_TYPE DerSequence : public Org::BouncyCastle::Asn1::Asn1Sequence {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DerSequence() = default;

// Ctor Parameters [CppParam { name: "", ty: "DerSequence", modifiers: " const&", def_value: None }]
constexpr DerSequence(DerSequence const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DerSequence", modifiers: "&&", def_value: None }]
constexpr DerSequence(DerSequence&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DerSequence(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Sequence(ptr) {
}


  constexpr DerSequence& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DerSequence& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DerSequence& operator=(DerSequence&& o) noexcept = default;
  constexpr DerSequence& operator=(DerSequence const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Asn1::DerSequence __declspec(property(get=__get_Empty, put=__set_Empty))  Empty;

static void __set_Empty(Org::BouncyCastle::Asn1::DerSequence value) ;

static Org::BouncyCastle::Asn1::DerSequence __get_Empty() ;


// Methods

/// @brief Method FromVector addr 0x1138960 size 0x8c virtual false final false
static Org::BouncyCastle::Asn1::DerSequence FromVector(Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

// Ctor Parameters []
explicit DerSequence() ;

/// @brief Method .ctor addr 0x1140614 size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "element", ty: "Org::BouncyCastle::Asn1::Asn1Encodable", modifiers: "", def_value: None }]
explicit DerSequence(Org::BouncyCastle::Asn1::Asn1Encodable element) ;

/// @brief Method .ctor addr 0x113b040 size 0x4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Encodable element) ;

// Ctor Parameters [CppParam { name: "elements", ty: "::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable>", modifiers: "", def_value: None }]
explicit DerSequence(::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> elements) ;

/// @brief Method .ctor addr 0x112d3e4 size 0x4 virtual false final false
 void _ctor(::ArrayW<Org::BouncyCastle::Asn1::Asn1Encodable> elements) ;

// Ctor Parameters [CppParam { name: "elementVector", ty: "Org::BouncyCastle::Asn1::Asn1EncodableVector", modifiers: "", def_value: None }]
explicit DerSequence(Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

/// @brief Method .ctor addr 0x112db5c size 0x4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector elementVector) ;

/// @brief Method Encode addr 0x1140618 size 0x390 virtual true final false
 void Encode(Org::BouncyCastle::Asn1::DerOutputStream derOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(Org::BouncyCastle::Asn1::DerSequence);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerSequence, "Org.BouncyCastle.Asn1", "DerSequence");
