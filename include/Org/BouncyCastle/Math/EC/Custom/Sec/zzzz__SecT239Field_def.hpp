#pragma once
#include "../../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecT239Field;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT239Field
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1486))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT239Field
class CORDL_TYPE SecT239Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecT239Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT239Field", modifiers: " const&", def_value: None }]
constexpr SecT239Field(SecT239Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT239Field", modifiers: "&&", def_value: None }]
constexpr SecT239Field(SecT239Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecT239Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecT239Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecT239Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecT239Field& operator=(SecT239Field&& o) noexcept = default;
  constexpr SecT239Field& operator=(SecT239Field const& o) noexcept = default;
                


// Fields

/// @brief Field M47 offset 0
static constexpr uint64_t  M47{140737488355327u};

/// @brief Field M60 offset 0
static constexpr uint64_t  M60{1152921504606846975u};


// Methods

/// @brief Method Add addr 0xfa1d34 size 0xd8 virtual false final false
static void Add(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method AddExt addr 0xfa1e0c size 0x198 virtual false final false
static void AddExt(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> yy, ::ArrayW<uint64_t> zz) ;

/// @brief Method AddOne addr 0xfa1fa4 size 0x8c virtual false final false
static void AddOne(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method AddTo addr 0xfa2030 size 0xa8 virtual false final false
static void AddTo(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method FromBigInteger addr 0xfa20d8 size 0x10 virtual false final false
static ::ArrayW<uint64_t> FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method HalfTrace addr 0xfa20e8 size 0x8c virtual false final false
static void HalfTrace(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Invert addr 0xfa2304 size 0x1f4 virtual false final false
static void Invert(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Multiply addr 0xfa2534 size 0x4c virtual false final false
static void Multiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method MultiplyAddToExt addr 0xfa296c size 0x50 virtual false final false
static void MultiplyAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method Reduce addr 0xfa2210 size 0xf4 virtual false final false
static void Reduce(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> z) ;

/// @brief Method Reduce17 addr 0xfa29bc size 0x80 virtual false final false
static void Reduce17(::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Sqrt addr 0xfa2a3c size 0x26c virtual false final false
static void Sqrt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Square addr 0xfa24f8 size 0x3c virtual false final false
static void Square(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method SquareAddToExt addr 0xfa2ca8 size 0x40 virtual false final false
static void SquareAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

/// @brief Method SquareN addr 0xfa2580 size 0x7c virtual false final false
static void SquareN(::ArrayW<uint64_t> x, int32_t n, ::ArrayW<uint64_t> z) ;

/// @brief Method Trace addr 0xfa2ce8 size 0x4c virtual false final false
static uint32_t Trace(::ArrayW<uint64_t> x) ;

/// @brief Method ImplCompactExt addr 0xfa2d34 size 0xb4 virtual false final false
static void ImplCompactExt(::ArrayW<uint64_t> zz) ;

/// @brief Method ImplExpand addr 0xfa2de8 size 0x8c virtual false final false
static void ImplExpand(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method ImplMultiply addr 0xfa25fc size 0x370 virtual false final false
static void ImplMultiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method ImplMulwAcc addr 0xfa2e74 size 0x1d0 virtual false final false
static void ImplMulwAcc(uint64_t x, uint64_t y, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method ImplSquare addr 0xfa2174 size 0x9c virtual false final false
static void ImplSquare(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

// Ctor Parameters []
explicit SecT239Field() ;

/// @brief Method .ctor addr 0xfa3044 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::SecT239Field);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT239Field, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT239Field");
