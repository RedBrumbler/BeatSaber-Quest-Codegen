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
class IEnumerable;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKey;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKeyRing;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpSecretKeyRingBundle;
}
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpSecretKeyRingBundle
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1665))
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpSecretKeyRingBundle
class CORDL_TYPE PgpSecretKeyRingBundle : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PgpSecretKeyRingBundle() = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSecretKeyRingBundle", modifiers: " const&", def_value: None }]
constexpr PgpSecretKeyRingBundle(PgpSecretKeyRingBundle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PgpSecretKeyRingBundle", modifiers: "&&", def_value: None }]
constexpr PgpSecretKeyRingBundle(PgpSecretKeyRingBundle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PgpSecretKeyRingBundle(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PgpSecretKeyRingBundle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PgpSecretKeyRingBundle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PgpSecretKeyRingBundle& operator=(PgpSecretKeyRingBundle&& o) noexcept = default;
  constexpr PgpSecretKeyRingBundle& operator=(PgpSecretKeyRingBundle const& o) noexcept = default;
                


// Fields

 System::Collections::IDictionary __declspec(property(get=__get_secretRings, put=__set_secretRings))  secretRings;

constexpr void __set_secretRings(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get_secretRings() const;

 System::Collections::IList __declspec(property(get=__get_order, put=__set_order))  order;

constexpr void __set_order(System::Collections::IList value) ;

constexpr System::Collections::IList __get_order() const;


// Properties

 int32_t __declspec(property(get=get_Size))  Size;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

// Ctor Parameters [CppParam { name: "secretRings", ty: "System::Collections::IDictionary", modifiers: "", def_value: None }, CppParam { name: "order", ty: "System::Collections::IList", modifiers: "", def_value: None }]
explicit PgpSecretKeyRingBundle(System::Collections::IDictionary secretRings, System::Collections::IList order) ;

/// @brief Method .ctor addr 0x1048898 size 0x2c virtual false final false
 void _ctor(System::Collections::IDictionary secretRings, System::Collections::IList order) ;

// Ctor Parameters [CppParam { name: "encoding", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit PgpSecretKeyRingBundle(::ArrayW<uint8_t> encoding) ;

/// @brief Method .ctor addr 0x10488c4 size 0x78 virtual false final false
 void _ctor(::ArrayW<uint8_t> encoding) ;

// Ctor Parameters [CppParam { name: "inputStream", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit PgpSecretKeyRingBundle(System::IO::Stream inputStream) ;

/// @brief Method .ctor addr 0x104893c size 0x80 virtual false final false
 void _ctor(System::IO::Stream inputStream) ;

// Ctor Parameters [CppParam { name: "e", ty: "System::Collections::IEnumerable", modifiers: "", def_value: None }]
explicit PgpSecretKeyRingBundle(System::Collections::IEnumerable e) ;

/// @brief Method .ctor addr 0x10489bc size 0x59c virtual false final false
 void _ctor(System::Collections::IEnumerable e) ;

/// @brief Method get_Size addr 0x1048f58 size 0xa4 virtual false final false
 int32_t get_Size() ;

/// @brief Method get_Count addr 0x1048ffc size 0xa4 virtual false final false
 int32_t get_Count() ;

/// @brief Method GetKeyRings addr 0x10490a0 size 0xe4 virtual false final false
 System::Collections::IEnumerable GetKeyRings() ;

/// @brief Method GetKeyRings addr 0x1049184 size 0xc virtual false final false
 System::Collections::IEnumerable GetKeyRings(::StringW userId) ;

/// @brief Method GetKeyRings addr 0x1049a44 size 0xc virtual false final false
 System::Collections::IEnumerable GetKeyRings(::StringW userId, bool matchPartial) ;

/// @brief Method GetKeyRings addr 0x1049190 size 0x8b4 virtual false final false
 System::Collections::IEnumerable GetKeyRings(::StringW userId, bool matchPartial, bool ignoreCase) ;

/// @brief Method GetSecretKey addr 0x1049a50 size 0x36c virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey GetSecretKey(int64_t keyId) ;

/// @brief Method GetSecretKeyRing addr 0x1049dbc size 0x4d0 virtual false final false
 Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing GetSecretKeyRing(int64_t keyId) ;

/// @brief Method Contains addr 0x104a28c size 0x18 virtual false final false
 bool Contains(int64_t keyID) ;

/// @brief Method GetEncoded addr 0x104a2a4 size 0x78 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method Encode addr 0x104a31c size 0x444 virtual false final false
 void Encode(System::IO::Stream outStr) ;

/// @brief Method AddSecretKeyRing addr 0x104a760 size 0x2e0 virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle AddSecretKeyRing(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle bundle, Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing secretKeyRing) ;

/// @brief Method RemoveSecretKeyRing addr 0x104aa40 size 0x2dc virtual false final false
static Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle RemoveSecretKeyRing(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle bundle, Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing secretKeyRing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRingBundle, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpSecretKeyRingBundle");
