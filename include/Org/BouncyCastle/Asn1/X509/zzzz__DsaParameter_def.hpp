#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DsaParameter;
}
// Type: Org.BouncyCastle.Asn1.X509::DsaParameter
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(359))
// CS Name: Org.BouncyCastle.Asn1.X509.DsaParameter
class CORDL_TYPE DsaParameter : public Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DsaParameter() = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaParameter", modifiers: " const&", def_value: None }]
constexpr DsaParameter(DsaParameter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DsaParameter", modifiers: "&&", def_value: None }]
constexpr DsaParameter(DsaParameter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DsaParameter(void* ptr) noexcept : Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr DsaParameter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DsaParameter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DsaParameter& operator=(DsaParameter&& o) noexcept = default;
  constexpr DsaParameter& operator=(DsaParameter const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_p, put=__set_p))  p;

constexpr void __set_p(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_p() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_q() const;

 Org::BouncyCastle::Asn1::DerInteger __declspec(property(get=__get_g, put=__set_g))  g;

constexpr void __set_g(Org::BouncyCastle::Asn1::DerInteger value) ;

constexpr Org::BouncyCastle::Asn1::DerInteger __get_g() const;


// Properties

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_P))  P;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_G))  G;


// Methods

/// @brief Method GetInstance addr 0x110f578 size 0x18 virtual false final false
static Org::BouncyCastle::Asn1::X509::DsaParameter GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool explicitly) ;

/// @brief Method GetInstance addr 0x110f590 size 0x178 virtual false final false
static Org::BouncyCastle::Asn1::X509::DsaParameter GetInstance(::bs_hook::Il2CppWrapperType obj) ;

// Ctor Parameters [CppParam { name: "p", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "q", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "g", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit DsaParameter(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger g) ;

/// @brief Method .ctor addr 0x110f848 size 0xcc virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger p, Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger g) ;

// Ctor Parameters [CppParam { name: "seq", ty: "Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
explicit DsaParameter(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method .ctor addr 0x110f708 size 0x140 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::Asn1Sequence seq) ;

/// @brief Method get_P addr 0x110f914 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_P() ;

/// @brief Method get_Q addr 0x110f930 size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method get_G addr 0x110f94c size 0x1c virtual false final false
 Org::BouncyCastle::Math::BigInteger get_G() ;

/// @brief Method ToAsn1Object addr 0x110f968 size 0x11c virtual true final false
 Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::DsaParameter);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::DsaParameter, "Org.BouncyCastle.Asn1.X509", "DsaParameter");
