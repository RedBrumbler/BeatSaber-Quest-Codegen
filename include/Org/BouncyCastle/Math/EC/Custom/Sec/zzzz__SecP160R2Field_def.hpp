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
class SecP160R2Field;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP160R2Field
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1397))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP160R2Field
class CORDL_TYPE SecP160R2Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecP160R2Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP160R2Field", modifiers: " const&", def_value: None }]
constexpr SecP160R2Field(SecP160R2Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP160R2Field", modifiers: "&&", def_value: None }]
constexpr SecP160R2Field(SecP160R2Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecP160R2Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecP160R2Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecP160R2Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecP160R2Field& operator=(SecP160R2Field&& o) noexcept = default;
  constexpr SecP160R2Field& operator=(SecP160R2Field const& o) noexcept = default;
                


// Fields

/// @brief Field P4 offset 0
static constexpr uint32_t  P4{4294967295u};

/// @brief Field PExt9 offset 0
static constexpr uint32_t  PExt9{4294967295u};

/// @brief Field PInv33 offset 0
static constexpr uint32_t  PInv33{21389u};

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

/// @brief Method Add addr 0xf617c0 size 0xd8 virtual false final false
static void Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddExt addr 0xf61898 size 0x134 virtual false final false
static void AddExt(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> yy, ::ArrayW<uint32_t> zz) ;

/// @brief Method AddOne addr 0xf619cc size 0xc8 virtual false final false
static void AddOne(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method FromBigInteger addr 0xf61a94 size 0xcc virtual false final false
static ::ArrayW<uint32_t> FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method Half addr 0xf61b60 size 0xbc virtual false final false
static void Half(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Inv addr 0xf61c1c size 0x348 virtual false final false
static void Inv(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method IsZero addr 0xf61f64 size 0x54 virtual false final false
static int32_t IsZero(::ArrayW<uint32_t> x) ;

/// @brief Method Multiply addr 0xf62038 size 0x88 virtual false final false
static void Multiply(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method MultiplyAddToExt addr 0xf6227c size 0x130 virtual false final false
static void MultiplyAddToExt(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method Negate addr 0xf623ac size 0x98 virtual false final false
static void Negate(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Random addr 0xf611c4 size 0xd8 virtual false final false
static void Random(Org::BouncyCastle::Security::SecureRandom r, ::ArrayW<uint32_t> z) ;

/// @brief Method RandomMult addr 0xf61368 size 0x6c virtual false final false
static void RandomMult(Org::BouncyCastle::Security::SecureRandom r, ::ArrayW<uint32_t> z) ;

/// @brief Method Reduce addr 0xf6218c size 0xf0 virtual false final false
static void Reduce(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> z) ;

/// @brief Method Reduce32 addr 0xf62444 size 0xd0 virtual false final false
static void Reduce32(uint32_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method Square addr 0xf61fb8 size 0x80 virtual false final false
static void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method SquareN addr 0xf620c0 size 0xcc virtual false final false
static void SquareN(::ArrayW<uint32_t> x, int32_t n, ::ArrayW<uint32_t> z) ;

/// @brief Method Subtract addr 0xf62514 size 0x34 virtual false final false
static void Subtract(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method SubtractExt addr 0xf62548 size 0xe4 virtual false final false
static void SubtractExt(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> yy, ::ArrayW<uint32_t> zz) ;

/// @brief Method Twice addr 0xf6262c size 0xcc virtual false final false
static void Twice(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

// Ctor Parameters []
explicit SecP160R2Field() ;

/// @brief Method .ctor addr 0xf6280c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Field);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2Field, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP160R2Field");
