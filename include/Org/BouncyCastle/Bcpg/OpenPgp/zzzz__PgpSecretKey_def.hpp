#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ECPrivateKeyParameters;
}
namespace Org::BouncyCastle::Bcpg {
class S2k;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpKeyPair;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSignatureSubpacketVector;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPrivateKey;
}
namespace Org::BouncyCastle::Bcpg {
struct HashAlgorithmTag;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Bcpg {
struct SymmetricKeyAlgorithmTag;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace Org::BouncyCastle::Bcpg {
struct PublicKeyAlgorithmTag;
}
namespace Org::BouncyCastle::Bcpg {
class SecretKeyPacket;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKey;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSecretKey
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1663))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSecretKey
class CORDL_TYPE PgpSecretKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PgpSecretKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSecretKey", modifiers: " const&", def_value: None }]
constexpr PgpSecretKey(PgpSecretKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSecretKey", modifiers: "&&", def_value: None }]
constexpr PgpSecretKey(PgpSecretKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpSecretKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpSecretKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpSecretKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpSecretKey& operator=(PgpSecretKey&& o) noexcept = default;
  constexpr PgpSecretKey& operator=(PgpSecretKey const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Bcpg::SecretKeyPacket __declspec(property(get=__get_secret, put=__set_secret))  secret;

constexpr void __set_secret(Org::BouncyCastle::Bcpg::SecretKeyPacket value) ;

constexpr Org::BouncyCastle::Bcpg::SecretKeyPacket __get_secret() const;

 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey __declspec(property(get=__get_pub, put=__set_pub))  pub;

constexpr void __set_pub(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey value) ;

constexpr Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey __get_pub() const;


// Properties

 bool __declspec(property(get=get_IsSigningKey))  IsSigningKey;

 bool __declspec(property(get=get_IsMasterKey))  IsMasterKey;

 bool __declspec(property(get=get_IsPrivateKeyEmpty))  IsPrivateKeyEmpty;

 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag __declspec(property(get=get_KeyEncryptionAlgorithm))  KeyEncryptionAlgorithm;

 int64_t __declspec(property(get=get_KeyId))  KeyId;

 int32_t __declspec(property(get=get_S2kUsage))  S2kUsage;

 Org::BouncyCastle::Bcpg::S2k __declspec(property(get=get_S2k))  S2k;

 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey __declspec(property(get=get_PublicKey))  PublicKey;

 System::Collections::IEnumerable __declspec(property(get=get_UserIds))  UserIds;

 System::Collections::IEnumerable __declspec(property(get=get_UserAttributes))  UserAttributes;


// Methods

// Ctor Parameters [CppParam { name: "secret", ty: "Org::BouncyCastle::Bcpg::SecretKeyPacket", modifiers: "", def_value: None }, CppParam { name: "pub", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey", modifiers: "", def_value: None }]
explicit PgpSecretKey(Org::BouncyCastle::Bcpg::SecretKeyPacket secret, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pub) ;

/// @brief Method .ctor addr 0x10403a4 size 0x2c virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::SecretKeyPacket secret, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pub) ;

// Ctor Parameters [CppParam { name: "privKey", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey", modifiers: "", def_value: None }, CppParam { name: "pubKey", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "rawPassPhrase", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "clearPassPhrase", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useSha1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }, CppParam { name: "isMasterKey", ty: "bool", modifiers: "", def_value: None }]
explicit PgpSecretKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey privKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1, Org::BouncyCastle::Security::SecureRandom rand, bool isMasterKey) ;

/// @brief Method .ctor addr 0x10403d0 size 0x728 virtual false final false
 void _ctor(Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey privKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1, Org::BouncyCastle::Security::SecureRandom rand, bool isMasterKey) ;

// Ctor Parameters [CppParam { name: "certificationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyPair", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "passPhrase", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "hashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "unhashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpSecretKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x10410a4 size 0x2c virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

// Ctor Parameters [CppParam { name: "certificationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyPair", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "passPhrase", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "useSha1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "unhashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpSecretKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x10410d0 size 0x90 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

// Ctor Parameters [CppParam { name: "certificationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyPair", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "utf8PassPhrase", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "passPhrase", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "useSha1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "unhashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpSecretKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x1041160 size 0x80 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

// Ctor Parameters [CppParam { name: "certificationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyPair", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "rawPassPhrase", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "useSha1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "unhashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpSecretKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x10412b8 size 0x30 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

// Ctor Parameters [CppParam { name: "certificationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyPair", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "rawPassPhrase", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "clearPassPhrase", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useSha1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "unhashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpSecretKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x1041230 size 0x88 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

// Ctor Parameters [CppParam { name: "certificationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyPair", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "passPhrase", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "useSha1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "unhashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpSecretKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x104159c size 0xa4 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

// Ctor Parameters [CppParam { name: "certificationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyPair", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "utf8PassPhrase", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "passPhrase", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "useSha1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "unhashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpSecretKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x1041640 size 0x94 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

// Ctor Parameters [CppParam { name: "certificationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyPair", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "rawPassPhrase", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "useSha1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "unhashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpSecretKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x104175c size 0x34 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

// Ctor Parameters [CppParam { name: "certificationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "keyPair", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "hashAlgorithm", ty: "Org::BouncyCastle::Bcpg::HashAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "rawPassPhrase", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "clearPassPhrase", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "useSha1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "unhashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpSecretKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x10416d4 size 0x88 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method CertifiedPublicKey addr 0x10412e8 size 0x2b4 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey CertifiedPublicKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets) ;

/// @brief Method CertifiedPublicKey addr 0x1041790 size 0x2c0 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey CertifiedPublicKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair keyPair, ::StringW id, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) ;

// Ctor Parameters [CppParam { name: "certificationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "algorithm", ty: "Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "pubKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "privKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "time", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "passPhrase", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "hashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "unhashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpSecretKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey, System::DateTime time, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x1041c98 size 0xe4 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey, System::DateTime time, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

// Ctor Parameters [CppParam { name: "certificationLevel", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "algorithm", ty: "Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "pubKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "privKey", ty: "Org::BouncyCastle::Crypto::AsymmetricKeyParameter", modifiers: "", def_value: None }, CppParam { name: "time", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "encAlgorithm", ty: "Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag", modifiers: "", def_value: None }, CppParam { name: "passPhrase", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None }, CppParam { name: "useSha1", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "unhashedPackets", ty: "Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector", modifiers: "", def_value: None }, CppParam { name: "rand", ty: "Org::BouncyCastle::Security::SecureRandom", modifiers: "", def_value: None }]
explicit PgpSecretKey(int32_t certificationLevel, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey, System::DateTime time, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method .ctor addr 0x1041d7c size 0xe8 virtual false final false
 void _ctor(int32_t certificationLevel, Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, Org::BouncyCastle::Crypto::AsymmetricKeyParameter pubKey, Org::BouncyCastle::Crypto::AsymmetricKeyParameter privKey, System::DateTime time, ::StringW id, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t> passPhrase, bool useSha1, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector hashedPackets, Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector unhashedPackets, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method get_IsSigningKey addr 0x1041e64 size 0x44 virtual false final false
 bool get_IsSigningKey() ;

/// @brief Method get_IsMasterKey addr 0x1041ea8 size 0x1c virtual false final false
 bool get_IsMasterKey() ;

/// @brief Method get_IsPrivateKeyEmpty addr 0x1041ec4 size 0x34 virtual false final false
 bool get_IsPrivateKeyEmpty() ;

/// @brief Method get_KeyEncryptionAlgorithm addr 0x1041ef8 size 0x1c virtual false final false
 Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag get_KeyEncryptionAlgorithm() ;

/// @brief Method get_KeyId addr 0x1041f14 size 0x1c virtual false final false
 int64_t get_KeyId() ;

/// @brief Method get_S2kUsage addr 0x1041f30 size 0x1c virtual false final false
 int32_t get_S2kUsage() ;

/// @brief Method get_S2k addr 0x1041f4c size 0x1c virtual false final false
 Org::BouncyCastle::Bcpg::S2k get_S2k() ;

/// @brief Method get_PublicKey addr 0x1041f68 size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey get_PublicKey() ;

/// @brief Method get_UserIds addr 0x1041f70 size 0x1c virtual false final false
 System::Collections::IEnumerable get_UserIds() ;

/// @brief Method get_UserAttributes addr 0x1041f8c size 0x1c virtual false final false
 System::Collections::IEnumerable get_UserAttributes() ;

/// @brief Method ExtractKeyData addr 0x1041fa8 size 0x890 virtual false final false
 ::ArrayW<uint8_t> ExtractKeyData(::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase) ;

/// @brief Method RecoverKeyData addr 0x10431a8 size 0x288 virtual false final false
static ::ArrayW<uint8_t> RecoverKeyData(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::StringW modeAndPadding, Org::BouncyCastle::Crypto::Parameters::KeyParameter key, ::ArrayW<uint8_t> iv, ::ArrayW<uint8_t> keyData, int32_t keyOff, int32_t keyLen) ;

/// @brief Method ExtractPrivateKey addr 0x1043430 size 0x2c virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey ExtractPrivateKey(::ArrayW<char16_t> passPhrase) ;

/// @brief Method ExtractPrivateKeyUtf8 addr 0x1043c00 size 0x2c virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey ExtractPrivateKeyUtf8(::ArrayW<char16_t> passPhrase) ;

/// @brief Method ExtractPrivateKeyRaw addr 0x1043c2c size 0x8 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey ExtractPrivateKeyRaw(::ArrayW<uint8_t> rawPassPhrase) ;

/// @brief Method DoExtractPrivateKey addr 0x104345c size 0x7a4 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey DoExtractPrivateKey(::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase) ;

/// @brief Method GetECKey addr 0x1043c34 size 0x148 virtual false final false
 Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters GetECKey(::StringW algorithm, Org::BouncyCastle::Bcpg::BcpgInputStream bcpgIn) ;

/// @brief Method Checksum addr 0x1040af8 size 0x26c virtual false final false
static ::ArrayW<uint8_t> Checksum(bool useSha1, ::ArrayW<uint8_t> bytes, int32_t length) ;

/// @brief Method GetEncoded addr 0x1043d7c size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x1043df4 size 0xd04 virtual false final false
 void Encode(System::IO::Stream outStr) ;

/// @brief Method CopyWithNewPassword addr 0x1044b50 size 0x78 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey CopyWithNewPassword(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey key, ::ArrayW<char16_t> oldPassPhrase, ::ArrayW<char16_t> newPassPhrase, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method CopyWithNewPasswordUtf8 addr 0x1045018 size 0x64 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey CopyWithNewPasswordUtf8(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey key, ::ArrayW<char16_t> oldPassPhrase, ::ArrayW<char16_t> newPassPhrase, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method CopyWithNewPasswordRaw addr 0x104507c size 0x10 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey CopyWithNewPasswordRaw(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey key, ::ArrayW<uint8_t> rawOldPassPhrase, ::ArrayW<uint8_t> rawNewPassPhrase, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method DoCopyWithNewPassword addr 0x1044bc8 size 0x450 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey DoCopyWithNewPassword(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey key, ::ArrayW<uint8_t> rawOldPassPhrase, ::ArrayW<uint8_t> rawNewPassPhrase, bool clearPassPhrase, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm, Org::BouncyCastle::Security::SecureRandom rand) ;

/// @brief Method ReplacePublicKey addr 0x104508c size 0xd8 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey ReplacePublicKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey secretKey, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey publicKey) ;

/// @brief Method EncryptKeyDataV3 addr 0x1040df4 size 0x2b0 virtual false final false
static ::ArrayW<uint8_t> EncryptKeyDataV3(::ArrayW<uint8_t> rawKeyData, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, Org::BouncyCastle::Security::SecureRandom random, ByRef<Org::BouncyCastle::Bcpg::S2k> s2k, ByRef<::ArrayW<uint8_t>> iv) ;

/// @brief Method EncryptKeyDataV4 addr 0x1040d64 size 0x90 virtual false final false
static ::ArrayW<uint8_t> EncryptKeyDataV4(::ArrayW<uint8_t> rawKeyData, Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, Org::BouncyCastle::Security::SecureRandom random, ByRef<Org::BouncyCastle::Bcpg::S2k> s2k, ByRef<::ArrayW<uint8_t>> iv) ;

/// @brief Method EncryptData addr 0x1045164 size 0x350 virtual false final false
static ::ArrayW<uint8_t> EncryptData(Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, Org::BouncyCastle::Crypto::Parameters::KeyParameter key, ::ArrayW<uint8_t> data, int32_t dataOff, int32_t dataLen, Org::BouncyCastle::Security::SecureRandom random, ByRef<::ArrayW<uint8_t>> iv) ;

/// @brief Method ParseSecretKeyFromSExpr addr 0x10455c0 size 0x3c virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey ParseSecretKeyFromSExpr(System::IO::Stream inputStream, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method ParseSecretKeyFromSExprUtf8 addr 0x104594c size 0x3c virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey ParseSecretKeyFromSExprUtf8(System::IO::Stream inputStream, ::ArrayW<char16_t> passPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method ParseSecretKeyFromSExprRaw addr 0x1045988 size 0xc virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey ParseSecretKeyFromSExprRaw(System::IO::Stream inputStream, ::ArrayW<uint8_t> rawPassPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method DoParseSecretKeyFromSExpr addr 0x10455fc size 0x350 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey DoParseSecretKeyFromSExpr(System::IO::Stream inputStream, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method ParseSecretKeyFromSExpr addr 0x1045e0c size 0x2c virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey ParseSecretKeyFromSExpr(System::IO::Stream inputStream, ::ArrayW<char16_t> passPhrase) ;

/// @brief Method ParseSecretKeyFromSExprUtf8 addr 0x104630c size 0x2c virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey ParseSecretKeyFromSExprUtf8(System::IO::Stream inputStream, ::ArrayW<char16_t> passPhrase) ;

/// @brief Method ParseSecretKeyFromSExprRaw addr 0x1046338 size 0x8 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey ParseSecretKeyFromSExprRaw(System::IO::Stream inputStream, ::ArrayW<uint8_t> rawPassPhrase) ;

/// @brief Method DoParseSecretKeyFromSExpr addr 0x1045e38 size 0x4d4 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey DoParseSecretKeyFromSExpr(System::IO::Stream inputStream, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase) ;

/// @brief Method GetDValue addr 0x1045bcc size 0x240 virtual false final false
static ::ArrayW<uint8_t> GetDValue(System::IO::Stream inputStream, ::ArrayW<uint8_t> rawPassPhrase, bool clearPassPhrase, ::StringW curveName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSecretKey");
