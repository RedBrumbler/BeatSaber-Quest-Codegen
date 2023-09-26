#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Prng {
class IDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng::Drbg {
class ISP80090Drbg;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySource;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandom;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class IEntropySourceProvider;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider;
}
namespace Org::BouncyCastle::Crypto::Prng {
class SP800SecureRandomBuilder;
}
// Type: ::HashDrbgProvider
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1113))
// CS Name: Org.BouncyCastle.Crypto.Prng.SP800SecureRandomBuilder::HashDrbgProvider
class CORDL_TYPE Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Prng::IDrbgProvider
constexpr operator  Org::BouncyCastle::Crypto::Prng::IDrbgProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider(Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider(Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider& operator=(Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider& operator=(Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=__get_mDigest, put=__set_mDigest))  mDigest;

constexpr void __set_mDigest(Org::BouncyCastle::Crypto::IDigest value) ;

constexpr Org::BouncyCastle::Crypto::IDigest __get_mDigest() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mNonce, put=__set_mNonce))  mNonce;

constexpr void __set_mNonce(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mNonce() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPersonalizationString, put=__set_mPersonalizationString))  mPersonalizationString;

constexpr void __set_mPersonalizationString(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPersonalizationString() const;

 int32_t __declspec(property(get=__get_mSecurityStrength, put=__set_mSecurityStrength))  mSecurityStrength;

constexpr void __set_mSecurityStrength(int32_t value) ;

constexpr int32_t __get_mSecurityStrength() const;


// Methods

// Ctor Parameters [CppParam { name: "digest", ty: "Org::BouncyCastle::Crypto::IDigest", modifiers: "", def_value: None }, CppParam { name: "nonce", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "personalizationString", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "securityStrength", ty: "int32_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider(Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString, int32_t securityStrength) ;

/// @brief Method .ctor addr 0xec52f8 size 0x44 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString, int32_t securityStrength) ;

/// @brief Method Get addr 0xec5694 size 0x90 virtual true final true
 Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg Get(Org::BouncyCastle::Crypto::IEntropySource entropySource) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
// Type: ::HMacDrbgProvider
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1114))
// CS Name: Org.BouncyCastle.Crypto.Prng.SP800SecureRandomBuilder::HMacDrbgProvider
class CORDL_TYPE Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Prng::IDrbgProvider
constexpr operator  Org::BouncyCastle::Crypto::Prng::IDrbgProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider(Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider(Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider& operator=(Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider& operator=(Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_mHMac, put=__set_mHMac))  mHMac;

constexpr void __set_mHMac(Org::BouncyCastle::Crypto::IMac value) ;

constexpr Org::BouncyCastle::Crypto::IMac __get_mHMac() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mNonce, put=__set_mNonce))  mNonce;

constexpr void __set_mNonce(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mNonce() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPersonalizationString, put=__set_mPersonalizationString))  mPersonalizationString;

constexpr void __set_mPersonalizationString(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPersonalizationString() const;

 int32_t __declspec(property(get=__get_mSecurityStrength, put=__set_mSecurityStrength))  mSecurityStrength;

constexpr void __set_mSecurityStrength(int32_t value) ;

constexpr int32_t __get_mSecurityStrength() const;


// Methods

// Ctor Parameters [CppParam { name: "hMac", ty: "Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }, CppParam { name: "nonce", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "personalizationString", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "securityStrength", ty: "int32_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider(Org::BouncyCastle::Crypto::IMac hMac, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString, int32_t securityStrength) ;

/// @brief Method .ctor addr 0xec5650 size 0x44 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IMac hMac, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString, int32_t securityStrength) ;

/// @brief Method Get addr 0xec5724 size 0x90 virtual true final true
 Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg Get(Org::BouncyCastle::Crypto::IEntropySource entropySource) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
// Type: ::CtrDrbgProvider
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1115))
// CS Name: Org.BouncyCastle.Crypto.Prng.SP800SecureRandomBuilder::CtrDrbgProvider
class CORDL_TYPE Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::Prng::IDrbgProvider
constexpr operator  Org::BouncyCastle::Crypto::Prng::IDrbgProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider", modifiers: " const&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider(Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider", modifiers: "&&", def_value: None }]
constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider(Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider& operator=(Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider&& o) noexcept = default;
  constexpr Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider& operator=(Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IBlockCipher __declspec(property(get=__get_mBlockCipher, put=__set_mBlockCipher))  mBlockCipher;

constexpr void __set_mBlockCipher(Org::BouncyCastle::Crypto::IBlockCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBlockCipher __get_mBlockCipher() const;

 int32_t __declspec(property(get=__get_mKeySizeInBits, put=__set_mKeySizeInBits))  mKeySizeInBits;

constexpr void __set_mKeySizeInBits(int32_t value) ;

constexpr int32_t __get_mKeySizeInBits() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mNonce, put=__set_mNonce))  mNonce;

constexpr void __set_mNonce(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mNonce() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPersonalizationString, put=__set_mPersonalizationString))  mPersonalizationString;

constexpr void __set_mPersonalizationString(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPersonalizationString() const;

 int32_t __declspec(property(get=__get_mSecurityStrength, put=__set_mSecurityStrength))  mSecurityStrength;

constexpr void __set_mSecurityStrength(int32_t value) ;

constexpr int32_t __get_mSecurityStrength() const;


// Methods

// Ctor Parameters [CppParam { name: "blockCipher", ty: "Org::BouncyCastle::Crypto::IBlockCipher", modifiers: "", def_value: None }, CppParam { name: "keySizeInBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nonce", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "personalizationString", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "securityStrength", ty: "int32_t", modifiers: "", def_value: None }]
explicit Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider(Org::BouncyCastle::Crypto::IBlockCipher blockCipher, int32_t keySizeInBits, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString, int32_t securityStrength) ;

/// @brief Method .ctor addr 0xec54a4 size 0x54 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBlockCipher blockCipher, int32_t keySizeInBits, ::ArrayW<uint8_t> nonce, ::ArrayW<uint8_t> personalizationString, int32_t securityStrength) ;

/// @brief Method Get addr 0xec57b4 size 0x98 virtual true final true
 Org::BouncyCastle::Crypto::Prng::Drbg::ISP80090Drbg Get(Org::BouncyCastle::Crypto::IEntropySource entropySource) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
// Type: Org.BouncyCastle.Crypto.Prng::SP800SecureRandomBuilder
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1116))
// CS Name: Org.BouncyCastle.Crypto.Prng.SP800SecureRandomBuilder
class CORDL_TYPE SP800SecureRandomBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CtrDrbgProvider = Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider;

