#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsCipherFactory_def.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsNullCipher;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsAeadCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DefaultTlsCipherFactory;
}
// Type: Org.BouncyCastle.Crypto.Tls::DefaultTlsCipherFactory
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1161))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1209))
// CS Name: Org.BouncyCastle.Crypto.Tls.DefaultTlsCipherFactory
class CORDL_TYPE DefaultTlsCipherFactory : public Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultTlsCipherFactory() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsCipherFactory", modifiers: " const&", def_value: None }]
constexpr DefaultTlsCipherFactory(DefaultTlsCipherFactory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTlsCipherFactory", modifiers: "&&", def_value: None }]
constexpr DefaultTlsCipherFactory(DefaultTlsCipherFactory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultTlsCipherFactory(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsCipherFactory(ptr) {
}


  constexpr DefaultTlsCipherFactory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultTlsCipherFactory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultTlsCipherFactory& operator=(DefaultTlsCipherFactory&& o) noexcept = default;
  constexpr DefaultTlsCipherFactory& operator=(DefaultTlsCipherFactory const& o) noexcept = default;
                


// Methods

/// @brief Method CreateCipher addr 0xee2df4 size 0x1cc virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCipher CreateCipher(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t encryptionAlgorithm, int32_t macAlgorithm) ;

/// @brief Method CreateAESCipher addr 0xee2fc0 size 0x108 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsBlockCipher CreateAESCipher(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t cipherKeySize, int32_t macAlgorithm) ;

/// @brief Method CreateCamelliaCipher addr 0xee30c8 size 0x108 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsBlockCipher CreateCamelliaCipher(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t cipherKeySize, int32_t macAlgorithm) ;

/// @brief Method CreateChaCha20Poly1305 addr 0xee31d0 size 0x60 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsCipher CreateChaCha20Poly1305(Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method CreateCipher_Aes_Ccm addr 0xee3230 size 0xc4 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsAeadCipher CreateCipher_Aes_Ccm(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t cipherKeySize, int32_t macSize) ;

/// @brief Method CreateCipher_Aes_Gcm addr 0xee32f4 size 0xc4 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsAeadCipher CreateCipher_Aes_Gcm(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t cipherKeySize, int32_t macSize) ;

/// @brief Method CreateCipher_Aes_Ocb addr 0xee33b8 size 0xc8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsAeadCipher CreateCipher_Aes_Ocb(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t cipherKeySize, int32_t macSize) ;

/// @brief Method CreateCipher_Camellia_Gcm addr 0xee3480 size 0xc4 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsAeadCipher CreateCipher_Camellia_Gcm(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t cipherKeySize, int32_t macSize) ;

/// @brief Method CreateDesEdeCipher addr 0xee3544 size 0xfc virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsBlockCipher CreateDesEdeCipher(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t macAlgorithm) ;

/// @brief Method CreateNullCipher addr 0xee3640 size 0xb8 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsNullCipher CreateNullCipher(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t macAlgorithm) ;

/// @brief Method CreateRC4Cipher addr 0xee36f8 size 0x114 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsStreamCipher CreateRC4Cipher(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t cipherKeySize, int32_t macAlgorithm) ;

/// @brief Method CreateSeedCipher addr 0xee380c size 0xfc virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsBlockCipher CreateSeedCipher(Org::BouncyCastle::Crypto::Tls::TlsContext context, int32_t macAlgorithm) ;

/// @brief Method CreateAesEngine addr 0xee3908 size 0x5c virtual true final false
 Org::BouncyCastle::Crypto::IBlockCipher CreateAesEngine() ;

/// @brief Method CreateCamelliaEngine addr 0xee3964 size 0x5c virtual true final false
 Org::BouncyCastle::Crypto::IBlockCipher CreateCamelliaEngine() ;

/// @brief Method CreateAesBlockCipher addr 0xee39c0 size 0x80 virtual true final false
 Org::BouncyCastle::Crypto::IBlockCipher CreateAesBlockCipher() ;

/// @brief Method CreateAeadBlockCipher_Aes_Ccm addr 0xee3a40 size 0x80 virtual true final false
 Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher CreateAeadBlockCipher_Aes_Ccm() ;

/// @brief Method CreateAeadBlockCipher_Aes_Gcm addr 0xee3ac0 size 0x80 virtual true final false
 Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher CreateAeadBlockCipher_Aes_Gcm() ;

/// @brief Method CreateAeadBlockCipher_Aes_Ocb addr 0xee3b40 size 0x9c virtual true final false
 Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher CreateAeadBlockCipher_Aes_Ocb() ;

/// @brief Method CreateAeadBlockCipher_Camellia_Gcm addr 0xee3bdc size 0x80 virtual true final false
 Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher CreateAeadBlockCipher_Camellia_Gcm() ;

/// @brief Method CreateCamelliaBlockCipher addr 0xee3c5c size 0x80 virtual true final false
 Org::BouncyCastle::Crypto::IBlockCipher CreateCamelliaBlockCipher() ;

/// @brief Method CreateDesEdeBlockCipher addr 0xee3cdc size 0x8c virtual true final false
 Org::BouncyCastle::Crypto::IBlockCipher CreateDesEdeBlockCipher() ;

/// @brief Method CreateRC4StreamCipher addr 0xee3d68 size 0x5c virtual true final false
 Org::BouncyCastle::Crypto::IStreamCipher CreateRC4StreamCipher() ;

/// @brief Method CreateSeedBlockCipher addr 0xee3dc4 size 0x8c virtual true final false
 Org::BouncyCastle::Crypto::IBlockCipher CreateSeedBlockCipher() ;

/// @brief Method CreateHMacDigest addr 0xee3e50 size 0x12c virtual true final false
 Org::BouncyCastle::Crypto::IDigest CreateHMacDigest(int32_t macAlgorithm) ;

// Ctor Parameters []
explicit DefaultTlsCipherFactory() ;

/// @brief Method .ctor addr 0xeda170 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::DefaultTlsCipherFactory, "Org.BouncyCastle.Crypto.Tls", "DefaultTlsCipherFactory");
