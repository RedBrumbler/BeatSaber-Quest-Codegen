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
class Nat128;
}
// Type: Org.BouncyCastle.Math.Raw::Nat128
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1591))
// CS Name: Org.BouncyCastle.Math.Raw.Nat128
class CORDL_TYPE Nat128 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Nat128() = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat128", modifiers: " const&", def_value: None }]
constexpr Nat128(Nat128 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat128", modifiers: "&&", def_value: None }]
constexpr Nat128(Nat128&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Nat128(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Nat128& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Nat128& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Nat128& operator=(Nat128&& o) noexcept = default;
  constexpr Nat128& operator=(Nat128 const& o) noexcept = default;
                


// Fields

/// @brief Field M offset 0
static constexpr uint64_t  M{4294967295u};


// Methods

/// @brief Method Add addr 0xfe1acc size 0xdc virtual false final false
static uint32_t Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddBothTo addr 0xfe1ba8 size 0xfc virtual false final false
static uint32_t AddBothTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddTo addr 0xfe1ca4 size 0xb8 virtual false final false
static uint32_t AddTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method AddTo addr 0xfe1d5c size 0x100 virtual false final false
static uint32_t AddTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t cIn) ;

/// @brief Method AddToEachOther addr 0xfe1e5c size 0x110 virtual false final false
static uint32_t AddToEachOther(::ArrayW<uint32_t> u, int32_t uOff, ::ArrayW<uint32_t> v, int32_t vOff) ;

/// @brief Method Copy addr 0xfe1f6c size 0x7c virtual false final false
static void Copy(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Copy addr 0xfe1fe8 size 0xbc virtual false final false
static void Copy(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Copy64 addr 0xfe20a4 size 0x50 virtual false final false
static void Copy64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Copy64 addr 0xfe20f4 size 0x74 virtual false final false
static void Copy64(::ArrayW<uint64_t> x, int32_t xOff, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Create addr 0xfe2168 size 0x44 virtual false final false
static ::ArrayW<uint32_t> Create() ;

/// @brief Method Create64 addr 0xfe21ac size 0x44 virtual false final false
static ::ArrayW<uint64_t> Create64() ;

/// @brief Method CreateExt addr 0xfe21f0 size 0x44 virtual false final false
static ::ArrayW<uint32_t> CreateExt() ;

/// @brief Method CreateExt64 addr 0xfe2234 size 0x44 virtual false final false
static ::ArrayW<uint64_t> CreateExt64() ;

/// @brief Method Diff addr 0xfe2278 size 0x7c virtual false final false
static bool Diff(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Eq addr 0xfe24b0 size 0x68 virtual false final false
static bool Eq(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method Eq64 addr 0xfe2518 size 0x70 virtual false final false
static bool Eq64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y) ;

/// @brief Method FromBigInteger addr 0xfe2588 size 0xe0 virtual false final false
static ::ArrayW<uint32_t> FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method FromBigInteger64 addr 0xfe2668 size 0xe0 virtual false final false
static ::ArrayW<uint64_t> FromBigInteger64(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method GetBit addr 0xfe2748 size 0x64 virtual false final false
static uint32_t GetBit(::ArrayW<uint32_t> x, int32_t bit) ;

/// @brief Method Gte addr 0xfe27ac size 0x70 virtual false final false
static bool Gte(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method Gte addr 0xfe22f4 size 0x80 virtual false final false
static bool Gte(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff) ;

/// @brief Method IsOne addr 0xfe281c size 0x60 virtual false final false
static bool IsOne(::ArrayW<uint32_t> x) ;

/// @brief Method IsOne64 addr 0xfe287c size 0x48 virtual false final false
static bool IsOne64(::ArrayW<uint64_t> x) ;

/// @brief Method IsZero addr 0xfe28c4 size 0x4c virtual false final false
static bool IsZero(::ArrayW<uint32_t> x) ;

/// @brief Method IsZero64 addr 0xfe2910 size 0x4c virtual false final false
static bool IsZero64(::ArrayW<uint64_t> x) ;

/// @brief Method Mul addr 0xfe295c size 0x134 virtual false final false
static void Mul(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method Mul addr 0xfe2a90 size 0x1e4 virtual false final false
static void Mul(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method MulAddTo addr 0xfe2c74 size 0x110 virtual false final false
static uint32_t MulAddTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method MulAddTo addr 0xfe2d84 size 0x174 virtual false final false
static uint32_t MulAddTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method Mul33Add addr 0xfe2ef8 size 0x14c virtual false final false
static uint64_t Mul33Add(uint32_t w, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWordAddExt addr 0xfe3044 size 0xfc virtual false final false
static uint32_t MulWordAddExt(uint32_t x, ::ArrayW<uint32_t> yy, int32_t yyOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method Mul33DWordAdd addr 0xfe3140 size 0xa4 virtual false final false
static uint32_t Mul33DWordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Mul33WordAdd addr 0xfe31e4 size 0xa0 virtual false final false
static uint32_t Mul33WordAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWordDwordAdd addr 0xfe3284 size 0xa4 virtual false final false
static uint32_t MulWordDwordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWordsAdd addr 0xfe3328 size 0x80 virtual false final false
static uint32_t MulWordsAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWord addr 0xfe33a8 size 0x7c virtual false final false
static uint32_t MulWord(uint32_t x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Square addr 0xfe3424 size 0x1a8 virtual false final false
static void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> zz) ;

/// @brief Method Square addr 0xfe35cc size 0x228 virtual false final false
static void Square(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method Sub addr 0xfe37f4 size 0xdc virtual false final false
static int32_t Sub(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method Sub addr 0xfe2374 size 0x13c virtual false final false
static int32_t Sub(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method SubBothFrom addr 0xfe38d0 size 0xfc virtual false final false
static int32_t SubBothFrom(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method SubFrom addr 0xfe39cc size 0xb8 virtual false final false
static int32_t SubFrom(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method SubFrom addr 0xfe3a84 size 0xfc virtual false final false
static int32_t SubFrom(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method ToBigInteger addr 0xfe3b80 size 0xe4 virtual false final false
static Org::BouncyCastle::Math::BigInteger ToBigInteger(::ArrayW<uint32_t> x) ;

/// @brief Method ToBigInteger64 addr 0xfe3c64 size 0xe4 virtual false final false
static Org::BouncyCastle::Math::BigInteger ToBigInteger64(::ArrayW<uint64_t> x) ;

/// @brief Method Zero addr 0xfe3d48 size 0x48 virtual false final false
static void Zero(::ArrayW<uint32_t> z) ;

// Ctor Parameters []
explicit Nat128() ;

/// @brief Method .ctor addr 0xfe3d90 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(Org::BouncyCastle::Math::Raw::Nat128);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat128, "Org.BouncyCastle.Math.Raw", "Nat128");
