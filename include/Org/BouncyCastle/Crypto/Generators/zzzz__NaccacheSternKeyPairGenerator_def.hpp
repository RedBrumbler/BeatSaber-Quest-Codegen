#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class NaccacheSternKeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class KeyGenerationParameters;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricCipherKeyPair;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class IAsymmetricCipherKeyPairGenerator;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class NaccacheSternKeyPairGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::NaccacheSternKeyPairGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(914))
// CS Name: Org.BouncyCastle.Crypto.Generators.NaccacheSternKeyPairGenerator
class CORDL_TYPE NaccacheSternKeyPairGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator
constexpr operator  Org::BouncyCastle::Crypto::IAsymmetricCipherKeyPairGenerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NaccacheSternKeyPairGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyPairGenerator", modifiers: " const&", def_value: None }]
constexpr NaccacheSternKeyPairGenerator(NaccacheSternKeyPairGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NaccacheSternKeyPairGenerator", modifiers: "&&", def_value: None }]
constexpr NaccacheSternKeyPairGenerator(NaccacheSternKeyPairGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NaccacheSternKeyPairGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NaccacheSternKeyPairGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NaccacheSternKeyPairGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NaccacheSternKeyPairGenerator& operator=(NaccacheSternKeyPairGenerator&& o) noexcept = default;
  constexpr NaccacheSternKeyPairGenerator& operator=(NaccacheSternKeyPairGenerator const& o) noexcept = default;
                


// Fields

static ::ArrayW<int32_t> __declspec(property(get=__get_smallPrimes, put=__set_smallPrimes))  smallPrimes;

static void __set_smallPrimes(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_smallPrimes() ;

 Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters __declspec(property(get=__get_param, put=__set_param))  param;

constexpr void __set_param(Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::NaccacheSternKeyGenerationParameters __get_param() const;


// Methods

/// @brief Method Init addr 0xe816f4 size 0xa4 virtual true final true
 void Init(Org::BouncyCastle::Crypto::KeyGenerationParameters parameters) ;

/// @brief Method GenerateKeyPair addr 0xe81798 size 0xf74 virtual true final true
 Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair GenerateKeyPair() ;

/// @brief Method generatePrime addr 0xe82d34 size 0x7c virtual false final false
static Org::BouncyCastle::Math::BigInteger generatePrime(int32_t bitLength, int32_t certainty, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method permuteList addr 0xe82890 size 0x4a4 virtual false final false
static System::Collections::IList permuteList(System::Collections::IList arr, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method findFirstPrimes addr 0xe8270c size 0x184 virtual false final false
static System::Collections::IList findFirstPrimes(int32_t count) ;

// Ctor Parameters []
explicit NaccacheSternKeyPairGenerator() ;

/// @brief Method .ctor addr 0xe82e44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::NaccacheSternKeyPairGenerator, "Org.BouncyCastle.Crypto.Generators", "NaccacheSternKeyPairGenerator");
