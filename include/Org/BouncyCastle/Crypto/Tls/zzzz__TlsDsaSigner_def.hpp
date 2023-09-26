#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsSigner_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Tls {
class SignatureAndHashAlgorithm;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IDsa;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsDsaSigner;
}
// Type: Org.BouncyCastle.Crypto.Tls::TlsDsaSigner
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1175))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1301))
// CS Name: Org.BouncyCastle.Crypto.Tls.TlsDsaSigner
class CORDL_TYPE TlsDsaSigner : public Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TlsDsaSigner() = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsDsaSigner", modifiers: " const&", def_value: None }]
constexpr TlsDsaSigner(TlsDsaSigner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TlsDsaSigner", modifiers: "&&", def_value: None }]
constexpr TlsDsaSigner(TlsDsaSigner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TlsDsaSigner(void* ptr) noexcept : Org::BouncyCastle::Crypto::Tls::AbstractTlsSigner(ptr) {
}


  constexpr TlsDsaSigner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TlsDsaSigner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TlsDsaSigner& operator=(TlsDsaSigner&& o) noexcept = default;
  constexpr TlsDsaSigner& operator=(TlsDsaSigner const& o) noexcept = default;
                


// Properties

 uint8_t __declspec(property(get=get_SignatureAlgorithm))  SignatureAlgorithm;


// Methods

/// @brief Method GenerateRawSignature addr 0xf2845c size 0x27c virtual true final false
 ::ArrayW<uint8_t> GenerateRawSignature(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey, ::ArrayW<uint8_t> hash) ;

/// @brief Method VerifyRawSignature addr 0xf286d8 size 0x1d0 virtual true final false
 bool VerifyRawSignature(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, ::ArrayW<uint8_t> sigBytes, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey, ::ArrayW<uint8_t> hash) ;

/// @brief Method CreateSigner addr 0xf288a8 size 0x1c virtual true final false
 Org::BouncyCastle::Crypto::ISigner CreateSigner(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privateKey) ;

/// @brief Method CreateVerifyer addr 0xf288c4 size 0x1c virtual true final false
 Org::BouncyCastle::Crypto::ISigner CreateVerifyer(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter publicKey) ;

/// @brief Method MakeInitParameters addr 0xf288e0 size 0x8 virtual true final false
 Org::BouncyCastle::Crypto::ICipherParameters MakeInitParameters(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters cp) ;

/// @brief Method MakeSigner addr 0xf288e8 size 0x264 virtual true final false
 Org::BouncyCastle::Crypto::ISigner MakeSigner(Org::BouncyCastle::Crypto::Tls::SignatureAndHashAlgorithm algorithm, bool raw, bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters cp) ;

/// @brief Method get_SignatureAlgorithm addr 0x0 size 0xffffffffffffffff virtual true final false
 uint8_t get_SignatureAlgorithm() ;

/// @brief Method CreateDsaImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 Org::BouncyCastle::Crypto::IDsa CreateDsaImpl(uint8_t hashAlgorithm) ;

// Ctor Parameters []
explicit TlsDsaSigner() ;

/// @brief Method .ctor addr 0xf28b4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::TlsDsaSigner);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsDsaSigner, "Org.BouncyCastle.Crypto.Tls", "TlsDsaSigner");
