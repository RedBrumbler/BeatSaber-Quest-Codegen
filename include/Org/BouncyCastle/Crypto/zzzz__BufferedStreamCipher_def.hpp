#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedCipherBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class BufferedStreamCipher;
}
// Type: Org.BouncyCastle.Crypto::BufferedStreamCipher
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(965))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1345))
// CS Name: Org.BouncyCastle.Crypto.BufferedStreamCipher
class CORDL_TYPE BufferedStreamCipher : public Org::BouncyCastle::Crypto::BufferedCipherBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BufferedStreamCipher() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedStreamCipher", modifiers: " const&", def_value: None }]
constexpr BufferedStreamCipher(BufferedStreamCipher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedStreamCipher", modifiers: "&&", def_value: None }]
constexpr BufferedStreamCipher(BufferedStreamCipher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedStreamCipher(void* ptr) noexcept : Org::BouncyCastle::Crypto::BufferedCipherBase(ptr) {
}


  constexpr BufferedStreamCipher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedStreamCipher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedStreamCipher& operator=(BufferedStreamCipher&& o) noexcept = default;
  constexpr BufferedStreamCipher& operator=(BufferedStreamCipher const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IStreamCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::IStreamCipher value) ;

constexpr Org::BouncyCastle::Crypto::IStreamCipher __get_cipher() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::IStreamCipher", modifiers: "", def_value: None }]
explicit BufferedStreamCipher(Org::BouncyCastle::Crypto::IStreamCipher cipher) ;

/// @brief Method .ctor addr 0xf46adc size 0xbc virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IStreamCipher cipher) ;

/// @brief Method get_AlgorithmName addr 0xf46b98 size 0xa0 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xf46c38 size 0x104 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetBlockSize addr 0xf46d3c size 0x8 virtual true final false
 int32_t GetBlockSize() ;

/// @brief Method GetOutputSize addr 0xf46d44 size 0x8 virtual true final false
 int32_t GetOutputSize(int32_t inputLen) ;

/// @brief Method GetUpdateOutputSize addr 0xf46d4c size 0x8 virtual true final false
 int32_t GetUpdateOutputSize(int32_t inputLen) ;

/// @brief Method ProcessByte addr 0xf46d54 size 0xf4 virtual true final false
 ::ArrayW<uint8_t> ProcessByte(uint8_t input) ;

/// @brief Method ProcessByte addr 0xf46e48 size 0x138 virtual true final false
 int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method ProcessBytes addr 0xf46f80 size 0x108 virtual true final false
 ::ArrayW<uint8_t> ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method ProcessBytes addr 0xf47088 size 0xf4 virtual true final false
 int32_t ProcessBytes(::ArrayW<uint8_t> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method DoFinal addr 0xf4717c size 0x70 virtual true final false
 ::ArrayW<uint8_t> DoFinal() ;

/// @brief Method DoFinal addr 0xf471ec size 0xb8 virtual true final false
 ::ArrayW<uint8_t> DoFinal(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method Reset addr 0xf472a4 size 0xa4 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::BufferedStreamCipher);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::BufferedStreamCipher, "Org.BouncyCastle.Crypto", "BufferedStreamCipher");
