#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignature;
}
namespace Org::BouncyCastle::Bcpg {
struct RevocationReasonTag;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketGenerator;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSignatureSubpacketGenerator
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1669))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSignatureSubpacketGenerator
class CORDL_TYPE PgpSignatureSubpacketGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PgpSignatureSubpacketGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSignatureSubpacketGenerator", modifiers: " const&", def_value: None }]
constexpr PgpSignatureSubpacketGenerator(PgpSignatureSubpacketGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSignatureSubpacketGenerator", modifiers: "&&", def_value: None }]
constexpr PgpSignatureSubpacketGenerator(PgpSignatureSubpacketGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpSignatureSubpacketGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpSignatureSubpacketGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpSignatureSubpacketGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpSignatureSubpacketGenerator& operator=(PgpSignatureSubpacketGenerator&& o) noexcept = default;
  constexpr PgpSignatureSubpacketGenerator& operator=(PgpSignatureSubpacketGenerator const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::IList value) ;

constexpr System::Collections::IList __get_list() const;


// Methods

/// @brief Method SetRevocable addr 0x104df88 size 0xec virtual false final false
 void SetRevocable(bool isCritical, bool isRevocable) ;

/// @brief Method SetExportable addr 0x104e074 size 0xec virtual false final false
 void SetExportable(bool isCritical, bool isExportable) ;

/// @brief Method SetFeature addr 0x104e160 size 0xec virtual false final false
 void SetFeature(bool isCritical, uint8_t feature) ;

/// @brief Method SetTrust addr 0x104e24c size 0xfc virtual false final false
 void SetTrust(bool isCritical, int32_t depth, int32_t trustAmount) ;

/// @brief Method SetKeyExpirationTime addr 0x104e348 size 0xec virtual false final false
 void SetKeyExpirationTime(bool isCritical, int64_t seconds) ;

/// @brief Method SetSignatureExpirationTime addr 0x104e434 size 0xec virtual false final false
 void SetSignatureExpirationTime(bool isCritical, int64_t seconds) ;

/// @brief Method SetSignatureCreationTime addr 0x104e520 size 0xec virtual false final false
 void SetSignatureCreationTime(bool isCritical, System::DateTime date) ;

/// @brief Method SetPreferredHashAlgorithms addr 0x104e60c size 0xf0 virtual false final false
 void SetPreferredHashAlgorithms(bool isCritical, ::ArrayW<int32_t> algorithms) ;

/// @brief Method SetPreferredSymmetricAlgorithms addr 0x104e6fc size 0xf0 virtual false final false
 void SetPreferredSymmetricAlgorithms(bool isCritical, ::ArrayW<int32_t> algorithms) ;

/// @brief Method SetPreferredCompressionAlgorithms addr 0x104e7ec size 0xf0 virtual false final false
 void SetPreferredCompressionAlgorithms(bool isCritical, ::ArrayW<int32_t> algorithms) ;

/// @brief Method SetKeyFlags addr 0x104e8dc size 0xec virtual false final false
 void SetKeyFlags(bool isCritical, int32_t flags) ;

/// @brief Method SetSignerUserId addr 0x104e9c8 size 0x13c virtual false final false
 void SetSignerUserId(bool isCritical, ::StringW userId) ;

/// @brief Method SetSignerUserId addr 0x104eb04 size 0x140 virtual false final false
 void SetSignerUserId(bool isCritical, ::ArrayW<uint8_t> rawUserId) ;

/// @brief Method SetEmbeddedSignature addr 0x104ec44 size 0x160 virtual false final false
 void SetEmbeddedSignature(bool isCritical, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignature pgpSignature) ;

/// @brief Method SetPrimaryUserId addr 0x104eda4 size 0xec virtual false final false
 void SetPrimaryUserId(bool isCritical, bool isPrimaryUserId) ;

/// @brief Method SetNotationData addr 0x104ee90 size 0x104 virtual false final false
 void SetNotationData(bool isCritical, bool isHumanReadable, ::StringW notationName, ::StringW notationValue) ;

/// @brief Method SetRevocationReason addr 0x104ef94 size 0xfc virtual false final false
 void SetRevocationReason(bool isCritical, Org::BouncyCastle::Bcpg::RevocationReasonTag reason, ::StringW description) ;

/// @brief Method SetRevocationKey addr 0x104f090 size 0x100 virtual false final false
 void SetRevocationKey(bool isCritical, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag keyAlgorithm, ::ArrayW<uint8_t> fingerprint) ;

/// @brief Method SetIssuerKeyID addr 0x104f190 size 0xec virtual false final false
 void SetIssuerKeyID(bool isCritical, int64_t keyID) ;

/// @brief Method Generate addr 0x104f27c size 0x2c8 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector Generate() ;

// Ctor Parameters []
explicit PgpSignatureSubpacketGenerator() ;

/// @brief Method .ctor addr 0x104f544 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketGenerator, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSignatureSubpacketGenerator");
