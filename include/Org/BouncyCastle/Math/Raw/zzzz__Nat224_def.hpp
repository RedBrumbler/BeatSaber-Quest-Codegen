#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat224;
}
// Type: Org.BouncyCastle.Math.Raw::Nat224
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1594))
// CS Name: Org.BouncyCastle.Math.Raw.Nat224
class CORDL_TYPE Nat224 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Nat224() = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat224", modifiers: " const&", def_value: None }]
constexpr Nat224(Nat224 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat224", modifiers: "&&", def_value: None }]
constexpr Nat224(Nat224&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Nat224(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Nat224& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Nat224& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Nat224& operator=(Nat224&& o) noexcept = default;
  constexpr Nat224& operator=(Nat224 const& o) noexcept = default;
                


// Fields

/// @brief Field M offset 0
static constexpr uint64_t  M{4294967295u};


// Methods

/// @brief Method Add addr 0xfe8e40 size 0x16c virtual false final false
static uint32_t Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method Add addr 0xfe8fac size 0x214 virtual false final false
static uint32_t Add(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method AddBothTo addr 0xfe91c0 size 0x1a4 virtual false final false
static uint32_t AddBothTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddBothTo addr 0xfe9364 size 0x24c virtual false final false
static uint32_t AddBothTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method AddTo addr 0xfe95b0 size 0x130 virtual false final false
static uint32_t AddTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method AddTo addr 0xfe96e0 size 0x1a8 virtual false final false
static uint32_t AddTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t cIn) ;

/// @brief Method AddToEachOther addr 0xfe9888 size 0x1d0 virtual false final false
static uint32_t AddToEachOther(::ArrayW<uint32_t> u, int32_t uOff, ::ArrayW<uint32_t> v, int32_t vOff) ;

/// @brief Method Copy addr 0xfe9a58 size 0xc4 virtual false final false
static void Copy(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Copy addr 0xfe9b1c size 0x134 virtual false final false
static void Copy(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Create addr 0xfe9c50 size 0x44 virtual false final false
static ::ArrayW<uint32_t> Create() ;

/// @brief Method CreateExt addr 0xfe9c94 size 0x44 virtual false final false
static ::ArrayW<uint32_t> CreateExt() ;

/// @brief Method Diff addr 0xfe9cd8 size 0x7c virtual false final false
static bool Diff(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Eq addr 0xfe9fe8 size 0x68 virtual false final false
static bool Eq(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method FromBigInteger addr 0xfea050 size 0xe0 virtual false final false
static ::ArrayW<uint32_t> FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method GetBit addr 0xfea130 size 0x64 virtual false final false
static uint32_t GetBit(::ArrayW<uint32_t> x, int32_t bit) ;

/// @brief Method Gte addr 0xfea194 size 0x70 virtual false final false
static bool Gte(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method Gte addr 0xfe9d54 size 0x80 virtual false final false
static bool Gte(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff) ;

/// @brief Method IsOne addr 0xfea204 size 0x60 virtual false final false
static bool IsOne(::ArrayW<uint32_t> x) ;

/// @brief Method IsZero addr 0xfea264 size 0x4c virtual false final false
static bool IsZero(::ArrayW<uint32_t> x) ;

/// @brief Method Mul addr 0xfea2b0 size 0x1d4 virtual false final false
static void Mul(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method Mul addr 0xfea484 size 0x2ec virtual false final false
static void Mul(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method MulAddTo addr 0xfea770 size 0x190 virtual false final false
static uint32_t MulAddTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method MulAddTo addr 0xfea900 size 0x240 virtual false final false
static uint32_t MulAddTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method Mul33Add addr 0xfeab40 size 0x230 virtual false final false
static uint64_t Mul33Add(uint32_t w, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulByWord addr 0xfead70 size 0xc4 virtual false final false
static uint32_t MulByWord(uint32_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method MulByWordAddTo addr 0xfeae34 size 0x134 virtual false final false
static uint32_t MulByWordAddTo(uint32_t x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method MulWordAddTo addr 0xfeaf68 size 0x1a4 virtual false final false
static uint32_t MulWordAddTo(uint32_t x, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Mul33DWordAdd addr 0xfeb10c size 0xc8 virtual false final false
static uint32_t Mul33DWordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Mul33WordAdd addr 0xfeb1d4 size 0xa0 virtual false final false
static uint32_t Mul33WordAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWordDwordAdd addr 0xfeb274 size 0xa4 virtual false final false
static uint32_t MulWordDwordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWord addr 0xfeb318 size 0x7c virtual false final false
static uint32_t MulWord(uint32_t x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Square addr 0xfeb394 size 0x31c virtual false final false
static void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> zz) ;

/// @brief Method Square addr 0xfeb6b0 size 0x414 virtual false final false
static void Square(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method Sub addr 0xfebac4 size 0x16c virtual false final false
static int32_t Sub(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method Sub addr 0xfe9dd4 size 0x214 virtual false final false
static int32_t Sub(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method SubBothFrom addr 0xfebc30 size 0x1a4 virtual false final false
static int32_t SubBothFrom(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method SubFrom addr 0xfebdd4 size 0x130 virtual false final false
static int32_t SubFrom(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method SubFrom addr 0xfebf04 size 0x1b0 virtual false final false
static int32_t SubFrom(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method ToBigInteger addr 0xfec0b4 size 0xe4 virtual false final false
static Org::BouncyCastle::Math::BigInteger ToBigInteger(::ArrayW<uint32_t> x) ;

/// @brief Method Zero addr 0xfec198 size 0x6c virtual false final false
static void Zero(::ArrayW<uint32_t> z) ;

// Ctor Parameters []
explicit Nat224() ;

/// @brief Method .ctor addr 0xfec204 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(Org::BouncyCastle::Math::Raw::Nat224);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat224, "Org.BouncyCastle.Math.Raw", "Nat224");
