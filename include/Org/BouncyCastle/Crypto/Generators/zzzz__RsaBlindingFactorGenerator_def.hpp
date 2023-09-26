#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class RsaKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class RsaBlindingFactorGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::RsaBlindingFactorGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(922))
// CS Name: Org.BouncyCastle.Crypto.Generators.RsaBlindingFactorGenerator
class CORDL_TYPE RsaBlindingFactorGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RsaBlindingFactorGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaBlindingFactorGenerator", modifiers: " const&", def_value: None }]
constexpr RsaBlindingFactorGenerator(RsaBlindingFactorGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaBlindingFactorGenerator", modifiers: "&&", def_value: None }]
constexpr RsaBlindingFactorGenerator(RsaBlindingFactorGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaBlindingFactorGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RsaBlindingFactorGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaBlindingFactorGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaBlindingFactorGenerator& operator=(RsaBlindingFactorGenerator&& o) noexcept = default;
  constexpr RsaBlindingFactorGenerator& operator=(RsaBlindingFactorGenerator const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __declspec(property(get=__get_key, put=__set_key))  key;

constexpr void __set_key(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters __get_key() const;

 Org::BouncyCastle::Security::SecureRandom __declspec(property(get=__get_random, put=__set_random))  random;

constexpr void __set_random(Org::BouncyCastle::Security::SecureRandom value) ;

constexpr Org::BouncyCastle::Security::SecureRandom __get_random() const;


// Methods

/// @brief Method Init addr 0xe87460 size 0x1d8 virtual false final false
 void Init(Org::BouncyCastle::Crypto::ICipherParameters param) ;

/// @brief Method GenerateBlindingFactor addr 0xe87638 size 0x188 virtual false final false
 Org::BouncyCastle::Math::BigInteger GenerateBlindingFactor() ;

// Ctor Parameters []
explicit RsaBlindingFactorGenerator() ;

/// @brief Method .ctor addr 0xe877c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::RsaBlindingFactorGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::RsaBlindingFactorGenerator, "Org.BouncyCastle.Crypto.Generators", "RsaBlindingFactorGenerator");
