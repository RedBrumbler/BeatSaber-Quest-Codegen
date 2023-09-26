#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class MD2Digest;
}
// Type: Org.BouncyCastle.Crypto.Digests::MD2Digest
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(757))
// CS Name: Org.BouncyCastle.Crypto.Digests.MD2Digest
class CORDL_TYPE MD2Digest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::IDigest
constexpr operator  Org::BouncyCastle::Crypto::IDigest() const noexcept;

/// @brief Convert operator to Org::BouncyCastle::Utilities::IMemoable
constexpr operator  Org::BouncyCastle::Utilities::IMemoable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MD2Digest() = default;

// Ctor Parameters [CppParam { name: "", ty: "MD2Digest", modifiers: " const&", def_value: None }]
constexpr MD2Digest(MD2Digest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MD2Digest", modifiers: "&&", def_value: None }]
constexpr MD2Digest(MD2Digest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MD2Digest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MD2Digest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MD2Digest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MD2Digest& operator=(MD2Digest&& o) noexcept = default;
  constexpr MD2Digest& operator=(MD2Digest const& o) noexcept = default;
                


// Fields

/// @brief Field DigestLength offset 0
static constexpr int32_t  DigestLength{16};

/// @brief Field BYTE_LENGTH offset 0
static constexpr int32_t  BYTE_LENGTH{16};

 ::ArrayW<uint8_t> __declspec(property(get=__get_X, put=__set_X))  X;

constexpr void __set_X(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_X() const;

 int32_t __declspec(property(get=__get_xOff, put=__set_xOff))  xOff;

constexpr void __set_xOff(int32_t value) ;

constexpr int32_t __get_xOff() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_M, put=__set_M))  M;

constexpr void __set_M(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_M() const;

 int32_t __declspec(property(get=__get_mOff, put=__set_mOff))  mOff;

constexpr void __set_mOff(int32_t value) ;

constexpr int32_t __get_mOff() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_C, put=__set_C))  C;

constexpr void __set_C(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_C() const;

 int32_t __declspec(property(get=__get_COff, put=__set_COff))  COff;

constexpr void __set_COff(int32_t value) ;

constexpr int32_t __get_COff() const;

static ::ArrayW<uint8_t> __declspec(property(get=__get_S, put=__set_S))  S;

static void __set_S(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_S() ;


// Properties

 ::StringW __declspec(property(get=get_AlgorithmName))  AlgorithmName;


// Methods

// Ctor Parameters []
explicit MD2Digest() ;

/// @brief Method .ctor addr 0x11a8f08 size 0x80 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "t", ty: "Org::BouncyCastle::Crypto::Digests::MD2Digest", modifiers: "", def_value: None }]
explicit MD2Digest(Org::BouncyCastle::Crypto::Digests::MD2Digest t) ;

/// @brief Method .ctor addr 0x11a9040 size 0x90 virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::Digests::MD2Digest t) ;

/// @brief Method CopyIn addr 0x11a90d0 size 0x9c virtual false final false
 void CopyIn(Org::BouncyCastle::Crypto::Digests::MD2Digest t) ;

/// @brief Method get_AlgorithmName addr 0x11a916c size 0x40 virtual true final true
 ::StringW get_AlgorithmName() ;

/// @brief Method GetDigestSize addr 0x11a91ac size 0x8 virtual true final true
 int32_t GetDigestSize() ;

/// @brief Method GetByteLength addr 0x11a91b4 size 0x8 virtual true final true
 int32_t GetByteLength() ;

/// @brief Method DoFinal addr 0x11a91bc size 0xb8 virtual true final true
 int32_t DoFinal(::ArrayW<uint8_t> output, int32_t outOff) ;

/// @brief Method Reset addr 0x11a8f88 size 0xb8 virtual true final true
 void Reset() ;

/// @brief Method Update addr 0x11a952c size 0x68 virtual true final true
 void Update(uint8_t input) ;

/// @brief Method BlockUpdate addr 0x11a9594 size 0x128 virtual true final true
 void BlockUpdate(::ArrayW<uint8_t> input, int32_t inOff, int32_t length) ;

/// @brief Method ProcessChecksum addr 0x11a9274 size 0x124 virtual false final false
 void ProcessChecksum(::ArrayW<uint8_t> m) ;

/// @brief Method ProcessBlock addr 0x11a9398 size 0x194 virtual false final false
 void ProcessBlock(::ArrayW<uint8_t> m) ;

/// @brief Method Copy addr 0x11a96bc size 0x60 virtual true final true
 Org::BouncyCastle::Utilities::IMemoable Copy() ;

/// @brief Method Reset addr 0x11a971c size 0x84 virtual true final true
 void Reset(Org::BouncyCastle::Utilities::IMemoable other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(Org::BouncyCastle::Crypto::Digests::MD2Digest);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::MD2Digest, "Org.BouncyCastle.Crypto.Digests", "MD2Digest");
