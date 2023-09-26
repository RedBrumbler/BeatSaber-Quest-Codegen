#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto::Parameters {
class X25519PrivateKeyParameters;
}
namespace Org::BouncyCastle::Crypto {
class IRawAgreement;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class X25519Agreement;
}
// Type: Org.BouncyCastle.Crypto.Agreement::X25519Agreement
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(743))
// CS Name: Org.BouncyCastle.Crypto.Agreement.X25519Agreement
class CORDL_TYPE X25519Agreement : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IRawAgreement
constexpr operator  Org::BouncyCastle::Crypto::IRawAgreement() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X25519Agreement() = default;

// Ctor Parameters [CppParam { name: "", ty: "X25519Agreement", modifiers: " const&", def_value: None }]
constexpr X25519Agreement(X25519Agreement const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X25519Agreement", modifiers: "&&", def_value: None }]
constexpr X25519Agreement(X25519Agreement&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X25519Agreement(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X25519Agreement& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X25519Agreement& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X25519Agreement& operator=(X25519Agreement&& o) noexcept = default;
  constexpr X25519Agreement& operator=(X25519Agreement const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters __declspec(property(get=__get_privateKey, put=__set_privateKey))  privateKey;

constexpr void __set_privateKey(Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters value) ;

constexpr Org::BouncyCastle::Crypto::Parameters::X25519PrivateKeyParameters __get_privateKey() const;


// Properties

 int32_t __declspec(property(get=get_AgreementSize))  AgreementSize;


// Methods

/// @brief Method Init addr 0x119ee04 size 0x74 virtual true final true
 void Init(Org::BouncyCastle::Crypto::ICipherParameters parameters) ;

/// @brief Method get_AgreementSize addr 0x119ee78 size 0x58 virtual true final true
 int32_t get_AgreementSize() ;

/// @brief Method CalculateAgreement addr 0x119eed0 size 0x8c virtual true final true
 void CalculateAgreement(Org::BouncyCastle::Crypto::ICipherParameters publicKey, ::ArrayW<uint8_t> buf, int32_t off) ;

// Ctor Parameters []
explicit X25519Agreement() ;

/// @brief Method .ctor addr 0x119ef5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(Org::BouncyCastle::Crypto::Agreement::X25519Agreement);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Agreement::X25519Agreement, "Org.BouncyCastle.Crypto.Agreement", "X25519Agreement");
