#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsHandshakeHash;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CombinedHash;
}
// Type: Org.BouncyCastle.Crypto.Tls::CombinedHash
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1202))
// CS Name: Org.BouncyCastle.Crypto.Tls.CombinedHash
class CORDL_TYPE CombinedHash : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash
constexpr operator  Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CombinedHash() = default;

// Ctor Parameters [CppParam { name: "", ty: "CombinedHash", modifiers: " const&", def_value: None }]
constexpr CombinedHash(CombinedHash const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CombinedHash", modifiers: "&&", def_value: None }]
constexpr CombinedHash(CombinedHash&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CombinedHash(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CombinedHash& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CombinedHash& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CombinedHash& operator=(CombinedHash&& o) noexcept = default;
  constexpr CombinedHash& operator=(CombinedHash const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Tls::TlsContext __declspec(property(get=__get_mContext, put=__set_mContext))  mContext;

constexpr void __set_mContext(Org::BouncyCastle::Crypto::Tls::TlsContext value) ;

constexpr Org::BouncyCastle::Crypto::Tls::TlsContext __get_mContext() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_mMd5, put=__set_mMd5))  mMd5;

constexpr void __set_mMd5(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_mMd5() const;

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_mSha1, put=__set_mSha1))  mSha1;

constexpr void __set_mSha1(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_mSha1() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit CombinedHash() ;

/// @brief Method .ctor addr 0xee1ab8 size 0x7c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "t", ty: "Org::BouncyCastle::Crypto::Tls::CombinedHash", modifiers: "", def_value: None }]
explicit CombinedHash(Org::BouncyCastle::Crypto::Tls::CombinedHash t) ;

/// @brief Method .ctor addr 0xee1b34 size 0x9c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Tls::CombinedHash t) ;

/// @brief Method Init addr 0xee1bd0 size 0x8 virtual true final false
 void Init(Org::BouncyCastle::Crypto::Tls::TlsContext context) ;

/// @brief Method NotifyPrfDetermined addr 0xee1bd8 size 0x4 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash NotifyPrfDetermined() ;

/// @brief Method TrackHashAlgorithm addr 0xee1bdc size 0x50 virtual true final false
 void TrackHashAlgorithm(uint8_t hashAlgorithm) ;

/// @brief Method SealHashAlgorithms addr 0xee1c2c size 0x4 virtual true final false
 void SealHashAlgorithms() ;

/// @brief Method StopTracking addr 0xee1c30 size 0x60 virtual true final false
 Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash StopTracking() ;

/// @brief Method ForkPrfHash addr 0xee1c90 size 0x60 virtual true final false
 Org::BouncyCastle::Crypto::IDigest ForkPrfHash() ;

/// @brief Method GetFinalHash addr 0xee1cf0 size 0x50 virtual true final false
 ::ArrayW<uint8_t> GetFinalHash(uint8_t hashAlgorithm) ;

/// @brief Method get_AlgorithmName addr 0xee1d40 size 0x12c virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method GetByteLength addr 0xee1e6c size 0x148 virtual true final false
 int32_t GetByteLength() ;

/// @brief Method GetDigestSize addr 0xee1fb4 size 0x114 virtual true final false
 int32_t GetDigestSize() ;

/// @brief Method Update addr 0xee20c8 size 0x11c virtual true final false
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0xee21e4 size 0x13c virtual true final false
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t len) ;

/// @brief Method DoFinal addr 0xee2320 size 0x1ec virtual true final false
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0xee250c size 0x108 virtual true final false
 void Reset() ;

/// @brief Method Ssl3Complete addr 0xee2614 size 0x33c virtual true final false
 void Ssl3Complete(Org::BouncyCastle::Crypto::IDigest d, ::ArrayW<uint8_t> ipad, ::ArrayW<uint8_t> opad, int32_t padLength) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::CombinedHash);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::CombinedHash, "Org.BouncyCastle.Crypto.Tls", "CombinedHash");
