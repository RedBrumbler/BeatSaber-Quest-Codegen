#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP224R1FieldElement;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP224R1FieldElement
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1369))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1418))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement
class CORDL_TYPE SecP224R1FieldElement : public Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SecP224R1FieldElement() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP224R1FieldElement", modifiers: " const&", def_value: None }]
constexpr SecP224R1FieldElement(SecP224R1FieldElement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP224R1FieldElement", modifiers: "&&", def_value: None }]
constexpr SecP224R1FieldElement(SecP224R1FieldElement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecP224R1FieldElement(void* ptr) noexcept : Org::BouncyCastle::Math::EC::AbstractFpFieldElement(ptr) {
}


  constexpr SecP224R1FieldElement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecP224R1FieldElement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecP224R1FieldElement& operator=(SecP224R1FieldElement&& o) noexcept = default;
  constexpr SecP224R1FieldElement& operator=(SecP224R1FieldElement const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Q, put=__set_Q))  Q;

static void __set_Q(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Q() ;

 ::ArrayW<uint32_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get_x() const;


// Properties

 bool __declspec(property(get=get_IsZero))  IsZero;

 bool __declspec(property(get=get_IsOne))  IsOne;

 ::StringW __declspec(property(get=get_FieldName))  FieldName;

 int32_t __declspec(property(get=get_FieldSize))  FieldSize;


// Methods

// Ctor Parameters [CppParam { name: "x", ty: "Org::BouncyCastle::Math::BigInteger", modifiers: "", def_value: None }]
explicit SecP224R1FieldElement(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method .ctor addr 0xf6f574 size 0x118 virtual false final false
 void _ctor(Org::BouncyCastle::Math::BigInteger x) ;

// Ctor Parameters []
explicit SecP224R1FieldElement() ;

/// @brief Method .ctor addr 0xf7134c size 0x24 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "x", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None }]
explicit SecP224R1FieldElement(::ArrayW<uint32_t> x) ;

/// @brief Method .ctor addr 0xf6fba0 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint32_t> x) ;

/// @brief Method get_IsZero addr 0xf71370 size 0xc virtual true final false
 bool get_IsZero() ;

/// @brief Method get_IsOne addr 0xf7137c size 0xc virtual true final false
 bool get_IsOne() ;

/// @brief Method TestBitZero addr 0xf71388 size 0x24 virtual true final false
 bool TestBitZero() ;

/// @brief Method ToBigInteger addr 0xf713ac size 0xc virtual true final false
 Org::BouncyCastle::Math::BigInteger ToBigInteger() ;

/// @brief Method get_FieldName addr 0xf713b8 size 0x40 virtual true final false
 ::StringW get_FieldName() ;

/// @brief Method get_FieldSize addr 0xf713f8 size 0x64 virtual true final false
 int32_t get_FieldSize() ;

/// @brief Method Add addr 0xf7145c size 0xf0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Add(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method AddOne addr 0xf7154c size 0xa8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement AddOne() ;

/// @brief Method Subtract addr 0xf715f4 size 0xf0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Subtract(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Multiply addr 0xf716e4 size 0xf0 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Multiply(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Divide addr 0xf717d4 size 0xf8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Divide(Org::BouncyCastle::Math::EC::ECFieldElement b) ;

/// @brief Method Negate addr 0xf718cc size 0xa8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Negate() ;

/// @brief Method Square addr 0xf71974 size 0xa8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Square() ;

/// @brief Method Invert addr 0xf71a1c size 0xa8 virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Invert() ;

/// @brief Method Sqrt addr 0xf71ac4 size 0x1bc virtual true final false
 Org::BouncyCastle::Math::EC::ECFieldElement Sqrt() ;

/// @brief Method Equals addr 0xf71f0c size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0xf71f98 size 0x8c virtual true final false
 bool Equals(Org::BouncyCastle::Math::EC::ECFieldElement other) ;

/// @brief Method Equals addr 0xf72024 size 0x2c virtual true final false
 bool Equals(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement other) ;

/// @brief Method GetHashCode addr 0xf72050 size 0xb8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method IsSquare addr 0xf71c80 size 0xec virtual false final false
static bool IsSquare(::ArrayW<uint32_t> x) ;

/// @brief Method RM addr 0xf72108 size 0x118 virtual false final false
static void RM(::ArrayW<uint32_t> nc, ::ArrayW<uint32_t> d0, ::ArrayW<uint32_t> e0, ::ArrayW<uint32_t> d1, ::ArrayW<uint32_t> e1, ::ArrayW<uint32_t> f1, ::ArrayW<uint32_t> t) ;

/// @brief Method RP addr 0xf72220 size 0x124 virtual false final false
static void RP(::ArrayW<uint32_t> nc, ::ArrayW<uint32_t> d1, ::ArrayW<uint32_t> e1, ::ArrayW<uint32_t> f1, ::ArrayW<uint32_t> t) ;

/// @brief Method RS addr 0xf72344 size 0xd0 virtual false final false
static void RS(::ArrayW<uint32_t> d, ::ArrayW<uint32_t> e, ::ArrayW<uint32_t> f, ::ArrayW<uint32_t> t) ;

/// @brief Method TrySqrt addr 0xf71d6c size 0x1a0 virtual false final false
static bool TrySqrt(::ArrayW<uint32_t> nc, ::ArrayW<uint32_t> r, ::ArrayW<uint32_t> t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1FieldElement");
