#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__KeccakDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IXof;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class ShakeDigest;
}
// Type: Org.BouncyCastle.Crypto.Digests::ShakeDigest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(755))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(774))
// CS Name: Org.BouncyCastle.Crypto.Digests.ShakeDigest
class CORDL_TYPE ShakeDigest : public Org::BouncyCastle::Crypto::Digests::KeccakDigest {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IXof
constexpr operator  Org::BouncyCastle::Crypto::IXof() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ShakeDigest() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShakeDigest", modifiers: " const&", def_value: None }]
constexpr ShakeDigest(ShakeDigest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShakeDigest", modifiers: "&&", def_value: None }]
constexpr ShakeDigest(ShakeDigest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShakeDigest(void* ptr) noexcept : Org::BouncyCastle::Crypto::Digests::KeccakDigest(ptr) {
}


  constexpr ShakeDigest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShakeDigest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShakeDigest& operator=(ShakeDigest&& o) noexcept = default;
  constexpr ShakeDigest& operator=(ShakeDigest const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method CheckBitLength addr 0xe290a4 size 0xa8 virtual false final false
static int32_t CheckBitLength(int32_t bitLength) ;

// Ctor Parameters []
explicit ShakeDigest() ;

/// @brief Method .ctor addr 0xe2914c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "bitLength", ty: "int32_t", modifiers: "", def_value: None }]
explicit ShakeDigest(int32_t bitLength) ;

/// @brief Method .ctor addr 0xe29154 size 0x78 virtual false final false
 void _ctor(int32_t bitLength) ;

// Ctor Parameters [CppParam { name: "source", ty: "Org::BouncyCastle::Crypto::Digests::ShakeDigest", modifiers: "", def_value: None }]
explicit ShakeDigest(Org::BouncyCastle::Crypto::Digests::ShakeDigest source) ;

/// @brief Method .ctor addr 0xe291cc size 0x68 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::ShakeDigest source) ;

/// @brief Method get_AlgorithmName addr 0xe29234 size 0x84 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method DoFinal addr 0xe292b8 size 0x50 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe29308 size 0x44 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff, int32_t outLen) ;

/// @brief Method DoOutput addr 0xe2934c size 0x64 virtual true final false
 int32_t DoOutput(::ArrayW<uint8_t> output, int32_t outOff, int32_t outLen) ;

/// @brief Method DoFinal addr 0xe293b0 size 0x68 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff, uint8_t partialByte, int32_t partialBits) ;

/// @brief Method DoFinal addr 0xe29418 size 0x120 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff, int32_t outLen, uint8_t partialByte, int32_t partialBits) ;

/// @brief Method Copy addr 0xe29538 size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::ShakeDigest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::ShakeDigest, "Org.BouncyCastle.Crypto.Digests", "ShakeDigest");
