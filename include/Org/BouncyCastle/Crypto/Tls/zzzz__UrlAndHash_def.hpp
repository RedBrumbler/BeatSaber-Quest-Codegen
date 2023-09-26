#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::Tls {
class TlsContext;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class UrlAndHash;
}
// Type: Org.BouncyCastle.Crypto.Tls::UrlAndHash
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1333))
// CS Name: Org.BouncyCastle.Crypto.Tls.UrlAndHash
class CORDL_TYPE UrlAndHash : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UrlAndHash() = default;

// Ctor Parameters [CppParam { name: "", ty: "UrlAndHash", modifiers: " const&", def_value: None }]
constexpr UrlAndHash(UrlAndHash const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UrlAndHash", modifiers: "&&", def_value: None }]
constexpr UrlAndHash(UrlAndHash&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UrlAndHash(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UrlAndHash& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UrlAndHash& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UrlAndHash& operator=(UrlAndHash&& o) noexcept = default;
  constexpr UrlAndHash& operator=(UrlAndHash const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_mUrl, put=__set_mUrl))  mUrl;

constexpr void __set_mUrl(::StringW value) ;

constexpr ::StringW __get_mUrl() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_mSha1Hash, put=__set_mSha1Hash))  mSha1Hash;

constexpr void __set_mSha1Hash(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_mSha1Hash() const;


// Properties

 ::StringW __declspec(property(get=get_Url))  Url;

 ::ArrayW<uint8_t> __declspec(property(get=get_Sha1Hash))  Sha1Hash;


// Methods

// Ctor Parameters [CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sha1Hash", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit UrlAndHash(::StringW url, ::ArrayW<uint8_t> sha1Hash) ;

/// @brief Method .ctor addr 0xf41994 size 0xe8 virtual false final false
 void _ctor(::StringW url, ::ArrayW<uint8_t> sha1Hash) ;

/// @brief Method get_Url addr 0xf41a7c size 0x8 virtual true final false
 ::StringW get_Url() ;

/// @brief Method get_Sha1Hash addr 0xf41a84 size 0x8 virtual true final false
 ::ArrayW<uint8_t> get_Sha1Hash() ;

/// @brief Method Encode addr 0xf41a8c size 0x100 virtual true final false
 void Encode(System::IO::Stream output) ;

/// @brief Method Parse addr 0xf41b8c size 0x188 virtual false final false
static Org::BouncyCastle::Crypto::Tls::UrlAndHash Parse(Org::BouncyCastle::Crypto::Tls::TlsContext context, System::IO::Stream input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(Org::BouncyCastle::Crypto::Tls::UrlAndHash);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::UrlAndHash, "Org.BouncyCastle.Crypto.Tls", "UrlAndHash");
