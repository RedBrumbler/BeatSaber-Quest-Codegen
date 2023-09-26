#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyRing;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyRingBundle;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPublicKeyRingBundle
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1662))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpPublicKeyRingBundle
class CORDL_TYPE PgpPublicKeyRingBundle : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PgpPublicKeyRingBundle() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyRingBundle", modifiers: " const&", def_value: None }]
constexpr PgpPublicKeyRingBundle(PgpPublicKeyRingBundle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyRingBundle", modifiers: "&&", def_value: None }]
constexpr PgpPublicKeyRingBundle(PgpPublicKeyRingBundle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpPublicKeyRingBundle(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpPublicKeyRingBundle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpPublicKeyRingBundle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpPublicKeyRingBundle& operator=(PgpPublicKeyRingBundle&& o) noexcept = default;
  constexpr PgpPublicKeyRingBundle& operator=(PgpPublicKeyRingBundle const& o) noexcept = default;
                


// Fields

 System::Collections::IDictionary __declspec(property(get=__get_pubRings, put=__set_pubRings))  pubRings;

constexpr void __set_pubRings(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_pubRings() const;

 System::Collections::IList __declspec(property(get=__get_order, put=__set_order))  order;

constexpr void __set_order(System::Collections::IList value) ;

constexpr System::Collections::IList __get_order() const;


// Properties

 int32_t __declspec(property(get=get_Size))  Size;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "pubRings", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }, CppParam { name: "order", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit PgpPublicKeyRingBundle(System::Collections::IDictionary pubRings, System::Collections::IList order) ;

/// @brief Method .ctor addr 0x103df08 size 0x2c virtual false final false
 void _ctor(System::Collections::IDictionary pubRings, System::Collections::IList order) ;

// Ctor Parameters [CppParam { name: "encoding", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit PgpPublicKeyRingBundle(::ArrayW<uint8_t> encoding) ;

/// @brief Method .ctor addr 0x103df34 size 0x78 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoding) ;

// Ctor Parameters [CppParam { name: "inputStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit PgpPublicKeyRingBundle(System::IO::Stream inputStream) ;

/// @brief Method .ctor addr 0x103dfac size 0x80 virtual false final false
 void _ctor(System::IO::Stream inputStream) ;

// Ctor Parameters [CppParam { name: "e", ty: "System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit PgpPublicKeyRingBundle(System::Collections::IEnumerable e) ;

/// @brief Method .ctor addr 0x103e02c size 0x5a0 virtual false final false
 void _ctor(System::Collections::IEnumerable e) ;

/// @brief Method get_Size addr 0x103e5cc size 0xa4 virtual false final false
 int32_t get_Size() ;

/// @brief Method get_Count addr 0x103e670 size 0xa4 virtual false final false
 int32_t get_Count() ;

/// @brief Method GetKeyRings addr 0x103e714 size 0xe4 virtual false final false
 System::Collections::IEnumerable GetKeyRings() ;

/// @brief Method GetKeyRings addr 0x103e7f8 size 0xc virtual false final false
 System::Collections::IEnumerable GetKeyRings(::StringW userId) ;

/// @brief Method GetKeyRings addr 0x103f0b0 size 0xc virtual false final false
 System::Collections::IEnumerable GetKeyRings(::StringW userId, bool matchPartial) ;

/// @brief Method GetKeyRings addr 0x103e804 size 0x8ac virtual false final false
 System::Collections::IEnumerable GetKeyRings(::StringW userId, bool matchPartial, bool ignoreCase) ;

/// @brief Method GetPublicKey addr 0x103f0bc size 0x370 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey GetPublicKey(int64_t keyId) ;

/// @brief Method GetPublicKeyRing addr 0x103f42c size 0x4d4 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing GetPublicKeyRing(int64_t keyId) ;

/// @brief Method Contains addr 0x103f900 size 0x18 virtual false final false
 bool Contains(int64_t keyID) ;

/// @brief Method GetEncoded addr 0x103f918 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x103f990 size 0x448 virtual false final false
 void Encode(System::IO::Stream outStr) ;

/// @brief Method AddPublicKeyRing addr 0x103fdd8 size 0x2e8 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle AddPublicKeyRing(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle bundle, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing publicKeyRing) ;

/// @brief Method RemovePublicKeyRing addr 0x10400c0 size 0x2e4 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle RemovePublicKeyRing(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle bundle, Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing publicKeyRing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPublicKeyRingBundle");
