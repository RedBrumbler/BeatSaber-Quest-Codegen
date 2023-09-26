#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Modes {
class GcmBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class GMac;
}
// Type: Org.BouncyCastle.Crypto.Macs::GMac
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(941))
// CS Name: Org.BouncyCastle.Crypto.Macs.GMac
class CORDL_TYPE GMac : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMac
constexpr operator  Org::BouncyCastle::Crypto::IMac() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GMac() = default;

// Ctor Parameters [CppParam { name: "", ty: "GMac", modifiers: " const&", def_value: None }]
constexpr GMac(GMac const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GMac", modifiers: "&&", def_value: None }]
constexpr GMac(GMac&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GMac(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GMac& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GMac& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GMac& operator=(GMac&& o) noexcept = default;
  constexpr GMac& operator=(GMac const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Modes::GcmBlockCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(Org::BouncyCastle::Crypto::Modes::GcmBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::Modes::GcmBlockCipher __get_cipher() const;

 int32_t __declspec(property(get=__get_macSizeBits, put=__set_macSizeBits))  macSizeBits;

constexpr void __set_macSizeBits(int32_t value) ;

constexpr int32_t __get_macSizeBits() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::Modes::GcmBlockCipher", modifiers: "", def_value: None }]
explicit GMac(Org::BouncyCastle::Crypto::Modes::GcmBlockCipher cipher) ;

/// @brief Method .ctor addr 0xe8e834 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Modes::GcmBlockCipher cipher) ;

// Ctor Parameters [CppParam { name: "cipher", ty: "Org::BouncyCastle::Crypto::Modes::GcmBlockCipher", modifiers: "", def_value: None }, CppParam { name: "macSizeBits", ty: "int32_t", modifiers: "", def_value: None }]
explicit GMac(Org::BouncyCastle::Crypto::Modes::GcmBlockCipher cipher, int32_t macSizeBits) ;

/// @brief Method .ctor addr 0xe8e864 size 0x30 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Modes::GcmBlockCipher cipher, int32_t macSizeBits) ;

/// @brief Method Init addr 0xe8e894 size 0x188 virtual true final true
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AlgorithmName addr 0xe8ea1c size 0xc8 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method GetMacSize addr 0xe8eae4 size 0x18 virtual true final true
 int32_t GetMacSize() ;

/// @brief Method Update addr 0xe8eafc size 0x24 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xe8eb20 size 0x24 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0xe8eb44 size 0xf8 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xe8ec3c size 0x24 virtual true final true
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(Org::BouncyCastle::Crypto::Macs::GMac);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::GMac, "Org.BouncyCastle.Crypto.Macs", "GMac");
