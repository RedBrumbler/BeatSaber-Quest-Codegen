#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Digests/zzzz__KeccakDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class Sha3Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::Sha3Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(755))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(770))
// CS Name: Org.BouncyCastle.Crypto.Digests.Sha3Digest
class CORDL_TYPE Sha3Digest : public Org::BouncyCastle::Crypto::Digests::KeccakDigest {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Sha3Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "Sha3Digest", modifiers: " const&", def_value: None }]
constexpr Sha3Digest(Sha3Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Sha3Digest", modifiers: "&&", def_value: None }]
constexpr Sha3Digest(Sha3Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Sha3Digest(void* ptr) noexcept : Org::BouncyCastle::Crypto::Digests::KeccakDigest(ptr) {
}


  constexpr Sha3Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Sha3Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Sha3Digest& operator=(Sha3Digest&& o) noexcept = default;
  constexpr Sha3Digest& operator=(Sha3Digest const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

/// @brief Method CheckBitLength addr 0xe28204 size 0xc4 virtual false final false
static int32_t CheckBitLength(int32_t bitLength) ;

// Ctor Parameters []
explicit Sha3Digest() ;

/// @brief Method .ctor addr 0xe282c8 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "bitLength", ty: "int32_t", modifiers: "", def_value: None }]
explicit Sha3Digest(int32_t bitLength) ;

/// @brief Method .ctor addr 0xe282d0 size 0x78 virtual false final false
 void _ctor(int32_t bitLength) ;

// Ctor Parameters [CppParam { name: "source", ty: "Org::BouncyCastle::Crypto::Digests::Sha3Digest", modifiers: "", def_value: None }]
explicit Sha3Digest(Org::BouncyCastle::Crypto::Digests::Sha3Digest source) ;

/// @brief Method .ctor addr 0xe28348 size 0x68 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::Sha3Digest source) ;

/// @brief Method get_AlgorithmName addr 0xe283b0 size 0x84 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method DoFinal addr 0xe28434 size 0x40 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xe28474 size 0xe4 virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff, uint8_t partialByte, int32_t partialBits) ;

/// @brief Method Copy addr 0xe28558 size 0x60 virtual true final false
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::Sha3Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Sha3Digest, "Org.BouncyCastle.Crypto.Digests", "Sha3Digest");
