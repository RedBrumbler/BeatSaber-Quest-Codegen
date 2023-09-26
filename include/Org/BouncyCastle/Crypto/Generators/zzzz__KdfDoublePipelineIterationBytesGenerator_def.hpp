#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IMacDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class KdfDoublePipelineIterationBytesGenerator;
}
// Type: Org.BouncyCastle.Crypto.Generators::KdfDoublePipelineIterationBytesGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(911))
// CS Name: Org.BouncyCastle.Crypto.Generators.KdfDoublePipelineIterationBytesGenerator
class CORDL_TYPE KdfDoublePipelineIterationBytesGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IMacDerivationFunction
constexpr operator  Org::BouncyCastle::Crypto::IMacDerivationFunction() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Crypto::IDerivationFunction
constexpr operator  Org::BouncyCastle::Crypto::IDerivationFunction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~KdfDoublePipelineIterationBytesGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "KdfDoublePipelineIterationBytesGenerator", modifiers: " const&", def_value: None }]
constexpr KdfDoublePipelineIterationBytesGenerator(KdfDoublePipelineIterationBytesGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KdfDoublePipelineIterationBytesGenerator", modifiers: "&&", def_value: None }]
constexpr KdfDoublePipelineIterationBytesGenerator(KdfDoublePipelineIterationBytesGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KdfDoublePipelineIterationBytesGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KdfDoublePipelineIterationBytesGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KdfDoublePipelineIterationBytesGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KdfDoublePipelineIterationBytesGenerator& operator=(KdfDoublePipelineIterationBytesGenerator&& o) noexcept = default;
  constexpr KdfDoublePipelineIterationBytesGenerator& operator=(KdfDoublePipelineIterationBytesGenerator const& o) noexcept = default;
                


// Fields

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_IntegerMax, put=__set_IntegerMax))  IntegerMax;

static void __set_IntegerMax(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_IntegerMax() ;

static Org::BouncyCastle::Math::BigInteger __declspec(property(get=__get_Two, put=__set_Two))  Two;

static void __set_Two(Org::BouncyCastle::Math::BigInteger value) ;

static Org::BouncyCastle::Math::BigInteger __get_Two() ;

 Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_prf, put=__set_prf))  prf;

constexpr void __set_prf(Org::BouncyCastle::Crypto::IMac value) ;

constexpr Org::BouncyCastle::Crypto::IMac __get_prf() const;

 int32_t __declspec(property(get=__get_h, put=__set_h))  h;

constexpr void __set_h(int32_t value) ;

constexpr int32_t __get_h() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_fixedInputData, put=__set_fixedInputData))  fixedInputData;

constexpr void __set_fixedInputData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_fixedInputData() const;

 int32_t __declspec(property(get=__get_maxSizeExcl, put=__set_maxSizeExcl))  maxSizeExcl;

constexpr void __set_maxSizeExcl(int32_t value) ;

constexpr int32_t __get_maxSizeExcl() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_ios, put=__set_ios))  ios;

constexpr void __set_ios(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_ios() const;

 bool __declspec(property(get=__get_useCounter, put=__set_useCounter))  useCounter;

constexpr void __set_useCounter(bool value) ;

constexpr bool __get_useCounter() const;

 int32_t __declspec(property(get=__get_generatedBytes, put=__set_generatedBytes))  generatedBytes;

constexpr void __set_generatedBytes(int32_t value) ;

constexpr int32_t __get_generatedBytes() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_a, put=__set_a))  a;

constexpr void __set_a(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_a() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_k, put=__set_k))  k;

constexpr void __set_k(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_k() const;


// Properties

 Org::BouncyCastle::Crypto::IDigest __declspec(property(get=get_Digest))  Digest;


// Methods

// Ctor Parameters [CppParam { name: "prf", ty: "Org::BouncyCastle::Crypto::IMac", modifiers: "", def_value: None }]
explicit KdfDoublePipelineIterationBytesGenerator(Org::BouncyCastle::Crypto::IMac prf) ;

/// @brief Method .ctor addr 0xe7f9c4 size 0xf0 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IMac prf) ;

/// @brief Method Init addr 0xe7fab4 size 0x2bc virtual true final true
 void Init(Org::BouncyCastle::Crypto::IDerivationParameters parameters) ;

/// @brief Method generateNext addr 0xe7fd70 size 0x4ec virtual false final false
 void generateNext() ;

/// @brief Method get_Digest addr 0xe8025c size 0x88 virtual true final true
 Org::BouncyCastle::Crypto::IDigest get_Digest() ;

/// @brief Method GenerateBytes addr 0xe802e4 size 0x208 virtual true final true
 int32_t GenerateBytes(::ArrayW<uint8_t> output, int32_t outOff, int32_t length) ;

/// @brief Method GetMac addr 0xe804ec size 0x8 virtual true final true
 Org::BouncyCastle::Crypto::IMac GetMac() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::KdfDoublePipelineIterationBytesGenerator, "Org.BouncyCastle.Crypto.Generators", "KdfDoublePipelineIterationBytesGenerator");
