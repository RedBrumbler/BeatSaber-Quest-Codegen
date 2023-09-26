#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP192R1Field;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP192R1Field
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1407))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192R1Field
class CORDL_TYPE SecP192R1Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecP192R1Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP192R1Field", modifiers: " const&", def_value: None }]
constexpr SecP192R1Field(SecP192R1Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP192R1Field", modifiers: "&&", def_value: None }]
constexpr SecP192R1Field(SecP192R1Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecP192R1Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecP192R1Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecP192R1Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecP192R1Field& operator=(SecP192R1Field&& o) noexcept = default;
  constexpr SecP192R1Field& operator=(SecP192R1Field const& o) noexcept = default;
                


// Fields

/// @brief Field P5 offset 0
static constexpr uint32_t  P5{4294967295u};

/// @brief Field PExt11 offset 0
static constexpr uint32_t  PExt11{4294967295u};

static ::ArrayW<uint32_t> __declspec(property(get=__get_P, put=__set_P))  P;

static void __set_P(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_P() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_PExt, put=__set_PExt))  PExt;

static void __set_PExt(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_PExt() ;

static ::ArrayW<uint32_t> __declspec(property(get=__get_PExtInv, put=__set_PExtInv))  PExtInv;

static void __set_PExtInv(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_PExtInv() ;


// Methods

/// @brief Method Add addr 0xf68b3c size 0xdc virtual false final false
static void Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddExt addr 0xf68ca4 size 0x134 virtual false final false
static void AddExt(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> yy, ::ArrayW<uint32_t> zz) ;

/// @brief Method AddOne addr 0xf68dd8 size 0xcc virtual false final false
static void AddOne(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method FromBigInteger addr 0xf68ea4 size 0xcc virtual false final false
static ::ArrayW<uint32_t> FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method Half addr 0xf68f70 size 0xbc virtual false final false
static void Half(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Inv addr 0xf6902c size 0x294 virtual false final false
static void Inv(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method IsZero addr 0xf692c0 size 0x54 virtual false final false
static int32_t IsZero(::ArrayW<uint32_t> x) ;

/// @brief Method Multiply addr 0xf69394 size 0x88 virtual false final false
static void Multiply(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method MultiplyAddToExt addr 0xf696b4 size 0x130 virtual false final false
static void MultiplyAddToExt(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method Negate addr 0xf697e4 size 0x98 virtual false final false
static void Negate(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Random addr 0xf68540 size 0xd8 virtual false final false
static void Random(Org::BouncyCastle::Security::SecureRandom r, ::ArrayW<uint32_t> z) ;

/// @brief Method RandomMult addr 0xf686e4 size 0x6c virtual false final false
static void RandomMult(Org::BouncyCastle::Security::SecureRandom r, ::ArrayW<uint32_t> z) ;

/// @brief Method Reduce addr 0xf694e8 size 0x1cc virtual false final false
static void Reduce(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> z) ;

/// @brief Method Reduce32 addr 0xf6987c size 0x130 virtual false final false
static void Reduce32(uint32_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method Square addr 0xf69314 size 0x80 virtual false final false
static void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method SquareN addr 0xf6941c size 0xcc virtual false final false
static void SquareN(::ArrayW<uint32_t> x, int32_t n, ::ArrayW<uint32_t> z) ;

/// @brief Method Subtract addr 0xf699ac size 0x8c virtual false final false
static void Subtract(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method SubtractExt addr 0xf69ac4 size 0xe4 virtual false final false
static void SubtractExt(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> yy, ::ArrayW<uint32_t> zz) ;

/// @brief Method Twice addr 0xf69ba8 size 0xd0 virtual false final false
static void Twice(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method AddPInvTo addr 0xf68c18 size 0x8c virtual false final false
static void AddPInvTo(::ArrayW<uint32_t> z) ;

/// @brief Method SubPInvFrom addr 0xf69a38 size 0x8c virtual false final false
static void SubPInvFrom(::ArrayW<uint32_t> z) ;

// Ctor Parameters []
explicit SecP192R1Field() ;

/// @brief Method .ctor addr 0xf69d8c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Field);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192R1Field, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192R1Field");
