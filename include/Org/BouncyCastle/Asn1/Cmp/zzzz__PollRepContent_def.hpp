#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PollRepContent;
}
// Type: Org.BouncyCastle.Asn1.Cmp::PollRepContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(44))
// CS Name: Org.BouncyCastle.Asn1.Cmp.PollRepContent
class CORDL_TYPE PollRepContent : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PollRepContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "PollRepContent", modifiers: " const&", def_value: None }]
constexpr PollRepContent(PollRepContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PollRepContent", modifiers: "&&", def_value: None }]
constexpr PollRepContent(PollRepContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PollRepContent(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr PollRepContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PollRepContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PollRepContent& operator=(PollRepContent&& o) noexcept = default;
  constexpr PollRepContent& operator=(PollRepContent const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_certReqId, put=__set_certReqId))  certReqId;

constexpr void __set_certReqId(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_certReqId() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_checkAfter, put=__set_checkAfter))  checkAfter;

constexpr void __set_checkAfter(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_checkAfter() const;

 Org::BouncyCastle::Asn1::Cmp::PkiFreeText __declspec(property(get=__get_reason, put=__set_reason))  reason;

constexpr void __set_reason(Org::BouncyCastle::Asn1::Cmp::PkiFreeText value) ;

constexpr Org::BouncyCastle::Asn1::Cmp::PkiFreeText __get_reason() const;


// Properties

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_CertReqID))  CertReqID;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=get_CheckAfter))  CheckAfter;

 Org::BouncyCastle::Asn1::Cmp::PkiFreeText __declspec(property(get=get_Reason))  Reason;


// Methods

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit PollRepContent(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0xdf16f0 size 0xa4 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method GetInstance addr 0xdedcd0 size 0x188 virtual false final false
static Org::BouncyCastle::Asn1::Cmp::PollRepContent GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "certReqId", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "checkAfter", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }]
explicit PollRepContent(Org::BouncyCastle::Asn1::DerInteger certReqId, Org::BouncyCastle::Asn1::DerInteger checkAfter) ;

/// @brief Method .ctor addr 0xdf1794 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerInteger certReqId, Org::BouncyCastle::Asn1::DerInteger checkAfter) ;

// Ctor Parameters [CppParam { name: "certReqId", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "checkAfter", ty: "Org::BouncyCastle::Asn1::DerInteger", modifiers: "", def_value: None }, CppParam { name: "reason", ty: "Org::BouncyCastle::Asn1::Cmp::PkiFreeText", modifiers: "", def_value: None }]
explicit PollRepContent(Org::BouncyCastle::Asn1::DerInteger certReqId, Org::BouncyCastle::Asn1::DerInteger checkAfter, Org::BouncyCastle::Asn1::Cmp::PkiFreeText reason) ;

/// @brief Method .ctor addr 0xdf17c4 size 0x3c virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerInteger certReqId, Org::BouncyCastle::Asn1::DerInteger checkAfter, Org::BouncyCastle::Asn1::Cmp::PkiFreeText reason) ;

/// @brief Method get_CertReqID addr 0xdf1800 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger get_CertReqID() ;

/// @brief Method get_CheckAfter addr 0xdf1808 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::DerInteger get_CheckAfter() ;

/// @brief Method get_Reason addr 0xdf1810 size 0x8 virtual true final false
 Org::BouncyCastle::Asn1::Cmp::PkiFreeText get_Reason() ;

/// @brief Method ToAsn1Object addr 0xdf1818 size 0x174 virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(Org::BouncyCastle::Asn1::Cmp::PollRepContent);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Cmp::PollRepContent, "Org.BouncyCastle.Asn1.Cmp", "PollRepContent");
