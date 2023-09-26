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
class SecT131Field;
}
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT131Field
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1451))
// CS Name: Org.BouncyCastle.Math.EC.Custom.Sec.SecT131Field
class CORDL_TYPE SecT131Field : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SecT131Field() = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT131Field", modifiers: " const&", def_value: None }]
constexpr SecT131Field(SecT131Field const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SecT131Field", modifiers: "&&", def_value: None }]
constexpr SecT131Field(SecT131Field&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SecT131Field(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SecT131Field& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SecT131Field& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SecT131Field& operator=(SecT131Field&& o) noexcept = default;
  constexpr SecT131Field& operator=(SecT131Field const& o) noexcept = default;
                


// Fields

/// @brief Field M03 offset 0
static constexpr uint64_t  M03{7u};

/// @brief Field M44 offset 0
static constexpr uint64_t  M44{17592186044415u};

static ::ArrayW<uint64_t> __declspec(property(get=__get_ROOT_Z, put=__set_ROOT_Z))  ROOT_Z;

static void __set_ROOT_Z(::ArrayW<uint64_t> value) ;

static ::ArrayW<uint64_t> __get_ROOT_Z() ;


// Methods

/// @brief Method Add addr 0xf88ce0 size 0xa8 virtual false final false
static void Add(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method AddExt addr 0xf88d88 size 0x108 virtual false final false
static void AddExt(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> yy, ::ArrayW<uint64_t> zz) ;

/// @brief Method AddOne addr 0xf88e90 size 0x70 virtual false final false
static void AddOne(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method AddTo addr 0xf88f00 size 0x84 virtual false final false
static void AddTo(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method FromBigInteger addr 0xf88f84 size 0x10 virtual false final false
static ::ArrayW<uint64_t> FromBigInteger(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method HalfTrace addr 0xf88f94 size 0xc8 virtual false final false
static void HalfTrace(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Invert addr 0xf891cc size 0x1c4 virtual false final false
static void Invert(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Multiply addr 0xf89414 size 0x88 virtual false final false
static void Multiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> z) ;

/// @brief Method MultiplyAddToExt addr 0xf89898 size 0x8c virtual false final false
static void MultiplyAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method Reduce addr 0xf890ec size 0xe0 virtual false final false
static void Reduce(::ArrayW<uint64_t> xx, ::ArrayW<uint64_t> z) ;

/// @brief Method Reduce61 addr 0xf89924 size 0x90 virtual false final false
static void Reduce61(::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Sqrt addr 0xf899b4 size 0x144 virtual false final false
static void Sqrt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Square addr 0xf89390 size 0x84 virtual false final false
static void Square(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method SquareAddToExt addr 0xf89af8 size 0x88 virtual false final false
static void SquareAddToExt(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

/// @brief Method SquareN addr 0xf8949c size 0xcc virtual false final false
static void SquareN(::ArrayW<uint64_t> x, int32_t n, ::ArrayW<uint64_t> z) ;

/// @brief Method Trace addr 0xf89b80 size 0x48 virtual false final false
static uint32_t Trace(::ArrayW<uint64_t> x) ;

/// @brief Method ImplCompactExt addr 0xf89bc8 size 0x90 virtual false final false
static void ImplCompactExt(::ArrayW<uint64_t> zz) ;

/// @brief Method ImplMultiply addr 0xf89568 size 0x330 virtual false final false
static void ImplMultiply(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y, ::ArrayW<uint64_t> zz) ;

/// @brief Method ImplMulw addr 0xf89c58 size 0x1e4 virtual false final false
static void ImplMulw(uint64_t x, uint64_t y, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method ImplSquare addr 0xf8905c size 0x90 virtual false final false
static void ImplSquare(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> zz) ;

// Ctor Parameters []
explicit SecT131Field() ;

/// @brief Method .ctor addr 0xf89ed0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT131Field, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT131Field");
