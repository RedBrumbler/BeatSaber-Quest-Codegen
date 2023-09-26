#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class CryptoConvert;
}
// Type: Mono.Security.Cryptography::CryptoConvert
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14019))
// CS Name: Mono.Security.Cryptography.CryptoConvert
class CORDL_TYPE CryptoConvert : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CryptoConvert() = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConvert", modifiers: " const&", def_value: None }]
constexpr CryptoConvert(CryptoConvert const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConvert", modifiers: "&&", def_value: None }]
constexpr CryptoConvert(CryptoConvert&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CryptoConvert(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CryptoConvert& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CryptoConvert& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CryptoConvert& operator=(CryptoConvert&& o) noexcept = default;
  constexpr CryptoConvert& operator=(CryptoConvert const& o) noexcept = default;
                


// Methods

/// @brief Method ToInt32LE addr 0x22d04f0 size 0x74 virtual false final false
static int32_t ToInt32LE(::ArrayW<uint8_t> bytes, int32_t offset) ;

/// @brief Method ToUInt32LE addr 0x22d0564 size 0x74 virtual false final false
static uint32_t ToUInt32LE(::ArrayW<uint8_t> bytes, int32_t offset) ;

/// @brief Method Trim addr 0x22d05d8 size 0xac virtual false final false
static ::ArrayW<uint8_t> Trim(::ArrayW<uint8_t> array) ;

/// @brief Method FromCapiPrivateKeyBlob addr 0x22d0684 size 0x8 virtual false final false
static System::Security::Cryptography::RSA FromCapiPrivateKeyBlob(::ArrayW<uint8_t> blob) ;

/// @brief Method FromCapiPrivateKeyBlob addr 0x22d068c size 0x224 virtual false final false
static System::Security::Cryptography::RSA FromCapiPrivateKeyBlob(::ArrayW<uint8_t> blob, int32_t offset) ;

/// @brief Method GetParametersFromCapiPrivateKeyBlob addr 0x22d08b0 size 0x5a0 virtual false final false
static System::Security::Cryptography::RSAParameters GetParametersFromCapiPrivateKeyBlob(::ArrayW<uint8_t> blob, int32_t offset) ;

/// @brief Method ToHex addr 0x22d0e50 size 0x134 virtual false final false
static ::StringW ToHex(::ArrayW<uint8_t> input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(Mono::Security::Cryptography::CryptoConvert);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::CryptoConvert, "Mono.Security.Cryptography", "CryptoConvert");
