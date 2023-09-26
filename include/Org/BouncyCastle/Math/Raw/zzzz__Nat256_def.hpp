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
class Nat256;
}
// Type: Org.BouncyCastle.Math.Raw::Nat256
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1595))
// CS Name: Org.BouncyCastle.Math.Raw.Nat256
class CORDL_TYPE Nat256 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Nat256() = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat256", modifiers: " const&", def_value: None }]
constexpr Nat256(Nat256 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat256", modifiers: "&&", def_value: None }]
constexpr Nat256(Nat256&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Nat256(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Nat256& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Nat256& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Nat256& operator=(Nat256&& o) noexcept = default;
  constexpr Nat256& operator=(Nat256 const& o) noexcept = default;
                


// Fields

/// @brief Field M offset 0
static constexpr uint64_t  M{4294967295u};


// Methods

/// @brief Method Add addr 0x100ba6c size 0x19c virtual false final false
static uint32_t Add(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method Add addr 0x100bc08 size 0x25c virtual false final false
static uint32_t Add(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method AddBothTo addr 0x100be64 size 0x1dc virtual false final false
static uint32_t AddBothTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method AddBothTo addr 0x100c040 size 0x29c virtual false final false
static uint32_t AddBothTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method AddTo addr 0x100c2dc size 0x158 virtual false final false
static uint32_t AddTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method AddTo addr 0x100c434 size 0x1e0 virtual false final false
static uint32_t AddTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff, uint32_t cIn) ;

/// @brief Method AddToEachOther addr 0x100c614 size 0x210 virtual false final false
static uint32_t AddToEachOther(::ArrayW<uint32_t> u, int32_t uOff, ::ArrayW<uint32_t> v, int32_t vOff) ;

/// @brief Method Copy addr 0x100c824 size 0xdc virtual false final false
static void Copy(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method Copy addr 0x100c900 size 0x15c virtual false final false
static void Copy(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Copy64 addr 0x100ca5c size 0x88 virtual false final false
static void Copy64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Copy64 addr 0x100cae4 size 0xd4 virtual false final false
static void Copy64(::ArrayW<uint64_t> x, int32_t xOff, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Create addr 0x100cbb8 size 0x44 virtual false final false
static ::ArrayW<uint32_t> Create() ;

/// @brief Method Create64 addr 0x100cbfc size 0x44 virtual false final false
static ::ArrayW<uint64_t> Create64() ;

/// @brief Method CreateExt addr 0x100cc40 size 0x44 virtual false final false
static ::ArrayW<uint32_t> CreateExt() ;

/// @brief Method CreateExt64 addr 0x100cc84 size 0x44 virtual false final false
static ::ArrayW<uint64_t> CreateExt64() ;

/// @brief Method Diff addr 0x100ccc8 size 0x7c virtual false final false
static bool Diff(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Eq addr 0x100d020 size 0x68 virtual false final false
static bool Eq(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method Eq64 addr 0x100d088 size 0x68 virtual false final false
static bool Eq64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y) ;

/// @brief Method FromBigInteger addr 0x100d0f0 size 0xd4 virtual false final false
static ::ArrayW<uint32_t> FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method FromBigInteger64 addr 0x100d484 size 0xd4 virtual false final false
static ::ArrayW<uint64_t> FromBigInteger64(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method GetBit addr 0x100d5c4 size 0x64 virtual false final false
static uint32_t GetBit(::ArrayW<uint32_t> x, int32_t bit) ;

/// @brief Method Gte addr 0x100d628 size 0x70 virtual false final false
static bool Gte(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y) ;

/// @brief Method Gte addr 0x100cd44 size 0x80 virtual false final false
static bool Gte(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff) ;

/// @brief Method IsOne addr 0x100d698 size 0x60 virtual false final false
static bool IsOne(::ArrayW<uint32_t> x) ;

/// @brief Method IsOne64 addr 0x100d6f8 size 0x60 virtual false final false
static bool IsOne64(::ArrayW<uint64_t> x) ;

/// @brief Method IsZero addr 0x100d758 size 0x4c virtual false final false
static bool IsZero(::ArrayW<uint32_t> x) ;

/// @brief Method IsZero64 addr 0x100d7a4 size 0x4c virtual false final false
static bool IsZero64(::ArrayW<uint64_t> x) ;

/// @brief Method Mul addr 0x100d7f0 size 0x204 virtual false final false
static void Mul(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method Mul addr 0x100d9f4 size 0x36c virtual false final false
static void Mul(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method MulAddTo addr 0x100dd60 size 0x1b8 virtual false final false
static uint32_t MulAddTo(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> zz) ;

/// @brief Method MulAddTo addr 0x100df18 size 0x27c virtual false final false
static uint32_t MulAddTo(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method Mul33Add addr 0x100e194 size 0x27c virtual false final false
static uint64_t Mul33Add(uint32_t w, ::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulByWord addr 0x100e410 size 0xdc virtual false final false
static uint32_t MulByWord(uint32_t x, ::ArrayW<uint32_t> z) ;

/// @brief Method MulByWordAddTo addr 0x100e4ec size 0x15c virtual false final false
static uint32_t MulByWordAddTo(uint32_t x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method MulWordAddTo addr 0x100e648 size 0x1dc virtual false final false
static uint32_t MulWordAddTo(uint32_t x, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Mul33DWordAdd addr 0x100e824 size 0xcc virtual false final false
static uint32_t Mul33DWordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Mul33WordAdd addr 0x100e8f0 size 0xa4 virtual false final false
static uint32_t Mul33WordAdd(uint32_t x, uint32_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWordDwordAdd addr 0x100e994 size 0xa8 virtual false final false
static uint32_t MulWordDwordAdd(uint32_t x, uint64_t y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method MulWord addr 0x100ea3c size 0x7c virtual false final false
static uint32_t MulWord(uint32_t x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method Square addr 0x100eab8 size 0x3b4 virtual false final false
static void Square(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> zz) ;

/// @brief Method Square addr 0x100ee6c size 0x4e4 virtual false final false
static void Square(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> zz, int32_t zzOff) ;

/// @brief Method Sub addr 0x100f350 size 0x19c virtual false final false
static int32_t Sub(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method Sub addr 0x100cdc4 size 0x25c virtual false final false
static int32_t Sub(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> y, int32_t yOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method SubBothFrom addr 0x100f4ec size 0x1dc virtual false final false
static int32_t SubBothFrom(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> y, ::ArrayW<uint32_t> z) ;

/// @brief Method SubFrom addr 0x100f6c8 size 0x158 virtual false final false
static int32_t SubFrom(::ArrayW<uint32_t> x, ::ArrayW<uint32_t> z) ;

/// @brief Method SubFrom addr 0x100f820 size 0x1ec virtual false final false
static int32_t SubFrom(::ArrayW<uint32_t> x, int32_t xOff, ::ArrayW<uint32_t> z, int32_t zOff) ;

/// @brief Method ToBigInteger addr 0x100fa0c size 0xe0 virtual false final false
static Org::BouncyCastle::Math::BigInteger ToBigInteger(::ArrayW<uint32_t> x) ;

/// @brief Method ToBigInteger64 addr 0x100fb08 size 0xe0 virtual false final false
static Org::BouncyCastle::Math::BigInteger ToBigInteger64(::ArrayW<uint64_t> x) ;

/// @brief Method Zero addr 0x100fbe8 size 0x78 virtual false final false
static void Zero(::ArrayW<uint32_t> z) ;

// Ctor Parameters []
explicit Nat256() ;

/// @brief Method .ctor addr 0x100fc60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(Org::BouncyCastle::Math::Raw::Nat256);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat256, "Org.BouncyCastle.Math.Raw", "Nat256");
