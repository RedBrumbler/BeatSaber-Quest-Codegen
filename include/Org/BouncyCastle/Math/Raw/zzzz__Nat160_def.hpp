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
class Nat160;
}
// Type: Org.BouncyCastle.Math.Raw::Nat160
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1592))
// CS Name: Org.BouncyCastle.Math.Raw.Nat160
class CORDL_TYPE Nat160 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Nat160() = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat160", modifiers: " const&", def_value: None }]
constexpr Nat160(Nat160 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat160", modifiers: "&&", def_value: None }]
constexpr Nat160(Nat160&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Nat160(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Nat160& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Nat160& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Nat160& operator=(Nat160&& o) noexcept = default;
  constexpr Nat160& operator=(Nat160 const& o) noexcept = default;
                


// Fields

/// @brief Field M offset 0
static constexpr uint64_t  M{4294967295u};


// Methods

/// @brief Method Add addr 0xfe3d98 size 0x10c virtual false final false
static uint32_t Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddBothTo addr 0xfe3ea4 size 0x134 virtual false final false
static uint32_t AddBothTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddTo addr 0xfe3fd8 size 0xe0 virtual false final false
static uint32_t AddTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method AddTo addr 0xfe40b8 size 0x168 virtual false final false
static uint32_t AddTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t cIn) ;

/// @brief Method AddToEachOther addr 0xfe4220 size 0x150 virtual false final false
static uint32_t AddToEachOther(::ArrayW<uint32_t> u, int32_t uOff, ::ArrayW<uint32_t> v, int32_t vOff) ;

/// @brief Method Copy addr 0xfe4370 size 0x94 virtual false final false
static void Copy(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Copy addr 0xfe4404 size 0xe4 virtual false final false
static void Copy(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Create addr 0xfe44e8 size 0x44 virtual false final false
static ::ArrayW<uint32_t> Create() ;

/// @brief Method CreateExt addr 0xfe452c size 0x44 virtual false final false
static ::ArrayW<uint32_t> CreateExt() ;

/// @brief Method Diff addr 0xfe4570 size 0x7c virtual false final false
static bool Diff(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Eq addr 0xfe47f0 size 0x68 virtual false final false
static bool Eq(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method FromBigInteger addr 0xfe4858 size 0xe0 virtual false final false
static ::ArrayW<uint32_t> FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method GetBit addr 0xfe4938 size 0x64 virtual false final false
static uint32_t GetBit(::ArrayW<uint32_t> x, int32_t bit) ;

/// @brief Method Gte addr 0xfe499c size 0x70 virtual false final false
static bool Gte(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method Gte addr 0xfe45ec size 0x80 virtual false final false
static bool Gte(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff) ;

/// @brief Method IsOne addr 0xfe4a0c size 0x60 virtual false final false
static bool IsOne(::ArrayW<uint32_t> x) ;

/// @brief Method IsZero addr 0xfe4a6c size 0x4c virtual false final false
static bool IsZero(::ArrayW<uint32_t> x) ;

/// @brief Method Mul addr 0xfe4ab8 size 0x16c virtual false final false
static void Mul(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method Mul addr 0xfe4c24 size 0x23c virtual false final false
static void Mul(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method MulAddTo addr 0xfe4e60 size 0x13c virtual false final false
static uint32_t MulAddTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method MulAddTo addr 0xfe4f9c size 0x1bc virtual false final false
static uint32_t MulAddTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method Mul33Add addr 0xfe5158 size 0x198 virtual false final false
static uint64_t Mul33Add(uint32_t w, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWordAddExt addr 0xfe52f0 size 0x134 virtual false final false
static uint32_t MulWordAddExt(uint32_t x, ::ArrayW<uint32_t> yy, int32_t yyOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method Mul33DWordAdd addr 0xfe5424 size 0xc8 virtual false final false
static uint32_t Mul33DWordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Mul33WordAdd addr 0xfe54ec size 0xa0 virtual false final false
static uint32_t Mul33WordAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWordDwordAdd addr 0xfe558c size 0xa4 virtual false final false
static uint32_t MulWordDwordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWordsAdd addr 0xfe5630 size 0x80 virtual false final false
static uint32_t MulWordsAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWord addr 0xfe56b0 size 0x7c virtual false final false
static uint32_t MulWord(uint32_t x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Square addr 0xfe572c size 0x20c virtual false final false
static void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> zz) ;

/// @brief Method Square addr 0xfe5938 size 0x2bc virtual false final false
static void Square(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method Sub addr 0xfe5bf4 size 0x10c virtual false final false
static int32_t Sub(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method Sub addr 0xfe466c size 0x184 virtual false final false
static int32_t Sub(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method SubBothFrom addr 0xfe5d00 size 0x134 virtual false final false
static int32_t SubBothFrom(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method SubFrom addr 0xfe5e34 size 0xe0 virtual false final false
static int32_t SubFrom(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method SubFrom addr 0xfe5f14 size 0x138 virtual false final false
static int32_t SubFrom(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method ToBigInteger addr 0xfe604c size 0xe4 virtual false final false
static Org::BouncyCastle::Math::BigInteger ToBigInteger(::ArrayW<uint32_t> x) ;

/// @brief Method Zero addr 0xfe6130 size 0x54 virtual false final false
static void Zero(::ArrayW<uint32_t> z) ;

// Ctor Parameters []
explicit Nat160() ;

/// @brief Method .ctor addr 0xfe6184 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(Org::BouncyCastle::Math::Raw::Nat160);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat160, "Org.BouncyCastle.Math.Raw", "Nat160");
