#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRing_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace Org::BouncyCastle::Bcpg {
class PublicKeyPacket;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyRing;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPublicKeyRing
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1647))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1661))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPublicKeyRing
class CORDL_TYPE PgpPublicKeyRing : public Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PgpPublicKeyRing() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyRing", modifiers: " const&", def_value: None }]
constexpr PgpPublicKeyRing(PgpPublicKeyRing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyRing", modifiers: "&&", def_value: None }]
constexpr PgpPublicKeyRing(PgpPublicKeyRing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpPublicKeyRing(void* ptr) noexcept : Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRing(ptr) {
}


  constexpr PgpPublicKeyRing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpPublicKeyRing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpPublicKeyRing& operator=(PgpPublicKeyRing&& o) noexcept = default;
  constexpr PgpPublicKeyRing& operator=(PgpPublicKeyRing const& o) noexcept = default;
                


// Fields

 System::Collections::IList __declspec(property(get=__get_keys, put=__set_keys))  keys;

constexpr void __set_keys(System::Collections::IList value) ;

constexpr System::Collections::IList __get_keys() const;


// Methods

// Ctor Parameters [CppParam { name: "encoding", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit PgpPublicKeyRing(::ArrayW<uint8_t> encoding) ;

/// @brief Method .ctor addr 0x103cb08 size 0x78 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoding) ;

// Ctor Parameters [CppParam { name: "pubKeys", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit PgpPublicKeyRing(System::Collections::IList pubKeys) ;

/// @brief Method .ctor addr 0x103ce38 size 0x28 virtual false final false
 void _ctor(System::Collections::IList pubKeys) ;

// Ctor Parameters [CppParam { name: "inputStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit PgpPublicKeyRing(System::IO::Stream inputStream) ;

/// @brief Method .ctor addr 0x103cb80 size 0x2b8 virtual false final false
 void _ctor(System::IO::Stream inputStream) ;

/// @brief Method GetPublicKey addr 0x103cfec size 0xf0 virtual true final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey GetPublicKey() ;

/// @brief Method GetPublicKey addr 0x103d0dc size 0x364 virtual true final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey GetPublicKey(int64_t keyId) ;

/// @brief Method GetPublicKeys addr 0x103d440 size 0x68 virtual true final false
 System::Collections::IEnumerable GetPublicKeys() ;

/// @brief Method GetEncoded addr 0x103d4a8 size 0x80 virtual true final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x103d528 size 0x38c virtual true final false
 void Encode(System::IO::Stream outStr) ;

/// @brief Method InsertPublicKey addr 0x103d8b4 size 0x3d0 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing InsertPublicKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing pubRing, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method RemovePublicKey addr 0x103dc84 size 0x284 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing RemovePublicKey(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing pubRing, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey pubKey) ;

/// @brief Method ReadPublicKeyPacket addr 0x103ce60 size 0xe8 virtual false final false
static Org::BouncyCastle::Bcpg::PublicKeyPacket ReadPublicKeyPacket(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

/// @brief Method ReadSubkey addr 0x103cf48 size 0xa4 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey ReadSubkey(Org::BouncyCastle::Bcpg::BcpgInputStream bcpgInput) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPublicKeyRing");
