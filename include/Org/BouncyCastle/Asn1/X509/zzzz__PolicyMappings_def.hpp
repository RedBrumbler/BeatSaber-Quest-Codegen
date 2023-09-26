#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class PolicyMappings;
}
// Type: Org.BouncyCastle.Asn1.X509::PolicyMappings
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(375))
// CS Name: Org.BouncyCastle.Asn1.X509.PolicyMappings
class CORDL_TYPE PolicyMappings : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PolicyMappings() = default;

// Ctor Parameters [CppParam { name: "", ty: "PolicyMappings", modifiers: " const&", def_value: None }]
constexpr PolicyMappings(PolicyMappings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PolicyMappings", modifiers: "&&", def_value: None }]
constexpr PolicyMappings(PolicyMappings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PolicyMappings(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PolicyMappings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PolicyMappings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PolicyMappings& operator=(PolicyMappings&& o) noexcept = default;
  constexpr PolicyMappings& operator=(PolicyMappings const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_seq, put=__set_seq))  seq;

constexpr void __set_seq(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_seq() const;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PolicyMappings(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x1117190 size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "mappings", ty: "System::Collections::Hashtable", modifiers: "", def_value: None }]
explicit PolicyMappings(System::Collections::Hashtable mappings) ;

/// @brief Method .ctor addr 0x11171b8 size 0x4 virtual false final false
 void _ctor(System::Collections::Hashtable mappings) ;

// Ctor Parameters [CppParam { name: "mappings", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }]
explicit PolicyMappings(System::Collections::IDictionary mappings) ;

/// @brief Method .ctor addr 0x11171bc size 0x5ec virtual false final false
 void _ctor(System::Collections::IDictionary mappings) ;

/// @brief Method ToAsn1Object addr 0x11177a8 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::PolicyMappings);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::PolicyMappings, "Org.BouncyCastle.Asn1.X509", "PolicyMappings");
