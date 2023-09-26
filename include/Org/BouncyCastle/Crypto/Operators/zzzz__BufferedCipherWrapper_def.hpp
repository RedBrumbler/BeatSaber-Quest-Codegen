#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::IO {
class CipherStream;
}
namespace Org::BouncyCastle::Crypto {
class ICipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class BufferedCipherWrapper;
}
// Type: Org.BouncyCastle.Crypto.Operators::BufferedCipherWrapper
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(982))
// CS Name: Org.BouncyCastle.Crypto.Operators.BufferedCipherWrapper
class CORDL_TYPE BufferedCipherWrapper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Org::BouncyCastle::Crypto::ICipher
constexpr operator  Org::BouncyCastle::Crypto::ICipher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BufferedCipherWrapper() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedCipherWrapper", modifiers: " const&", def_value: None }]
constexpr BufferedCipherWrapper(BufferedCipherWrapper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedCipherWrapper", modifiers: "&&", def_value: None }]
constexpr BufferedCipherWrapper(BufferedCipherWrapper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedCipherWrapper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BufferedCipherWrapper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedCipherWrapper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedCipherWrapper& operator=(BufferedCipherWrapper&& o) noexcept = default;
  constexpr BufferedCipherWrapper& operator=(BufferedCipherWrapper const& o) noexcept = default;
                


// Fields

 Org::BouncyCastle::Crypto::IBufferedCipher __declspec(property(get=__get_bufferedCipher, put=__set_bufferedCipher))  bufferedCipher;

constexpr void __set_bufferedCipher(Org::BouncyCastle::Crypto::IBufferedCipher value) ;

constexpr Org::BouncyCastle::Crypto::IBufferedCipher __get_bufferedCipher() const;

 Org::BouncyCastle::Crypto::IO::CipherStream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(Org::BouncyCastle::Crypto::IO::CipherStream value) ;

constexpr Org::BouncyCastle::Crypto::IO::CipherStream __get_stream() const;


// Properties

 System::IO::Stream __declspec(property(get=get_Stream))  Stream;


// Methods

// Ctor Parameters [CppParam { name: "bufferedCipher", ty: "Org::BouncyCastle::Crypto::IBufferedCipher", modifiers: "", def_value: None }, CppParam { name: "source", ty: "System::IO::Stream", modifiers: "", def_value: None }]
explicit BufferedCipherWrapper(Org::BouncyCastle::Crypto::IBufferedCipher bufferedCipher, System::IO::Stream source) ;

/// @brief Method .ctor addr 0xeaa264 size 0x8c virtual false final false
 void _ctor(Org::BouncyCastle::Crypto::IBufferedCipher bufferedCipher, System::IO::Stream source) ;

/// @brief Method GetMaxOutputSize addr 0xeaa2f8 size 0xac virtual true final true
 int32_t GetMaxOutputSize(int32_t inputLen) ;

/// @brief Method GetUpdateOutputSize addr 0xeaa3a4 size 0xac virtual true final true
 int32_t GetUpdateOutputSize(int32_t inputLen) ;

/// @brief Method get_Stream addr 0xeaa450 size 0x8 virtual true final true
 System::IO::Stream get_Stream() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Operators::BufferedCipherWrapper, "Org.BouncyCastle.Crypto.Operators", "BufferedCipherWrapper");
