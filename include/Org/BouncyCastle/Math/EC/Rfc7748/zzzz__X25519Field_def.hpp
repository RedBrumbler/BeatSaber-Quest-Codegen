#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
class X25519Field;
}
// Type: Org.BouncyCastle.Math.EC.Rfc7748::X25519Field
namespace Org::BouncyCastle::Math::EC::Rfc7748 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1553))
// CS Name: Org.BouncyCastle.Math.EC.Rfc7748.X25519Field
class CORDL_TYPE X25519Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~X25519Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "X25519Field", modifiers: " const&", def_value: None }]
constexpr X25519Field(X25519Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X25519Field", modifiers: "&&", def_value: None }]
constexpr X25519Field(X25519Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X25519Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X25519Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X25519Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X25519Field& operator=(X25519Field&& o) noexcept = default;
  constexpr X25519Field& operator=(X25519Field const& o) noexcept = default;
                


// Fields

/// @brief Field Size offset 0
static constexpr int32_t  Size{10};

/// @brief Field M24 offset 0
static constexpr int32_t  M24{16777215};

/// @brief Field M25 offset 0
static constexpr int32_t  M25{33554431};

/// @brief Field M26 offset 0
static constexpr int32_t  M26{67108863};

static ::ArrayW<int32_t> __declspec(property(get=__get_RootNegOne, put=__set_RootNegOne))  RootNegOne;

static void __set_RootNegOne(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_RootNegOne() ;


// Methods

// Ctor Parameters []
explicit X25519Field() ;

/// @brief Method .ctor addr 0xfbec30 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Add addr 0xfbdec4 size 0x70 virtual false final false
static void Add(::ArrayW<int32_t> x, ::ArrayW<int32_t> y, ::ArrayW<int32_t> z) ;

/// @brief Method AddOne addr 0xfbec38 size 0x2c virtual false final false
static void AddOne(::ArrayW<int32_t> z) ;

/// @brief Method AddOne addr 0xfbec64 size 0x38 virtual false final false
static void AddOne(::ArrayW<int32_t> z, int32_t zOff) ;

/// @brief Method Apm addr 0xfbd3a0 size 0x8c virtual false final false
static void Apm(::ArrayW<int32_t> x, ::ArrayW<int32_t> y, ::ArrayW<int32_t> zp, ::ArrayW<int32_t> zm) ;

/// @brief Method Carry addr 0xfbec9c size 0x10c virtual false final false
static void Carry(::ArrayW<int32_t> z) ;

/// @brief Method CMov addr 0xfbeda8 size 0x80 virtual false final false
static void CMov(int32_t cond, ::ArrayW<int32_t> x, int32_t xOff, ::ArrayW<int32_t> z, int32_t zOff) ;

/// @brief Method CNegate addr 0xfbee28 size 0x4c virtual false final false
static void CNegate(int32_t negate, ::ArrayW<int32_t> z) ;

/// @brief Method Copy addr 0xfbe830 size 0x70 virtual false final false
static void Copy(::ArrayW<int32_t> x, int32_t xOff, ::ArrayW<int32_t> z, int32_t zOff) ;

/// @brief Method Create addr 0xfbd35c size 0x44 virtual false final false
static ::ArrayW<int32_t> Create() ;

/// @brief Method CreateTable addr 0xfbee74 size 0x4c virtual false final false
static ::ArrayW<int32_t> CreateTable(int32_t n) ;

/// @brief Method CSwap addr 0xfbe8a0 size 0x70 virtual false final false
static void CSwap(int32_t swap, ::ArrayW<int32_t> a, ::ArrayW<int32_t> b) ;

/// @brief Method Decode addr 0xfbe784 size 0xac virtual false final false
static void Decode(::ArrayW<uint8_t> x, int32_t xOff, ::ArrayW<int32_t> z) ;

/// @brief Method Decode128 addr 0xfbeec0 size 0x138 virtual false final false
static void Decode128(::ArrayW<uint8_t> bs, int32_t off, ::ArrayW<int32_t> z, int32_t zOff) ;

/// @brief Method Decode32 addr 0xfbeff8 size 0x68 virtual false final false
static uint32_t Decode32(::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Encode addr 0xfbea2c size 0x84 virtual false final false
static void Encode(::ArrayW<int32_t> x, ::ArrayW<uint8_t> z, int32_t zOff) ;

/// @brief Method Encode128 addr 0xfbf060 size 0x128 virtual false final false
static void Encode128(::ArrayW<int32_t> x, int32_t xOff, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Encode32 addr 0xfbf188 size 0x80 virtual false final false
static void Encode32(uint32_t n, ::ArrayW<uint8_t> bs, int32_t off) ;

/// @brief Method Inv addr 0xfbe910 size 0x98 virtual false final false
static void Inv(::ArrayW<int32_t> x, ::ArrayW<int32_t> z) ;

/// @brief Method IsZero addr 0xfbf474 size 0x54 virtual false final false
static int32_t IsZero(::ArrayW<int32_t> x) ;

/// @brief Method IsZeroVar addr 0xfbf4c8 size 0x60 virtual false final false
static bool IsZeroVar(::ArrayW<int32_t> x) ;

/// @brief Method Mul addr 0xfbdd64 size 0x160 virtual false final false
static void Mul(::ArrayW<int32_t> x, int32_t y, ::ArrayW<int32_t> z) ;

/// @brief Method Mul addr 0xfbd7ac size 0x548 virtual false final false
static void Mul(::ArrayW<int32_t> x, ::ArrayW<int32_t> y, ::ArrayW<int32_t> z) ;

/// @brief Method Negate addr 0xfbf528 size 0x58 virtual false final false
static void Negate(::ArrayW<int32_t> x, ::ArrayW<int32_t> z) ;

/// @brief Method Normalize addr 0xfbe9a8 size 0x84 virtual false final false
static void Normalize(::ArrayW<int32_t> z) ;

/// @brief Method One addr 0xfbf648 size 0x54 virtual false final false
static void One(::ArrayW<int32_t> z) ;

/// @brief Method PowPm5d8 addr 0xfbf208 size 0x1cc virtual false final false
static void PowPm5d8(::ArrayW<int32_t> x, ::ArrayW<int32_t> rx2, ::ArrayW<int32_t> rz) ;

/// @brief Method Reduce addr 0xfbf580 size 0xc8 virtual false final false
static void Reduce(::ArrayW<int32_t> z, int32_t x) ;

/// @brief Method Sqr addr 0xfbd42c size 0x380 virtual false final false
static void Sqr(::ArrayW<int32_t> x, ::ArrayW<int32_t> z) ;

/// @brief Method Sqr addr 0xfbf3d4 size 0xa0 virtual false final false
static void Sqr(::ArrayW<int32_t> x, int32_t n, ::ArrayW<int32_t> z) ;

/// @brief Method SqrtRatioVar addr 0xfbf69c size 0x1cc virtual false final false
static bool SqrtRatioVar(::ArrayW<int32_t> u, ::ArrayW<int32_t> v, ::ArrayW<int32_t> z) ;

/// @brief Method Sub addr 0xfbdcf4 size 0x70 virtual false final false
static void Sub(::ArrayW<int32_t> x, ::ArrayW<int32_t> y, ::ArrayW<int32_t> z) ;

/// @brief Method SubOne addr 0xfbf868 size 0x2c virtual false final false
static void SubOne(::ArrayW<int32_t> z) ;

/// @brief Method Zero addr 0xfbf894 size 0x3c virtual false final false
static void Zero(::ArrayW<int32_t> z) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Rfc7748
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc7748::X25519Field, "Org.BouncyCastle.Math.EC.Rfc7748", "X25519Field");
