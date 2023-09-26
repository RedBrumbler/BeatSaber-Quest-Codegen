#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC {
class FpFieldElement;
}
// Type: Org.BouncyCastle.Math.EC::FpFieldElement
namespace Org::BouncyCastle::Math::EC {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1369))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1569))
// CS Name: Org.BouncyCastle.Math.EC.FpFieldElement
class CORDL_TYPE FpFieldElement : public Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FpFieldElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "FpFieldElement", modifiers: " const&", def_value: None }]
constexpr FpFieldElement(FpFieldElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FpFieldElement", modifiers: "&&", def_value: None }]
constexpr FpFieldElement(FpFieldElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FpFieldElement(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractFpFieldElement(ptr) {
}


  constexpr FpFieldElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FpFieldElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FpFieldElement& operator=(FpFieldElement&& o) noexcept = default;
  constexpr FpFieldElement& operator=(FpFieldElement const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_q, put=__set_q))  q;

constexpr void __set_q(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_q() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_r() const;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(Org::BouncyCastle::Math::BigInteger value) ;

constexpr Org::BouncyCastle::Math::BigInteger __get_x() const;


// Properties

 ::StringW __declspec(property(get=get_FieldName))  FieldName;

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;

 Org::BouncyCastle::Math::BigInteger __declspec(property(get=get_Q))  Q;


// Methods

/// @brief Method CalculateResidue addr 0xfcea5c size 0x124 virtual false final false
static Org::BouncyCastle::Math::BigInteger CalculateResidue(Org::BouncyCastle::Math::BigInteger p) ;

// Ctor Parameters [CppParam { name: "q", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit FpFieldElement(Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0xfd02d0 size 0x38 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger x) ;

// Ctor Parameters [CppParam { name: "q", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "r", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }, CppParam { name: "x", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit FpFieldElement(Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0xfcee30 size 0xbc virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger q, Org::BouncyCastle::Math::BigInteger r, Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method ToBigInteger addr 0xfd0308 size 0x8 virtual true final false
 Org::BouncyCastle::Math::BigInteger ToBigInteger() ;

/// @brief Method get_FieldName addr 0xfd0310 size 0x40 virtual true final false
 ::StringW get_FieldName() ;

/// @brief Method get_FieldSize addr 0xfd0350 size 0x1c virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method get_Q addr 0xfd036c size 0x8 virtual false final false
 Org::BouncyCastle::Math::BigInteger get_Q() ;

/// @brief Method Add addr 0xfd0374 size 0xbc virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Add(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method AddOne addr 0xfd0430 size 0xec virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement AddOne() ;

/// @brief Method Subtract addr 0xfd051c size 0xbc virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Subtract(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Multiply addr 0xfd05d8 size 0xbc virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Multiply(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method MultiplyMinusProduct addr 0xfd0694 size 0x12c virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement MultiplyMinusProduct(Org::BouncyCastle::Math::EC::ECFieldElement b, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method MultiplyPlusProduct addr 0xfd07c0 size 0x1a8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement MultiplyPlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement b, Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method Divide addr 0xfd0968 size 0xd4 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Divide(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Negate addr 0xfd0a3c size 0xa0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Negate() ;

/// @brief Method Square addr 0xfd0adc size 0x98 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Square() ;

/// @brief Method SquareMinusProduct addr 0xfd0b74 size 0x110 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement SquareMinusProduct(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method SquarePlusProduct addr 0xfd0c84 size 0x18c virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement SquarePlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement x, Org::BouncyCastle::Math::EC::ECFieldElement y) ;

/// @brief Method Invert addr 0xfd0e10 size 0x94 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Invert() ;

/// @brief Method Sqrt addr 0xfd0ea4 size 0x5e0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Sqrt() ;

/// @brief Method CheckSqrt addr 0xfd1484 size 0x58 virtual false final false
 Org::BouncyCastle::Math::EC::ECFieldElement CheckSqrt(Org::BouncyCastle::Math::EC::ECFieldElement z) ;

/// @brief Method LucasSequence addr 0xfd14dc size 0x53c virtual false final false
 ::ArrayW<Org::BouncyCastle::Math::BigInteger> LucasSequence(Org::BouncyCastle::Math::BigInteger P, Org::BouncyCastle::Math::BigInteger Q, Org::BouncyCastle::Math::BigInteger k) ;

/// @brief Method ModAdd addr 0xfd1a18 size 0x64 virtual true final false
 Org::BouncyCastle::Math::BigInteger ModAdd(Org::BouncyCastle::Math::BigInteger x1, Org::BouncyCastle::Math::BigInteger x2) ;

/// @brief Method ModDouble addr 0xfd1a7c size 0x68 virtual true final false
 Org::BouncyCastle::Math::BigInteger ModDouble(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method ModHalf addr 0xfd1ae4 size 0x60 virtual true final false
 Org::BouncyCastle::Math::BigInteger ModHalf(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method ModHalfAbs addr 0xfd1b44 size 0x60 virtual true final false
 Org::BouncyCastle::Math::BigInteger ModHalfAbs(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method ModInverse addr 0xfd1ba4 size 0xd0 virtual true final false
 Org::BouncyCastle::Math::BigInteger ModInverse(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method ModMult addr 0xfd1c74 size 0x3c virtual true final false
 Org::BouncyCastle::Math::BigInteger ModMult(Org::BouncyCastle::Math::BigInteger x1, Org::BouncyCastle::Math::BigInteger x2) ;

/// @brief Method ModReduce addr 0xfd1cb0 size 0x310 virtual true final false
 Org::BouncyCastle::Math::BigInteger ModReduce(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method ModSubtract addr 0xfd1fc0 size 0x44 virtual true final false
 Org::BouncyCastle::Math::BigInteger ModSubtract(Org::BouncyCastle::Math::BigInteger x1, Org::BouncyCastle::Math::BigInteger x2) ;

/// @brief Method Equals addr 0xfd2004 size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xfd20ac size 0x5c virtual true final false
 bool Equals(Org::BouncyCastle::Math::EC::FpFieldElement other) ;

/// @brief Method GetHashCode addr 0xfd2108 size 0x44 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC
NEED_NO_BOX(Org::BouncyCastle::Math::EC::FpFieldElement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::FpFieldElement, "Org.BouncyCastle.Math.EC", "FpFieldElement");