using HMacDrbgProvider = Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider;

using HashDrbgProvider = Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~SP800SecureRandomBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandomBuilder", modifiers: " const&", def_value: None }]
constexpr SP800SecureRandomBuilder(SP800SecureRandomBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SP800SecureRandomBuilder", modifiers: "&&", def_value: None }]
constexpr SP800SecureRandomBuilder(SP800SecureRandomBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SP800SecureRandomBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SP800SecureRandomBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SP800SecureRandomBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SP800SecureRandomBuilder& operator=(SP800SecureRandomBuilder&& o) noexcept = default;
  constexpr SP800SecureRandomBuilder& operator=(SP800SecureRandomBuilder const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_mRandom, put=__set_mRandom))  mRandom;

constexpr void __set_mRandom(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_mRandom() const;

 Org::BouncyCastle::Crypto::IEntropySourceProvider __declspec(property(get=__get_mEntropySourceProvider, put=__set_mEntropySourceProvider))  mEntropySourceProvider;

constexpr void __set_mEntropySourceProvider(Org::BouncyCastle::Crypto::IEntropySourceProvider value) ;

constexpr Org::BouncyCastle::Crypto::IEntropySourceProvider __get_mEntropySourceProvider() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mPersonalizationString, put=__set_mPersonalizationString))  mPersonalizationString;

constexpr void __set_mPersonalizationString(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mPersonalizationString() const;

 int32_t __declspec(property(get=__get_mSecurityStrength, put=__set_mSecurityStrength))  mSecurityStrength;

constexpr void __set_mSecurityStrength(int32_t value) ;

constexpr int32_t __get_mSecurityStrength() const;

 int32_t __declspec(property(get=__get_mEntropyBitsRequired, put=__set_mEntropyBitsRequired))  mEntropyBitsRequired;

constexpr void __set_mEntropyBitsRequired(int32_t value) ;

constexpr int32_t __get_mEntropyBitsRequired() const;


// Methods

// Ctor Parameters []
explicit SP800SecureRandomBuilder() ;

/// @brief Method .ctor addr 0xec5058 size 0x64 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "entropySource", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "predictionResistant", ty: "bool", modifiers: "", def_value: None }]
explicit SP800SecureRandomBuilder(Org::BouncyCastle::Security::SecureRandom entropySource, bool predictionResistant) ;

/// @brief Method .ctor addr 0xec50bc size 0x98 virtual false final false
 void _ctor(Org::BouncyCastle::Security::SecureRandom entropySource, bool predictionResistant) ;

// Ctor Parameters [CppParam { name: "entropySourceProvider", ty: "Org::BouncyCastle::Crypto::IEntropySourceProvider", modifiers: "", def_value: None }]
explicit SP800SecureRandomBuilder(Org::BouncyCastle::Crypto::IEntropySourceProvider entropySourceProvider) ;

/// @brief Method .ctor addr 0xec5154 size 0x34 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IEntropySourceProvider entropySourceProvider) ;

/// @brief Method SetPersonalizationString addr 0xec5188 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder SetPersonalizationString(::ArrayW<uint8_t> personalizationString) ;

/// @brief Method SetSecurityStrength addr 0xec5190 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder SetSecurityStrength(int32_t securityStrength) ;

/// @brief Method SetEntropyBitsRequired addr 0xec5198 size 0x8 virtual false final false
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder SetEntropyBitsRequired(int32_t entropyBitsRequired) ;

/// @brief Method BuildHash addr 0xec51a0 size 0x158 virtual false final false
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandom BuildHash(Org::BouncyCastle::Crypto::IDigest digest, ::ArrayW<uint8_t> nonce, bool predictionResistant) ;

/// @brief Method BuildCtr addr 0xec533c size 0x168 virtual false final false
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandom BuildCtr(Org::BouncyCastle::Crypto::IBlockCipher cipher, int32_t keySizeInBits, ::ArrayW<uint8_t> nonce, bool predictionResistant) ;

/// @brief Method BuildHMac addr 0xec54f8 size 0x158 virtual false final false
 Org::BouncyCastle::Crypto::Prng::SP800SecureRandom BuildHMac(Org::BouncyCastle::Crypto::IMac hMac, ::ArrayW<uint8_t> nonce, bool predictionResistant) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__CtrDrbgProvider, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandomBuilder/CtrDrbgProvider");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HMacDrbgProvider, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandomBuilder/HMacDrbgProvider");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::Org__BouncyCastle__Crypto__Prng__SP800SecureRandomBuilder__HashDrbgProvider, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandomBuilder/HashDrbgProvider");
NEED_NO_BOX(Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::SP800SecureRandomBuilder, "Org.BouncyCastle.Crypto.Prng", "SP800SecureRandomBuilder");
