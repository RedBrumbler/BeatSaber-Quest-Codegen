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
class SecP128R1Field;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP128R1Field
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1384))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecP128R1Field
class CORDL_TYPE SecP128R1Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecP128R1Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP128R1Field", modifiers: " const&", def_value: None }]
constexpr SecP128R1Field(SecP128R1Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecP128R1Field", modifiers: "&&", def_value: None }]
constexpr SecP128R1Field(SecP128R1Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecP128R1Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecP128R1Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecP128R1Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecP128R1Field& operator=(SecP128R1Field&& o) noexcept = default;
  constexpr SecP128R1Field& operator=(SecP128R1Field const& o) noexcept = default;
                


// Fields

/// @brief Field P3 offset 0
static constexpr uint32_t  P3{4294967293u};

/// @brief Field PExt7 offset 0
static constexpr uint32_t  PExt7{4294967292u};

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

/// @brief Method Add addr 0xf58b20 size 0xdc virtual false final false
static void Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddExt addr 0xf58c7c size 0xf4 virtual false final false
static void AddExt(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> yy, ::ArrayW<uint32_t> zz) ;

/// @brief Method AddOne addr 0xf58d70 size 0xcc virtual false final false
static void AddOne(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method FromBigInteger addr 0xf58e3c size 0xcc virtual false final false
static ::ArrayW<uint32_t> FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method Half addr 0xf58f08 size 0xbc virtual false final false
static void Half(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Inv addr 0xf58fc4 size 0x254 virtual false final false
static void Inv(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method IsZero addr 0xf59218 size 0x54 virtual false final false
static int32_t IsZero(::ArrayW<uint32_t> x) ;

/// @brief Method Multiply addr 0xf592ec size 0x88 virtual false final false
static void Multiply(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method MultiplyAddToExt addr 0xf59558 size 0xf4 virtual false final false
static void MultiplyAddToExt(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method Negate addr 0xf5964c size 0x98 virtual false final false
static void Negate(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Random addr 0xf58518 size 0xd8 virtual false final false
static void Random(Org::BouncyCastle::Security::SecureRandom r, ::ArrayW<uint32_t> z) ;

/// @brief Method RandomMult addr 0xf586bc size 0x6c virtual false final false
static void RandomMult(Org::BouncyCastle::Security::SecureRandom r, ::ArrayW<uint32_t> z) ;

/// @brief Method Reduce addr 0xf59440 size 0x118 virtual false final false
static void Reduce(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> z) ;

/// @brief Method Reduce32 addr 0xf596e4 size 0x12c virtual false final false
static void Reduce32(uint32_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method Square addr 0xf5926c size 0x80 virtual false final false
static void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method SquareN addr 0xf59374 size 0xcc virtual false final false
static void SquareN(::ArrayW<uint32_t> x, int32_t n, ::ArrayW<uint32_t> z) ;

/// @brief Method Subtract addr 0xf59810 size 0x8c virtual false final false
static void Subtract(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method SubtractExt addr 0xf5991c size 0xac virtual false final false
static void SubtractExt(::ArrayW<uint32_t> xx, ::ArrayW<uint32_t> yy, ::ArrayW<uint32_t> zz) ;

/// @brief Method Twice addr 0xf599c8 size 0xd0 virtual false final false
static void Twice(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method AddPInvTo addr 0xf58bfc size 0x80 virtual false final false
static void AddPInvTo(::ArrayW<uint32_t> z) ;

/// @brief Method SubPInvFrom addr 0xf5989c size 0x80 virtual false final false
static void SubPInvFrom(::ArrayW<uint32_t> z) ;

// Ctor Parameters []
explicit SecP128R1Field() ;

/// @brief Method .ctor addr 0xf59bac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::SecP128R1Field);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP128R1Field, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP128R1Field");
