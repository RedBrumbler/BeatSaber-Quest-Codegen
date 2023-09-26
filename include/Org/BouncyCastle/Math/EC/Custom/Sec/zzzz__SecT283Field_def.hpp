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
class SecT283Field;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT283Field
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1491))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT283Field
class CORDL_TYPE SecT283Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecT283Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT283Field", modifiers: " const&", def_value: None }]
constexpr SecT283Field(SecT283Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT283Field", modifiers: "&&", def_value: None }]
constexpr SecT283Field(SecT283Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecT283Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecT283Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecT283Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecT283Field& operator=(SecT283Field&& o) noexcept = default;
  constexpr SecT283Field& operator=(SecT283Field const& o) noexcept = default;
                


// Fields

/// @brief Field M27 offset 0
static constexpr uint64_t  M27{134217727u};

/// @brief Field M57 offset 0
static constexpr uint64_t  M57{144115188075855871u};

static ::ArrayW<uint64_t> __declspec(property(get=__get_ROOT_Z, put=__set_ROOT_Z))  ROOT_Z;

static void __set_ROOT_Z(::ArrayW<uint64_t> value) ;

static ::ArrayW<uint64_t> __get_ROOT_Z() ;


// Methods

/// @brief Method Add addr 0xfa5850 size 0x108 virtual false final false
static void Add(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method AddExt addr 0xfa5958 size 0x1c8 virtual false final false
static void AddExt(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> yy, ::ArrayW<uint64_t> zz) ;

/// @brief Method AddOne addr 0xfa5b20 size 0xa8 virtual false final false
static void AddOne(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method AddTo addr 0xfa5bc8 size 0xcc virtual false final false
static void AddTo(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method FromBigInteger addr 0xfa5c94 size 0x10 virtual false final false
static ::ArrayW<uint64_t> FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method HalfTrace addr 0xfa5ca4 size 0xc8 virtual false final false
static void HalfTrace(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Invert addr 0xfa5f84 size 0x21c virtual false final false
static void Invert(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Multiply addr 0xfa6224 size 0x88 virtual false final false
static void Multiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method MultiplyAddToExt addr 0xfa6928 size 0x8c virtual false final false
static void MultiplyAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method Reduce addr 0xfa5e38 size 0x14c virtual false final false
static void Reduce(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> z) ;

/// @brief Method Reduce37 addr 0xfa69b4 size 0x6c virtual false final false
static void Reduce37(::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Sqrt addr 0xfa6a20 size 0x1b4 virtual false final false
static void Sqrt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Square addr 0xfa61a0 size 0x84 virtual false final false
static void Square(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method SquareAddToExt addr 0xfa6bd4 size 0x88 virtual false final false
static void SquareAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

/// @brief Method SquareN addr 0xfa62ac size 0xcc virtual false final false
static void SquareN(::ArrayW<uint64_t> x, int32_t n, ::ArrayW<uint64_t> z) ;

/// @brief Method Trace addr 0xfa6c5c size 0x38 virtual false final false
static uint32_t Trace(::ArrayW<uint64_t> x) ;

/// @brief Method ImplCompactExt addr 0xfa6c94 size 0xdc virtual false final false
static void ImplCompactExt(::ArrayW<uint64_t> zz) ;

/// @brief Method ImplExpand addr 0xfa6d70 size 0xac virtual false final false
static void ImplExpand(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method ImplMultiply addr 0xfa6378 size 0x5b0 virtual false final false
static void ImplMultiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method ImplMulw addr 0xfa6e1c size 0x1c0 virtual false final false
static void ImplMulw(uint64_t x, uint64_t y, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method ImplSquare addr 0xfa5d6c size 0xcc virtual false final false
static void ImplSquare(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

// Ctor Parameters []
explicit SecT283Field() ;

/// @brief Method .ctor addr 0xfa7070 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT283Field, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT283Field");
