#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class CertificateType;
}
// Type: Org.BouncyCastle.Crypto.Tls::CertificateType
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1191))
// CS Name: Org.BouncyCastle.Crypto.Tls.CertificateType
class CORDL_TYPE CertificateType : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CertificateType() = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateType", modifiers: " const&", def_value: None }]
constexpr CertificateType(CertificateType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CertificateType", modifiers: "&&", def_value: None }]
constexpr CertificateType(CertificateType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CertificateType(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CertificateType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CertificateType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CertificateType& operator=(CertificateType&& o) noexcept = default;
  constexpr CertificateType& operator=(CertificateType const& o) noexcept = default;
                


// Fields

/// @brief Field X509 offset 0
static constexpr uint8_t  X509{0u};

/// @brief Field OpenPGP offset 0
static constexpr uint8_t  OpenPGP{1u};

/// @brief Field RawPublicKey offset 0
static constexpr uint8_t  RawPublicKey{2u};


// Methods

// Ctor Parameters []
explicit CertificateType() ;

/// @brief Method .ctor addr 0xee01dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::CertificateType);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::CertificateType, "Org.BouncyCastle.Crypto.Tls", "CertificateType");
