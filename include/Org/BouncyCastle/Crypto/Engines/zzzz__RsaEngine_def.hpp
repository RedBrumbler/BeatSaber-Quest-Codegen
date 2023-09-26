#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IAsymmetricBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class IRsa;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RsaEngine;
}
// Type: Org.BouncyCastle.Crypto.Engines::RsaEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(866))
// CS Name: Org.BouncyCastle.Crypto.Engines.RsaEngine
class CORDL_TYPE RsaEngine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IAsymmetricBlockCipher
constexpr operator  Org::BouncyCastle::Crypto::IAsymmetricBlockCipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RsaEngine() = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaEngine", modifiers: " const&", def_value: None }]
constexpr RsaEngine(RsaEngine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RsaEngine", modifiers: "&&", def_value: None }]
constexpr RsaEngine(RsaEngine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RsaEngine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RsaEngine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RsaEngine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RsaEngine& operator=(RsaEngine&& o) noexcept = default;
  constexpr RsaEngine& operator=(RsaEngine const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IRsa __declspec(property(get=__get_core, put=__set_core))  core;

constexpr void __set_core(Org::BouncyCastle::Crypto::IRsa value) ;

constexpr Org::BouncyCastle::Crypto::IRsa __get_core() const;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit RsaEngine() ;

/// @brief Method .ctor addr 0xe639b0 size 0x6c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "rsa", ty: "Org::BouncyCastle::Crypto::IRsa", modifiers: "", def_value: None }]
explicit RsaEngine(Org::BouncyCastle::Crypto::IRsa rsa) ;

/// @brief Method .ctor addr 0xe63a1c size 0x28 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IRsa rsa) ;

/// @brief Method get_AlgorithmName addr 0xe63a44 size 0x40 virtual true final false
 ::StringW get_AlgorithmName() ;

/// @brief Method Init addr 0xe63a84 size 0xb8 virtual true final false
 void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method GetInputBlockSize addr 0xe63b3c size 0xa4 virtual true final false
 int32_t GetInputBlockSize() ;

/// @brief Method GetOutputBlockSize addr 0xe63be0 size 0xa4 virtual true final false
 int32_t GetOutputBlockSize() ;

/// @brief Method ProcessBlock addr 0xe63c84 size 0x1a4 virtual true final false
 ::ArrayW<uint8_t> ProcessBlock(::ArrayW<uint8_t> inBuf, int32_t inOff, int32_t inLen) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(Org::BouncyCastle::Crypto::Engines::RsaEngine);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::RsaEngine, "Org.BouncyCastle.Crypto.Engines", "RsaEngine");
