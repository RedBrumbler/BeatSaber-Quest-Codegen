#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRing_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyRing;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKey;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKeyRing;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSecretKeyRing
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1647))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1664))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSecretKeyRing
class CORDL_TYPE PgpSecretKeyRing : public Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PgpSecretKeyRing() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSecretKeyRing", modifiers: " const&", def_value: None }]
constexpr PgpSecretKeyRing(PgpSecretKeyRing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSecretKeyRing", modifiers: "&&", def_value: None }]
constexpr PgpSecretKeyRing(PgpSecretKeyRing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpSecretKeyRing(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing(ptr) {
}


  constexpr PgpSecretKeyRing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpSecretKeyRing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpSecretKeyRing& operator=(PgpSecretKeyRing&& o) noexcept = default;
  constexpr PgpSecretKeyRing& operator=(PgpSecretKeyRing const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(System::Collections::IList value) ;

constexpr System::Collections::IList __get_keys() const;

 System::Collections::IList __declspec(property(get=__get_extraPubKeys, put=__set_extraPubKeys))  extraPubKeys;

constexpr void __set_extraPubKeys(System::Collections::IList value) ;

constexpr System::Collections::IList __get_extraPubKeys() const;


// Methods

// Ctor Parameters [CppParam { name: "keys", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit PgpSecretKeyRing(System::Collections::IList keys) ;

/// @brief Method .ctor addr 0x104643c size 0x78 virtual false final false
 void _ctor(System::Collections::IList keys) ;

// Ctor Parameters [CppParam { name: "keys", ty: "System::Collections::IList", modifiers: "", def_value: None }, CppParam { name: "extraPubKeys", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit PgpSecretKeyRing(System::Collections::IList keys, System::Collections::IList extraPubKeys) ;

/// @brief Method .ctor addr 0x10464b4 size 0x2c virtual false final false
 void _ctor(System::Collections::IList keys, System::Collections::IList extraPubKeys) ;

// Ctor Parameters [CppParam { name: "encoding", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit PgpSecretKeyRing(::ArrayW<uint8_t> encoding) ;

/// @brief Method .ctor addr 0x10464e0 size 0x74 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoding) ;

// Ctor Parameters [CppParam { name: "inputStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit PgpSecretKeyRing(System::IO::Stream inputStream) ;

/// @brief Method .ctor addr 0x1046554 size 0x538 virtual false final false
 void _ctor(System::IO::Stream inputStream) ;

/// @brief Method GetPublicKey addr 0x1046a8c size 0xf4 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey GetPublicKey() ;

/// @brief Method GetSecretKey addr 0x1046b80 size 0xf0 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey GetSecretKey() ;

/// @brief Method GetSecretKeys addr 0x1046c70 size 0x68 virtual false final false
 System::Collections::IEnumerable GetSecretKeys() ;

/// @brief Method GetSecretKey addr 0x1046cd8 size 0x374 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey GetSecretKey(int64_t keyId) ;

/// @brief Method GetExtraPublicKeys addr 0x104704c size 0x68 virtual false final false
 System::Collections::IEnumerable GetExtraPublicKeys() ;

/// @brief Method GetEncoded addr 0x10470b4 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x104712c size 0x658 virtual false final false
 void Encode(System::IO::Stream outStr) ;

/// @brief Method ReplacePublicKeys addr 0x1047784 size 0x4ec virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing ReplacePublicKeys(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing secretRing, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing publicRing) ;

/// @brief Method CopyWithNewPassword addr 0x1047c70 size 0x5a4 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing CopyWithNewPassword(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing ring, ::ArrayW<char16_t> oldPassPhrase, ::ArrayW<char16_t> newPassPhrase, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method InsertSecretKey addr 0x1048214 size 0x3ec virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing InsertSecretKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing secRing, Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey secKey) ;

/// @brief Method RemoveSecretKey addr 0x1048600 size 0x298 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing RemoveSecretKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing secRing, Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey secKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSecretKeyRing");
