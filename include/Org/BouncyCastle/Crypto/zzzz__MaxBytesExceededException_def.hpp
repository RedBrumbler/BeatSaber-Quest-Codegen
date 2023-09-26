#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__CryptoException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class MaxBytesExceededException;
}
// Type: Org.BouncyCastle.Crypto::MaxBytesExceededException
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1351))
// CS Name: Org.BouncyCastle.Crypto.MaxBytesExceededException
class CORDL_TYPE MaxBytesExceededException : public Org::BouncyCastle::Crypto::CryptoException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MaxBytesExceededException() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaxBytesExceededException", modifiers: " const&", def_value: None }]
constexpr MaxBytesExceededException(MaxBytesExceededException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaxBytesExceededException", modifiers: "&&", def_value: None }]
constexpr MaxBytesExceededException(MaxBytesExceededException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaxBytesExceededException(void* ptr) noexcept : Org::BouncyCastle::Crypto::CryptoException(ptr) {
}


  constexpr MaxBytesExceededException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaxBytesExceededException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaxBytesExceededException& operator=(MaxBytesExceededException&& o) noexcept = default;
  constexpr MaxBytesExceededException& operator=(MaxBytesExceededException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit MaxBytesExceededException() ;

/// @brief Method .ctor addr 0xf475c0 size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit MaxBytesExceededException(::StringW message) ;

/// @brief Method .ctor addr 0xf475c4 size 0x4 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "e", ty: "System::Exception", modifiers: "", def_value: None }]
explicit MaxBytesExceededException(::StringW message, System::Exception e) ;

/// @brief Method .ctor addr 0xf475c8 size 0x4 virtual false final false
 void _ctor(::StringW message, System::Exception e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(Org::BouncyCastle::Crypto::MaxBytesExceededException);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::MaxBytesExceededException, "Org.BouncyCastle.Crypto", "MaxBytesExceededException");
