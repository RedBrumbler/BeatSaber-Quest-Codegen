#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP192K1Field;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP192K1Field
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1402))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP192K1Field
class CORDL_TYPE SecP192K1Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecP192K1Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP192K1Field", modifiers: " const&", def_value: None }]
constexpr SecP192K1Field(SecP192K1Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP192K1Field", modifiers: "&&", def_value: None }]
constexpr SecP192K1Field(SecP192K1Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecP192K1Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecP192K1Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecP192K1Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecP192K1Field& operator=(SecP192K1Field&& o) noexcept = default;
  constexpr SecP192K1Field& operator=(SecP192K1Field const& o) noexcept = default;
                


// Fields

/// @brief Field P5 offset 0
static constexpr uint32_t  P5{4294967295u};

/// @brief Field PExt11 offset 0
static constexpr uint32_t  PExt11{4294967295u};

/// @brief Field PInv33 offset 0
static constexpr uint32_t  PInv33{4553u};

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

/// @brief Method Add addr 0xf651c0 size 0xd8 virtual false final false
static void Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddExt addr 0xf65298 size 0x134 virtual false final false
static void AddExt(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> yy, ::ArrayW<uint32_t> zz) ;

/// @brief Method AddOne addr 0xf653cc size 0xc8 virtual false final false
static void AddOne(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method FromBigInteger addr 0xf65494 size 0xcc virtual false final false
static ::ArrayW<uint32_t> FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method Half addr 0xf65560 size 0xbc virtual false final false
static void Half(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Inv addr 0xf6561c size 0x320 virtual false final false
static void Inv(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method IsZero addr 0xf6593c size 0x54 virtual false final false
static int32_t IsZero(::ArrayW<uint32_t> x) ;

/// @brief Method Multiply addr 0xf65a10 size 0x88 virtual false final false
static void Multiply(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method MultiplyAddToExt addr 0xf65c54 size 0x130 virtual false final false
static void MultiplyAddToExt(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method Negate addr 0xf65d84 size 0x98 virtual false final false
static void Negate(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Random addr 0xf64bc4 size 0xd8 virtual false final false
static void Random(Org::BouncyCastle::Security::SecureRandom r, ::ArrayW<uint32_t> z) ;

/// @brief Method RandomMult addr 0xf64d68 size 0x6c virtual false final false
static void RandomMult(Org::BouncyCastle::Security::SecureRandom r, ::ArrayW<uint32_t> z) ;

/// @brief Method Reduce addr 0xf65b64 size 0xf0 virtual false final false
static void Reduce(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> z) ;

/// @brief Method Reduce32 addr 0xf65e1c size 0xd0 virtual false final false
static void Reduce32(uint32_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method Square addr 0xf65990 size 0x80 virtual false final false
static void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method SquareN addr 0xf65a98 size 0xcc virtual false final false
static void SquareN(::ArrayW<uint32_t> x, int32_t n, ::ArrayW<uint32_t> z) ;

/// @brief Method Subtract addr 0xf65eec size 0x34 virtual false final false
static void Subtract(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method SubtractExt addr 0xf65f20 size 0xe4 virtual false final false
static void SubtractExt(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> yy, ::ArrayW<uint32_t> zz) ;

/// @brief Method Twice addr 0xf66004 size 0xcc virtual false final false
static void Twice(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

// Ctor Parameters []
explicit SecP192K1Field() ;

/// @brief Method .ctor addr 0xf661e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP192K1Field, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP192K1Field");
