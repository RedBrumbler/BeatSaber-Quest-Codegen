#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class X25519PublicKeyParameters;
}
// Type: Org.BouncyCastle.Crypto.Parameters::X25519PublicKeyParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1020))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1090))
// CS Name: Org.BouncyCastle.Crypto.Parameters.X25519PublicKeyParameters
class CORDL_TYPE X25519PublicKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~X25519PublicKeyParameters() = default;

// Ctor Parameters [CppParam { name: "", ty: "X25519PublicKeyParameters", modifiers: " const&", def_value: None }]
constexpr X25519PublicKeyParameters(X25519PublicKeyParameters const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X25519PublicKeyParameters", modifiers: "&&", def_value: None }]
constexpr X25519PublicKeyParameters(X25519PublicKeyParameters&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X25519PublicKeyParameters(void* ptr) noexcept : Org::BouncyCastle::Crypto::AsymmetricKeyParameter(ptr) {
}


  constexpr X25519PublicKeyParameters& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X25519PublicKeyParameters& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X25519PublicKeyParameters& operator=(X25519PublicKeyParameters&& o) noexcept = default;
  constexpr X25519PublicKeyParameters& operator=(X25519PublicKeyParameters const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_KeySize, put=__set_KeySize))  KeySize;

static void __set_KeySize(int32_t value) ;

static int32_t __get_KeySize() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_data() const;


// Methods

// Ctor Parameters [CppParam { name: "buf", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "off", ty: "int32_t", modifiers: "", def_value: None }]
explicit X25519PublicKeyParameters(::ArrayW<uint8_t> buf, int32_t off) ;

/// @brief Method .ctor addr 0xebc98c size 0xbc virtual false final false
 void _ctor(::ArrayW<uint8_t> buf, int32_t off) ;

// Ctor Parameters [CppParam { name: "input", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit X25519PublicKeyParameters(System::IO::Stream input) ;

/// @brief Method .ctor addr 0xebcc0c size 0x108 virtual false final false
 void _ctor(System::IO::Stream input) ;

/// @brief Method Encode addr 0xebcb3c size 0x84 virtual false final false
 void Encode(::ArrayW<uint8_t> buf, int32_t off) ;

/// @brief Method GetEncoded addr 0xebcd14 size 0x5c virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::X25519PublicKeyParameters, "Org.BouncyCastle.Crypto.Parameters", "X25519PublicKeyParameters");
