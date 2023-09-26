#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class CommitmentTypeIndication;
}
// Type: Org.BouncyCastle.Asn1.Esf::CommitmentTypeIndication
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(136))
// CS Name: Org.BouncyCastle.Asn1.Esf.CommitmentTypeIndication
class CORDL_TYPE CommitmentTypeIndication : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CommitmentTypeIndication() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeIndication", modifiers: " const&", def_value: None }]
constexpr CommitmentTypeIndication(CommitmentTypeIndication const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommitmentTypeIndication", modifiers: "&&", def_value: None }]
constexpr CommitmentTypeIndication(CommitmentTypeIndication&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommitmentTypeIndication(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr CommitmentTypeIndication& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommitmentTypeIndication& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommitmentTypeIndication& operator=(CommitmentTypeIndication&& o) noexcept = default;
  constexpr CommitmentTypeIndication& operator=(CommitmentTypeIndication const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_commitmentTypeId, put=__set_commitmentTypeId))  commitmentTypeId;

constexpr void __set_commitmentTypeId(Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr Org::BouncyCastle::Asn1::DerObjectIdentifier __get_commitmentTypeId() const;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=__get_commitmentTypeQualifier, put=__set_commitmentTypeQualifier))  commitmentTypeQualifier;

constexpr void __set_commitmentTypeQualifier(Org::BouncyCastle::Asn1::Asn1Sequence value) ;

constexpr Org::BouncyCastle::Asn1::Asn1Sequence __get_commitmentTypeQualifier() const;


// Properties

 Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=get_CommitmentTypeID))  CommitmentTypeID;

 Org::BouncyCastle::Asn1::Asn1Sequence __declspec(property(get=get_CommitmentTypeQualifier))  CommitmentTypeQualifier;


// Methods

/// @brief Method GetInstance addr 0xe12064 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CommitmentTypeIndication(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xe121ec size 0x2b8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

// Ctor Parameters [CppParam { name: "commitmentTypeId", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit CommitmentTypeIndication(Org::BouncyCastle::Asn1::DerObjectIdentifier commitmentTypeId) ;

/// @brief Method .ctor addr 0xe124a4 size 0x8 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier commitmentTypeId) ;

// Ctor Parameters [CppParam { name: "commitmentTypeId", ty: "Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "commitmentTypeQualifier", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit CommitmentTypeIndication(Org::BouncyCastle::Asn1::DerObjectIdentifier commitmentTypeId, Org::BouncyCastle::Asn1::Asn1Sequence commitmentTypeQualifier) ;

/// @brief Method .ctor addr 0xe124ac size 0x84 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerObjectIdentifier commitmentTypeId, Org::BouncyCastle::Asn1::Asn1Sequence commitmentTypeQualifier) ;

/// @brief Method get_CommitmentTypeID addr 0xe12530 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::DerObjectIdentifier get_CommitmentTypeID() ;

/// @brief Method get_CommitmentTypeQualifier addr 0xe12538 size 0x8 virtual false final false
 Org::BouncyCastle::Asn1::Asn1Sequence get_CommitmentTypeQualifier() ;

/// @brief Method ToAsn1Object addr 0xe12540 size 0x148 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Esf::CommitmentTypeIndication, "Org.BouncyCastle.Asn1.Esf", "CommitmentTypeIndication");
