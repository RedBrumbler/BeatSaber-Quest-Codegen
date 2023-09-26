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
class Nat576;
}
// Type: Org.BouncyCastle.Math.Raw::Nat576
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1600))
// CS Name: Org.BouncyCastle.Math.Raw.Nat576
class CORDL_TYPE Nat576 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Nat576() = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat576", modifiers: " const&", def_value: None }]
constexpr Nat576(Nat576 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Nat576", modifiers: "&&", def_value: None }]
constexpr Nat576(Nat576&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Nat576(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Nat576& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Nat576& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Nat576& operator=(Nat576&& o) noexcept = default;
  constexpr Nat576& operator=(Nat576 const& o) noexcept = default;
                


// Methods

/// @brief Method Copy64 addr 0x1010bc0 size 0x114 virtual false final false
static void Copy64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> z) ;

/// @brief Method Copy64 addr 0x1010cd4 size 0x1c4 virtual false final false
static void Copy64(::ArrayW<uint64_t> x, int32_t xOff, ::ArrayW<uint64_t> z, int32_t zOff) ;

/// @brief Method Create64 addr 0x1010e98 size 0x44 virtual false final false
static ::ArrayW<uint64_t> Create64() ;

/// @brief Method CreateExt64 addr 0x1010edc size 0x44 virtual false final false
static ::ArrayW<uint64_t> CreateExt64() ;

/// @brief Method Eq64 addr 0x1010f20 size 0x68 virtual false final false
static bool Eq64(::ArrayW<uint64_t> x, ::ArrayW<uint64_t> y) ;

/// @brief Method FromBigInteger64 addr 0x1010f88 size 0xd4 virtual false final false
static ::ArrayW<uint64_t> FromBigInteger64(Org::BouncyCastle::Math::BigInteger x) ;

/// @brief Method IsOne64 addr 0x101105c size 0x60 virtual false final false
static bool IsOne64(::ArrayW<uint64_t> x) ;

/// @brief Method IsZero64 addr 0x10110bc size 0x4c virtual false final false
static bool IsZero64(::ArrayW<uint64_t> x) ;

/// @brief Method ToBigInteger64 addr 0x1011108 size 0xe0 virtual false final false
static Org::BouncyCastle::Math::BigInteger ToBigInteger64(::ArrayW<uint64_t> x) ;

// Ctor Parameters []
explicit Nat576() ;

/// @brief Method .ctor addr 0x10111e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(Org::BouncyCastle::Math::Raw::Nat576);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat576, "Org.BouncyCastle.Math.Raw", "Nat576");
